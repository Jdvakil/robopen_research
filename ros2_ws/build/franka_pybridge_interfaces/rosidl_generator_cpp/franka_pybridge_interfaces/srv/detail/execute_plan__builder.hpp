// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franka_pybridge_interfaces:srv/ExecutePlan.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN__BUILDER_HPP_
#define FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franka_pybridge_interfaces/srv/detail/execute_plan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franka_pybridge_interfaces
{

namespace srv
{

namespace builder
{

class Init_ExecutePlan_Request_initial_pos
{
public:
  explicit Init_ExecutePlan_Request_initial_pos(::franka_pybridge_interfaces::srv::ExecutePlan_Request & msg)
  : msg_(msg)
  {}
  ::franka_pybridge_interfaces::srv::ExecutePlan_Request initial_pos(::franka_pybridge_interfaces::srv::ExecutePlan_Request::_initial_pos_type arg)
  {
    msg_.initial_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlan_Request msg_;
};

class Init_ExecutePlan_Request_vel_traj
{
public:
  Init_ExecutePlan_Request_vel_traj()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecutePlan_Request_initial_pos vel_traj(::franka_pybridge_interfaces::srv::ExecutePlan_Request::_vel_traj_type arg)
  {
    msg_.vel_traj = std::move(arg);
    return Init_ExecutePlan_Request_initial_pos(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlan_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_pybridge_interfaces::srv::ExecutePlan_Request>()
{
  return franka_pybridge_interfaces::srv::builder::Init_ExecutePlan_Request_vel_traj();
}

}  // namespace franka_pybridge_interfaces


namespace franka_pybridge_interfaces
{

namespace srv
{

namespace builder
{

class Init_ExecutePlan_Response_success
{
public:
  Init_ExecutePlan_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::franka_pybridge_interfaces::srv::ExecutePlan_Response success(::franka_pybridge_interfaces::srv::ExecutePlan_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_pybridge_interfaces::srv::ExecutePlan_Response>()
{
  return franka_pybridge_interfaces::srv::builder::Init_ExecutePlan_Response_success();
}

}  // namespace franka_pybridge_interfaces

#endif  // FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN__BUILDER_HPP_
