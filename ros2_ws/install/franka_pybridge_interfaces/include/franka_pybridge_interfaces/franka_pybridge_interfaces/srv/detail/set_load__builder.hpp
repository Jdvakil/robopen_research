// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franka_pybridge_interfaces:srv/SetLoad.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__SET_LOAD__BUILDER_HPP_
#define FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__SET_LOAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franka_pybridge_interfaces/srv/detail/set_load__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franka_pybridge_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLoad_Request_mass
{
public:
  Init_SetLoad_Request_mass()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::franka_pybridge_interfaces::srv::SetLoad_Request mass(::franka_pybridge_interfaces::srv::SetLoad_Request::_mass_type arg)
  {
    msg_.mass = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::SetLoad_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_pybridge_interfaces::srv::SetLoad_Request>()
{
  return franka_pybridge_interfaces::srv::builder::Init_SetLoad_Request_mass();
}

}  // namespace franka_pybridge_interfaces


namespace franka_pybridge_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLoad_Response_success
{
public:
  Init_SetLoad_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::franka_pybridge_interfaces::srv::SetLoad_Response success(::franka_pybridge_interfaces::srv::SetLoad_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::SetLoad_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_pybridge_interfaces::srv::SetLoad_Response>()
{
  return franka_pybridge_interfaces::srv::builder::Init_SetLoad_Response_success();
}

}  // namespace franka_pybridge_interfaces

#endif  // FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__SET_LOAD__BUILDER_HPP_
