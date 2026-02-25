# RoboPen for research
git submodule update --init --recursive 
source /opt/ros/humble/setup.bash
cd ros2_ws
rosdep install -i --from-path src --rosdistro humble -y

(ilab) jaydv@batman:~/code/robopen_research/ros2_ws$ rosdep install -i --from-path src --rosdistro humble -y
#All required rosdeps installed successfully

colcon build
source ./ros2_ws/install/setup.bash 

## Python helper scripts
- Install the repository helpers so you can run `scripts` modules anywhere:
	```bash
	pip install -e .
	```
- Always run the test module through the package so relative imports resolve:
	```bash
	python -m scripts.test.test_data
	```

verify - 
(ilab) jaydv@batman:~/code/robopen_research/ros2_ws$ ros2 service list
/error_recovery
/execute_plan
/get_q
/operate_gripper
/services_server/describe_parameters
/services_server/get_parameter_types
/services_server/get_parameters
/services_server/list_parameters
/services_server/set_parameters
/services_server/set_parameters_atomically
/set_load
