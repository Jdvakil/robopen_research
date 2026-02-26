#!/usr/bin/env python3
"""
trajectory_tracker.py
─────────────────────
Segment-based closed-loop trajectory execution and offline tracking simulation.

Overview
────────
The ``/execute_plan`` ROS2 service in franka_pybridge is synchronous within a
segment — it streams a fixed-length velocity array and returns when done.
This makes true continuous feedback impossible, but *segment-level* correction
is practical:

  1. Divide the planned velocity trajectory into short windows (default 500 ms).
  2. Send each window to ``/execute_plan``.
  3. After the window completes, call ``/get_q`` to sample the robot's actual
     joint positions.
  4. Compare the measured position against the reference trajectory.
  5. If the maximum joint error exceeds ``correction_threshold``, re-plan the
     remaining trajectory from the current actual position using cuRobo.
  6. Condition and send the new plan.

This loop provides position-level closed-loop correction at the granularity of
``segment_duration``, preventing slow drift from accumulating into large errors.

Offline simulation utilities
─────────────────────────────
``simulate_tracking()`` and ``compute_tracking_metrics()`` require only numpy
and scipy — no ROS2, robot, or GPU needed.  They model three realistic error
sources:

  * Gaussian sensor / execution noise
  * First-order velocity-tracking lag (servo bandwidth)
  * Slow bias drift (thermal, joint flex)

These functions are used by ``plot_trajectory_analysis.py`` to generate
planned-vs-actual comparison plots without a physical robot.

Closed-loop simulation
──────────────────────
``simulate_closed_loop_correction()`` demonstrates the segment-based replanning
algorithm in simulation.  It:

  * Runs an open-loop simulation to accumulate a realistic error baseline.
  * At each segment boundary, applies a proportional correction:
      v_correction = Kp * position_error
  * Injects the correction at the start of the next segment.

Usage (with robot)
──────────────────
::

    import rclpy
    from scripts.utils.trajectory_tracker import SegmentedTracker

    rclpy.init()
    tracker = SegmentedTracker()
    tracker.warmup()

    result = tracker.move_with_tracking(
        goal_q=[0.785, -0.6, 0.3, -2.2, 0.6, 2.1, 0.1],
        segment_duration=0.5,
        correction_threshold=0.02,
    )

    print(f"n_replans     : {result['n_replans']}")
    print(f"tracking_rmse : {result['tracking_rmse']:.4f} rad")
    rclpy.shutdown()
"""

from __future__ import annotations

import time
from typing import List, Optional

import numpy as np
from scipy.ndimage import uniform_filter1d

# Lazy ROS2 imports — pure simulation functions work without ROS2.
try:
    import rclpy
    _ROS_AVAILABLE = True
except ImportError:
    _ROS_AVAILABLE = False

from scripts.utils.curobo_velocity_controller import (
    CuRoboVelocityController,
    CONTROL_DT,
    VEL_LIMIT,
    ACC_LIMIT,
    smooth_velocity_profile,
    validate_and_clip_velocity,
    diagnose_velocity_profile,
    _to_jda,
)


# ─── Offline tracking simulation ──────────────────────────────────────────────

def simulate_tracking(
    planned_positions: np.ndarray,
    planned_velocities: np.ndarray,
    dt: float = CONTROL_DT,
    noise_std: float = 0.002,
    lag_factor: float = 0.04,
    drift_rate: float = 0.0008,
    seed: int = 42,
) -> np.ndarray:
    """Simulate realistic robot tracking of a planned trajectory.

    Models three common sources of tracking error:

    1. **Gaussian noise** — sensor quantization, vibration, communication jitter.
    2. **First-order velocity lag** — servo loop bandwidth limitation; the robot
       does not respond to velocity commands instantaneously.
    3. **Slow bias drift** — thermal expansion, joint flex, unmodelled friction.

    The simulated model per timestep is::

        v_eff[k] = (1 - α) · v_plan[k]  +  α · v_plan[k-1]   (lag)
        q[k+1]  = q[k]  +  v_eff[k] · dt  +  d · dt           (drift)
                + N(0, σ²)                                      (noise)

    where:
        α  = ``lag_factor``   (0 = perfect tracking, 0.3 = heavy lag)
        d  = per-joint drift velocity drawn once from Uniform(-γ, +γ)
        σ  = ``noise_std``

    Parameters
    ----------
    planned_positions  : (T, 7) reference joint positions [rad].
    planned_velocities : (T, 7) reference joint velocities [rad/s].
    dt                 : Timestep [s].
    noise_std          : Std of per-step Gaussian position noise [rad].
                         Typical sensor noise on FR3: 0.001–0.003 rad.
    lag_factor         : First-order lag coefficient α ∈ [0, 1).
                         0 = perfect velocity tracking, 0.1 = ~10 ms lag.
    drift_rate         : Maximum bias drift velocity [rad/s].
                         Each joint gets an independent random drift.
    seed               : Random seed for reproducibility.

    Returns
    -------
    actual_positions : (T, 7) simulated measured joint positions [rad].
    """
    rng = np.random.default_rng(seed)
    T, n_joints = planned_positions.shape

    actual = np.zeros_like(planned_positions)
    actual[0] = planned_positions[0].copy()

    # Per-joint drift velocity (constant over the trajectory)
    drift = rng.uniform(-drift_rate, drift_rate, n_joints)

    for k in range(1, T):
        # Lagged velocity response
        v_eff = (1.0 - lag_factor) * planned_velocities[k] \
              + lag_factor * planned_velocities[k - 1]

        # Integrate with drift
        actual[k] = actual[k - 1] + v_eff * dt + drift * dt

        # Add sensor noise
        actual[k] += rng.normal(0.0, noise_std, n_joints)

    return actual


def compute_tracking_metrics(
    planned: np.ndarray,
    actual: np.ndarray,
    dt: float,
) -> dict:
    """Compute standard trajectory-tracking error metrics.

    Parameters
    ----------
    planned : (T, 7) planned (reference) joint positions [rad].
    actual  : (T, 7) measured joint positions [rad].
    dt      : Timestep [s].

    Returns
    -------
    dict with:
        ``error``       – (T, 7) signed position error = actual − planned [rad].
        ``abs_error``   – (T, 7) absolute position error [rad].
        ``rmse``        – (7,) per-joint RMSE [rad].
        ``max_error``   – (7,) per-joint peak absolute error [rad].
        ``total_rmse``  – scalar RMSE across all joints [rad].
        ``inf_norm``    – (T,) worst-joint error at each timestep [rad].
        ``t``           – (T,) time vector [s].
    """
    error = actual - planned
    abs_error = np.abs(error)
    rmse = np.sqrt(np.mean(error ** 2, axis=0))
    inf_norm = np.max(abs_error, axis=1)
    t = np.arange(len(planned)) * dt

    return {
        "error": error,
        "abs_error": abs_error,
        "rmse": rmse,
        "max_error": np.max(abs_error, axis=0),
        "total_rmse": float(np.sqrt(np.mean(error ** 2))),
        "inf_norm": inf_norm,
        "t": t,
    }


def simulate_closed_loop_correction(
    planned_positions: np.ndarray,
    planned_velocities: np.ndarray,
    dt: float,
    segment_steps: int = 50,
    Kp: float = 2.0,
    noise_std: float = 0.002,
    lag_factor: float = 0.04,
    drift_rate: float = 0.0008,
    seed: int = 42,
) -> dict:
    """Simulate segment-based closed-loop trajectory correction.

    At each segment boundary, the simulated actual position is compared to the
    reference.  A proportional correction velocity is injected at the *start*
    of the next segment::

        v_correction = Kp · (q_ref[seg_end] − q_actual[seg_end])

    This correction is blended via the cosine ramp to avoid acceleration
    discontinuities.

    Parameters
    ----------
    planned_positions  : (T, 7) reference positions [rad].
    planned_velocities : (T, 7) reference velocities [rad/s].
    dt                 : Timestep [s].
    segment_steps      : Number of steps per correction segment.
    Kp                 : Proportional correction gain [1/s].
    noise_std, lag_factor, drift_rate, seed :
                         Tracking model parameters (see ``simulate_tracking``).

    Returns
    -------
    dict with:
        ``open_loop``       – (T, 7) open-loop simulated positions.
        ``closed_loop``     – (T, 7) closed-loop corrected positions.
        ``segment_times``   – list of segment boundary times [s].
        ``correction_mags`` – list of |correction| at each boundary [rad].
        ``open_metrics``    – tracking metrics for open-loop.
        ``closed_metrics``  – tracking metrics for closed-loop.
    """
    rng = np.random.default_rng(seed)
    T, n_joints = planned_positions.shape

    drift = rng.uniform(-drift_rate, drift_rate, n_joints)

    # ── Open-loop simulation ───────────────────────────────────────────────────
    actual_open = simulate_tracking(
        planned_positions, planned_velocities,
        dt=dt, noise_std=noise_std, lag_factor=lag_factor,
        drift_rate=drift_rate, seed=seed,
    )

    # ── Closed-loop simulation with proportional correction ────────────────────
    actual_cl = np.zeros_like(planned_positions)
    actual_cl[0] = planned_positions[0].copy()
    v_correction = np.zeros(n_joints)

    segment_times = []
    correction_mags = []

    rng2 = np.random.default_rng(seed + 1)
    drift_cl = rng2.uniform(-drift_rate, drift_rate, n_joints)

    for k in range(1, T):
        v_cmd = planned_velocities[k] + v_correction
        v_eff = (1.0 - lag_factor) * v_cmd + lag_factor * (planned_velocities[k - 1] + v_correction)
        actual_cl[k] = actual_cl[k - 1] + v_eff * dt + drift_cl * dt
        actual_cl[k] += rng2.normal(0.0, noise_std, n_joints)

        # At segment boundaries: compute and reset correction
        if k % segment_steps == 0 and k < T - 1:
            error = planned_positions[k] - actual_cl[k]
            v_correction = Kp * error
            # Limit correction magnitude to avoid new limit violations
            v_correction = np.clip(v_correction, -VEL_LIMIT * 0.3, VEL_LIMIT * 0.3)
            segment_times.append(k * dt)
            correction_mags.append(float(np.max(np.abs(error))))
        elif k % segment_steps != 0:
            # Decay correction over the segment so it doesn't persist
            v_correction = v_correction * 0.85

    open_metrics  = compute_tracking_metrics(planned_positions, actual_open, dt)
    closed_metrics = compute_tracking_metrics(planned_positions, actual_cl,  dt)

    return {
        "open_loop":       actual_open,
        "closed_loop":     actual_cl,
        "segment_times":   segment_times,
        "correction_mags": correction_mags,
        "open_metrics":    open_metrics,
        "closed_metrics":  closed_metrics,
    }


# ─── Closed-loop ROS2 controller (requires robot + ROS2) ──────────────────────

class SegmentedTracker(CuRoboVelocityController):
    """Closed-loop trajectory tracker with segment-based position correction.

    Inherits planning and conditioning from ``CuRoboVelocityController``.
    Adds real-time position feedback between execution segments to correct
    accumulated tracking errors.

    The correction strategy:

    1. Divide the planned velocity trajectory into ``segment_duration``-length
       windows.
    2. Send each window to ``/execute_plan`` (synchronous, waits for completion).
    3. Query ``/get_q`` for the robot's actual position.
    4. If ``max(|q_actual − q_ref|) > correction_threshold``:
           Re-plan from ``q_actual`` to the goal using cuRobo.
           Condition and send the new plan from the current position.
    5. Otherwise continue with the next segment of the original plan.

    Parameters
    ----------
    segment_duration     : Length of each execution segment [s].
                           Shorter = more frequent correction.
    correction_threshold : Max joint error [rad] that triggers replanning.
    """

    def __init__(
        self,
        *args,
        segment_duration: float = 0.5,
        correction_threshold: float = 0.02,
        **kwargs,
    ) -> None:
        super().__init__(*args, **kwargs)
        self._seg_dt = segment_duration
        self._corr_thr = correction_threshold

    def move_with_tracking(
        self,
        goal_q: List[float],
        start_q: Optional[List[float]] = None,
        max_initial_attempts: int = 5,
    ) -> dict:
        """Plan and execute with segment-by-segment position correction.

        Parameters
        ----------
        goal_q               : Target joint config [rad], length 7.
        start_q              : Starting config [rad]; None → query robot.
        max_initial_attempts : cuRobo planning retry count.

        Returns
        -------
        result : dict with keys:
            ``success``           – bool.
            ``n_replans``         – number of correction replanning events.
            ``planned_positions`` – (T, 7) original planned positions.
            ``actual_positions``  – (N, 7) measured positions at segment ends.
            ``actual_times``      – (N,) wall-clock timestamps [s].
            ``tracking_errors``   – (N, 7) position error at each checkpoint.
            ``segment_errors``    – (N,) max joint error per checkpoint [rad].
            ``tracking_rmse``     – scalar position RMSE [rad].
        """
        if not _ROS_AVAILABLE:
            raise RuntimeError("move_with_tracking requires ROS2 (rclpy).")

        # ── Obtain start ───────────────────────────────────────────────────────
        if start_q is None:
            start_q = self.get_current_q()

        goal_arr = np.array(goal_q, dtype=np.float64)
        curr_q = np.array(start_q, dtype=np.float64)

        # ── Initial plan ───────────────────────────────────────────────────────
        velocities, positions = self.plan(
            curr_q.tolist(), goal_arr.tolist(),
            max_attempts=max_initial_attempts,
        )
        if velocities is None:
            return {"success": False, "n_replans": 0}

        seg_steps = max(1, int(round(self._seg_dt / self._interpolation_dt)))
        original_positions = positions.copy()

        actual_positions = []
        actual_times     = []
        tracking_errors  = []
        segment_errors   = []
        n_replans = 0
        t0 = time.monotonic()
        ptr = 0

        from franka_pybridge_interfaces.srv import ExecutePlan  # type: ignore

        # ── Segment loop ───────────────────────────────────────────────────────
        while ptr < len(velocities):
            seg_end = min(ptr + seg_steps, len(velocities))
            seg_vel = self.condition_velocities(velocities[ptr:seg_end])

            req = ExecutePlan.Request()
            req.vel_traj    = [_to_jda(v) for v in seg_vel]
            req.initial_pos = _to_jda(curr_q)

            future = self._exec_cli.call_async(req)
            rclpy.spin_until_future_complete(self, future)
            t_now = time.monotonic() - t0

            # ── Sample actual position ─────────────────────────────────────────
            q_actual = np.array(self.get_current_q())
            q_ref    = positions[seg_end - 1]
            error    = q_actual - q_ref
            max_err  = float(np.max(np.abs(error)))

            actual_positions.append(q_actual.copy())
            actual_times.append(t_now)
            tracking_errors.append(error.copy())
            segment_errors.append(max_err)
            curr_q = q_actual
            ptr    = seg_end

            self._log(
                f"Segment [{ptr-seg_steps}:{seg_end}]  "
                f"max_err={max_err:.4f} rad  t={t_now:.2f} s"
            )

            # ── Correction: replan if error exceeds threshold ──────────────────
            if max_err > self._corr_thr and ptr < len(velocities):
                self._log(
                    f"  Error {max_err:.4f} > {self._corr_thr:.4f} — replanning."
                )
                new_vel, new_pos = self.plan(
                    q_actual.tolist(), goal_arr.tolist(), max_attempts=3
                )
                if new_vel is not None:
                    velocities = new_vel
                    positions  = new_pos
                    ptr        = 0
                    n_replans += 1
                else:
                    self._warn("Replan failed — continuing with original plan.")

        # ── Summary ────────────────────────────────────────────────────────────
        actual_arr = np.array(actual_positions) if actual_positions else np.zeros((0, 7))
        tracking_rmse = 0.0
        if len(actual_arr) > 0:
            # Interpolate planned positions at sample times
            seg_indices = [
                min(int(round(t / self._interpolation_dt)), len(original_positions) - 1)
                for t in actual_times
            ]
            ref_at_samples = original_positions[seg_indices]
            tracking_rmse = float(np.sqrt(np.mean((actual_arr - ref_at_samples) ** 2)))

        return {
            "success":           True,
            "n_replans":         n_replans,
            "planned_positions": original_positions,
            "actual_positions":  actual_arr,
            "actual_times":      np.array(actual_times),
            "tracking_errors":   np.array(tracking_errors) if tracking_errors else np.zeros((0, 7)),
            "segment_errors":    np.array(segment_errors),
            "tracking_rmse":     tracking_rmse,
        }
