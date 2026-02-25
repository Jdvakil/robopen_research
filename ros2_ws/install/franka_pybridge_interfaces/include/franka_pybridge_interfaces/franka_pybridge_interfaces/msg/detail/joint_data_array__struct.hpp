// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franka_pybridge_interfaces:msg/JointDataArray.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_PYBRIDGE_INTERFACES__MSG__DETAIL__JOINT_DATA_ARRAY__STRUCT_HPP_
#define FRANKA_PYBRIDGE_INTERFACES__MSG__DETAIL__JOINT_DATA_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__franka_pybridge_interfaces__msg__JointDataArray __attribute__((deprecated))
#else
# define DEPRECATED__franka_pybridge_interfaces__msg__JointDataArray __declspec(deprecated)
#endif

namespace franka_pybridge_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointDataArray_
{
  using Type = JointDataArray_<ContainerAllocator>;

  explicit JointDataArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit JointDataArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franka_pybridge_interfaces__msg__JointDataArray
    std::shared_ptr<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franka_pybridge_interfaces__msg__JointDataArray
    std::shared_ptr<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointDataArray_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointDataArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointDataArray_

// alias to use template instance with default allocator
using JointDataArray =
  franka_pybridge_interfaces::msg::JointDataArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace franka_pybridge_interfaces

#endif  // FRANKA_PYBRIDGE_INTERFACES__MSG__DETAIL__JOINT_DATA_ARRAY__STRUCT_HPP_
