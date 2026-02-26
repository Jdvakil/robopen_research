# RoboPen Research

Research repository for collision-free trajectory planning and execution on the
**Franka Emika FR3** robotic arm using [cuRobo](https://curobo.org) and
[ROS2 Humble](https://docs.ros.org/en/humble/).

---

## Table of Contents

1. [Overview](#overview)
2. [Architecture](#architecture)
3. [Repository Layout](#repository-layout)
4. [ROS2 Services](#ros2-services)
5. [Setup](#setup)
6. [Usage](#usage)
7. [The Velocity-Discontinuity Problem and Fix](#the-velocity-discontinuity-problem-and-fix)
8. [Visualization](#visualization)
9. [Dependencies](#dependencies)

---

## Overview

This stack lets you:

- Plan collision-free joint-space trajectories with **cuRobo** (GPU-accelerated).
- Execute those trajectories on a real FR3 robot at **1 kHz** via `franka_pybridge`.
- Visualize trajectories in **Foxglove Studio** using MCAP recordings.
- Compare cuRobo plans against a custom quintic-polynomial baseline.

The central correctness challenge is bridging cuRobo's planner output (joint
positions + velocities at fixed `dt`) to libfranka's hard real-time velocity
controller without triggering velocity/acceleration reflex errors.  The
`CuRoboVelocityController` in this repo solves that end-to-end.

---

## Architecture

```
┌──────────────────────────────────────────────────────────────────┐
│                        Host machine                              │
│                                                                  │
│  scripts/                                                        │
│  ├── utils/                                                      │
│  │   ├── curobo_velocity_controller.py   ← NEW (main controller) │
│  │   ├── execute_plan_async.py           ← legacy helper         │
│  │   ├── get_q_client_async.py           ← /get_q client         │
│  │   ├── send_to_foxglove.py             ← MCAP logging          │
│  │   └── utils.py                        ← polynomial fallback   │
│  └── test/                                                       │
│      ├── test_curobo_controller.py        ← NEW integration test │
│      └── test_data.py                     ← planner comparison   │
│                                                                  │
│  ros2_ws/  (ROS2 Humble workspace)                               │
│  └── src/franka_pybridge_interfaces/  (submodule)                │
└───────────────────────────┬──────────────────────────────────────┘
                            │  ROS2 services (DDS)
                            ▼
┌──────────────────────────────────────────────────────────────────┐
│              Robot controller (franka_pybridge node)             │
│                                                                  │
│  /get_q          → returns current joint positions               │
│  /execute_plan   → streams velocity commands at 1 kHz            │
│  /operate_gripper, /set_load, /error_recovery, …                 │
└───────────────────────────┬──────────────────────────────────────┘
                            │  libfranka / FCI
                            ▼
                   Franka FR3 hardware
```

### Data-flow for `CuRoboVelocityController.move_to_joint_goal()`

```
get_current_q()          /get_q  ──► current joint positions
        │
        ▼
cuRobo plan_single_js()  motion gen ──► (positions, velocities) @ 1 ms
        │
        ▼
condition_velocities()
   1. Savitzky-Golay interior smoothing   (removes planner noise)
   2. Cosine ramp-up (200 ms)             (v[0] = 0, dv/dt[0] = 0)
   3. Cosine ramp-down (200 ms)           (v[-1] = 0, dv/dt[-1] = 0)
   4. Velocity hard-clip  (90 % of FR3 limits)
   5. Acceleration enforcement (iterative 3-point smoothing)
        │
        ▼
/execute_plan service  ──► franka_pybridge ──► libfranka 1 kHz loop
```

---

## Repository Layout

```
robopen_research/
│
├── README.md
├── setup.py                        # pip-installable package
├── .gitmodules                     # franka_pybridge{,_interfaces} submodules
│
├── scripts/
│   ├── __init__.py
│   ├── utils/
│   │   ├── __init__.py
│   │   ├── curobo_velocity_controller.py   # Time-parameterised controller
│   │   ├── execute_plan_async.py            # Legacy service client
│   │   ├── get_q_client_async.py            # /get_q client
│   │   ├── send_to_foxglove.py              # MCAP / Foxglove logger
│   │   └── utils.py                         # Quintic polynomial planner
│   └── test/
│       ├── __init__.py
│       ├── test_curobo_controller.py        # Integration test (new controller)
│       └── test_data.py                     # Planner comparison + MCAP export
│
├── ros2_ws/
│   ├── src/
│   │   └── franka_pybridge_interfaces/     # git submodule (ROS2 msg/srv)
│   └── install/                            # colcon build output (gitignored)
│
├── submodules/                             # legacy submodule mirror
│
├── *.mcap                                  # recorded test trajectories
└── planner_comparison.png                  # joint-velocity comparison plot
```

---

## ROS2 Services

All services are provided by the `franka_pybridge` node running on the robot
controller side.

### `/get_q` — `franka_pybridge_interfaces/srv/GetQ`

```
Request:   (empty)
Response:  JointDataArray joint_config   # 7-element float64 array
           bool           success
```

Returns the current joint positions in radians.

### `/execute_plan` — `franka_pybridge_interfaces/srv/ExecutePlan`

```
Request:   JointDataArray[] vel_traj     # list of 7-element velocity waypoints
           JointDataArray   initial_pos  # starting joint positions
Response:  bool success
```

Streams `vel_traj` to the robot's velocity controller at **1 kHz**.
Each `JointDataArray.data` element is a 7-float list of joint velocities
in **rad/s**.

### `/error_recovery`

Clears latched reflex errors on the robot (call after a collision or
discontinuity error before re-executing).

### Other services

| Service             | Purpose                        |
|---------------------|--------------------------------|
| `/operate_gripper`  | Open / close / suction gripper |
| `/set_load`         | Set end-effector payload mass  |

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
# from the repo root
pip install -e .
```

### 4. Install cuRobo

Follow the [cuRobo installation guide](https://curobo.org/get_started/1_install_instructions.html).
A CUDA-capable GPU is required.

### 5. Verify services are available

With the robot controller running:

```bash
ros2 service list
# Expected:
# /get_q
# /execute_plan
# /operate_gripper
# /set_load
# /error_recovery
```

---

## Usage

### Move to a joint-space goal (recommended)

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

Or from the command line:

```bash
python -m scripts.test.test_curobo_controller
```

### Run planner comparison (no robot required)

```bash
python -m scripts.test.test_data
# → writes curobo_traj.mcap, home_traj.mcap, planner_comparison.png
```

---

## The Velocity-Discontinuity Problem and Fix

### Why the robot crashes

libfranka's velocity controller runs at **1 kHz** and enforces two hard
checks on every tick:

```
|dq_d[k]|                    < dq_max[joint]         (velocity limit)
|dq_d[k] − dq_d[k−1]| / dt  < ddq_max[joint]        (acceleration limit)
```

When a raw cuRobo velocity trajectory is sent directly to `/execute_plan`:

1. The robot is **at rest** → `dq = 0`.
2. The first commanded velocity is often **non-zero** (cuRobo's ramp starts
   numerically small but may not be exactly 0, and the legacy code's linear
   ramp from 0 → first waypoint creates an acceleration impulse).
3. The implied acceleration `(dq_first − 0) / 0.001` can easily exceed
   `ddq_max`, triggering a reflex immediately.

Additionally, the old `execute_plan_async.py` upsample logic **linearly**
interpolates velocity waypoints.  A piecewise-linear velocity profile has
**infinite jerk** at every knot point, which also violates libfranka's jerk
safety limits.

### What the new controller does

`CuRoboVelocityController.condition_velocities()` applies a four-stage
pipeline **after** cuRobo planning and **before** sending to `/execute_plan`:

| Stage | Method | Effect |
|-------|--------|--------|
| 1 | Savitzky-Golay filter (window=11, order=3) | Removes high-frequency planner noise while preserving the velocity shape |
| 2 | Cosine ramp-up (200 ms) | Forces `v[0] = 0`, `dv/dt[0] = 0`; blends from standstill with zero jerk |
| 3 | Cosine ramp-down (200 ms) | Forces `v[-1] = 0`, `dv/dt[-1] = 0`; stops without velocity overshoot |
| 4 | Velocity + acceleration clip | Clips to 90 %/85 % of FR3 hardware limits; iterative 3-point smoothing for acceleration violations |

The cosine (Hann) window used for ramp-up/down has the property:

```
ramp(t) = 0.5 * (1 − cos(π·t/T))

ramp(0)    = 0        → velocity starts at exactly 0
d/dt ramp|_{t=0} = 0  → acceleration starts at 0 (no impulse)
ramp(T)    = 1        → smooth join to the cuRobo profile
d/dt ramp|_{t=T} = 0  → acceleration is continuous at the join
```

This eliminates velocity and acceleration discontinuities at the trajectory
boundaries that caused libfranka reflex errors.

### FR3 hardware limits used

| Joint | Vel max (rad/s) | Acc max (rad/s²) | Jerk max (rad/s³) |
|-------|-----------------|------------------|-------------------|
| 1     | 2.1750          | 15.0             | 7 500             |
| 2     | 2.1750          | 7.5              | 3 750             |
| 3     | 2.1750          | 10.0             | 5 000             |
| 4     | 2.1750          | 12.5             | 6 250             |
| 5     | 2.6100          | 15.0             | 7 500             |
| 6     | 2.6100          | 20.0             | 10 000            |
| 7     | 2.6100          | 20.0             | 10 000            |

The controller applies **90 %** velocity margin and **85 %** acceleration
margin for additional safety headroom.

### Tunable parameters

All constants are at the top of `scripts/utils/curobo_velocity_controller.py`:

| Constant | Default | Description |
|----------|---------|-------------|
| `CONTROL_DT` | `0.001` s | Must equal libfranka's 1 kHz period |
| `CUROBO_DT` | `0.001` s | cuRobo `interpolation_dt` (must equal `CONTROL_DT`) |
| `RAMP_DURATION` | `0.20` s | Cosine ramp length at each end |
| `SG_WINDOW` | `11` | Savitzky-Golay window (set to `0` to disable) |
| `SG_POLYORDER` | `3` | Savitzky-Golay polynomial order |
| `VEL_SAFETY_FACTOR` | `0.90` | Fraction of hardware velocity limit |
| `ACC_SAFETY_FACTOR` | `0.85` | Fraction of hardware acceleration limit |

---

## Visualization

Trajectories can be inspected in [Foxglove Studio](https://foxglove.dev/studio):

```bash
# Record a trajectory to MCAP (no robot needed)
python -m scripts.test.test_data

# Open in Foxglove
foxglove-studio curobo_traj.mcap
```

The `send_to_foxglove.py` module parses the FR3 URDF directly and computes
forward-kinematics-based `tf` frames for every timestep, giving a full 3-D
robot visualization without requiring a running ROS2 instance.

---

## Dependencies

| Package | Purpose |
|---------|---------|
| `rclpy` | ROS2 Python client |
| `franka_pybridge_interfaces` | Custom ROS2 msg/srv definitions |
| `curobo` | GPU motion planning |
| `torch` | Tensor operations (cuRobo backend) |
| `numpy` | Array math |
| `scipy` | Savitzky-Golay filter, rotations |
| `foxglove` | MCAP recording |
| `h5py` | HDF5 data loading |
| `matplotlib` | Plotting |
