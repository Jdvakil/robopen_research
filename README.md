# RoboPen Research

Research repository for real-time collision-free trajectory planning and execution
on the **Franka Emika FR3** robotic arm.  Supports motion sources from
[cuRobo](https://curobo.org) (GPU-accelerated), a built-in quintic polynomial
planner (CPU-only), and **learned policies** (ACT, Diffusion Policy, or any joint-position
sequence).  All sources pass through the same velocity conditioning pipeline to
guarantee safety on the FR3's libfranka velocity controller.

---

## Table of Contents

1. [Overview](#overview)
2. [Architecture](#architecture)
3. [Time Parameterization](#time-parameterization)
4. [Trajectory Optimization Pipeline](#trajectory-optimization-pipeline)
5. [FR3 Hardware Limits](#fr3-hardware-limits)
6. [Closed-Loop Trajectory Correction](#closed-loop-trajectory-correction)
7. [Learned Policy Integration (ACT / Diffusion)](#learned-policy-integration)
8. [Repository Layout](#repository-layout)
9. [ROS2 Service Reference](#ros2-service-reference)
10. [Setup](#setup)
11. [Usage Examples](#usage-examples)
12. [Offline Verification (No Robot)](#offline-verification-no-robot)
13. [Analysis Plots](#analysis-plots)
14. [Tunable Parameters](#tunable-parameters)
15. [Dependencies](#dependencies)

---

## Overview

The central challenge in robot velocity control is bridging any planner's output
to libfranka's hard real-time controller without triggering velocity or acceleration
reflex errors.  This repository solves that end-to-end:

| Capability | Details |
|------------|---------|
| Collision-free planning | cuRobo GPU planner with configurable world model |
| CPU-only fallback | Quintic polynomial planner (no GPU, no cuRobo) |
| Learned policy bridge | ACT / Diffusion Policy position sequences → safe velocities |
| Velocity conditioning | 4-stage pipeline (SG filter + cosine ramps + acc clip) |
| Closed-loop correction | Segment-based replanning on position drift |
| Offline verification | Full analysis suite without robot or GPU |
| 3D visualization | Foxglove Studio MCAP from any trajectory |

---

## Architecture

```
┌──────────────────────────────────────────────────────────────────────────┐
│                            Host machine                                  │
│                                                                          │
│   Motion source (choose one)                                             │
│   ├─ cuRobo GPU planner       → velocities at 1 kHz (CONTROL_DT)        │
│   ├─ Quintic polynomial       → velocities at 10 ms (TRAJ_DT)           │
│   └─ Learned policy (ACT/DP) → positions at 20–100 ms → differentiate   │
│                │                                                         │
│                ▼                                                         │
│   ┌──────────────────────────────────────────┐                          │
│   │   Velocity Conditioning Pipeline         │                          │
│   │                                          │                          │
│   │   Stage 1: Savitzky-Golay smoothing      │  removes planner noise   │
│   │   Stage 2: Cosine ramp-up  (200 ms)      │  v[0]=0, dv/dt[0]=0     │
│   │   Stage 3: Cosine ramp-down (200 ms)     │  v[-1]=0, dv/dt[-1]=0   │
│   │   Stage 4: Velocity clip  (90 % hw)      │                          │
│   │   Stage 5: Acceleration clip (85 % hw)   │  2-pass O(T) guarantee   │
│   └──────────────────────────────────────────┘                          │
│                │                                                         │
│                ▼                                                         │
│   /execute_plan ROS2 service  →  franka_pybridge  →  libfranka 1 kHz   │
│                                                                          │
│   Optional: SegmentedTracker queries /get_q between segments,            │
│             replans if position error exceeds threshold.                  │
└──────────────────────────────────────────────────────────────────────────┘
                │  FCI / libfranka
                ▼
       Franka Emika FR3
```

---

## Time Parameterization

Time parameterization assigns a *speed* to each point along a geometric path.
A path P(s) in joint space (parameterized by arc length s) combined with a
time law s(t) gives a full trajectory q(t) = P(s(t)).

Three methods are compared in **Figure 1** (`analysis_01_parameterization.png`):

### 1. Naive Linear Interpolation (dangerous)

```
q(t) = q₀ + (q_f − q₀) · t/T
```

- Velocity is **constant**: `dq/dt = (q_f − q₀)/T`
- Acceleration is **zero** everywhere except at the endpoints.
- At t = 0 and t = T, velocity jumps discontinuously →
  **implied acceleration = (Δv)/dt → ∞** as dt → 0.
- This immediately triggers libfranka's acceleration safety check.

### 2. Quintic Polynomial (minimum-jerk, CPU-only)

Given start q₀ and goal q_f over duration T, the minimum-jerk trajectory is:

```
τ(t) = t / T   ∈ [0, 1]

q(τ)  =  q₀  +  (q_f − q₀) · [10τ³ − 15τ⁴ + 6τ⁵]

dq/dt = (q_f − q₀)/T · [30τ² − 60τ³ + 30τ⁴]

d²q/dt² = (q_f − q₀)/T² · [60τ − 180τ² + 120τ³]
```

Boundary conditions satisfied **analytically**:

| t   | q(t)  | dq/dt | d²q/dt² |
|-----|-------|-------|---------|
| 0   | q₀    | 0     | 0       |
| T   | q_f   | 0     | 0       |

The velocity profile is a smooth symmetric bell curve. Acceleration is
bounded and has zero values at both endpoints. This is the baseline used
for offline verification and plot generation.

**Location:** `scripts/utils/utils.py` — `generate_trajectory()` using torch,
plus `_quintic_blend()` in both `verify_trajectory.py` and `plot_trajectory_analysis.py`
using pure numpy.

### 3. cuRobo (GPU-accelerated trajectory optimization)

cuRobo solves a constrained trajectory optimization problem:

```
minimize   ∫ ||q̈(t)||² dt  +  λ_col · cost_collision(q)
subject to:  q(0) = q_start,  q(T) = q_goal
             |q̇_i(t)| ≤ dq_max_i    ∀ t, i
             |q̈_i(t)| ≤ ddq_max_i   ∀ t, i
```

cuRobo delivers interpolated (positions, velocities) at a configurable
`interpolation_dt`.  We set `interpolation_dt = CONTROL_DT = 0.001 s` so each
waypoint maps **1:1** to one libfranka control tick — no resampling needed.

**Important:** cuRobo's output is not guaranteed to start at exactly zero
velocity (the optimizer finds the best trajectory from the given start *state*,
which includes a specified start velocity, but numerical precision means the
first commanded velocity may be a small non-zero value). The conditioning
pipeline handles this.

### 4. Learned Policies (ACT, Diffusion Policy)

Learned visuomotor policies output joint position targets at a fixed rate:

| Policy | Typical output rate | Action dimension |
|--------|--------------------|--------------------|
| ACT    | 50 Hz (dt = 20 ms) | 7 joint positions  |
| Diffusion Policy | 10–50 Hz | 7 joint positions |
| Any other | arbitrary dt | any dim → select joints |

The bridge (`condition_policy_positions()` in `curobo_velocity_controller.py`)
differentiates positions → velocities, then runs the full conditioning pipeline:

```python
from scripts.utils.curobo_velocity_controller import condition_policy_positions

# act_positions: (H, 7) numpy array of joint positions from the policy
vel_conditioned = condition_policy_positions(act_positions, dt=1/50)
```

---

## Trajectory Optimization Pipeline

### Why raw planner output crashes the robot

libfranka's velocity controller runs at **1 kHz** and enforces on every tick:

```
|dq_d[k]|                    < dq_max[j]      — velocity limit
|dq_d[k] − dq_d[k−1]| / dt  < ddq_max[j]     — acceleration limit
```

where `dt = 0.001 s`.  Any single violation triggers an immediate reflex error
that halts the robot and requires `/error_recovery` to clear.

Raw cuRobo output fails because:
1. Robot is at rest (`dq = 0`) when streaming starts.
2. First cuRobo velocity waypoint is non-zero → implied acceleration `= vel₁/dt`.
   For a modest `vel₁ = 0.1 rad/s`: `0.1/0.001 = 100 rad/s²` >> `ddq_max`.
3. Numerical noise in the planner → acceleration spikes between consecutive
   waypoints.

The **acceleration limit violation** (not velocity) is almost always the first
failure mode.

### Stage 1 — Savitzky-Golay Interior Smoothing

A Savitzky-Golay (SG) filter fits a least-squares polynomial of degree *p* to
a sliding window of *w* samples and replaces the center sample with the
polynomial's value.

```
window = 11 samples,  polynomial order = 3
```

Properties:
- Preserves the **shape** (peaks, troughs) of the velocity profile — unlike a
  simple moving average which shifts and attenuates features.
- Reduces high-frequency noise amplitude by ~O(√w) in the frequency domain.
- Does **not** modify the trajectory endpoints (boundary is handled separately).

Implementation: `scipy.signal.savgol_filter` applied per joint.

### Stage 2 — Cosine Ramp-Up (200 ms)

The first `ramp_steps = round(RAMP_DURATION / dt)` waypoints are multiplied
by a half-cosine (Hann) window:

```
ramp(k) = 0.5 · [1 − cos(π · k / ramp_steps)]     k = 0, 1, …, ramp_steps−1

ramp(0)           = 0    →  v[0] = 0       (exact zero velocity)
d/dk ramp|_{k=0}  = 0    →  a[0] = 0       (exact zero acceleration)
ramp(ramp_steps)  = 1    →  smooth join to the full trajectory
```

This is mathematically equivalent to multiplying by the Hann window, which
has the property of zero value AND zero derivative at both endpoints.  The
result is **C² continuity** at the trajectory start — velocity and acceleration
are both continuous with zero boundary values.

### Stage 3 — Cosine Ramp-Down (200 ms)

Mirror of Stage 2 at the trajectory end:

```
vel[-ramp_steps:] *= ramp[::-1]
vel[-1] = 0.0       (strict zero enforced against float residue)
```

Forces `v[-1] = 0`, `dv/dt[-1] = 0`, preventing velocity overshoot at the end.

### Stage 4 — Velocity Hard Clip

```
v_clipped[k, j] = clip(v[k, j],  −VEL_LIMIT[j],  +VEL_LIMIT[j])
```

where `VEL_LIMIT[j] = 0.90 × dq_max[j]`.  This removes any waypoints that
exceed 90 % of the FR3 hardware velocity limit, providing a 10 % safety margin.

### Stage 5 — Forward-Backward Acceleration Clip (O(T), 2 passes)

The per-step maximum velocity change allowed is:

```
dv_max[j] = nextafter(ACC_LIMIT[j] × dt, 0)
           = 0.85 × ddq_max[j] × 0.001  (one ULP below to avoid float rounding)
```

**Forward pass** (left-to-right): limits how fast velocity can rise:

```python
for k in range(1, T):
    delta = vel[k] − vel[k−1]
    vel[k] = vel[k−1] + clip(delta, −dv_max, +dv_max)
```

**Backward pass** (right-to-left): limits how fast velocity can fall:

```python
for k in range(T−2, −1, −1):
    delta = vel[k] − vel[k+1]
    vel[k] = vel[k+1] + clip(delta, −dv_max, +dv_max)
```

This is **guaranteed to converge in exactly 2 passes** for any input, regardless
of severity.  An earlier implementation used iterative 3-point moving averages
(O(1/√K) convergence) and required ~100 iterations — the forward-backward clip
replaces that entirely.

**Float-precision note:** `acc_limit × dt / dt` can exceed `acc_limit` by ~1e-14
due to IEEE 754 rounding.  The `np.nextafter(..., 0)` call sets `dv_max` one
ULP below the nominal value, preventing spurious false violations.

---

## FR3 Hardware Limits

From the [Franka FR3 documentation](https://frankaemika.github.io/docs/control_parameters):

| Joint | Vel max (rad/s) | Acc max (rad/s²) | Jerk max (rad/s³) | VEL_LIMIT (90%) | ACC_LIMIT (85%) |
|-------|-----------------|------------------|-------------------|-----------------|-----------------|
| J1    | 2.1750          | 15.0             | 7 500             | 1.9575          | 12.75           |
| J2    | 2.1750          | 7.5              | 3 750             | 1.9575          | 6.375           |
| J3    | 2.1750          | 10.0             | 5 000             | 1.9575          | 8.50            |
| J4    | 2.1750          | 12.5             | 6 250             | 1.9575          | 10.625          |
| J5    | 2.6100          | 15.0             | 7 500             | 2.3490          | 12.75           |
| J6    | 2.6100          | 20.0             | 10 000            | 2.3490          | 17.00           |
| J7    | 2.6100          | 20.0             | 10 000            | 2.3490          | 17.00           |

**J2** has the tightest acceleration limit (7.5 rad/s²) and is the binding
constraint for trajectory smoothness.  This was the root cause of previous
reflex errors: small velocity oscillations from the planner on J2 produced
accelerations that easily exceeded 7.5 rad/s².

---

## Closed-Loop Trajectory Correction

### The open-loop drift problem

Even with perfect velocity conditioning, real robots accumulate position error:

- **Servo lag:** The joint velocity controller does not respond instantaneously
  to commanded velocities (bandwidth limit ~100–500 Hz for industrial joints).
- **Bias drift:** Thermal expansion, friction, unmodelled compliance cause slow
  position drift at ~0.5–2 mrad/s.
- **Noise:** Sensor quantization and communication jitter add ~1–3 mrad RMS noise.

In a long trajectory, these errors compound, and the robot may end at a different
position than intended.

### Segment-based replanning strategy

```
For each segment k:
  1. Condition and send vel_plan[k*S : (k+1)*S] to /execute_plan
  2. Wait for the segment to complete (synchronous ROS2 service call)
  3. Query /get_q → q_actual
  4. Compute: e = q_actual − q_ref[end of segment k]
  5. If max(|e|) > correction_threshold:
         Re-plan from q_actual to q_goal using cuRobo
         Condition the new velocity profile
         (ptr = 0, restart segment loop on new plan)
     Else:
         Continue with the next segment of the original plan
```

**Complexity:**
- Each correction is a full cuRobo re-plan (~50–200 ms on GPU).
- Total wall-clock overhead: `n_replans × planning_time`.
- Typical: 0–3 replans per motion, each triggered only when drift > 20 mrad.

**Location:** `scripts/utils/trajectory_tracker.py` — `SegmentedTracker` class
(inherits `CuRoboVelocityController`).

### Simulated correction (offline, no robot)

`simulate_closed_loop_correction()` in `trajectory_tracker.py` models the
correction loop in simulation using `simulate_tracking()`.  Results are shown
in **Figure 6** (`analysis_06_tracking_correction.png`).

---

## Learned Policy Integration

### ACT (Action Chunking with Transformers)

ACT predicts a sequence ("chunk") of joint positions at 50 Hz.  The typical
integration pattern:

```python
from scripts.utils.curobo_velocity_controller import condition_policy_positions

# During inference loop
while not done:
    obs = get_observation()                          # camera + proprioception
    act_positions = policy.predict(obs)              # (chunk_size, 7) positions
    vel = condition_policy_positions(act_positions, dt=1/50)  # (chunk_size, 7) velocities

    # Build and send /execute_plan request
    req = ExecutePlan.Request()
    req.vel_traj    = [_to_jda(v) for v in vel]
    req.initial_pos = _to_jda(current_q)
    exec_client.call_async(req)
    spin_until_complete()
```

### Diffusion Policy

Diffusion Policy typically predicts longer horizons at lower frequency (10–20 Hz):

```python
dp_positions = policy.predict(obs)     # (H, 7) at 10 Hz → dt = 0.1 s
vel = condition_policy_positions(dp_positions, dt=0.1)
```

The conditioning pipeline automatically adapts to any `dt`.

### Key considerations for learned policies

| Issue | Solution |
|-------|---------|
| Policy outputs may not be zero at boundaries | Cosine ramp forces v[0]=v[-1]=0 |
| Policy may command velocities beyond hardware limits | Velocity + acc clip applied |
| Output frequency may differ from robot control rate | `dt` parameter adjusts all limits |
| Policy outputs end-effector poses (not joints) | Use cuRobo IK in `move_to_ee_goal()` |
| Policy outputs are noisy | SG filter applied before ramping |

### Note on action space mismatch

If your policy outputs 14-DOF (7 joint + 7 gripper), extract the first 7:
```python
vel = condition_policy_positions(act_positions[:, :7], dt=1/50)
```

---

## Repository Layout

```
robopen_research/
│
├── README.md                                # This file
├── setup.py                                 # pip-installable package
├── .gitignore
├── .gitmodules                              # franka_pybridge{,_interfaces} submodules
│
├── scripts/
│   ├── __init__.py
│   ├── utils/
│   │   ├── __init__.py
│   │   ├── curobo_velocity_controller.py   ← Main controller + conditioning pipeline
│   │   │                                     condition_policy_positions()  ← policy bridge
│   │   ├── trajectory_tracker.py           ← Closed-loop segment tracker + simulation
│   │   │                                     SegmentedTracker (ROS2 node)
│   │   │                                     simulate_tracking()           ← offline sim
│   │   │                                     simulate_closed_loop_correction()
│   │   ├── execute_plan_async.py            ← Legacy /execute_plan helper (open-loop)
│   │   ├── get_q_client_async.py            ← /get_q client
│   │   ├── send_to_foxglove.py              ← MCAP recorder for Foxglove Studio
│   │   └── utils.py                         ← Quintic planner (torch-based)
│   │
│   └── test/
│       ├── __init__.py
│       ├── test_curobo_controller.py        ← Unit + integration tests (3/3 pass)
│       ├── verify_trajectory.py             ← Offline single-trajectory verifier
│       ├── plot_trajectory_analysis.py      ← 6-figure comprehensive analysis suite
│       ├── plot_conditioned_trajectories.py ← Earlier 3-figure conditioning overview
│       └── test_data.py                     ← Planner comparison + MCAP export
│
├── ros2_ws/
│   └── src/franka_pybridge_interfaces/     ← git submodule (ROS2 msg/srv definitions)
│
├── submodules/                              ← Legacy submodule mirror
│
├── analysis/                               ← Generated analysis plots (gitignored)
│   ├── analysis_01_parameterization.png
│   ├── analysis_02_conditioning_stages.png
│   ├── analysis_03_all_joints.png
│   ├── analysis_04_planned_vs_actual.png
│   ├── analysis_05_phase_portrait.png
│   └── analysis_06_tracking_correction.png
│
└── *.mcap                                   ← Recorded test trajectories (Foxglove)
```

---

## ROS2 Service Reference

All services are provided by the `franka_pybridge` node on the robot controller.

### `/get_q` — `franka_pybridge_interfaces/srv/GetQ`

```
Request:   (empty)
Response:  JointDataArray joint_config   # float64[7] — joint positions [rad]
           bool           success
```

### `/execute_plan` — `franka_pybridge_interfaces/srv/ExecutePlan`

```
Request:   JointDataArray[] vel_traj     # list of float64[7] velocity waypoints [rad/s]
           JointDataArray   initial_pos  # starting joint positions [rad]
Response:  bool success
```

Streams `vel_traj` to the velocity controller at **1 kHz**.  The service is
**synchronous** — it blocks until all waypoints have been executed.  Each
waypoint corresponds to one 1 ms libfranka control tick.

### Other services

| Service             | Purpose                         |
|---------------------|---------------------------------|
| `/error_recovery`   | Clear latched reflex errors     |
| `/operate_gripper`  | Open / close / suction gripper  |
| `/set_load`         | Set end-effector payload mass   |

---

## Setup

### 1. Clone with submodules

```bash
git clone <this-repo>
cd robopen_research
git submodule update --init --recursive
```

### 2. Build the ROS2 workspace

```bash
source /opt/ros/humble/setup.bash
cd ros2_ws
rosdep install -i --from-path src --rosdistro humble -y
colcon build
source install/setup.bash
```

### 3. Install Python helpers

```bash
pip install -e .
pip install numpy scipy matplotlib foxglove-sdk
```

### 4. Install cuRobo (GPU planning only)

Follow the [cuRobo installation guide](https://curobo.org/get_started/1_install_instructions.html).
A CUDA-capable GPU is required.  All pure-math functions work without cuRobo.

---

## Usage Examples

### Move to a joint-space goal (cuRobo + ROS2)

```python
import rclpy
from scripts.utils.curobo_velocity_controller import CuRoboVelocityController

rclpy.init()
ctrl = CuRoboVelocityController()
ctrl.warmup()   # one-time GPU warm-up (~5 s)

home = [0.0, 0.0, 0.0, -1.75, 0.0, 1.75, -0.785]
success = ctrl.move_to_joint_goal(goal_q=home)

rclpy.shutdown()
```

### Move with closed-loop correction (SegmentedTracker + ROS2)

```python
import rclpy
from scripts.utils.trajectory_tracker import SegmentedTracker

rclpy.init()
tracker = SegmentedTracker(
    segment_duration=0.5,       # replan every 500 ms
    correction_threshold=0.02,  # replan if any joint error > 20 mrad
)
tracker.warmup()

result = tracker.move_with_tracking(
    goal_q=[0.5, -0.3, 0.1, -2.0, 0.2, 1.9, -0.5],
)

print(f"n_replans     : {result['n_replans']}")
print(f"tracking_rmse : {result['tracking_rmse']:.4f} rad")
rclpy.shutdown()
```

### Send an ACT / Diffusion Policy trajectory (ROS2)

```python
from scripts.utils.curobo_velocity_controller import condition_policy_positions, _to_jda
from franka_pybridge_interfaces.srv import ExecutePlan
import rclpy

rclpy.init()
node = rclpy.create_node("policy_runner")
exec_cli = node.create_client(ExecutePlan, "execute_plan")
exec_cli.wait_for_service()

# act_positions: (H, 7) numpy array from policy inference
vel = condition_policy_positions(act_positions, dt=1/50)

req = ExecutePlan.Request()
req.vel_traj    = [_to_jda(v) for v in vel]
req.initial_pos = _to_jda(current_q)

future = exec_cli.call_async(req)
rclpy.spin_until_future_complete(node, future)
```

---

## Offline Verification (No Robot)

### Single-trajectory verifier

```bash
# Default home → ready pose, plot + report only (no URDF needed):
python -m scripts.test.verify_trajectory

# With URDF for 3D Foxglove visualization:
python -m scripts.test.verify_trajectory \
    --urdf  /path/to/fr3.urdf \
    --start "0,0,0,-1.75,0,1.75,-0.785" \
    --goal  "0.5,-0.3,0.1,-2.0,0.2,1.9,-0.5" \
    --output-dir ./verify_out
```

Outputs:
- `verify_velocity_profile.png` — raw vs conditioned velocity/acceleration with limit bands
- `verify_raw.mcap` — unconditioned trajectory (Foxglove Studio 3D)
- `verify_conditioned.mcap` — conditioned trajectory (what the robot will actually execute)

Open in Foxglove Studio:
```bash
foxglove-studio verify_out/verify_conditioned.mcap
# → Add a '3D' panel → enable /tf from the topic list
```

### Comprehensive analysis suite

```bash
python -m scripts.test.plot_trajectory_analysis --output-dir ./analysis
```

Generates all 6 figures described in [Analysis Plots](#analysis-plots).

### Unit tests (no robot, no GPU)

```bash
python -m scripts.test.test_curobo_controller
# Expected output: 3/3 unit tests passed
```

---

## Analysis Plots

### Figure 1 — Time Parameterization Comparison

`analysis_01_parameterization.png`

Compares three methods on Joint 7 (largest angular displacement):

| Column | Method | Safety | Acceleration |
|--------|--------|--------|-------------|
| Left   | Naive linear | **UNSAFE** — reflex guaranteed | Impulse at t=0 and t=T |
| Middle | Quintic polynomial (raw) | SAFE if limits respected | Smooth double-hump |
| Right  | cuRobo-like + conditioned | **SAFE** — all limits enforced | Clipped to 85 % hw limit |

Shows: position · velocity · acceleration · jerk (4 rows).

**Key insight:** Linear interpolation gives near-infinite acceleration at the
trajectory endpoints, which always triggers libfranka reflex errors.  Quintic
removes this by construction.

---

### Figure 2 — Conditioning Pipeline (Stage by Stage)

`analysis_02_conditioning_stages.png`

Four stages shown for a "challenging" cuRobo-like profile:

| Stage | What it fixes |
|-------|--------------|
| Raw   | Non-zero v[0], noisy, possibly exceeds limits |
| Stage 1 (SG) | High-frequency noise removed |
| Stage 2 (ramp) | Boundary velocities and accelerations zeroed |
| Stage 3 (clip) | All values inside FR3 safe zone |

---

### Figure 3 — All 7 Joints Velocity and Acceleration

`analysis_03_all_joints.png`

Full joint-space view.  Orange = raw quintic, blue = conditioned.

Limit bands shown:
- Dashed red = 90 %/85 % safety limits (where the robot is commanded to stay)
- Dotted red = hardware limits (reflex fires if crossed)
- Green fill = safe zone

---

### Figure 4 — Planned vs Actual Trajectory (Simulated)

`analysis_04_planned_vs_actual.png`

Simulates realistic tracking with:
- Gaussian noise: σ = 2.5 mrad
- First-order velocity lag: α = 4.5 % (models servo bandwidth)
- Bias drift: γ = 1.0 mrad/s per joint

Three rows:
1. Position overlay: planned (blue) vs actual (red dashed) for all 7 joints
2. Signed position error e(t) = q_actual(t) − q_ref(t) per joint
3. ‖e‖∞ over time + per-joint RMSE bar chart

---

### Figure 5 — Phase Portraits

`analysis_05_phase_portrait.png`

Phase portrait (velocity vs position) for each joint, colored by time
(dark = start, bright = end).

- **Dashed:** planned trajectory through phase space
- **Solid:** simulated actual (with noise and lag)

Phase portraits reveal:
- Whether the trajectory is smooth in the velocity-position state space
- Whether the robot returns to the same region (useful for periodically repeating tasks)
- Velocity direction changes relative to position (curvature of the attractor)

---

### Figure 6 — Closed-Loop Correction Simulation

`analysis_06_tracking_correction.png`

Demonstrates the segment-based replanning algorithm:
- **Red:** open-loop (position error accumulates over the full trajectory)
- **Blue:** closed-loop (error is reset at each segment boundary via Kp correction)

Shows: ‖e‖∞ over time, per-joint RMSE reduction bar chart, signed error for
representative joints, and correction magnitude at each checkpoint.

**Typical result:** 40–70 % reduction in trajectory RMSE with 300 ms correction
segments and Kp = 3.0.

---

## Tunable Parameters

All constants are at the top of `scripts/utils/curobo_velocity_controller.py`:

| Parameter | Default | Description |
|-----------|---------|-------------|
| `CONTROL_DT` | `0.001` s | libfranka control rate (must not change) |
| `CUROBO_DT` | `0.001` s | cuRobo interpolation dt (must equal `CONTROL_DT`) |
| `RAMP_DURATION` | `0.20` s | Cosine ramp length at trajectory start/end |
| `SG_WINDOW` | `11` | SG filter window length (set to `0` to disable; must be odd) |
| `SG_POLYORDER` | `3` | SG filter polynomial order |
| `VEL_SAFETY_FACTOR` | `0.90` | Fraction of hardware velocity limit applied |
| `ACC_SAFETY_FACTOR` | `0.85` | Fraction of hardware acceleration limit applied |

SegmentedTracker parameters (constructor arguments):

| Parameter | Default | Description |
|-----------|---------|-------------|
| `segment_duration` | `0.5` s | Correction checkpoint interval |
| `correction_threshold` | `0.02` rad | Max joint error before replanning |

**Tuning guidance:**
- If the robot still triggers reflexes → increase `RAMP_DURATION` (try 0.30–0.50 s)
- If the trajectory is too slow → decrease `RAMP_DURATION` (minimum ≈ 0.10 s)
- If the policy output is very noisy → increase `SG_WINDOW` (try 21 or 31)
- If cuRobo velocities are smooth → set `SG_WINDOW = 0` to skip filtering

---

## Dependencies

| Package | Purpose | Required for |
|---------|---------|-------------|
| `numpy` | Array math | Everything |
| `scipy` | SG filter, rotations | Conditioning, MCAP |
| `matplotlib` | Plotting | Analysis plots |
| `rclpy` | ROS2 Python | Robot execution |
| `franka_pybridge_interfaces` | ROS2 service definitions | Robot execution |
| `curobo` | GPU motion planning | cuRobo planning |
| `torch` | Tensor backend | cuRobo, quintic (utils.py) |
| `foxglove` | MCAP recording | Foxglove visualization |
| `h5py` | HDF5 data loading | Policy data loading |
