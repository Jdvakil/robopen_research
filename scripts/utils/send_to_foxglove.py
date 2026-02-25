#!/usr/bin/env python3
"""
Log joint positions to Foxglove MCAP using correct FK-based TF tree.
Parses URDF directly - no mesh loading, no yourdfpy FK issues.
"""
import logging
import xml.etree.ElementTree as ET
from collections import defaultdict

import foxglove
import numpy as np
from foxglove import Channel
from foxglove.schemas import FrameTransform, FrameTransforms, Quaternion, Vector3
from scipy.spatial.transform import Rotation

WORLD_FRAME_ID = "world"

FR3_JOINT_NAMES = [
    "fr3_joint1", "fr3_joint2", "fr3_joint3", "fr3_joint4",
    "fr3_joint5", "fr3_joint6", "fr3_joint7",
]


def _rpy_xyz_to_mat4(rpy, xyz):
    """Build 4x4 homogeneous matrix from URDF origin rpy/xyz."""
    T = np.eye(4)
    T[:3, :3] = Rotation.from_euler("xyz", rpy).as_matrix()
    T[:3, 3] = xyz
    return T


def _axis_angle_to_mat4(axis, angle):
    """Rotation matrix for joint rotation about axis by angle."""
    T = np.eye(4)
    T[:3, :3] = Rotation.from_rotvec(np.array(axis) * angle).as_matrix()
    return T


def parse_urdf_joints(urdf_path):
    """
    Parse URDF and return joint info dict keyed by joint name.
    Each entry: {parent, child, origin_T (4x4), axis, type}
    """
    tree = ET.parse(urdf_path)
    root = tree.getroot()

    joints = {}
    for joint_elem in root.findall("joint"):
        name = joint_elem.get("name")
        jtype = joint_elem.get("type")  # revolute, fixed, prismatic, etc.

        parent = joint_elem.find("parent").get("link")
        child = joint_elem.find("child").get("link")

        # Origin transform (static part)
        origin = joint_elem.find("origin")
        if origin is not None:
            xyz = list(map(float, origin.get("xyz", "0 0 0").split()))
            rpy = list(map(float, origin.get("rpy", "0 0 0").split()))
        else:
            xyz = [0.0, 0.0, 0.0]
            rpy = [0.0, 0.0, 0.0]

        origin_T = _rpy_xyz_to_mat4(rpy, xyz)

        # Joint axis
        axis_elem = joint_elem.find("axis")
        if axis_elem is not None:
            axis = list(map(float, axis_elem.get("xyz", "0 0 1").split()))
        else:
            axis = [0.0, 0.0, 1.0]

        joints[name] = {
            "parent": parent,
            "child": child,
            "origin_T": origin_T,
            "axis": axis,
            "type": jtype,
        }

    return joints


def compute_tfs(joints_info, joint_cfg):
    """
    Compute parent->child transform for every joint.
    joint_cfg: dict of {joint_name: angle}
    Returns list of (parent_link, child_link, 4x4 T)
    """
    tfs = []
    for jname, jinfo in joints_info.items():
        origin_T = jinfo["origin_T"]
        jtype = jinfo["type"]
        angle = joint_cfg.get(jname, 0.0)

        if jtype == "fixed":
            T = origin_T.copy()
        elif jtype in ("revolute", "continuous"):
            T = origin_T @ _axis_angle_to_mat4(jinfo["axis"], angle)
        elif jtype == "prismatic":
            T = origin_T.copy()
            T[:3, 3] += np.array(jinfo["axis"]) * angle
        else:
            T = origin_T.copy()

        tfs.append((jinfo["parent"], jinfo["child"], T))

    return tfs


def log_joint_positions(joint_positions, urdf_path, output_path, dt_sec=0.02, joint_names=None):
    joint_positions = np.asarray(joint_positions)
    if joint_names is None:
        joint_names = FR3_JOINT_NAMES

    print(f"Loading URDF from {urdf_path}")
    joints_info = parse_urdf_joints(urdf_path)
    print(f"Parsed {len(joints_info)} joints")

    foxglove.set_log_level(logging.INFO)
    writer = foxglove.open_mcap(output_path, allow_overwrite=True)

    tf_channel = Channel(
        "/tf",
        message_encoding="protobuf",
        schema=FrameTransforms.get_schema(),
    )

    for i, joints in enumerate(joint_positions):
        timestamp_ns = int(i * dt_sec * 1e9)

        # Build joint config dict
        cfg = dict(zip(joint_names, joints.tolist()))

        # Compute all parent->child TFs
        tfs = compute_tfs(joints_info, cfg)

        transforms = [
            # Anchor world -> base (URDF root)
            FrameTransform(
                parent_frame_id="world",
                child_frame_id="base",
                translation=Vector3(x=0.0, y=0.0, z=0.0),
                rotation=Quaternion(x=0.0, y=0.0, z=0.0, w=1.0),
            ),
        ]

        for parent_link, child_link, T in tfs:
            trans = T[:3, 3]
            rot = Rotation.from_matrix(T[:3, :3]).as_quat()  # xyzw

            transforms.append(FrameTransform(
                parent_frame_id=parent_link,
                child_frame_id=child_link,
                translation=Vector3(x=float(trans[0]), y=float(trans[1]), z=float(trans[2])),
                rotation=Quaternion(x=float(rot[0]), y=float(rot[1]), z=float(rot[2]), w=float(rot[3])),
            ))

        tf_channel.log(
            FrameTransforms(transforms=transforms).encode(),
            log_time=timestamp_ns,
        )

    writer.close()
    print(f"Logged {len(joint_positions)} frames to {output_path}")

def log_joint_velocities(joint_velocities, urdf_path, output_path, 
                          dt_sec=0.02, joint_names=None, initial_positions=None):
    """
    Integrate joint velocities to get positions, then log to MCAP.
    
    joint_velocities: (T, 7) array of joint velocities in rad/s
    initial_positions: (7,) array of starting joint positions (default zeros)
    """
    joint_velocities = np.asarray(joint_velocities, dtype=np.float64)
    T, n_joints = joint_velocities.shape

    if joint_names is None:
        joint_names = FR3_JOINT_NAMES

    if initial_positions is None:
        initial_positions = np.zeros(n_joints)
    initial_positions = np.asarray(initial_positions, dtype=np.float64)

    # Integrate velocities -> positions via cumulative sum
    # q[t] = q[0] + sum(dq[0:t] * dt)
    delta_q = joint_velocities * dt_sec                         # (T, 7)
    integrated = np.cumsum(delta_q, axis=0)                    # (T, 7)
    joint_positions = initial_positions[None, :] + integrated  # (T, 7)

    # Delegate to existing position logger
    log_joint_positions(
        joint_positions,
        urdf_path=urdf_path,
        output_path=output_path,
        dt_sec=dt_sec,
        joint_names=joint_names,
    )


if __name__ == "__main__":
    import numpy as np
    joint_positions = np.zeros((10, 7), dtype=np.float32)  # replace with your array
    log_joint_positions(
        joint_positions,
        urdf_path="/home/jaydv/code/proximity_learning/assets/fr3/fr3_hand.urdf",
        output_path="fr3_traj.mcap",
        dt_sec=0.01,
    )