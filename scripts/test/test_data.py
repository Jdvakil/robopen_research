import os
import sys
import h5py
import numpy as np
# import rclpy 
import time

from scripts.utils.utils import get_traj

current_q = [0.06590688781828963, -0.05480727365702065, 0.023516947706278345, -1.694628690143063, -0.0374572261885069, 1.5694724421197674, 0.7400593550933321]

# Third Party
import torch
import scripts.utils.send_to_foxglove as send_to_foxglove


# cuRobo
from curobo.types.math import Pose
from curobo.types.robot import JointState
from curobo.util_file import get_robot_configs_path, join_path, load_yaml
from curobo.wrap.reacher.motion_gen import MotionGen, MotionGenConfig, MotionGenPlanConfig

def curobo_planner():
    world_config = {
        "cuboid": {
            "floor": {
                "dims": [5.0, 5.0, 0.2],
                "pose": [0.0, 0.0, -0.1, 1, 0, 0, 0.0],  # below the robot
                }
            }
        }

    motion_gen_config = MotionGenConfig.load_from_robot_config(
        "franka.yml",
        world_config,
        interpolation_dt=0.001,
    )
    motion_gen = MotionGen(motion_gen_config)
    motion_gen.warmup()

    #goal_pose = Pose.from_list([-0.4, 0.0, 0.4, 1.0, 0.0, 0.0, 0.0])  # x, y, z, qw, qx, qy, qz

    robot_cfg = load_yaml(join_path(get_robot_configs_path(), "franka.yml"))["robot_cfg"]
    retract_config = robot_cfg["kinematics"]["cspace"]["retract_config"]

    joint_names = getattr(motion_gen.kinematics, "joint_names", None)
    if joint_names is None:
        joint_names = motion_gen.robot_model.joint_names

    num_joints = len(joint_names)
    retract_vals = list(retract_config)
    if len(retract_vals) > num_joints:
        retract_vals = retract_vals[:num_joints]
    elif len(retract_vals) < num_joints:
        retract_vals = retract_vals + [0.0] * (num_joints - len(retract_vals))

    #retract_tensor = torch.tensor(
    #   [retract_vals], dtype=torch.float32, device=motion_gen.tensor_args.device
    #)

    start_tensor = torch.tensor(
        [current_q], dtype=torch.float32, device=motion_gen.tensor_args.device
    )

    start_state = JointState.from_position(
        start_tensor,
        joint_names=joint_names,
    )

    valid_start, start_status = motion_gen.check_start_state(start_state)
    print(f"Start state valid: {valid_start}")

    goal_joint_positions = torch.tensor(
        [[0.0, 0.0, 0.0, -1.75, 0.0, 1.75, -0.785]],  # replace with your target
        dtype=torch.float32,
        device=motion_gen.tensor_args.device
    )

    goal_state = JointState.from_position(
        goal_joint_positions,
        joint_names=joint_names,
    )

    result = motion_gen.plan_single_js(start_state, goal_state, MotionGenPlanConfig(max_attempts=1))
    print(f"Trajectory success: {result.success}")
    if result.success.item():
        traj = result.get_interpolated_plan()  # result.interpolation_dt has the dt between timesteps
        print(f"Collision-free motion generated. Waypoints: {len(traj.position)}")
    traj_velocities = traj.velocity.cpu().numpy().squeeze()
    traj_positions = traj.position.cpu().numpy().squeeze()
    #send_to_foxglove.log_joint_velocities(traj_velocities,urdf_path="/home/jaydv/code/proximity_learning/assets/fr3/fr3_hand.urdf", output_path="curobo_traj_vel.mcap", dt_sec=0.01)
    send_to_foxglove.log_joint_positions(traj_positions,urdf_path="/home/jaydv/code/proximity_learning/assets/fr3/fr3_hand.urdf", output_path="curobo_traj.mcap", dt_sec=0.01)
    return traj_velocities

def go_home():
    start_pose = [0.0, 0.0, 0.0, -1.75, 0.0, 1.75, -0.785]
    output = get_traj(current_q, start_pose)
    print(current_q)
    assert output is not None
    traj_velocities = output[1].cpu().numpy().squeeze()
    traj_positions = output[0].cpu().numpy().squeeze()
    send_to_foxglove.log_joint_velocities(traj_velocities,urdf_path="/home/jaydv/code/proximity_learning/assets/fr3/fr3_hand.urdf", output_path="home_traj.mcap", dt_sec=0.01)
    send_to_foxglove.log_joint_positions(traj_positions,urdf_path="/home/jaydv/code/proximity_learning/assets/fr3/fr3_hand.urdf", output_path="home_traj_pos.mcap", dt_sec=0.01)
    return traj_velocities

if __name__ == "__main__":
    import matplotlib.pyplot as plt

    curobo_traj = curobo_planner()
    home_vel = go_home()

    fig, axes = plt.subplots(7, 1, figsize=(10, 14), sharex=True)
    curobo_time = np.arange(curobo_traj.shape[0])
    home_time = np.arange(home_vel.shape[0])
    for joint_idx in range(7):
        axes[joint_idx].plot(curobo_time, curobo_traj[:, joint_idx], label="Curobo planner", color="tab:blue")
        axes[joint_idx].plot(home_time, home_vel[:, joint_idx], label="My planner", color="tab:orange")
        axes[joint_idx].set_ylabel(f"Joint {joint_idx + 1}")
        axes[joint_idx].grid(True, linestyle="--", alpha=0.4)
        if joint_idx == 0:
            axes[joint_idx].legend(loc="upper right")
    axes[-1].set_xlabel("Sample index")
    plt.tight_layout()
    plt.savefig("planner_comparison.png")
    plt.show()       