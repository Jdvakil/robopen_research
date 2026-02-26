#!/usr/bin/env python3
"""
verify_trajectory.py
────────────────────
Offline trajectory verification — no robot, no GPU required.

Given a start and goal joint configuration, this script:

  1. Generates a smooth minimum-jerk trajectory using a built-in quintic
     polynomial planner (pure numpy — no cuRobo, no torch, no GPU).
  2. Runs the same velocity conditioning pipeline used in production:
       • Savitzky-Golay interior smoothing
       • Cosine ramp-up/down (zero velocity AND zero acceleration at boundaries)
       • Per-joint velocity clip  (90 % of FR3 hardware limit)
       • Per-joint acceleration clip (85 % of FR3 hardware limit)
  3. Saves two MCAP files for 3D visualization in Foxglove Studio:
       verify_raw.mcap        – unconditioned quintic trajectory positions
       verify_conditioned.mcap – positions obtained by integrating the
                                 conditioned velocity profile from start_q
  4. Saves a diagnostic plot (velocity + implied acceleration with limit bands).
  5. Prints a structured pass/fail diagnostic report.

The script exits with code 0 if the conditioned profile satisfies all limits,
or 1 if any violations remain (so it can be used in CI pipelines).

Run examples
────────────
  # Basic (no URDF — skips MCAP, only plot + report):
  python -m scripts.test.verify_trajectory

  # With URDF for Foxglove 3D visualisation:
  python -m scripts.test.verify_trajectory \\
      --urdf /path/to/fr3.urdf \\
      --goal "0.5,-0.3,0.1,-2.0,0.2,1.9,-0.5"

  # Custom start and goal, custom output directory:
  python -m scripts.test.verify_trajectory \\
      --urdf /path/to/fr3.urdf \\
      --start "0,0,0,-1.75,0,1.75,-0.785" \\
      --goal  "0.5,-0.3,0.1,-2.0,0.2,1.9,-0.5" \\
      --output-dir ./verify_out

Opening in Foxglove Studio
──────────────────────────
  foxglove-studio verify_out/verify_conditioned.mcap
  → Add a '3D' panel, then enable the /tf topic from the left panel list.
  → The FR3 robot will animate through the full trajectory.
"""

from __future__ import annotations

import argparse
import os
import sys
from typing import List, Tuple

import numpy as np

_HERE = os.path.dirname(os.path.abspath(__file__))
_ROOT = os.path.abspath(os.path.join(_HERE, "../.."))
if _ROOT not in sys.path:
    sys.path.insert(0, _ROOT)

from scripts.utils.curobo_velocity_controller import (
    JOINT_VEL_MAX,
    JOINT_ACC_MAX,
    VEL_LIMIT,
    ACC_LIMIT,
    smooth_velocity_profile,
    validate_and_clip_velocity,
    diagnose_velocity_profile,
)

# ─── Trajectory planner ────────────────────────────────────────────────────────

TRAJ_DT: float = 0.01          # 10 ms/step (100 Hz) — coarser than 1 kHz control
DEFAULT_STEPS: int = 300        # 3.0 s at 10 ms/step

JOINT_LABELS = [f"J{i+1}" for i in range(7)]

# Franka FR3 home position [rad]
HOME_Q: List[float] = [0.0, 0.0, 0.0, -1.75, 0.0, 1.75, -0.785]

# A typical "ready" pose used in pick-and-place research [rad]
READY_Q: List[float] = [0.065, -0.055, 0.024, -1.695, -0.037, 1.569, 0.740]


def _quintic_blend(
    start_q: np.ndarray,
    goal_q: np.ndarray,
    steps: int = DEFAULT_STEPS,
    dt: float = TRAJ_DT,
) -> Tuple[np.ndarray, np.ndarray]:
    """Minimum-jerk quintic polynomial.  Pure numpy — no torch/GPU.

    Uses the 10τ³ − 15τ⁴ + 6τ⁵ blend which guarantees:
      - position[0]  = start_q,  position[-1] = goal_q
      - velocity[0]  = 0,        velocity[-1]  = 0
      - acceleration[0] = 0,     acceleration[-1] = 0

    Returns
    -------
    positions  : (steps, 7) joint angles [rad]
    velocities : (steps, 7) joint velocities [rad/s]
    """
    tau = np.linspace(0.0, 1.0, steps)
    blend = 10 * tau**3 - 15 * tau**4 + 6 * tau**5

    positions = start_q + np.outer(blend, goal_q - start_q)
    velocities = np.gradient(positions, dt, axis=0)

    # np.gradient gives a small numerical residue at the edges; zero it out.
    velocities[0] = 0.0
    velocities[-1] = 0.0

    return positions, velocities


# ─── Reporting ────────────────────────────────────────────────────────────────

def _parse_q(s: str) -> List[float]:
    vals = [float(x.strip()) for x in s.split(",")]
    if len(vals) != 7:
        raise ValueError(f"Expected 7 joint values, got {len(vals)}: {s!r}")
    return vals


def _print_report(label: str, report: dict) -> None:
    print(f"\n{'─' * 64}")
    print(f"  {label}")
    print(f"{'─' * 64}")
    print(f"  Steps      : {report['n_steps']}  ({report['duration_s']:.3f} s)")
    print(f"  start_vel  : {report['start_vel'].round(6)}")
    print(f"  end_vel    : {report['end_vel'].round(6)}")
    print(f"  max |vel|  : {report['max_vel'].round(4)}")
    print(f"  vel limit  : {VEL_LIMIT.round(4)}")
    print(f"  max |acc|  : {report['max_acc'].round(3)}")
    print(f"  acc limit  : {ACC_LIMIT.round(3)}")
    n_vv = len(report["vel_violations"])
    n_av = len(report["acc_violations"])
    v_ok = "✓ PASS" if n_vv == 0 else f"✗ FAIL  ({n_vv} violations)"
    a_ok = "✓ PASS" if n_av == 0 else f"✗ FAIL  ({n_av} violations)"
    print(f"  vel check  : {v_ok}")
    print(f"  acc check  : {a_ok}")
    print(f"{'─' * 64}")


# ─── Diagnostic plot ──────────────────────────────────────────────────────────

def _save_plot(
    raw_vel: np.ndarray,
    cond_vel: np.ndarray,
    dt: float,
    out_path: str,
) -> None:
    """Save a 7×2 grid: velocity (left) and implied acceleration (right)."""
    try:
        import matplotlib
        matplotlib.use("Agg")
        import matplotlib.pyplot as plt
    except ImportError:
        print("[verify] matplotlib not installed — skipping plot.")
        return

    C_RAW  = "#e07b39"  # orange
    C_COND = "#3a78c9"  # blue
    C_LIM  = "#d62728"  # red
    C_SAFE = "#2ca02c"  # green

    t_raw  = np.arange(raw_vel.shape[0]) * dt
    t_cond = np.arange(cond_vel.shape[0]) * dt

    acc_raw  = np.diff(raw_vel,  axis=0) / dt
    acc_cond = np.diff(cond_vel, axis=0) / dt
    t_acc_raw  = np.arange(acc_raw.shape[0])  * dt
    t_acc_cond = np.arange(acc_cond.shape[0]) * dt

    fig, axes = plt.subplots(7, 2, figsize=(14, 18), squeeze=False)
    fig.suptitle(
        "Offline Trajectory Verification — Velocity & Acceleration Profiles\n"
        "Orange = raw quintic  |  Blue = conditioned  |  Red dashed = 90/85 % FR3 limit",
        fontsize=11, fontweight="bold",
    )

    for j in range(7):
        # ── Velocity ──────────────────────────────────────────────────────────
        ax_v = axes[j, 0]
        ax_v.plot(t_raw,  raw_vel[:, j],  color=C_RAW,  lw=1.0, alpha=0.65, label="raw")
        ax_v.plot(t_cond, cond_vel[:, j], color=C_COND, lw=1.4, alpha=0.90, label="conditioned")
        ax_v.axhline( VEL_LIMIT[j], color=C_LIM, ls="--", lw=0.8, label="90 % hw limit")
        ax_v.axhline(-VEL_LIMIT[j], color=C_LIM, ls="--", lw=0.8)
        ax_v.set_ylabel(f"{JOINT_LABELS[j]}\n[rad/s]", fontsize=8)
        ax_v.tick_params(labelsize=7)
        ax_v.grid(True, ls=":", alpha=0.4)
        if j == 0:
            ax_v.set_title("Joint velocity", fontsize=9, fontweight="bold")
            ax_v.legend(loc="upper right", fontsize=7)
        if j < 6:
            ax_v.set_xticklabels([])
        else:
            ax_v.set_xlabel("Time [s]", fontsize=8)

        # ── Acceleration ───────────────────────────────────────────────────────
        ax_a = axes[j, 1]
        ax_a.fill_between(
            t_acc_cond, -ACC_LIMIT[j], ACC_LIMIT[j],
            alpha=0.12, color=C_SAFE, label="safe zone (85 %)",
        )
        ax_a.plot(t_acc_raw,  acc_raw[:, j],  color=C_RAW,  lw=0.8, alpha=0.65, label="raw")
        ax_a.plot(t_acc_cond, acc_cond[:, j], color=C_COND, lw=1.3, alpha=0.90, label="conditioned")
        ax_a.axhline( JOINT_ACC_MAX[j], color=C_LIM, ls="--", lw=0.8, label="hw acc limit")
        ax_a.axhline(-JOINT_ACC_MAX[j], color=C_LIM, ls="--", lw=0.8)
        ax_a.set_ylabel(f"{JOINT_LABELS[j]}\n[rad/s²]", fontsize=8)
        ax_a.tick_params(labelsize=7)
        ax_a.grid(True, ls=":", alpha=0.4)
        if j == 0:
            ax_a.set_title("Implied acceleration", fontsize=9, fontweight="bold")
            ax_a.legend(loc="upper right", fontsize=7)
        if j < 6:
            ax_a.set_xticklabels([])
        else:
            ax_a.set_xlabel("Time [s]", fontsize=8)

    plt.tight_layout()
    plt.savefig(out_path, dpi=150, bbox_inches="tight")
    print(f"[verify] Plot saved → {out_path}")
    plt.close(fig)


# ─── MCAP export ──────────────────────────────────────────────────────────────

def _save_mcap(
    positions: np.ndarray,
    urdf_path: str,
    out_path: str,
    dt: float,
) -> None:
    """Write (T, 7) joint positions to an MCAP file for Foxglove Studio."""
    try:
        from scripts.utils.send_to_foxglove import log_joint_positions
    except ImportError:
        print("[verify] foxglove library not installed — skipping MCAP export.")
        return
    log_joint_positions(
        positions,
        urdf_path=urdf_path,
        output_path=out_path,
        dt_sec=dt,
    )
    print(f"[verify] MCAP saved  → {out_path}")


# ─── Entry point ──────────────────────────────────────────────────────────────

def main() -> int:
    parser = argparse.ArgumentParser(
        description=(
            "Offline trajectory verification for Franka FR3. "
            "No robot or GPU required."
        ),
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog=(
            "Foxglove Studio workflow:\n"
            "  foxglove-studio <output-dir>/verify_conditioned.mcap\n"
            "  → Add a '3D' panel and enable the /tf topic."
        ),
    )
    parser.add_argument(
        "--urdf", "-u",
        default=None,
        help=(
            "Path to the FR3 URDF file (required for MCAP export). "
            "Example: /path/to/fr3_hand.urdf"
        ),
    )
    parser.add_argument(
        "--start", "-s",
        default=None,
        help="Comma-separated start joint angles [rad] (default: Franka home).",
    )
    parser.add_argument(
        "--goal", "-g",
        default=None,
        help="Comma-separated goal joint angles [rad] (default: Franka ready pose).",
    )
    parser.add_argument(
        "--steps", "-n",
        type=int,
        default=DEFAULT_STEPS,
        help=(
            f"Number of waypoints in the quintic trajectory "
            f"(default: {DEFAULT_STEPS} → {DEFAULT_STEPS * TRAJ_DT:.1f} s "
            f"at {TRAJ_DT * 1000:.0f} ms/step)."
        ),
    )
    parser.add_argument(
        "--output-dir", "-o",
        default=".",
        help="Directory for output files (default: current directory).",
    )
    parser.add_argument(
        "--no-mcap",
        action="store_true",
        help="Skip MCAP file generation even if --urdf is provided.",
    )
    parser.add_argument(
        "--no-plot",
        action="store_true",
        help="Skip diagnostic plot.",
    )
    args = parser.parse_args()

    # ── Parse joint configs ────────────────────────────────────────────────────
    start_q = np.array(_parse_q(args.start) if args.start else HOME_Q)
    goal_q  = np.array(_parse_q(args.goal)  if args.goal  else READY_Q)

    print(f"\n[verify] Start q : {start_q.round(4).tolist()}")
    print(f"[verify] Goal  q : {goal_q.round(4).tolist()}")
    print(
        f"[verify] Planner : quintic polynomial, "
        f"{args.steps} steps × {TRAJ_DT*1000:.0f} ms = {args.steps * TRAJ_DT:.2f} s"
    )

    # ── Generate quintic trajectory ────────────────────────────────────────────
    print("\n[verify] Generating trajectory …")
    positions, raw_vel = _quintic_blend(start_q, goal_q, steps=args.steps, dt=TRAJ_DT)

    # ── Condition velocities ───────────────────────────────────────────────────
    print("[verify] Conditioning velocities …")
    cond_vel = smooth_velocity_profile(raw_vel, dt=TRAJ_DT)
    cond_vel = validate_and_clip_velocity(cond_vel, dt=TRAJ_DT, verbose=True)

    # Integrate conditioned velocities back to positions (for MCAP).
    # q[t] = start_q + Σ(dq[k] * dt) for k in 0..t
    cond_positions = start_q + np.cumsum(cond_vel * TRAJ_DT, axis=0)

    # ── Diagnostics ───────────────────────────────────────────────────────────
    raw_report  = diagnose_velocity_profile(raw_vel,  dt=TRAJ_DT)
    cond_report = diagnose_velocity_profile(cond_vel, dt=TRAJ_DT)

    _print_report("Raw quintic velocity profile", raw_report)
    _print_report("Conditioned velocity profile", cond_report)

    # ── Validation summary ────────────────────────────────────────────────────
    n_vv = len(cond_report["vel_violations"])
    n_av = len(cond_report["acc_violations"])

    print()
    if n_vv == 0 and n_av == 0:
        print("[verify] ✓  ALL LIMITS SATISFIED — trajectory is safe to execute on the robot.")
    else:
        print(
            f"[verify] ✗  LIMIT VIOLATIONS in conditioned profile "
            f"(vel={n_vv}, acc={n_av})."
        )
        print("[verify]    Consider adjusting RAMP_DURATION or ACC_SAFETY_FACTOR.")

    os.makedirs(args.output_dir, exist_ok=True)

    # ── MCAP export (Foxglove Studio 3D visualisation) ─────────────────────────
    if not args.no_mcap:
        if args.urdf is None:
            print(
                "\n[verify] --urdf not provided — MCAP export skipped.\n"
                "[verify] Re-run with --urdf /path/to/fr3.urdf to enable 3D visualisation."
            )
        else:
            raw_mcap  = os.path.join(args.output_dir, "verify_raw.mcap")
            cond_mcap = os.path.join(args.output_dir, "verify_conditioned.mcap")
            print(f"\n[verify] Writing MCAP files → {args.output_dir}/")
            _save_mcap(positions,      args.urdf, raw_mcap,  dt=TRAJ_DT)
            _save_mcap(cond_positions, args.urdf, cond_mcap, dt=TRAJ_DT)
            print(
                "\n[verify] Open in Foxglove Studio:\n"
                f"  foxglove-studio {cond_mcap}\n"
                "  → Add a '3D' panel, then enable /tf from the topic list.\n"
                "  → The FR3 arm will animate through the full trajectory."
            )

    # ── Diagnostic plot ────────────────────────────────────────────────────────
    if not args.no_plot:
        plot_path = os.path.join(args.output_dir, "verify_velocity_profile.png")
        _save_plot(raw_vel, cond_vel, dt=TRAJ_DT, out_path=plot_path)

    return 0 if (n_vv == 0 and n_av == 0) else 1


if __name__ == "__main__":
    sys.exit(main())
