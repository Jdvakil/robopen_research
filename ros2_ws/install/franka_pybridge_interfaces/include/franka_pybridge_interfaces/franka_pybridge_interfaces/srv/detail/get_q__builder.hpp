// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franka_pybridge_interfaces:srv/GetQ.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__GET_Q__BUILDER_HPP_
#define FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__GET_Q__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franka_pybridge_interfaces/srv/detail/get_q__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franka_pybridge_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_pybridge_interfaces::srv::GetQ_Request>()
{
  return ::franka_pybridge_interfaces::srv::GetQ_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace franka_pybridge_interfaces


namespace franka_pybridge_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetQ_Response_joint_config
{
public:
  explicit Init_GetQ_Response_joint_config(::franka_pybridge_interfaces::srv::GetQ_Response & msg)
  : msg_(msg)
  {}
  ::franka_pybridge_interfaces::srv::GetQ_Response joint_config(::franka_pybridge_interfaces::srv::GetQ_Response::_joint_config_type arg)
  {
    msg_.joint_config = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::GetQ_Response msg_;
};

class Init_GetQ_Response_success
{
public:
  Init_GetQ_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetQ_Response_joint_config success(::franka_pybridge_interfaces::srv::GetQ_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetQ_Response_joint_config(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::GetQ_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_pybridge_interfaces::srv::GetQ_Response>()
{
  return franka_pybridge_interfaces::srv::builder::Init_GetQ_Response_success();
}

}  // namespace franka_pybridge_interfaces

#endif  // FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__GET_Q__BUILDER_HPP_
