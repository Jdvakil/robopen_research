#!/usr/bin/env python3
"""
curobo_velocity_controller.py
─────────────────────────────
Time-parameterised CuRobo velocity controller for Franka FR3.

Generates collision-free joint-space motion with CuRobo and streams joint
velocity commands to franka_pybridge's /execute_plan service with guaranteed
C1 continuity, eliminating libfranka velocity/acceleration reflex errors.

The Discontinuity Problem
─────────────────────────
libfranka's velocity-mode safety controller checks on every 1 kHz tick:

    |dq_d[k]|                    < dq_max[joint]      (velocity limit)
    |dq_d[k] − dq_d[k−1]| / dt  < ddq_max[joint]     (acceleration limit)

Sending raw cuRobo velocities fails because:
  1. The robot is at rest (dq = 0) when the service starts streaming.
  2. cuRobo's first commanded velocity may be non-zero, implying
     (vel_first − 0) / 0.001 >> ddq_max → immediate reflex.
  3. Any high-frequency noise in the planner output produces spikes in
     the implied acceleration, also triggering reflexes.

The Fix
───────
Before sending to /execute_plan, condition_velocities() applies:

  Stage 1 – Savitzky-Golay smoothing   Removes planner noise, preserves shape.
  Stage 2 – Cosine ramp-up (200 ms)    Forces v[0]=0, dv/dt[0]=0 (zero start
                                        velocity AND zero start acceleration).
  Stage 3 – Cosine ramp-down (200 ms)  Forces v[-1]=0, dv/dt[-1]=0.
  Stage 4 – Limit enforcement           Clips velocity to 90 % and iteratively
                                        smooths acceleration to 85 % of the FR3
                                        hardware limits.

Usage
─────
    import rclpy
    from scripts.utils.curobo_velocity_controller import CuRoboVelocityController

    rclpy.init()
    ctrl = CuRoboVelocityController()
    ctrl.warmup()

    home = [0.0, 0.0, 0.0, -1.75, 0.0, 1.75, -0.785]
    success = ctrl.move_to_joint_goal(goal_q=home)

    rclpy.shutdown()
"""

from __future__ import annotations

from typing import List, Optional, Tuple

import numpy as np
from scipy.signal import savgol_filter

# ── ROS2 / cuRobo / torch: optional, deferred until node instantiation ────────
# Keeping these out of module-level scope lets the pure math functions
# (smooth_velocity_profile, validate_and_clip_velocity, diagnose_velocity_profile)
# be imported and tested without a live ROS2 stack or a CUDA GPU.
try:
    import rclpy
    from rclpy.node import Node as _NodeBase
    from franka_pybridge_interfaces.msg import JointDataArray
    from franka_pybridge_interfaces.srv import ExecutePlan, GetQ
    from curobo.types.math import Pose
    from curobo.types.robot import JointState
    from curobo.util_file import get_robot_configs_path, join_path, load_yaml
    from curobo.wrap.reacher.motion_gen import (
        MotionGen,
        MotionGenConfig,
        MotionGenPlanConfig,
    )
    import torch
    _ROS_AVAILABLE = True
except ImportError:
    _NodeBase = object          # fallback base so the class definition succeeds
    _ROS_AVAILABLE = False

# ─── FR3 hardware limits ──────────────────────────────────────────────────────
# Source: https://frankaemika.github.io/docs/control_parameters (Franka FR3)

JOINT_VEL_MAX = np.array(
    [2.1750, 2.1750, 2.1750, 2.1750, 2.6100, 2.6100, 2.6100]
)  # rad/s

JOINT_ACC_MAX = np.array(
    [15.0, 7.5, 10.0, 12.5, 15.0, 20.0, 20.0]
)  # rad/s²

JOINT_JERK_MAX = np.array(
    [7500.0, 3750.0, 5000.0, 6250.0, 7500.0, 10000.0, 10000.0]
)  # rad/s³

NUM_JOINTS = 7

# Safety margins: operate below these fractions of the hardware limits.
# Increasing them makes execution faster; decreasing them provides more headroom.
VEL_SAFETY_FACTOR: float = 0.90
ACC_SAFETY_FACTOR: float = 0.85

# Effective limits used by this controller
VEL_LIMIT = VEL_SAFETY_FACTOR * JOINT_VEL_MAX
ACC_LIMIT = ACC_SAFETY_FACTOR * JOINT_ACC_MAX

# ─── Timing ───────────────────────────────────────────────────────────────────

# libfranka runs at exactly 1 kHz.  CONTROL_DT must match.
CONTROL_DT: float = 0.001  # s

# cuRobo interpolation timestep.  Must equal CONTROL_DT so that cuRobo
# delivers one waypoint per libfranka tick without additional resampling.
CUROBO_DT: float = 0.001  # s

# ─── Smoothing parameters ─────────────────────────────────────────────────────

# Duration of the cosine ramp applied at trajectory start and end.
# Increase if the robot still reports acceleration reflexes at low speeds.
RAMP_DURATION: float = 0.20  # s  (= 200 samples at 1 kHz)

# Savitzky-Golay filter for interior smoothing.
# Set SG_WINDOW = 0 to disable filtering entirely.
SG_WINDOW: int = 11   # must be odd; 0 = disabled
SG_POLYORDER: int = 3


# ─── Pure helper functions (no ROS dependency) ────────────────────────────────

def _cosine_ramp(n: int) -> np.ndarray:
    """Half-cosine window that rises from 0 to 1 over *n* samples.

    Properties
    ----------
    ramp[0]  = 0           – exactly zero at the first sample
    ramp[-1] ≈ 1           – full scale at the last sample
    d/dt ramp|_{t=0}  = 0  – zero derivative at start  (no acceleration impulse)
    d/dt ramp|_{t=T}  = 0  – zero derivative at end    (smooth join to trajectory)

    These boundary conditions guarantee that multiplying a velocity profile by
    this window produces a signal with zero velocity AND zero acceleration at the
    window endpoints, which satisfies libfranka's acceleration safety check.
    """
    t = np.linspace(0.0, np.pi, n)
    return 0.5 * (1.0 - np.cos(t))  # shape (n,)


def smooth_velocity_profile(
    velocities: np.ndarray,
    dt: float = CONTROL_DT,
    ramp_duration: float = RAMP_DURATION,
    sg_window: int = SG_WINDOW,
    sg_polyorder: int = SG_POLYORDER,
) -> np.ndarray:
    """Apply Savitzky-Golay smoothing and cosine boundary ramps.

    Parameters
    ----------
    velocities:    (T, 7) joint velocity array [rad/s] from cuRobo.
    dt:            Timestep between consecutive waypoints [s].
    ramp_duration: Length of the cosine ramp region at each end [s].
    sg_window:     Savitzky-Golay window length (0 = disabled, must be odd).
    sg_polyorder:  Savitzky-Golay polynomial order.

    Returns
    -------
    vel_out : (T, 7) ndarray – smoothed profile guaranteed to satisfy
              vel_out[0] = 0, vel_out[-1] = 0 with zero boundary derivatives.
    """
    vel = velocities.copy()
    T, n_joints = vel.shape

    # Clamp ramp to at most one-third of the trajectory to avoid overlap.
    ramp_steps = min(int(round(ramp_duration / dt)), T // 3)

    # Stage 1: optional Savitzky-Golay smoothing of the full profile.
    if sg_window > 0 and T > sg_window:
        for j in range(n_joints):
            vel[:, j] = savgol_filter(vel[:, j], sg_window, sg_polyorder)

    # Stage 2: cosine ramp-up – scales the first ramp_steps waypoints so that
    # velocity rises smoothly from exactly zero.
    ramp_up = _cosine_ramp(ramp_steps)      # shape (ramp_steps,)
    vel[:ramp_steps] *= ramp_up[:, None]    # broadcast over joints

    # Stage 3: cosine ramp-down – mirrors stage 2 at the trajectory end.
    vel[-ramp_steps:] *= ramp_up[::-1, None]

    # Stage 4: strict zero at endpoints (guards against floating-point residue).
    vel[0] = 0.0
    vel[-1] = 0.0

    return vel


def validate_and_clip_velocity(
    velocities: np.ndarray,
    dt: float = CONTROL_DT,
    vel_limit: np.ndarray = VEL_LIMIT,
    acc_limit: np.ndarray = ACC_LIMIT,
    verbose: bool = True,
) -> np.ndarray:
    """Enforce velocity and acceleration limits.

    Velocity clipping is applied sample-by-sample.  Acceleration violations
    are resolved with an iterative 3-point moving average that converges toward
    the limit without introducing new velocity-limit violations.

    Parameters
    ----------
    velocities : (T, 7) velocity array [rad/s].
    dt         : Timestep [s].
    vel_limit  : Per-joint velocity limit [rad/s], shape (7,).
    acc_limit  : Per-joint acceleration limit [rad/s²], shape (7,).
    verbose    : Print warnings when limits are violated.

    Returns
    -------
    vel_out : (T, 7) ndarray with all limits satisfied.
    """
    vel = velocities.copy()

    # ── Velocity clip ──────────────────────────────────────────────────────────
    over_vel = np.abs(vel) > vel_limit[None, :]
    if over_vel.any() and verbose:
        worst_ratio = float(np.max(np.abs(vel) / vel_limit[None, :]))
        print(
            f"[CuRoboCtrl] WARNING: velocity limit exceeded "
            f"(peak ratio {worst_ratio:.3f}x), clipping."
        )
    vel = np.clip(vel, -vel_limit[None, :], vel_limit[None, :])

    # ── Acceleration clip ──────────────────────────────────────────────────────
    # Implied acceleration = velocity difference / dt for consecutive commands.
    acc = np.diff(vel, axis=0) / dt  # (T-1, 7) rad/s²
    if (np.abs(acc) > acc_limit[None, :]).any() and verbose:
        worst_ratio = float(np.max(np.abs(acc) / acc_limit[None, :]))
        print(
            f"[CuRoboCtrl] WARNING: acceleration limit exceeded "
            f"(peak ratio {worst_ratio:.3f}x), applying forward-backward acc clip."
        )

    # Forward-backward acceleration clip (O(T) algorithm).
    # Guarantees |vel[k+1] - vel[k]| / dt <= acc_limit for all k, regardless
    # of how severe the input violations are.  Unlike iterative averaging, this
    # converges in exactly 2 passes and never needs a loop.
    #
    # Forward pass: limit how fast velocity can RISE from left to right.
    # Step slightly below acc_limit * dt so that floating-point rounding in
    # the division  (clipped_delta / dt)  never produces a value that exceeds
    # acc_limit by a machine-epsilon residual.
    dv_max = np.nextafter(acc_limit * dt, 0.0)  # one ULP below the limit
    vel_fwd = vel.copy()
    for k in range(1, len(vel)):
        delta = vel_fwd[k] - vel_fwd[k - 1]
        vel_fwd[k] = vel_fwd[k - 1] + np.clip(delta, -dv_max, dv_max)

    # Backward pass: limit how fast velocity can FALL from right to left.
    # This corrects overshoot introduced by the forward pass without
    # re-introducing forward-direction violations.
    vel_out = vel_fwd.copy()
    for k in range(len(vel) - 2, -1, -1):
        delta = vel_out[k] - vel_out[k + 1]
        vel_out[k] = vel_out[k + 1] + np.clip(delta, -dv_max, dv_max)

    # Re-enforce strict boundary zeros.
    vel_out[0] = 0.0
    vel_out[-1] = 0.0

    return vel_out


def diagnose_velocity_profile(
    velocities: np.ndarray,
    dt: float = CONTROL_DT,
    vel_limit: np.ndarray = VEL_LIMIT,
    acc_limit: np.ndarray = ACC_LIMIT,
    tol: float = 1e-9,
) -> dict:
    """Return a diagnostic summary of a velocity profile.

    Useful for debugging before committing to robot execution.

    Parameters
    ----------
    velocities : (T, 7) velocity array [rad/s].
    tol        : Relative tolerance added to each limit before the violation
                 check.  The default (1e-9) absorbs floating-point residuals
                 that arise from ``acc_limit * dt / dt`` rounding.

    Returns
    -------
    report : dict with keys:
        'n_steps'          – number of time steps
        'duration_s'       – total duration in seconds
        'max_vel'          – (7,) peak absolute velocity per joint
        'max_acc'          – (7,) peak absolute acceleration per joint
        'vel_violations'   – list of (t, joint, value) for velocity exceedances
        'acc_violations'   – list of (t, joint, value) for acceleration exceedances
        'start_vel'        – velocity at t=0
        'end_vel'          – velocity at t=T
    """
    T, _ = velocities.shape
    acc = np.diff(velocities, axis=0) / dt  # (T-1, 7)

    vel_thr = vel_limit * (1.0 + tol)
    acc_thr = acc_limit * (1.0 + tol)

    vel_viols = [
        (t, j, float(velocities[t, j]))
        for t in range(T)
        for j in range(NUM_JOINTS)
        if abs(velocities[t, j]) > vel_thr[j]
    ]
    acc_viols = [
        (t, j, float(acc[t, j]))
        for t in range(T - 1)
        for j in range(NUM_JOINTS)
        if abs(acc[t, j]) > acc_thr[j]
    ]

    return {
        "n_steps": T,
        "duration_s": T * dt,
        "max_vel": np.max(np.abs(velocities), axis=0),
        "max_acc": np.max(np.abs(acc), axis=0),
        "vel_violations": vel_viols,
        "acc_violations": acc_viols,
        "start_vel": velocities[0].copy(),
        "end_vel": velocities[-1].copy(),
    }


def _to_jda(data: np.ndarray):
    """Convert a (7,) numpy array to a ``JointDataArray`` ROS2 message.

    Only callable when ``_ROS_AVAILABLE`` is True (i.e. when the full
    franka_pybridge_interfaces package is installed and sourced).
    """
    if not _ROS_AVAILABLE:
        raise RuntimeError("_to_jda requires franka_pybridge_interfaces (ROS2).")
    jda = JointDataArray()
    jda.data = [float(v) for v in data]
    return jda


# ─── Main controller node ─────────────────────────────────────────────────────

class CuRoboVelocityController(_NodeBase):
    """ROS2 node: plans with CuRobo, conditions velocities, executes on FR3.

    The node wraps three components:
      1. A cuRobo ``MotionGen`` for GPU-accelerated joint-space planning.
      2. A velocity conditioning pipeline that prevents libfranka reflexes.
      3. The ``/execute_plan`` and ``/get_q`` ROS2 service clients.

    Parameters
    ----------
    robot_cfg       : cuRobo robot config file name (e.g. ``"franka.yml"``).
    world_config    : cuRobo world obstacle dict (default: floor plane only).
    interpolation_dt: cuRobo interpolation timestep – must equal CONTROL_DT (1 ms).
    ramp_duration   : Cosine ramp length at trajectory start/end [s].
    use_sg_filter   : Whether to apply Savitzky-Golay pre-smoothing.
    verbose         : Print per-stage diagnostics.
    """

    def __init__(
        self,
        robot_cfg: str = "franka.yml",
        world_config: Optional[dict] = None,
        interpolation_dt: float = CUROBO_DT,
        ramp_duration: float = RAMP_DURATION,
        use_sg_filter: bool = True,
        verbose: bool = True,
    ) -> None:
        if not _ROS_AVAILABLE:
            raise RuntimeError(
                "CuRoboVelocityController requires rclpy, franka_pybridge_interfaces, "
                "curobo, and torch.  Install them and source the ROS2 workspace before "
                "instantiating this class."
            )
        super().__init__("curobo_velocity_controller")
        self._verbose = verbose

        # ── ROS2 service clients ───────────────────────────────────────────────
        self._get_q_cli = self.create_client(GetQ, "get_q")
        self._exec_cli = self.create_client(ExecutePlan, "execute_plan")

        self._log("Waiting for /get_q …")
        self._get_q_cli.wait_for_service()
        self._log("Waiting for /execute_plan …")
        self._exec_cli.wait_for_service()
        self._log("All services ready.")

        # ── cuRobo ────────────────────────────────────────────────────────────
        if world_config is None:
            world_config = {
                "cuboid": {
                    "floor": {
                        "dims": [5.0, 5.0, 0.2],
                        "pose": [0.0, 0.0, -0.1, 1, 0, 0, 0.0],
                    }
                }
            }

        motion_gen_config = MotionGenConfig.load_from_robot_config(
            robot_cfg,
            world_config,
            interpolation_dt=interpolation_dt,
        )
        self._motion_gen = MotionGen(motion_gen_config)
        self._interpolation_dt = interpolation_dt
        self._ramp_duration = ramp_duration
        self._use_sg_filter = use_sg_filter
        self._warmed_up = False

        # Joint names from the cuRobo kinematic model
        self._joint_names: List[str] = (
            getattr(self._motion_gen.kinematics, "joint_names", None)
            or self._motion_gen.robot_model.joint_names
        )
        self._log(f"Joint names: {self._joint_names}")

    # ── Logging ───────────────────────────────────────────────────────────────

    def _log(self, msg: str) -> None:
        if self._verbose:
            self.get_logger().info(msg)

    def _warn(self, msg: str) -> None:
        self.get_logger().warning(msg)

    # ── Public API ────────────────────────────────────────────────────────────

    def warmup(self) -> None:
        """Warm up the cuRobo GPU planner (call once before first plan)."""
        if self._warmed_up:
            return
        self._log("Warming up cuRobo (first call may take ~5 s) …")
        self._motion_gen.warmup()
        self._warmed_up = True
        self._log("cuRobo warm-up complete.")

    def get_current_q(self) -> List[float]:
        """Query the robot's current joint positions via ``/get_q``.

        Returns
        -------
        List[float] of length 7, joint positions in radians.

        Raises
        ------
        RuntimeError if the service call fails.
        """
        req = GetQ.Request()
        future = self._get_q_cli.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        result = future.result()
        if result is None or not result.success:
            raise RuntimeError("/get_q service call failed.")
        return list(result.joint_config.data)

    def plan(
        self,
        start_q: List[float],
        goal_q: List[float],
        max_attempts: int = 5,
    ) -> Tuple[Optional[np.ndarray], Optional[np.ndarray]]:
        """Plan a joint-space trajectory from start_q to goal_q.

        Uses cuRobo's ``plan_single_js`` with the configured world model.
        The trajectory is interpolated at ``interpolation_dt`` (= ``CONTROL_DT``
        = 1 ms) so that each waypoint maps directly to one libfranka tick.

        Parameters
        ----------
        start_q      : Start joint configuration [rad], length 7.
        goal_q       : Goal joint configuration [rad], length 7.
        max_attempts : How many times cuRobo may retry if planning fails.

        Returns
        -------
        (velocities, positions) : each (T, 7) ndarray at 1 ms intervals,
        or (None, None) if planning failed.
        """
        if not self._warmed_up:
            self.warmup()

        device = self._motion_gen.tensor_args.device
        start_t = torch.tensor([start_q], dtype=torch.float32, device=device)
        goal_t = torch.tensor([goal_q], dtype=torch.float32, device=device)

        start_state = JointState.from_position(start_t, joint_names=self._joint_names)
        goal_state = JointState.from_position(goal_t, joint_names=self._joint_names)

        valid, status = self._motion_gen.check_start_state(start_state)
        if not valid:
            self._warn(f"Start state check failed: {status}")
            return None, None

        plan_cfg = MotionGenPlanConfig(max_attempts=max_attempts)
        result = self._motion_gen.plan_single_js(start_state, goal_state, plan_cfg)

        if not result.success.item():
            self._warn("cuRobo planning failed (no collision-free path found).")
            return None, None

        traj = result.get_interpolated_plan()
        velocities = traj.velocity.cpu().numpy().squeeze()   # (T, 7) rad/s
        positions = traj.position.cpu().numpy().squeeze()    # (T, 7) rad

        self._log(
            f"cuRobo plan: {velocities.shape[0]} steps "
            f"({velocities.shape[0] * self._interpolation_dt:.3f} s, "
            f"dt={self._interpolation_dt * 1000:.1f} ms)"
        )
        return velocities, positions

    def condition_velocities(self, velocities: np.ndarray) -> np.ndarray:
        """Run the full velocity conditioning pipeline.

        Stages (in order):
          1. Savitzky-Golay interior smoothing (optional, controlled by
             ``use_sg_filter`` constructor argument).
          2. Cosine ramp-up at trajectory start.
          3. Cosine ramp-down at trajectory end.
          4. Velocity hard-clip to ``VEL_LIMIT``.
          5. Iterative acceleration smoothing to ``ACC_LIMIT``.

        Parameters
        ----------
        velocities : (T, 7) raw cuRobo velocity array [rad/s].

        Returns
        -------
        (T, 7) conditioned velocity array safe to send to /execute_plan.
        """
        sg_window = SG_WINDOW if self._use_sg_filter else 0
        vel = smooth_velocity_profile(
            velocities,
            dt=self._interpolation_dt,
            ramp_duration=self._ramp_duration,
            sg_window=sg_window,
        )
        vel = validate_and_clip_velocity(
            vel,
            dt=self._interpolation_dt,
            verbose=self._verbose,
        )
        return vel

    def move_to_joint_goal(
        self,
        goal_q: List[float],
        start_q: Optional[List[float]] = None,
        max_attempts: int = 5,
        dry_run: bool = False,
    ) -> bool:
        """Plan, condition, and execute a move to *goal_q*.

        This is the primary entry point for robot motion.

        Parameters
        ----------
        goal_q       : Target joint configuration [rad], length 7.
        start_q      : Starting joint config [rad].  ``None`` → query via
                       ``/get_q`` (robot's actual current position).
        max_attempts : cuRobo planning retries.
        dry_run      : If ``True``, plan and condition but do NOT call
                       ``/execute_plan`` (useful for limit checking).

        Returns
        -------
        ``True`` if execution succeeded (or dry_run succeeded), else ``False``.
        """
        # ── 1. Obtain start configuration ─────────────────────────────────────
        if start_q is None:
            self._log("Querying robot for current joint positions …")
            start_q = self.get_current_q()

        self._log(f"Start q : {[f'{v:+.4f}' for v in start_q]}")
        self._log(f"Goal  q : {[f'{v:+.4f}' for v in goal_q]}")

        # ── 2. Plan ───────────────────────────────────────────────────────────
        velocities, positions = self.plan(
            start_q, goal_q, max_attempts=max_attempts
        )
        if velocities is None:
            return False

        # ── 3. Condition ──────────────────────────────────────────────────────
        vel_conditioned = self.condition_velocities(velocities)

        # ── 4. Optional diagnostics ───────────────────────────────────────────
        if self._verbose:
            report = diagnose_velocity_profile(vel_conditioned)
            self._log(
                f"Conditioned profile: {report['n_steps']} steps, "
                f"{report['duration_s']:.3f} s, "
                f"max_vel={report['max_vel'].round(3)}, "
                f"max_acc={report['max_acc'].round(2)}, "
                f"vel_viols={len(report['vel_violations'])}, "
                f"acc_viols={len(report['acc_violations'])}"
            )

        if dry_run:
            self._log("Dry run – skipping /execute_plan call.")
            return True

        # ── 5. Build and send service request ─────────────────────────────────
        vel_jda_list = [_to_jda(v) for v in vel_conditioned]
        initial_pos_jda = _to_jda(np.array(start_q, dtype=np.float64))

        req = ExecutePlan.Request()
        req.vel_traj = vel_jda_list
        req.initial_pos = initial_pos_jda

        self._log(
            f"Sending {len(vel_jda_list)} velocity waypoints to /execute_plan …"
        )

        future = self._exec_cli.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        result = future.result()

        if result is None:
            self._warn("/execute_plan returned no response.")
            return False

        if result.success:
            self._log("Trajectory execution succeeded.")
        else:
            self._warn("Trajectory execution returned success=False.")

        return bool(result.success)

    def move_to_ee_goal(
        self,
        target_pose: Pose,
        start_q: Optional[List[float]] = None,
        max_attempts: int = 5,
    ) -> bool:
        """Plan to a Cartesian end-effector goal (IK solved by cuRobo).

        Parameters
        ----------
        target_pose  : cuRobo ``Pose`` (x, y, z, qw, qx, qy, qz).
        start_q      : Starting joint config; ``None`` → query robot.
        max_attempts : cuRobo planning retries.

        Returns
        -------
        ``True`` if execution succeeded, else ``False``.
        """
        if not self._warmed_up:
            self.warmup()

        if start_q is None:
            start_q = self.get_current_q()

        device = self._motion_gen.tensor_args.device
        start_t = torch.tensor([start_q], dtype=torch.float32, device=device)
        start_state = JointState.from_position(
            start_t, joint_names=self._joint_names
        )

        plan_cfg = MotionGenPlanConfig(max_attempts=max_attempts)
        result = self._motion_gen.plan_single(start_state, target_pose, plan_cfg)

        if not result.success.item():
            self._warn("cuRobo EE planning failed.")
            return False

        traj = result.get_interpolated_plan()
        velocities = traj.velocity.cpu().numpy().squeeze()

        vel_conditioned = self.condition_velocities(velocities)
        vel_jda_list = [_to_jda(v) for v in vel_conditioned]
        initial_pos_jda = _to_jda(np.array(start_q, dtype=np.float64))

        req = ExecutePlan.Request()
        req.vel_traj = vel_jda_list
        req.initial_pos = initial_pos_jda

        future = self._exec_cli.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        result_srv = future.result()

        if result_srv is None:
            return False
        return bool(result_srv.success)


# ─── Standalone entry point ───────────────────────────────────────────────────

if __name__ == "__main__":
    import sys

    rclpy.init(args=sys.argv)

    ctrl = CuRoboVelocityController()
    ctrl.warmup()

    # Default: move to Franka home configuration
    HOME_Q = [0.0, 0.0, 0.0, -1.75, 0.0, 1.75, -0.785]
    success = ctrl.move_to_joint_goal(goal_q=HOME_Q)

    rclpy.shutdown()
    sys.exit(0 if success else 1)
