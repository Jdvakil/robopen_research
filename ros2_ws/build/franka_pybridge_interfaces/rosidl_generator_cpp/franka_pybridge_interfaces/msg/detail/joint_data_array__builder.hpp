// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franka_pybridge_interfaces:msg/JointDataArray.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_PYBRIDGE_INTERFACES__MSG__DETAIL__JOINT_DATA_ARRAY__BUILDER_HPP_
#define FRANKA_PYBRIDGE_INTERFACES__MSG__DETAIL__JOINT_DATA_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franka_pybridge_interfaces/msg/detail/joint_data_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franka_pybridge_interfaces
{

namespace msg
{

namespace builder
{

class Init_JointDataArray_data
{
public:
  Init_JointDataArray_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::franka_pybridge_interfaces::msg::JointDataArray data(::franka_pybridge_interfaces::msg::JointDataArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_pybridge_interfaces::msg::JointDataArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_pybridge_interfaces::msg::JointDataArray>()
{
  return franka_pybridge_interfaces::msg::builder::Init_JointDataArray_data();
}

}  // namespace franka_pybridge_interfaces

#endif  // FRANKA_PYBRIDGE_INTERFACES__MSG__DETAIL__JOINT_DATA_ARRAY__BUILDER_HPP_
