import numpy as np
import torch

NUM_ATTEMPTS = 5
DT = 0.01
DEFAULT_STEPS = 300

def generate_trajectory(start_q, goal, ee_goal=False, steps=DEFAULT_STEPS):
    if ee_goal:
        raise NotImplementedError("EE goal interpolation not supported.")

    start_q = np.array(start_q, dtype=np.float64)
    goal = np.array(goal, dtype=np.float64)

    if start_q.shape != goal.shape:
        raise ValueError("start_q and goal must have same dimensions")

    T = DT * (steps - 1)
    t = np.linspace(0, T, steps)
    tau = t / T

    blend = 10 * tau**3 - 15 * tau**4 + 6 * tau**5
    positions = start_q + np.outer(blend, (goal - start_q))

    positions = torch.tensor(positions, dtype=torch.float32)

    velocity = torch.gradient(positions, spacing=(DT,), dim=0)[0]
    acceleration = torch.gradient(velocity, spacing=(DT,), dim=0)[0]
    jerk = torch.gradient(acceleration, spacing=(DT,), dim=0)[0]

    return positions, velocity, acceleration, jerk


def choose_obj(c):
    sorted_boxes = sorted(
        c.items(),
        key=lambda x: (-x[1][0], -x[1][1], -x[1][2])
    )
    if len(sorted_boxes) == 0:
        return None
    return sorted_boxes[0][0]


def get_traj(q_start, q_goal, ee_goal=False, n=NUM_ATTEMPTS):
    output = None
    for _ in range(n):
        output = generate_trajectory(q_start, q_goal, ee_goal=ee_goal)
        if output is not None:
            break
    return output
