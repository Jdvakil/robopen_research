// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franka_pybridge_interfaces:srv/OperateSuction.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__OPERATE_SUCTION__BUILDER_HPP_
#define FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__OPERATE_SUCTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franka_pybridge_interfaces/srv/detail/operate_suction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franka_pybridge_interfaces
{

namespace srv
{

namespace builder
{

class Init_OperateSuction_Request_strength
{
public:
  explicit Init_OperateSuction_Request_strength(::franka_pybridge_interfaces::srv::OperateSuction_Request & msg)
  : msg_(msg)
  {}
  ::franka_pybridge_interfaces::srv::OperateSuction_Request strength(::franka_pybridge_interfaces::srv::OperateSuction_Request::_strength_type arg)
  {
    msg_.strength = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::OperateSuction_Request msg_;
};

class Init_OperateSuction_Request_sucction_time_ms
{
public:
  explicit Init_OperateSuction_Request_sucction_time_ms(::franka_pybridge_interfaces::srv::OperateSuction_Request & msg)
  : msg_(msg)
  {}
  Init_OperateSuction_Request_strength sucction_time_ms(::franka_pybridge_interfaces::srv::OperateSuction_Request::_sucction_time_ms_type arg)
  {
    msg_.sucction_time_ms = std::move(arg);
    return Init_OperateSuction_Request_strength(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::OperateSuction_Request msg_;
};

class Init_OperateSuction_Request_operation
{
public:
  Init_OperateSuction_Request_operation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OperateSuction_Request_sucction_time_ms operation(::franka_pybridge_interfaces::srv::OperateSuction_Request::_operation_type arg)
  {
    msg_.operation = std::move(arg);
    return Init_OperateSuction_Request_sucction_time_ms(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::OperateSuction_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_pybridge_interfaces::srv::OperateSuction_Request>()
{
  return franka_pybridge_interfaces::srv::builder::Init_OperateSuction_Request_operation();
}

}  // namespace franka_pybridge_interfaces


namespace franka_pybridge_interfaces
{

namespace srv
{

namespace builder
{

class Init_OperateSuction_Response_success
{
public:
  Init_OperateSuction_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::franka_pybridge_interfaces::srv::OperateSuction_Response success(::franka_pybridge_interfaces::srv::OperateSuction_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::OperateSuction_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_pybridge_interfaces::srv::OperateSuction_Response>()
{
  return franka_pybridge_interfaces::srv::builder::Init_OperateSuction_Response_success();
}

}  // namespace franka_pybridge_interfaces

#endif  // FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__OPERATE_SUCTION__BUILDER_HPP_
