import rclpy
from franka_pybridge_interfaces.srv import GetQ
from rclpy.node import Node


class GetQClientAsync(Node):
    def __init__(self):
        super().__init__('get_q_client_async')
        self.cli = self.create_client(GetQ, 'get_q')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = GetQ.Request()

    def send_request(self):
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()