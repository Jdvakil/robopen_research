import rclpy
import os
import sys

# Get the absolute path to the project root (adjust levels if needed)
current_dir = os.path.dirname(os.path.abspath(__file__))
project_root = os.path.abspath(os.path.join(current_dir, ".."))

# Add to sys.path if not already present
if project_root not in sys.path:
    sys.path.insert(0, project_root)

from ..execute_plan_async import ExecutePlanClientAsync
from ..get_q_client_async import GetQClientAsync
from ..utils import get_traj

import h5py
import numpy as np
import time

def go_home():
    start_pose = [0.0, 0.0, 0.0, -1.75, 0.0, 1.75, -0.785]
    current_q = list(get_q_client.send_request().joint_config.data)
    output = get_traj(current_q, start_pose)
    print(current_q)
    assert output is not None
    print("going home...")
    execute_plan_client.send_request(current_q, output[1])
    current_q = list(get_q_client.send_request().joint_config.data)
    print(start_pose)
    print(current_q)

def read_data():
    path = "/home/liam/diffusion-planner/scripts/robopen05_20230528-222842_paths_roboset.h5"
    h5 = h5py.File(path, 'r')
    h5.keys() #Outputs Trials per h5, Trial 0, 1, 2, ...
    print(h5['Trial0'].keys()) # outputs data, derived, and config
    # to extract the data
    qp = np.asarray(h5["Trial0"]['data']['qp_arm']) #where data_key is one of the cells from the data tab 
    first = qp[0]
    last = qp[-50]
    first[-1] = -0.785
    first[-2] = 1.75
    current_q = list(get_q_client.send_request().joint_config.data)
    time.sleep(1)
    print(first)
    output = get_traj(first, last)
    assert output is not None
    execute_plan_client.send_request(current_q, output[1])

if __name__ == "__main__":
    rclpy.init()
    get_q_client = GetQClientAsync()
    execute_plan_client = ExecutePlanClientAsync()
    go_home()
    time.sleep(0.5)
    #read_data()
    # current_q = get_q_client.send_request().joint_config.data
    # start_q = list(current_q) #[-1.9901257173178488, -0.3781196766217088, -0.7160262315425179, -2.01414186313696, -0.3087741481529342, 1.7161796491080676, -0.9789436899547775]
    # #goal_q = [0, 0.19899931926685466, -0.034200437431272705, -2.2233875346936673, -0.09134146086970417, 2.4063895274003344, 0.8554519771535395]

    # # go from current config to start_q
    # current_q = get_q_client.send_request().joint_config.data
    # print(current_q)
    # output = get_traj(current_q, start_q)
    # assert output is not None
    # print("output is not none ")
    # execute_plan_client.send_request(current_q, output[1])

    # # go from start_q to goal_q
    # output = get_traj(start_q, goal_q)
    # assert output is not None
    # execute_plan_client.send_request(start_q, output[1])
