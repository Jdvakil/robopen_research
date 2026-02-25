import numpy as np
import rclpy
from franka_pybridge_interfaces.msg import JointDataArray
from franka_pybridge_interfaces.srv import ExecutePlan
from rclpy.node import Node


class ExecutePlanClientAsync(Node):
    def __init__(self):
        super().__init__('execute_plan_client_async')
        self.cli = self.create_client(ExecutePlan, 'execute_plan')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = ExecutePlan.Request()

    def interpolate_joint_data(self, joint_data_1, joint_data_2, initial_rate=0.01, target_rate=0.001):
        """"This function interpolates between two 7x1 joint data arrays at target_rate
        and returns a list of 7x1 joint data arrays
        @param joint_data_1: 7x1 joint data array
        @param joint_data_2: 7x1 joint data array
        @param initial_rate: initial rate of the joint data array
        @param target_rate: target rate of the joint data array
        @return interpolated_joint_data: list of 7x1 joint data arrays"""
        # interpolate between two 7x1 joint data arrays at target_rate
        # return a list of 7x1 joint data arrays
        interpolated_joint_data = []
        new_data_amount = int(initial_rate / target_rate)
        interpolated_joint_data = np.linspace(
            joint_data_1, joint_data_2, new_data_amount).tolist()
        # pdb.set_trace()
        return interpolated_joint_data

    def interpolate_joint_data_list(self, joint_data_list, initial_rate=0.01, target_rate=0.001):
        """This function interpolates between a list of 7x1 joint data arrays at target_rate
        and returns a list of 7x1 joint data arrays
        @param joint_data_list: list of 7x1 joint data arrays
        @param initial_rate: initial rate of the joint data array
        @param target_rate: target rate of the joint data array
        @return interpolated_joint_data_list: list of 7x1 joint data arrays
        """
        # for each 7x1 q in joint_data_list, concatenate the interpolated joint data
        interpolated_joint_data_list = []
        # add an interpolation from 0 vector to the first joint data
        interpolated_joint_data_list += self.interpolate_joint_data(
            [0, 0, 0, 0, 0, 0, 0], joint_data_list[0], initial_rate, target_rate)
        for i in range(len(joint_data_list) - 1):
            interpolated_joint_data_list += self.interpolate_joint_data(
                joint_data_list[i], joint_data_list[i+1], initial_rate, target_rate)
        # pdb.set_trace()
        return interpolated_joint_data_list

    def derive(self, joint_positions):
        """This function derives a list of 7x1 joint positions and returns a list of 7x1 joint velocities
        @param joint_positions: list of 7x1 joint positions
        @return joint_velocities: list of 7x1 joint velocities
        """
        # for each 7x1 q in joint_positions, calculate the q_dot and concatenate
        joint_velocities = []
        for i in range(len(joint_positions) - 1):
            joint_velocities.append(
                [(joint_positions[i+1][j] - joint_positions[i][j])/0.001 for j in range(len(joint_positions[i]))])
        # pdb.set_trace()
        return joint_velocities

    def convert_to_joint_data_array(self, joint_data):
        """This function converts a 7x1 joint data array to a JointDataArray message
        @param joint_data: 7x1 joint data array
        @return jda: JointDataArray message
        """
        jda = JointDataArray()
        jda.data = joint_data
        return jda

    def make_joint_data_array_list(self, joint_data_list):
        """This function converts a list of 7x1 joint data arrays to a list of JointDataArray messages
        @param joint_data_list: list of 7x1 joint data arrays
        @return jda_list: list of JointDataArray messages
        """
        jda_list = []
        for joint_data in joint_data_list:
            jda_list.append(self.convert_to_joint_data_array(joint_data))
        return jda_list

    def send_request(self, start_q, dq_traj):
        """This function sends a request to the execute_plan service
        @return response: response from the execute_plan service
        """
        # filename_pos = "/home/hirolab/ros2_ws/src/franka_pybridge/test_trajs/data_21.csv"
        # filename_vel = "/home/hirolab/ros2_ws/src/franka_pybridge/test_trajs_vels/data_21.csv"
        # # load data
        # data_pos = []
        # data_vel = []
        # with open(filename_pos) as f:
        #     for line in f:
        #         data_pos.append([float(x) for x in line.split(',')])
        # with open(filename_vel) as f:
        #     for line in f:
        #         data_vel.append([float(x) for x in line.split(',')])

        # interpolate data
        joint_velocities = self.interpolate_joint_data_list(dq_traj)

        # check all joint velocities are within limits
        # joint_vel_limits = [2.62, 2.62, 2.62, 2.62, 5.26, 4.18, 5.26]
        joint_vel_limits = [2.1750, 2.1750, 2.1750, 2.1750, 2.6100, 2.6100, 2.6100]
        for i in range(len(joint_velocities)):
            for j in range(len(joint_velocities[i])):
                if abs(joint_velocities[i][j]) > joint_vel_limits[j]:
                    print("Joint velocity is too large: ",
                          joint_velocities[i][j])
                    print("joint_velocities: ", joint_velocities[i])
        joint_accelration = self.derive(joint_velocities)

        # check all joint accelerations magnitude is less than 10
        for i in range(len(joint_accelration)):
            for j in range(len(joint_accelration[i])):
                if abs(joint_accelration[i][j]) > 10:
                    print("Joint acceleration is too large: ",
                          joint_accelration[i][j])
                    print("joint_velocities: ", joint_velocities[i])

        # make joint data array list
        jda_list = self.make_joint_data_array_list(joint_velocities)
        jda_init = self.convert_to_joint_data_array(start_q)

        # send request
        self.req.vel_traj = jda_list
        self.req.initial_pos = jda_init
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()