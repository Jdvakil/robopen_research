#!/usr/bin/env python3
"""
plot_trajectory_analysis.py
────────────────────────────
Generates a comprehensive 6-figure trajectory analysis suite.

All plots are produced from pure Python (numpy + scipy + matplotlib).
No ROS2, robot, or GPU is required.

Figures generated
─────────────────
  analysis_01_parameterization.png
      Compares three motion planning methods on a single representative joint:
        • Naive linear interpolation (constant velocity, ∞ acceleration at endpoints)
        • Quintic polynomial (minimum-jerk, bounded acceleration)
        • cuRobo-like profile + conditioning (realistic planner output, fully conditioned)
      Shows: position · velocity · acceleration · jerk (4 rows × 3 columns).

  analysis_02_conditioning_stages.png
      Shows how a "bad" velocity profile (noisy, non-zero start, over limit) is
      transformed stage-by-stage through the conditioning pipeline:
        Stage 0 – Raw planner output  (non-zero start, noisy, possibly over-limit)
        Stage 1 – After Savitzky-Golay smoothing    (noise removed)
        Stage 2 – After cosine ramp-up/down          (v[0]=v[-1]=0, dv/dt=0)
        Stage 3 – After acceleration clip             (hard-limited to 85 % FR3)
      Shows: velocity and implied acceleration (2 cols × 4 rows).

  analysis_03_all_joints.png
      Full 7-joint velocity and acceleration analysis:
        Raw quintic vs conditioned, with FR3 safety limit bands.
      Shows: 7 rows × 2 cols (velocity | acceleration).

  analysis_04_planned_vs_actual.png
      Simulates realistic trajectory tracking with noise, servo lag, and drift.
      Shows:
        Row 1 – Joint positions: planned reference vs simulated actual (all 7 joints)
        Row 2 – Signed position error  e(t) = q_actual(t) − q_ref(t)
        Row 3 – Tracking quality metrics: ‖e‖∞ over time + per-joint RMSE bar chart

  analysis_05_phase_portrait.png
      Phase portraits (velocity vs position) for all 7 joints.
      Color encodes time (blue = start → red = end).
      Dashed = planned, solid = simulated actual.

  analysis_06_tracking_correction.png
      Demonstrates closed-loop segment-based correction:
        Red   – open-loop simulation (error accumulates over time)
        Blue  – closed-loop simulation (error reset at segment boundaries)
      Shows: position error ‖e‖∞ and per-joint cumulative drift.

Run
───
  python -m scripts.test.plot_trajectory_analysis
  python -m scripts.test.plot_trajectory_analysis --output-dir ./analysis_out
"""

from __future__ import annotations

import argparse
import os
import sys

import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt
import matplotlib.ticker as mticker
from matplotlib.cm import ScalarMappable
from matplotlib.colors import Normalize
import numpy as np
from scipy.signal import savgol_filter, butter, filtfilt

_HERE = os.path.dirname(os.path.abspath(__file__))
_ROOT = os.path.abspath(os.path.join(_HERE, "../.."))
if _ROOT not in sys.path:
    sys.path.insert(0, _ROOT)

from scripts.utils.curobo_velocity_controller import (
    JOINT_VEL_MAX, JOINT_ACC_MAX, VEL_LIMIT, ACC_LIMIT,
    smooth_velocity_profile, validate_and_clip_velocity,
    SG_WINDOW, SG_POLYORDER, RAMP_DURATION,
    _cosine_ramp,
)
from scripts.utils.trajectory_tracker import (
    simulate_tracking, compute_tracking_metrics,
    simulate_closed_loop_correction,
)

# ─── Common constants ──────────────────────────────────────────────────────────

TRAJ_DT   = 0.01          # 10 ms / step (100 Hz, quintic planner rate)
STEPS     = 300            # 3.0 s trajectory
START_Q   = np.array([0.0, 0.0, 0.0, -1.75, 0.0, 1.75, -0.785])
GOAL_Q    = np.array([0.785, -0.6, 0.3, -2.2, 0.6, 2.1, 0.1])
LABELS    = [f"J{i+1}" for i in range(7)]

C_RAW    = "#e07b39"   # orange  — raw / unconditioned
C_COND   = "#2171b5"   # blue    — conditioned
C_LIM    = "#d62728"   # red     — safety limits
C_SAFE   = "#2ca02c"   # green   — safe zone fill
C_LINEAR = "#9467bd"   # purple  — naive linear
C_QUINTIC = "#e07b39"  # orange  — quintic raw
C_ACTUAL = "#d62728"   # red     — simulated actual

FONT_TITLE = {"fontsize": 11, "fontweight": "bold"}
FONT_AXIS  = {"fontsize": 8}
FONT_TICK  = 7

plt.rcParams.update({
    "axes.spines.top": False,
    "axes.spines.right": False,
    "legend.fontsize": 7,
    "legend.framealpha": 0.7,
})


# ─── Trajectory generation helpers ────────────────────────────────────────────

def _quintic(start, goal, steps=STEPS, dt=TRAJ_DT):
    tau = np.linspace(0.0, 1.0, steps)
    blend = 10 * tau**3 - 15 * tau**4 + 6 * tau**5
    pos = start + np.outer(blend, goal - start)
    vel = np.gradient(pos, dt, axis=0)
    vel[0] = vel[-1] = 0.0
    return pos, vel


def _linear(start, goal, steps=STEPS, dt=TRAJ_DT):
    """Constant-velocity (bang-bang) profile — the naive unsafe approach.

    Models a robot that moves at constant velocity from start to goal, starting
    from rest and decelerating abruptly.  The velocity is a rectangular pulse,
    so the implied acceleration is a large impulse at t=0 and t=T.  This is
    what happens when joint positions are linearly interpolated and velocity
    commands are sent directly, without a cosine ramp or acceleration limit.
    """
    T_total = dt * (steps - 1)
    v_const = (goal - start) / T_total   # rad/s per joint

    tau = np.linspace(0.0, 1.0, steps)
    pos = start + np.outer(tau, goal - start)

    # Rectangular velocity: 0 → constant → 0
    # vel[0] = 0 (robot starts at rest)
    # vel[1:-1] = v_const (constant mid-trajectory)
    # vel[-1] = 0 (robot commanded to stop)
    vel = np.zeros((steps, len(start)))
    vel[1:-1] = v_const[None, :]
    return pos, vel


def _curobo_like(start, goal, steps=STEPS, dt=TRAJ_DT, seed=7):
    """Quintic + realistic planner noise + non-zero start (simulates cuRobo output)."""
    pos, vel = _quintic(start, goal, steps, dt)
    rng = np.random.default_rng(seed)
    noise = rng.normal(0, 0.003, vel.shape)
    # High-pass filter to get only the spiky noise (not DC drift)
    b, a = butter(3, 0.06, btype="high")
    for j in range(vel.shape[1]):
        noise[:, j] = filtfilt(b, a, noise[:, j]) * 8.0
    vel = vel + noise
    vel[0] = 0.02 * (goal - start) / (steps * dt)   # non-zero start
    vel[-1] = 0.0
    return pos, vel


def _condition(vel, dt=TRAJ_DT):
    v = smooth_velocity_profile(vel, dt=dt)
    v = validate_and_clip_velocity(v, dt=dt, verbose=False)
    return v


def _acc(vel, dt=TRAJ_DT):
    return np.diff(vel, axis=0) / dt


def _jerk(vel, dt=TRAJ_DT):
    a = _acc(vel, dt)
    return np.diff(a, axis=0) / dt


# ─── Plot 1: Time parameterization comparison ──────────────────────────────────

def plot_parameterization(out_dir: str) -> None:
    """Linear vs quintic vs cuRobo+conditioned — position, velocity, acc, jerk."""
    fig, axes = plt.subplots(4, 3, figsize=(13, 11), squeeze=False)
    fig.suptitle(
        "Figure 1 — Time Parameterization Comparison\n"
        "Same start→goal, same duration (3.0 s).  Shown for Joint 7 (largest motion).",
        **FONT_TITLE,
    )

    t_full = np.arange(STEPS) * TRAJ_DT
    j = 6  # Joint 7 (0-indexed)

    # ── Generate trajectories ──────────────────────────────────────────────────
    lin_pos, lin_vel = _linear(START_Q, GOAL_Q)
    qnt_pos, qnt_vel = _quintic(START_Q, GOAL_Q)
    crb_pos, crb_vel = _curobo_like(START_Q, GOAL_Q)
    crb_cond         = _condition(crb_vel)

    lin_acc  = _acc(lin_vel)  ;  t_acc = t_full[:-1]
    qnt_acc  = _acc(qnt_vel)
    crb_acc  = _acc(crb_cond)
    lin_jerk = _jerk(lin_vel) ;  t_jrk = t_full[:-2]
    qnt_jerk = _jerk(qnt_vel)
    crb_jerk = _jerk(crb_cond)

    configs = [
        ("Naive Linear\n(dangerous)", lin_pos[:, j], lin_vel[:, j],
         lin_acc[:, j], lin_jerk[:, j], C_LINEAR, "//"),
        ("Quintic Polynomial\n(raw)", qnt_pos[:, j], qnt_vel[:, j],
         qnt_acc[:, j], qnt_jerk[:, j], C_QUINTIC, None),
        ("cuRobo-like\n+ conditioned (safe)", crb_pos[:, j], crb_cond[:, j],
         crb_acc[:, j], crb_jerk[:, j], C_COND, None),
    ]

    row_labels = ["Position [rad]", "Velocity [rad/s]", "Accel [rad/s²]", "Jerk [rad/s³]"]
    time_vecs  = [t_full, t_full, t_acc, t_jrk]
    data_rows  = [
        [c[1] for c in configs],
        [c[2] for c in configs],
        [c[3] for c in configs],
        [c[4] for c in configs],
    ]

    for row, (row_label, t_vec, data_list) in enumerate(
        zip(row_labels, time_vecs, data_rows)
    ):
        for col, (cfg, data) in enumerate(zip(configs, data_list)):
            ax = axes[row, col]
            label, _, _, _, _, color, hatch = cfg
            ax.plot(t_vec, data, color=color, lw=1.6)
            ax.fill_between(t_vec, 0, data, color=color, alpha=0.15, hatch=hatch)

            if row == 1:   # Velocity: add limit lines
                ax.axhline( VEL_LIMIT[j], color=C_LIM, ls="--", lw=0.9, label="90 % limit")
                ax.axhline(-VEL_LIMIT[j], color=C_LIM, ls="--", lw=0.9)
            if row == 2:   # Acceleration: add limit + danger zone
                ax.axhline( ACC_LIMIT[j], color=C_LIM, ls="--", lw=0.9, label="85 % limit")
                ax.axhline(-ACC_LIMIT[j], color=C_LIM, ls="--", lw=0.9)
                ax.axhline( JOINT_ACC_MAX[j], color=C_LIM, ls=":", lw=0.6, alpha=0.5)
                ax.axhline(-JOINT_ACC_MAX[j], color=C_LIM, ls=":", lw=0.6, alpha=0.5)

            if row == 0:
                ax.set_title(label, **FONT_TITLE)
            if col == 0:
                ax.set_ylabel(row_label, **FONT_AXIS)
            if row < 3:
                ax.set_xticklabels([])
            else:
                ax.set_xlabel("Time [s]", **FONT_AXIS)
            ax.tick_params(labelsize=FONT_TICK)
            ax.grid(True, ls=":", alpha=0.35)
            if row in (1, 2) and col == 0:
                ax.legend(loc="upper right")

    # Set sensible y-limits on acceleration and jerk rows, then annotate
    for col in range(3):
        ax_acc  = axes[2, col]
        ax_jerk = axes[3, col]
        acc_peak  = max(np.max(np.abs(data_rows[2][col])), ACC_LIMIT[j] * 1.2)
        jerk_peak = max(np.max(np.abs(data_rows[3][col])), 1.0)
        ax_acc.set_ylim(-acc_peak * 1.25, acc_peak * 1.25)
        ax_jerk.set_ylim(-jerk_peak * 1.25, jerk_peak * 1.25)
        # Add reflex zone shading (above hw limit)
        ax_acc.fill_between(
            t_acc, JOINT_ACC_MAX[j], acc_peak * 1.25,
            color=C_LIM, alpha=0.07, label="reflex zone" if col == 0 else None,
        )
        ax_acc.fill_between(
            t_acc, -acc_peak * 1.25, -JOINT_ACC_MAX[j],
            color=C_LIM, alpha=0.07,
        )

    # Annotate the dangerous impulse on the linear acceleration plot
    lin_spike = np.max(np.abs(lin_acc[:, j]))
    ax = axes[2, 0]
    ax.annotate(
        f"Acc spike\n({lin_spike:.0f} rad/s²!)\n>> limit ({JOINT_ACC_MAX[j]:.0f})",
        xy=(0.011, lin_spike * 0.92),
        xycoords="data",
        fontsize=6.5, color=C_LIM, fontweight="bold",
        arrowprops=dict(arrowstyle="->", color=C_LIM, lw=1.0),
        xytext=(0.4, lin_spike * 0.6),
    )
    ax.legend(loc="lower right", fontsize=6)

    plt.tight_layout()
    path = os.path.join(out_dir, "analysis_01_parameterization.png")
    plt.savefig(path, dpi=150, bbox_inches="tight")
    print(f"  Saved → {path}")
    plt.close(fig)


# ─── Plot 2: Conditioning pipeline stages ─────────────────────────────────────

def plot_conditioning_stages(out_dir: str) -> None:
    """Show per-stage conditioning effect for the cuRobo-like profile."""
    _, raw_vel = _curobo_like(START_Q, GOAL_Q)
    j = 6   # Joint 7
    dt = TRAJ_DT

    # Stage-by-stage
    s0 = raw_vel.copy()  # raw

    s1 = raw_vel.copy()  # after SG
    for jj in range(raw_vel.shape[1]):
        s1[:, jj] = savgol_filter(s1[:, jj], SG_WINDOW, SG_POLYORDER)

    s2 = s1.copy()       # after cosine ramp
    ramp_steps = min(int(round(RAMP_DURATION / dt)), len(s2) // 3)
    ramp = _cosine_ramp(ramp_steps)
    s2[:ramp_steps]  *= ramp[:, None]
    s2[-ramp_steps:] *= ramp[::-1, None]
    s2[0] = 0.0; s2[-1] = 0.0

    s3 = validate_and_clip_velocity(s2, dt=dt, verbose=False)  # after acc clip

    stages = [
        (s0, "Stage 0: Raw planner output\n(noisy, non-zero start)", C_RAW),
        (s1, "Stage 1: After Savitzky-Golay smoothing\n(noise removed, shape preserved)", "#e78ac3"),
        (s2, "Stage 2: After cosine ramp-up/down\n(v[0]=v[-1]=0,  dv/dt[0]=dv/dt[-1]=0)", C_QUINTIC),
        (s3, "Stage 3: After acceleration clip\n(85 % FR3 acceleration limit enforced)", C_COND),
    ]

    fig, axes = plt.subplots(4, 2, figsize=(12, 11), squeeze=False)
    fig.suptitle(
        "Figure 2 — Velocity Conditioning Pipeline (Stage by Stage)\n"
        f"Joint 7 shown.  Ramp duration = {RAMP_DURATION*1000:.0f} ms, "
        f"SG window = {SG_WINDOW}, acc limit = {ACC_LIMIT[j]:.1f} rad/s².",
        **FONT_TITLE,
    )

    t = np.arange(STEPS) * dt
    t_acc = t[:-1]

    for row, (vel, label, color) in enumerate(stages):
        acc = _acc(vel, dt)

        ax_v = axes[row, 0]
        ax_a = axes[row, 1]

        ax_v.plot(t, vel[:, j], color=color, lw=1.5)
        ax_v.axhline( VEL_LIMIT[j],   color=C_LIM, ls="--", lw=0.9, alpha=0.8)
        ax_v.axhline(-VEL_LIMIT[j],   color=C_LIM, ls="--", lw=0.9, alpha=0.8)
        ax_v.set_ylabel(label, **FONT_AXIS)
        ax_v.tick_params(labelsize=FONT_TICK)
        ax_v.grid(True, ls=":", alpha=0.35)

        ax_a.fill_between(t_acc, -ACC_LIMIT[j], ACC_LIMIT[j],
                          color=C_SAFE, alpha=0.15, label="safe zone")
        ax_a.plot(t_acc, acc[:, j], color=color, lw=1.2)
        ax_a.axhline( ACC_LIMIT[j],      color=C_LIM, ls="--", lw=0.9)
        ax_a.axhline(-ACC_LIMIT[j],      color=C_LIM, ls="--", lw=0.9)
        ax_a.axhline( JOINT_ACC_MAX[j],  color=C_LIM, ls=":", lw=0.6, alpha=0.5, label="hw limit")
        ax_a.axhline(-JOINT_ACC_MAX[j],  color=C_LIM, ls=":", lw=0.6, alpha=0.5)
        ax_a.tick_params(labelsize=FONT_TICK)
        ax_a.grid(True, ls=":", alpha=0.35)

        if row == 0:
            ax_v.set_title("Velocity [rad/s]", **FONT_TITLE)
            ax_a.set_title("Implied Acceleration [rad/s²]", **FONT_TITLE)
            ax_a.legend(loc="upper right")
        if row < 3:
            ax_v.set_xticklabels([])
            ax_a.set_xticklabels([])
        else:
            ax_v.set_xlabel("Time [s]", **FONT_AXIS)
            ax_a.set_xlabel("Time [s]", **FONT_AXIS)

    plt.tight_layout()
    path = os.path.join(out_dir, "analysis_02_conditioning_stages.png")
    plt.savefig(path, dpi=150, bbox_inches="tight")
    print(f"  Saved → {path}")
    plt.close(fig)


# ─── Plot 3: All-joints velocity + acceleration ────────────────────────────────

def plot_all_joints(out_dir: str) -> None:
    """7-joint velocity and acceleration profiles: raw vs conditioned."""
    _, raw_vel = _quintic(START_Q, GOAL_Q)
    cond_vel   = _condition(raw_vel)

    t     = np.arange(STEPS) * TRAJ_DT
    t_acc = t[:-1]
    raw_acc  = _acc(raw_vel)
    cond_acc = _acc(cond_vel)

    fig, axes = plt.subplots(7, 2, figsize=(13, 16), squeeze=False)
    fig.suptitle(
        "Figure 3 — All 7 Joints: Velocity and Acceleration Profiles\n"
        "Orange = raw quintic  |  Blue = conditioned  |  "
        "Red dashed = 90 %/85 % FR3 limits  |  Green fill = safe zone",
        **FONT_TITLE,
    )

    for j in range(7):
        ax_v = axes[j, 0]
        ax_a = axes[j, 1]

        # Velocity
        ax_v.plot(t, raw_vel[:, j],  color=C_RAW,  lw=1.0, alpha=0.7, label="raw")
        ax_v.plot(t, cond_vel[:, j], color=C_COND, lw=1.5, alpha=0.9, label="conditioned")
        ax_v.axhline( VEL_LIMIT[j], color=C_LIM, ls="--", lw=0.9)
        ax_v.axhline(-VEL_LIMIT[j], color=C_LIM, ls="--", lw=0.9)
        ax_v.set_ylabel(f"{LABELS[j]}\n[rad/s]", **FONT_AXIS)
        ax_v.tick_params(labelsize=FONT_TICK)
        ax_v.grid(True, ls=":", alpha=0.35)

        # Acceleration
        ax_a.fill_between(t_acc, -ACC_LIMIT[j], ACC_LIMIT[j],
                          alpha=0.12, color=C_SAFE, label="safe zone")
        ax_a.plot(t_acc, raw_acc[:, j],  color=C_RAW,  lw=0.9, alpha=0.7)
        ax_a.plot(t_acc, cond_acc[:, j], color=C_COND, lw=1.3, alpha=0.9)
        ax_a.axhline( ACC_LIMIT[j],     color=C_LIM, ls="--", lw=0.9)
        ax_a.axhline(-ACC_LIMIT[j],     color=C_LIM, ls="--", lw=0.9)
        ax_a.axhline( JOINT_ACC_MAX[j], color=C_LIM, ls=":", lw=0.6, alpha=0.5)
        ax_a.axhline(-JOINT_ACC_MAX[j], color=C_LIM, ls=":", lw=0.6, alpha=0.5)
        ax_a.set_ylabel(f"{LABELS[j]}\n[rad/s²]", **FONT_AXIS)
        ax_a.tick_params(labelsize=FONT_TICK)
        ax_a.grid(True, ls=":", alpha=0.35)

        if j == 0:
            ax_v.set_title("Joint Velocity", **FONT_TITLE)
            ax_v.legend(loc="upper right")
            ax_a.set_title("Implied Acceleration", **FONT_TITLE)
            ax_a.legend(loc="upper right")
        if j < 6:
            ax_v.set_xticklabels([])
            ax_a.set_xticklabels([])
        else:
            ax_v.set_xlabel("Time [s]", **FONT_AXIS)
            ax_a.set_xlabel("Time [s]", **FONT_AXIS)

    plt.tight_layout()
    path = os.path.join(out_dir, "analysis_03_all_joints.png")
    plt.savefig(path, dpi=150, bbox_inches="tight")
    print(f"  Saved → {path}")
    plt.close(fig)


# ─── Plot 4: Planned vs actual ────────────────────────────────────────────────

def plot_planned_vs_actual(out_dir: str) -> None:
    """Simulated trajectory tracking: planned reference vs actual positions."""
    plan_pos, plan_vel = _quintic(START_Q, GOAL_Q)
    cond_vel  = _condition(plan_vel)
    # For MCAP we'd integrate; for plotting we compare plan positions vs actual
    cond_pos = START_Q + np.cumsum(cond_vel * TRAJ_DT, axis=0)

    actual_pos = simulate_tracking(
        cond_pos, cond_vel, dt=TRAJ_DT,
        noise_std=0.0025, lag_factor=0.045, drift_rate=0.0010,
    )
    metrics = compute_tracking_metrics(cond_pos, actual_pos, dt=TRAJ_DT)
    t = metrics["t"]

    # ── Layout: 3 rows ─────────────────────────────────────────────────────────
    fig = plt.figure(figsize=(14, 12))
    gs = fig.add_gridspec(3, 7, hspace=0.45, wspace=0.35,
                          height_ratios=[2.5, 2.0, 1.5])

    fig.suptitle(
        "Figure 4 — Planned vs Actual Trajectory (Simulated Tracking)\n"
        "Noise σ=2.5 mrad · Lag α=4.5 % · Drift γ=1.0 mrad/s",
        **FONT_TITLE,
    )

    # ── Row 1: Joint positions ─────────────────────────────────────────────────
    for j in range(7):
        ax = fig.add_subplot(gs[0, j])
        ax.plot(t, cond_pos[:, j],  color=C_COND,   lw=1.3, label="planned")
        ax.plot(t, actual_pos[:, j], color=C_ACTUAL, lw=1.0, ls="--", alpha=0.85, label="actual")
        ax.set_title(LABELS[j], fontsize=8, fontweight="bold")
        ax.tick_params(labelsize=6)
        ax.set_xticklabels([])
        ax.grid(True, ls=":", alpha=0.35)
        if j == 0:
            ax.set_ylabel("Position [rad]", **FONT_AXIS)
            ax.legend(loc="upper left", fontsize=6)

    # ── Row 2: Signed error per joint ─────────────────────────────────────────
    for j in range(7):
        ax = fig.add_subplot(gs[1, j])
        err = metrics["error"][:, j]
        ax.plot(t, err * 1000, color="#8856a7", lw=1.0)
        ax.axhline(0, color="#999", lw=0.5)
        ax.fill_between(t, err * 1000, 0, alpha=0.25, color="#8856a7")
        ax.set_title(LABELS[j], fontsize=8, fontweight="bold")
        ax.tick_params(labelsize=6)
        ax.set_xlabel("Time [s]", fontsize=6)
        ax.grid(True, ls=":", alpha=0.35)
        if j == 0:
            ax.set_ylabel("Error [mrad]", **FONT_AXIS)

    # ── Row 3: Aggregate metrics ───────────────────────────────────────────────
    ax_inf = fig.add_subplot(gs[2, :4])
    ax_rmse = fig.add_subplot(gs[2, 4:])

    # ‖e‖∞ over time
    ax_inf.plot(t, metrics["inf_norm"] * 1000, color=C_ACTUAL, lw=1.3)
    ax_inf.fill_between(t, 0, metrics["inf_norm"] * 1000, color=C_ACTUAL, alpha=0.15)
    ax_inf.set_xlabel("Time [s]", **FONT_AXIS)
    ax_inf.set_ylabel("‖e‖∞  [mrad]", **FONT_AXIS)
    ax_inf.set_title("Worst-joint error over time", fontsize=8, fontweight="bold")
    ax_inf.tick_params(labelsize=FONT_TICK)
    ax_inf.grid(True, ls=":", alpha=0.35)
    ax_inf.text(
        0.97, 0.92,
        f"RMSE={metrics['total_rmse']*1000:.2f} mrad",
        transform=ax_inf.transAxes, ha="right", fontsize=7,
        bbox=dict(boxstyle="round,pad=0.3", fc="white", ec="gray", alpha=0.8),
    )

    # Per-joint RMSE bar
    rmse_mrad = metrics["rmse"] * 1000
    bars = ax_rmse.bar(LABELS, rmse_mrad, color=C_COND, alpha=0.8)
    ax_rmse.set_ylabel("RMSE [mrad]", **FONT_AXIS)
    ax_rmse.set_title("Per-joint RMSE", fontsize=8, fontweight="bold")
    ax_rmse.tick_params(labelsize=FONT_TICK)
    ax_rmse.grid(True, ls=":", alpha=0.35, axis="y")
    for bar, val in zip(bars, rmse_mrad):
        ax_rmse.text(bar.get_x() + bar.get_width() / 2, bar.get_height() + 0.02,
                     f"{val:.1f}", ha="center", va="bottom", fontsize=6)

    path = os.path.join(out_dir, "analysis_04_planned_vs_actual.png")
    plt.savefig(path, dpi=150, bbox_inches="tight")
    print(f"  Saved → {path}")
    plt.close(fig)


# ─── Plot 5: Phase portraits ──────────────────────────────────────────────────

def plot_phase_portrait(out_dir: str) -> None:
    """Velocity vs position phase portraits for all 7 joints, color = time."""
    plan_pos, plan_vel = _quintic(START_Q, GOAL_Q)
    cond_vel  = _condition(plan_vel)
    cond_pos  = START_Q + np.cumsum(cond_vel * TRAJ_DT, axis=0)
    actual_pos = simulate_tracking(
        cond_pos, cond_vel, dt=TRAJ_DT,
        noise_std=0.002, lag_factor=0.04, drift_rate=0.0008,
    )
    # Estimate actual velocity from positions
    actual_vel = np.gradient(actual_pos, TRAJ_DT, axis=0)

    T = len(cond_pos)
    norm = Normalize(vmin=0, vmax=(T - 1) * TRAJ_DT)
    cmap = plt.get_cmap("plasma")
    colors = cmap(norm(np.arange(T) * TRAJ_DT))

    fig, axes = plt.subplots(3, 3, figsize=(12, 10), squeeze=False)
    fig.suptitle(
        "Figure 5 — Phase Portraits: Joint Velocity vs Joint Position\n"
        "Color encodes time (dark blue = start → yellow = end).  "
        "Dashed = planned · Solid = simulated actual.",
        **FONT_TITLE,
    )

    sm = ScalarMappable(cmap=cmap, norm=norm)
    sm.set_array([])

    for j in range(7):
        row, col = divmod(j, 3)
        ax = axes[row, col]

        # Planned trajectory (dashed)
        for k in range(T - 1):
            ax.plot(
                cond_pos[k:k+2, j], cond_vel[k:k+2, j],
                color=colors[k], lw=0.8, ls="--", alpha=0.6,
            )
        # Actual trajectory (solid)
        for k in range(T - 1):
            ax.plot(
                actual_pos[k:k+2, j], actual_vel[k:k+2, j],
                color=colors[k], lw=1.2, alpha=0.85,
            )

        # Velocity limit lines
        ax.axhline( VEL_LIMIT[j], color=C_LIM, ls=":", lw=0.7, alpha=0.6)
        ax.axhline(-VEL_LIMIT[j], color=C_LIM, ls=":", lw=0.7, alpha=0.6)

        ax.set_title(LABELS[j], fontsize=9, fontweight="bold")
        ax.set_xlabel("Position [rad]", **FONT_AXIS)
        ax.set_ylabel("Velocity [rad/s]", **FONT_AXIS)
        ax.tick_params(labelsize=FONT_TICK)
        ax.grid(True, ls=":", alpha=0.3)

    # Hide unused subplot (3×3 grid, 7 joints → 1 empty, 1 colorbar)
    axes[2, 1].axis("off")
    cbar_ax = axes[2, 2]
    cbar_ax.axis("off")
    cbar = fig.colorbar(sm, ax=cbar_ax, fraction=0.9, pad=0.04)
    cbar.set_label("Time [s]", fontsize=9)

    plt.tight_layout()
    path = os.path.join(out_dir, "analysis_05_phase_portrait.png")
    plt.savefig(path, dpi=150, bbox_inches="tight")
    print(f"  Saved → {path}")
    plt.close(fig)


# ─── Plot 6: Closed-loop correction ───────────────────────────────────────────

def plot_tracking_correction(out_dir: str) -> None:
    """Open-loop vs closed-loop segment-based correction."""
    plan_pos, plan_vel = _quintic(START_Q, GOAL_Q)
    cond_vel  = _condition(plan_vel)
    cond_pos  = START_Q + np.cumsum(cond_vel * TRAJ_DT, axis=0)

    SEGMENT_STEPS = 30   # correction every 30 steps = 300 ms at 10 ms/step
    result = simulate_closed_loop_correction(
        cond_pos, cond_vel, dt=TRAJ_DT,
        segment_steps=SEGMENT_STEPS,
        Kp=3.0, noise_std=0.002, lag_factor=0.04, drift_rate=0.001,
    )

    t = np.arange(STEPS) * TRAJ_DT
    om = result["open_metrics"]
    cm = result["closed_metrics"]

    fig, axes = plt.subplots(3, 2, figsize=(13, 11), squeeze=False)
    fig.suptitle(
        "Figure 6 — Closed-Loop Segment-Based Trajectory Correction\n"
        f"Segment duration = {SEGMENT_STEPS * TRAJ_DT * 1000:.0f} ms  |  "
        f"Correction gain Kp = 3.0  |  Drift = 1.0 mrad/s",
        **FONT_TITLE,
    )

    # ── Row 0: inf-norm tracking error (all joints) ────────────────────────────
    ax = axes[0, 0]
    ax.plot(t, om["inf_norm"] * 1000, color=C_ACTUAL,  lw=1.4, label="open-loop")
    ax.plot(t, cm["inf_norm"] * 1000, color=C_COND, lw=1.4, label="closed-loop")
    ax.fill_between(t, om["inf_norm"] * 1000, cm["inf_norm"] * 1000,
                    color=C_COND, alpha=0.15)
    for st in result["segment_times"]:
        ax.axvline(st, color="#888", ls=":", lw=0.7)
    ax.set_ylabel("‖q_actual − q_ref‖∞  [mrad]", **FONT_AXIS)
    ax.set_title("Worst-joint position error over time", **FONT_TITLE)
    ax.legend()
    ax.tick_params(labelsize=FONT_TICK)
    ax.grid(True, ls=":", alpha=0.35)
    ax.set_xlabel("Time [s]", **FONT_AXIS)

    # ── Row 0, right: Per-joint RMSE comparison ────────────────────────────────
    ax = axes[0, 1]
    x = np.arange(7)
    w = 0.35
    ax.bar(x - w/2, om["rmse"] * 1000, w, color=C_ACTUAL,  alpha=0.85, label="open-loop")
    ax.bar(x + w/2, cm["rmse"] * 1000, w, color=C_COND,    alpha=0.85, label="closed-loop")
    ax.set_xticks(x)
    ax.set_xticklabels(LABELS)
    ax.set_ylabel("RMSE [mrad]", **FONT_AXIS)
    ax.set_title("Per-joint RMSE: open vs closed loop", **FONT_TITLE)
    ax.legend()
    ax.tick_params(labelsize=FONT_TICK)
    ax.grid(True, ls=":", alpha=0.35, axis="y")
    # RMSE reduction annotation
    total_reduction = (1.0 - cm["total_rmse"] / om["total_rmse"]) * 100
    ax.text(
        0.97, 0.95,
        f"Total RMSE reduction: {total_reduction:.0f}%",
        transform=ax.transAxes, ha="right", va="top", fontsize=8,
        color=C_COND, fontweight="bold",
    )

    # ── Row 1: Per-joint position error (open vs closed) ───────────────────────
    JOINTS_SHOWN = [1, 3, 6]  # J2, J4, J7 — most interesting
    for col_idx, j in enumerate(JOINTS_SHOWN):
        ax_o = axes[1, col_idx] if col_idx < 2 else axes[2, 0]
        ax_o.plot(t, om["error"][:, j] * 1000, color=C_ACTUAL,  lw=1.0, alpha=0.8, label="open")
        ax_o.plot(t, cm["error"][:, j] * 1000, color=C_COND,    lw=1.2, alpha=0.9, label="closed")
        ax_o.axhline(0, color="#888", lw=0.5)
        for st in result["segment_times"]:
            ax_o.axvline(st, color="#888", ls=":", lw=0.5)
        ax_o.set_ylabel(f"{LABELS[j]}  error [mrad]", **FONT_AXIS)
        ax_o.set_title(f"{LABELS[j]} — Signed position error", fontsize=9, fontweight="bold")
        ax_o.legend()
        ax_o.tick_params(labelsize=FONT_TICK)
        ax_o.grid(True, ls=":", alpha=0.35)
        ax_o.set_xlabel("Time [s]", **FONT_AXIS)

    # ── Row 2 right: Correction magnitude at each segment ─────────────────────
    ax = axes[2, 1]
    if result["correction_mags"]:
        ax.bar(
            range(len(result["correction_mags"])),
            [m * 1000 for m in result["correction_mags"]],
            color=C_COND, alpha=0.8,
        )
        ax.set_xlabel("Segment index", **FONT_AXIS)
        ax.set_ylabel("Error at segment end [mrad]", **FONT_AXIS)
        ax.set_title("Position error at each correction checkpoint", fontsize=9, fontweight="bold")
        ax.tick_params(labelsize=FONT_TICK)
        ax.grid(True, ls=":", alpha=0.35, axis="y")

    # Row 2 right is already used for correction_mags; nothing to hide

    plt.tight_layout()
    path = os.path.join(out_dir, "analysis_06_tracking_correction.png")
    plt.savefig(path, dpi=150, bbox_inches="tight")
    print(f"  Saved → {path}")
    plt.close(fig)


# ─── Entry point ──────────────────────────────────────────────────────────────

def main() -> None:
    parser = argparse.ArgumentParser(
        description="Generate comprehensive 6-figure trajectory analysis suite."
    )
    parser.add_argument(
        "--output-dir", "-o", default=".",
        help="Output directory (default: current directory).",
    )
    parser.add_argument(
        "--figure", "-f", type=int, choices=range(1, 7),
        help="Generate only this figure (1-6). Default: all.",
    )
    args = parser.parse_args()

    os.makedirs(args.output_dir, exist_ok=True)
    print(f"\nGenerating trajectory analysis plots → {args.output_dir}/\n")

    fns = [
        plot_parameterization,
        plot_conditioning_stages,
        plot_all_joints,
        plot_planned_vs_actual,
        plot_phase_portrait,
        plot_tracking_correction,
    ]

    if args.figure is not None:
        fns[args.figure - 1](args.output_dir)
    else:
        for fn in fns:
            fn(args.output_dir)

    print("\nDone.  Open any PNG to view the analysis.")


if __name__ == "__main__":
    main()
