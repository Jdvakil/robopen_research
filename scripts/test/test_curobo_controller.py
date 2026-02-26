#!/usr/bin/env python3
"""
test_curobo_controller.py
─────────────────────────
Integration test for CuRoboVelocityController.

Exercises the full pipeline:
  1. Query current joint positions from the robot.
  2. Plan a collision-free trajectory with cuRobo.
  3. Condition the velocity profile (smooth ramps, limit enforcement).
  4. Optionally visualize and validate the profile before executing.
  5. Execute on the real robot via /execute_plan.

Run
───
    # With robot live:
    python -m scripts.test.test_curobo_controller

    # Dry-run only (plan + condition, no robot motion):
    python -m scripts.test.test_curobo_controller --dry-run

    # Move to a custom goal:
    python -m scripts.test.test_curobo_controller \
        --goal "0.5,-0.3,0.1,-2.0,0.2,1.9,-0.5"
"""

from __future__ import annotations

import argparse
import sys
import os
import time
from typing import List

import numpy as np

# Make sure the package root is on sys.path when running as a module.
_HERE = os.path.dirname(os.path.abspath(__file__))
_ROOT = os.path.abspath(os.path.join(_HERE, "../.."))
if _ROOT not in sys.path:
    sys.path.insert(0, _ROOT)

# Pure math symbols – always importable (no ROS2 / cuRobo required).
from scripts.utils.curobo_velocity_controller import (
    CONTROL_DT,
    JOINT_VEL_MAX,
    JOINT_ACC_MAX,
    VEL_LIMIT,
    ACC_LIMIT,
    diagnose_velocity_profile,
    smooth_velocity_profile,
    validate_and_clip_velocity,
)

# ROS2-dependent symbol – only imported for integration test.
try:
    import rclpy
    from scripts.utils.curobo_velocity_controller import CuRoboVelocityController
    _ROS_AVAILABLE = True
except ImportError:
    _ROS_AVAILABLE = False

# ─── Presets ──────────────────────────────────────────────────────────────────

# Franka FR3 nominal home position [rad]
HOME_Q: List[float] = [0.0, 0.0, 0.0, -1.75, 0.0, 1.75, -0.785]

# A typical "ready" pose used in pick-and-place research
READY_Q: List[float] = [
     0.065, -0.055,  0.024, -1.695,
    -0.037,  1.569,  0.740,
]

# ─── Helpers ──────────────────────────────────────────────────────────────────

def _parse_args() -> argparse.Namespace:
    p = argparse.ArgumentParser(description="CuRoboVelocityController integration test")
    p.add_argument(
        "--goal", "-g",
        default=None,
        help=(
            "Comma-separated goal joint angles in radians "
            "(default: Franka home configuration)."
        ),
    )
    p.add_argument(
        "--start", "-s",
        default=None,
        help=(
            "Comma-separated start joint angles [rad].  "
            "Omit to query the robot's actual position via /get_q."
        ),
    )
    p.add_argument(
        "--dry-run", "-n",
        action="store_true",
        help="Plan and condition the trajectory but do not execute on robot.",
    )
    p.add_argument(
        "--go-home-first",
        action="store_true",
        help="Before the main move, drive the robot to the home configuration.",
    )
    p.add_argument(
        "--plot",
        action="store_true",
        help="Plot raw vs conditioned velocity profiles with matplotlib.",
    )
    p.add_argument(
        "--max-attempts", "-m",
        type=int,
        default=5,
        help="Number of cuRobo planning retries (default: 5).",
    )
    return p.parse_args()


def _parse_q(s: str) -> List[float]:
    vals = [float(x.strip()) for x in s.split(",")]
    if len(vals) != 7:
        raise ValueError(f"Expected 7 joint values, got {len(vals)}: {s!r}")
    return vals


def _print_profile_report(label: str, report: dict) -> None:
    print(f"\n{'─' * 60}")
    print(f"  {label}")
    print(f"{'─' * 60}")
    print(f"  Steps      : {report['n_steps']}  ({report['duration_s']:.3f} s)")
    print(f"  start_vel  : {report['start_vel'].round(5)}")
    print(f"  end_vel    : {report['end_vel'].round(5)}")
    print(f"  max |vel|  : {report['max_vel'].round(4)}  (limit: {VEL_LIMIT.round(4)})")
    print(f"  max |acc|  : {report['max_acc'].round(2)}  (limit: {ACC_LIMIT.round(2)})")
    n_vv = len(report["vel_violations"])
    n_av = len(report["acc_violations"])
    v_ok = "✓" if n_vv == 0 else f"✗ ({n_vv} violations)"
    a_ok = "✓" if n_av == 0 else f"✗ ({n_av} violations)"
    print(f"  vel OK     : {v_ok}")
    print(f"  acc OK     : {a_ok}")
    print(f"{'─' * 60}\n")


def _plot_profiles(raw_vel: np.ndarray, cond_vel: np.ndarray) -> None:
    try:
        import matplotlib.pyplot as plt
    except ImportError:
        print("[test] matplotlib not installed – skipping plot.")
        return

    T_raw = raw_vel.shape[0]
    T_cond = cond_vel.shape[0]
    t_raw = np.arange(T_raw) * CONTROL_DT
    t_cond = np.arange(T_cond) * CONTROL_DT

    fig, axes = plt.subplots(7, 1, figsize=(12, 14), sharex=False)
    fig.suptitle("CuRoboVelocityController – Raw vs Conditioned Velocity", fontsize=13)

    for j in range(7):
        ax = axes[j]
        ax.plot(t_raw, raw_vel[:, j],   color="tab:orange", alpha=0.7,
                linewidth=1.0, label="raw cuRobo")
        ax.plot(t_cond, cond_vel[:, j], color="tab:blue",   alpha=0.9,
                linewidth=1.2, label="conditioned")
        ax.axhline( VEL_LIMIT[j], color="red",  linestyle="--", linewidth=0.8,
                    label=f"±vel limit ({VEL_LIMIT[j]:.2f})")
        ax.axhline(-VEL_LIMIT[j], color="red",  linestyle="--", linewidth=0.8)
        ax.set_ylabel(f"J{j+1} [rad/s]", fontsize=8)
        ax.grid(True, linestyle="--", alpha=0.4)
        if j == 0:
            ax.legend(loc="upper right", fontsize=7)

    axes[-1].set_xlabel("Time [s]")
    plt.tight_layout()
    out_path = "curobo_controller_test.png"
    plt.savefig(out_path, dpi=150)
    print(f"[test] Plot saved to {out_path}")
    plt.show()


# ─── Test cases (callable without ROS2) ──────────────────────────────────────

def test_zero_boundary_condition() -> bool:
    """Verify that conditioned velocities start and end at exactly zero."""
    print("\n[unit] test_zero_boundary_condition …")

    # Simulate a cuRobo output that is NOT zero at boundaries.
    T = 1000
    rng = np.random.default_rng(0)
    raw = rng.uniform(-0.5, 0.5, (T, 7)).astype(np.float64)

    conditioned = smooth_velocity_profile(raw)
    conditioned = validate_and_clip_velocity(conditioned, verbose=False)

    ok_start = np.allclose(conditioned[0], 0.0, atol=1e-9)
    ok_end   = np.allclose(conditioned[-1], 0.0, atol=1e-9)

    print(f"  start_vel={conditioned[0]}  → {'PASS' if ok_start else 'FAIL'}")
    print(f"  end_vel  ={conditioned[-1]} → {'PASS' if ok_end else 'FAIL'}")
    return ok_start and ok_end


def test_acceleration_limit() -> bool:
    """Verify that conditioned velocities satisfy the acceleration limit.

    Two sub-cases:
      A) Smooth cuRobo-like profile (quintic sinusoidal bell): should pass
         with zero violations at effectively exact precision.
      B) Adversarial rectangular pulse (worst-case internal jump): the
         forward-backward clip must bring every implied acceleration within
         one ULP of acc_limit (no violations > limit + 1e-9 rad/s²).
    """
    print("\n[unit] test_acceleration_limit …")

    # Tolerance for floating-point comparison: one ULP of the largest acc limit
    _ACC_TOL = np.finfo(float).eps * max(ACC_LIMIT) * 16

    all_ok = True

    # ── Sub-case A: smooth quintic-like profile (representative of cuRobo) ───
    T = 800
    t = np.linspace(0.0, np.pi, T)
    # Bell-shaped velocity with amplitude safely below vel limit
    amp = np.array([0.8, 0.5, 0.7, 0.9, 0.8, 0.7, 0.6]) * VEL_LIMIT
    raw_smooth = np.outer(np.sin(t), amp)  # (T, 7) – already 0 at endpoints

    cond_a = smooth_velocity_profile(raw_smooth)
    cond_a = validate_and_clip_velocity(cond_a, verbose=False)
    acc_a = np.diff(cond_a, axis=0) / CONTROL_DT
    max_acc_a = np.max(np.abs(acc_a), axis=0)
    viols_a = (max_acc_a > ACC_LIMIT + _ACC_TOL).any()
    print(f"  [A] smooth profile  max |acc| = {max_acc_a.round(3)}")
    print(f"      limit                     = {ACC_LIMIT}")
    print(f"      result → {'PASS' if not viols_a else 'FAIL'}")
    all_ok = all_ok and (not viols_a)

    # ── Sub-case B: rectangular pulse (adversarial: step at interior point) ──
    T2 = 500
    raw_step = np.zeros((T2, 7))
    raw_step[T2 // 4 : 3 * T2 // 4] = 0.3

    cond_b = smooth_velocity_profile(raw_step)
    cond_b = validate_and_clip_velocity(cond_b, verbose=False)
    acc_b = np.diff(cond_b, axis=0) / CONTROL_DT
    max_acc_b = np.max(np.abs(acc_b), axis=0)
    # Allow _ACC_TOL tolerance for floating-point rounding in A*dt/dt.
    viols_b = (max_acc_b > ACC_LIMIT + _ACC_TOL).any()
    print(f"  [B] rect pulse      max |acc| = {max_acc_b.round(3)}")
    print(f"      limit                     = {ACC_LIMIT}")
    print(f"      result → {'PASS' if not viols_b else 'FAIL'}")
    all_ok = all_ok and (not viols_b)

    print(f"  acc limit check → {'PASS' if all_ok else 'FAIL'}")
    return all_ok


def test_velocity_limit() -> bool:
    """Verify that conditioned velocities stay within hardware limits."""
    print("\n[unit] test_velocity_limit …")

    # Profile that intentionally exceeds the velocity limit
    T = 300
    raw = np.ones((T, 7)) * 4.0  # > all joint vel limits

    conditioned = smooth_velocity_profile(raw)
    conditioned = validate_and_clip_velocity(conditioned, verbose=False)

    max_vel = np.max(np.abs(conditioned), axis=0)
    violations = (max_vel > VEL_LIMIT + 1e-9).any()
    print(f"  max |vel| = {max_vel.round(4)}")
    print(f"  limit     = {VEL_LIMIT}")
    result = "PASS" if not violations else "FAIL"
    print(f"  vel limit check → {result}")
    return not violations


def run_unit_tests() -> bool:
    """Run all unit tests and return overall pass/fail."""
    results = [
        test_zero_boundary_condition(),
        test_acceleration_limit(),
        test_velocity_limit(),
    ]
    n_pass = sum(results)
    print(f"\n[unit] Results: {n_pass}/{len(results)} tests passed.")
    return all(results)


# ─── Main ─────────────────────────────────────────────────────────────────────

def main() -> int:
    args = _parse_args()

    # ── Unit tests (no ROS required) ──────────────────────────────────────────
    unit_ok = run_unit_tests()
    if not unit_ok:
        print("\n[test] Unit tests failed.  Fix issues before connecting to robot.")
        return 1

    # ── Parse goal/start ──────────────────────────────────────────────────────
    goal_q = _parse_q(args.goal) if args.goal else HOME_Q
    start_q = _parse_q(args.start) if args.start else None

    print(f"\n[test] Goal  q : {[f'{v:+.4f}' for v in goal_q]}")
    if start_q:
        print(f"[test] Start q : {[f'{v:+.4f}' for v in start_q]}")
    else:
        print("[test] Start q : will query robot via /get_q")

    # ── ROS2 integration test ─────────────────────────────────────────────────
    if not _ROS_AVAILABLE:
        print("\n[test] ROS2 / cuRobo / franka_pybridge not available – skipping integration test.")
        print("[test] Unit tests passed.  Source the ROS2 workspace to run the full test.")
        return 0

    rclpy.init()

    try:
        ctrl = CuRoboVelocityController(verbose=True)
        ctrl.warmup()

        # Optional: home the robot first
        if args.go_home_first and not args.dry_run:
            print("\n[test] Homing robot first …")
            ok = ctrl.move_to_joint_goal(goal_q=HOME_Q)
            if not ok:
                print("[test] Homing failed.")
                return 1
            time.sleep(0.5)

        # ── Obtain start q ────────────────────────────────────────────────────
        actual_start_q = start_q if start_q is not None else ctrl.get_current_q()
        print(f"[test] Actual start q: {[f'{v:+.4f}' for v in actual_start_q]}")

        # ── Plan ──────────────────────────────────────────────────────────────
        raw_velocities, positions = ctrl.plan(
            actual_start_q, goal_q, max_attempts=args.max_attempts
        )
        if raw_velocities is None:
            print("[test] Planning failed.")
            return 1

        # ── Diagnose raw profile ───────────────────────────────────────────────
        raw_report = diagnose_velocity_profile(raw_velocities)
        _print_profile_report("Raw cuRobo velocity profile", raw_report)

        # ── Condition ─────────────────────────────────────────────────────────
        cond_velocities = ctrl.condition_velocities(raw_velocities)
        cond_report = diagnose_velocity_profile(cond_velocities)
        _print_profile_report("Conditioned velocity profile", cond_report)

        # ── Optional plot ─────────────────────────────────────────────────────
        if args.plot:
            _plot_profiles(raw_velocities, cond_velocities)

        # ── Validation gate ───────────────────────────────────────────────────
        n_vel_viols = len(cond_report["vel_violations"])
        n_acc_viols = len(cond_report["acc_violations"])
        if n_vel_viols > 0 or n_acc_viols > 0:
            print(
                f"[test] ABORT: conditioned profile still has limit violations "
                f"(vel={n_vel_viols}, acc={n_acc_viols}).  "
                "Check RAMP_DURATION, SG_WINDOW, or ACC_SAFETY_FACTOR."
            )
            return 1

        # ── Execute ───────────────────────────────────────────────────────────
        if args.dry_run:
            print("[test] Dry run – trajectory is valid.  Skipping execution.")
            return 0

        print("[test] Executing trajectory on robot …")
        ok = ctrl.move_to_joint_goal(
            goal_q=goal_q,
            start_q=actual_start_q,
            max_attempts=args.max_attempts,
        )

        if ok:
            print("[test] SUCCESS – robot reached goal without reflex errors.")
            return 0
        else:
            print("[test] FAILURE – execute_plan reported an error.")
            return 1

    finally:
        rclpy.shutdown()


if __name__ == "__main__":
    sys.exit(main())
