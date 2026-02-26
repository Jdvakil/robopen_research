#!/usr/bin/env python3
"""
plot_conditioned_trajectories.py
─────────────────────────────────
Generate and save plots showing the velocity conditioning pipeline on
realistic synthetic trajectories (no robot or cuRobo required).

Plots saved:
  velocity_conditioning_overview.png  – raw vs conditioned for 3 scenario types
  velocity_conditioning_limits.png    – implied acceleration with limit bands
  velocity_conditioning_boundary.png  – zoomed start/end ramp detail

Run:
    python -m scripts.test.plot_conditioned_trajectories
"""

from __future__ import annotations

import os
import sys

import numpy as np
import matplotlib
matplotlib.use("Agg")          # headless – no display needed
import matplotlib.pyplot as plt
import matplotlib.gridspec as gridspec

_HERE = os.path.dirname(os.path.abspath(__file__))
_ROOT = os.path.abspath(os.path.join(_HERE, "../.."))
if _ROOT not in sys.path:
    sys.path.insert(0, _ROOT)

from scripts.utils.curobo_velocity_controller import (
    CONTROL_DT,
    JOINT_VEL_MAX,
    JOINT_ACC_MAX,
    VEL_LIMIT,
    ACC_LIMIT,
    smooth_velocity_profile,
    validate_and_clip_velocity,
    diagnose_velocity_profile,
)

# ─── Colour scheme ────────────────────────────────────────────────────────────
C_RAW   = "#e07b39"   # orange – raw cuRobo-like output
C_COND  = "#3a78c9"   # blue   – conditioned profile
C_LIMIT = "#d62728"   # red    – hardware limit
C_SAFE  = "#2ca02c"   # green  – safety margin

JOINT_LABELS = [f"J{i+1}" for i in range(7)]


# ─── Synthetic trajectory generators ─────────────────────────────────────────

def make_quintic_traj(duration_s: float = 2.5, peak_fraction: float = 0.7) -> np.ndarray:
    """5th-order minimum-jerk-like velocity profile (representative of cuRobo).

    v(t) = v_peak * sin(π t / T)^2   (smooth bell, zero at endpoints)
    """
    T = int(round(duration_s / CONTROL_DT))
    t = np.linspace(0.0, np.pi, T)
    amp = peak_fraction * VEL_LIMIT   # scale each joint to peak_fraction of limit
    vel = np.outer(np.sin(t) ** 2, amp)
    return vel


def make_curobo_like_traj(duration_s: float = 3.0) -> np.ndarray:
    """Multi-segment bell curve mimicking a cuRobo joint-space trajectory.

    Each joint has a slightly different phase and amplitude, as happens in
    real cuRobo output when joints move by different amounts.
    """
    T = int(round(duration_s / CONTROL_DT))
    t = np.linspace(0.0, np.pi, T)

    # Different peak velocities and slight phase offsets per joint
    peaks = np.array([0.60, 0.35, 0.50, 0.70, 0.55, 0.40, 0.45]) * VEL_LIMIT
    phase = np.array([0.00, 0.05, 0.02, 0.00, 0.03, 0.06, 0.01]) * np.pi

    vel = np.zeros((T, 7))
    for j in range(7):
        t_j = t + phase[j]
        t_j = np.clip(t_j, 0, np.pi)
        vel[:, j] = peaks[j] * np.sin(t_j) ** 2

    return vel


def make_noisy_traj(base: np.ndarray, noise_scale: float = 0.02) -> np.ndarray:
    """Add high-frequency planner noise to a trajectory."""
    rng = np.random.default_rng(seed=42)
    noise = rng.normal(0, noise_scale * VEL_LIMIT[None, :], base.shape)
    # High-frequency noise only (not low-frequency drift)
    from scipy.signal import butter, filtfilt
    b, a = butter(2, 0.4, btype="high")
    for j in range(7):
        noise[:, j] = filtfilt(b, a, noise[:, j])
    return base + noise


# ─── Plot 1: Overview (raw vs conditioned, 3 scenarios) ──────────────────────

def plot_overview(out_path: str = "velocity_conditioning_overview.png") -> None:
    fig = plt.figure(figsize=(18, 14))
    fig.suptitle(
        "CuRoboVelocityController – Velocity Conditioning Pipeline\n"
        "Raw trajectory vs. conditioned output (7 joints, 3 representative scenarios)",
        fontsize=13, fontweight="bold",
    )

    gs = gridspec.GridSpec(7, 3, figure=fig, hspace=0.08, wspace=0.35)

    scenarios = [
        ("Smooth quintic\n(typical cuRobo)", make_quintic_traj(2.5, 0.70)),
        ("Multi-joint bell\n(different amplitudes)", make_curobo_like_traj(3.0)),
        ("Noisy planner output\n(with SG smoothing)", make_curobo_like_traj(2.5)),
    ]
    # For the 3rd scenario, add noise to the raw input
    raw_s2 = make_curobo_like_traj(2.5)
    scenarios[2] = ("Noisy planner output\n(with SG smoothing)", make_noisy_traj(raw_s2))

    for col, (title, raw) in enumerate(scenarios):
        cond = smooth_velocity_profile(raw)
        cond = validate_and_clip_velocity(cond, verbose=False)

        t_raw  = np.arange(raw.shape[0]) * CONTROL_DT
        t_cond = np.arange(cond.shape[0]) * CONTROL_DT

        for row in range(7):
            ax = fig.add_subplot(gs[row, col])
            ax.plot(t_raw,  raw[:, row],  color=C_RAW,  lw=0.8, alpha=0.55, label="raw")
            ax.plot(t_cond, cond[:, row], color=C_COND, lw=1.1, alpha=0.90, label="conditioned")
            ax.axhline( VEL_LIMIT[row], color=C_LIMIT, ls="--", lw=0.7)
            ax.axhline(-VEL_LIMIT[row], color=C_LIMIT, ls="--", lw=0.7)
            ax.set_ylabel(JOINT_LABELS[row], fontsize=8)
            ax.tick_params(labelsize=7)
            ax.grid(True, ls=":", alpha=0.4)

            if row == 0:
                ax.set_title(title, fontsize=9, fontweight="bold")
                ax.legend(loc="upper right", fontsize=6.5)
            if row < 6:
                ax.set_xticklabels([])
            else:
                ax.set_xlabel("Time [s]", fontsize=8)

    fig.text(0.01, 0.5, "Joint velocity  [rad/s]", va="center",
             rotation="vertical", fontsize=10)

    plt.savefig(out_path, dpi=150, bbox_inches="tight")
    print(f"[plot] Saved {out_path}")
    plt.close(fig)


# ─── Plot 2: Implied acceleration with limit bands ────────────────────────────

def plot_accelerations(out_path: str = "velocity_conditioning_limits.png") -> None:
    raw = make_curobo_like_traj(3.0)

    # Inject a short velocity spike to stress-test the acc clip
    spike_start = int(0.4 / CONTROL_DT)
    spike_end   = spike_start + 5
    raw[spike_start:spike_end] += 0.8 * VEL_LIMIT[None, :]

    cond = smooth_velocity_profile(raw)
    cond = validate_and_clip_velocity(cond, verbose=False)

    acc_raw  = np.diff(raw,  axis=0) / CONTROL_DT
    acc_cond = np.diff(cond, axis=0) / CONTROL_DT
    t_acc    = np.arange(acc_raw.shape[0]) * CONTROL_DT

    fig, axes = plt.subplots(7, 2, figsize=(16, 14), sharey=False)
    fig.suptitle(
        "CuRoboVelocityController – Implied Acceleration\n"
        "Left: raw cuRobo output  |  Right: after conditioning\n"
        "(Red dashed = hardware acc limit, Green dashed = 85 % safety margin)",
        fontsize=12, fontweight="bold",
    )

    for j in range(7):
        for col, (ax, data, label) in enumerate([
            (axes[j, 0], acc_raw[:, j],  "raw"),
            (axes[j, 1], acc_cond[:, j], "conditioned"),
        ]):
            ax.fill_between(t_acc, -ACC_LIMIT[j], ACC_LIMIT[j],
                            alpha=0.10, color=C_SAFE, label="safe zone")
            ax.plot(t_acc, data, lw=0.7,
                    color=C_RAW if col == 0 else C_COND, label=label)
            ax.axhline( JOINT_ACC_MAX[j], color=C_LIMIT, ls="--", lw=0.8,
                        label="hw limit" if j == 0 and col == 0 else None)
            ax.axhline(-JOINT_ACC_MAX[j], color=C_LIMIT, ls="--", lw=0.8)
            ax.axhline( ACC_LIMIT[j], color=C_SAFE, ls="-.", lw=0.8,
                        label="85 % limit" if j == 0 and col == 0 else None)
            ax.axhline(-ACC_LIMIT[j], color=C_SAFE, ls="-.", lw=0.8)
            ax.set_ylabel(f"{JOINT_LABELS[j]} [rad/s²]", fontsize=8)
            ax.tick_params(labelsize=7)
            ax.grid(True, ls=":", alpha=0.35)

            if j == 0:
                ax.set_title(f"{'Raw' if col == 0 else 'Conditioned'} – implied acceleration",
                             fontsize=9)
                ax.legend(loc="upper right", fontsize=6.5)
            if j < 6:
                ax.set_xticklabels([])
            else:
                ax.set_xlabel("Time [s]", fontsize=8)

    plt.tight_layout()
    plt.savefig(out_path, dpi=150, bbox_inches="tight")
    print(f"[plot] Saved {out_path}")
    plt.close(fig)


# ─── Plot 3: Boundary ramp detail ─────────────────────────────────────────────

def plot_boundary_ramp(out_path: str = "velocity_conditioning_boundary.png") -> None:
    raw = make_curobo_like_traj(2.0)
    cond = smooth_velocity_profile(raw)
    cond = validate_and_clip_velocity(cond, verbose=False)

    t = np.arange(raw.shape[0]) * CONTROL_DT

    # Zoom windows: first 0.35 s (ramp-up) and last 0.35 s (ramp-down)
    zoom_start_n = int(0.35 / CONTROL_DT)
    zoom_end_n   = int(0.35 / CONTROL_DT)

    fig, axes = plt.subplots(2, 7, figsize=(20, 7))
    fig.suptitle(
        "CuRoboVelocityController – Cosine Boundary Ramp Detail\n"
        "Top: ramp-up (first 350 ms)  |  Bottom: ramp-down (last 350 ms)\n"
        "Orange = raw, Blue = conditioned",
        fontsize=12, fontweight="bold",
    )

    for j in range(7):
        # ── Ramp-up ──────────────────────────────────────────────────────────
        ax = axes[0, j]
        ax.plot(t[:zoom_start_n] * 1000,
                raw[:zoom_start_n, j],  color=C_RAW,  lw=1.2, alpha=0.7, label="raw")
        ax.plot(t[:zoom_start_n] * 1000,
                cond[:zoom_start_n, j], color=C_COND, lw=1.5, label="cond")
        ax.axhline(0, color="k", lw=0.4)
        ax.set_title(JOINT_LABELS[j], fontsize=9)
        ax.set_xlabel("Time [ms]", fontsize=7)
        if j == 0:
            ax.set_ylabel("Velocity [rad/s]", fontsize=8)
            ax.legend(fontsize=6.5)
        ax.tick_params(labelsize=7)
        ax.grid(True, ls=":", alpha=0.4)

        # ── Ramp-down ─────────────────────────────────────────────────────────
        ax2 = axes[1, j]
        ax2.plot(t[-zoom_end_n:] * 1000,
                 raw[-zoom_end_n:, j],  color=C_RAW,  lw=1.2, alpha=0.7)
        ax2.plot(t[-zoom_end_n:] * 1000,
                 cond[-zoom_end_n:, j], color=C_COND, lw=1.5)
        ax2.axhline(0, color="k", lw=0.4)
        ax2.set_xlabel("Time [ms]", fontsize=7)
        if j == 0:
            ax2.set_ylabel("Velocity [rad/s]", fontsize=8)
        ax2.tick_params(labelsize=7)
        ax2.grid(True, ls=":", alpha=0.4)

    plt.tight_layout()
    plt.savefig(out_path, dpi=150, bbox_inches="tight")
    print(f"[plot] Saved {out_path}")
    plt.close(fig)


# ─── Diagnostics print ────────────────────────────────────────────────────────

def print_diagnostics() -> None:
    print("\n" + "=" * 70)
    print("  Conditioning diagnostics for representative trajectories")
    print("=" * 70)

    for name, raw in [
        ("Smooth quintic (2.5 s)", make_quintic_traj(2.5, 0.70)),
        ("Multi-joint bell (3.0 s)", make_curobo_like_traj(3.0)),
        ("Noisy planner output",    make_noisy_traj(make_curobo_like_traj(2.5))),
    ]:
        cond = smooth_velocity_profile(raw)
        cond = validate_and_clip_velocity(cond, verbose=False)
        r = diagnose_velocity_profile(cond)

        print(f"\n  [{name}]")
        print(f"    steps    : {r['n_steps']}  ({r['duration_s']:.3f} s)")
        print(f"    start_vel: {r['start_vel'].round(6)}")
        print(f"    end_vel  : {r['end_vel'].round(6)}")
        print(f"    max vel  : {r['max_vel'].round(4)}")
        print(f"    max acc  : {r['max_acc'].round(3)}")
        v_ok = "✓ PASS" if len(r["vel_violations"]) == 0 else f"✗ FAIL ({len(r['vel_violations'])} viols)"
        a_ok = "✓ PASS" if len(r["acc_violations"]) == 0 else f"✗ FAIL ({len(r['acc_violations'])} viols)"
        print(f"    vel check: {v_ok}")
        print(f"    acc check: {a_ok}")

    print("\n" + "=" * 70)


# ─── Entry point ──────────────────────────────────────────────────────────────

if __name__ == "__main__":
    print_diagnostics()
    plot_overview()
    plot_accelerations()
    plot_boundary_ramp()
    print("\n[plot] All plots saved.")
