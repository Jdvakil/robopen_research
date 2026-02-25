// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franka_pybridge_interfaces:srv/OperateSuction.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__OPERATE_SUCTION__STRUCT_HPP_
#define FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__OPERATE_SUCTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__franka_pybridge_interfaces__srv__OperateSuction_Request __attribute__((deprecated))
#else
# define DEPRECATED__franka_pybridge_interfaces__srv__OperateSuction_Request __declspec(deprecated)
#endif

namespace franka_pybridge_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OperateSuction_Request_
{
  using Type = OperateSuction_Request_<ContainerAllocator>;

  explicit OperateSuction_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operation = false;
      this->sucction_time_ms = 0l;
      this->strength = 0l;
    }
  }

  explicit OperateSuction_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operation = false;
      this->sucction_time_ms = 0l;
      this->strength = 0l;
    }
  }

  // field types and members
  using _operation_type =
    bool;
  _operation_type operation;
  using _sucction_time_ms_type =
    int32_t;
  _sucction_time_ms_type sucction_time_ms;
  using _strength_type =
    int32_t;
  _strength_type strength;

  // setters for named parameter idiom
  Type & set__operation(
    const bool & _arg)
  {
    this->operation = _arg;
    return *this;
  }
  Type & set__sucction_time_ms(
    const int32_t & _arg)
  {
    this->sucction_time_ms = _arg;
    return *this;
  }
  Type & set__strength(
    const int32_t & _arg)
  {
    this->strength = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franka_pybridge_interfaces::srv::OperateSuction_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const franka_pybridge_interfaces::srv::OperateSuction_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franka_pybridge_interfaces::srv::OperateSuction_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franka_pybridge_interfaces::srv::OperateSuction_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franka_pybridge_interfaces::srv::OperateSuction_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franka_pybridge_interfaces::srv::OperateSuction_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franka_pybridge_interfaces::srv::OperateSuction_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franka_pybridge_interfaces::srv::OperateSuction_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franka_pybridge_interfaces::srv::OperateSuction_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franka_pybridge_interfaces::srv::OperateSuction_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franka_pybridge_interfaces__srv__OperateSuction_Request
    std::shared_ptr<franka_pybridge_interfaces::srv::OperateSuction_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franka_pybridge_interfaces__srv__OperateSuction_Request
    std::shared_ptr<franka_pybridge_interfaces::srv::OperateSuction_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OperateSuction_Request_ & other) const
  {
    if (this->operation != other.operation) {
      return false;
    }
    if (this->sucction_time_ms != other.sucction_time_ms) {
      return false;
    }
    if (this->strength != other.strength) {
      return false;
    }
    return true;
  }
  bool operator!=(const OperateSuction_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OperateSuction_Request_

// alias to use template instance with default allocator
using OperateSuction_Request =
  franka_pybridge_interfaces::srv::OperateSuction_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace franka_pybridge_interfaces


#ifndef _WIN32
# define DEPRECATED__franka_pybridge_interfaces__srv__OperateSuction_Response __attribute__((deprecated))
#else
# define DEPRECATED__franka_pybridge_interfaces__srv__OperateSuction_Response __declspec(deprecated)
#endif

namespace franka_pybridge_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OperateSuction_Response_
{
  using Type = OperateSuction_Response_<ContainerAllocator>;

  explicit OperateSuction_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit OperateSuction_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franka_pybridge_interfaces::srv::OperateSuction_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const franka_pybridge_interfaces::srv::OperateSuction_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franka_pybridge_interfaces::srv::OperateSuction_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franka_pybridge_interfaces::srv::OperateSuction_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franka_pybridge_interfaces::srv::OperateSuction_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franka_pybridge_interfaces::srv::OperateSuction_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franka_pybridge_interfaces::srv::OperateSuction_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franka_pybridge_interfaces::srv::OperateSuction_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franka_pybridge_interfaces::srv::OperateSuction_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franka_pybridge_interfaces::srv::OperateSuction_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franka_pybridge_interfaces__srv__OperateSuction_Response
    std::shared_ptr<franka_pybridge_interfaces::srv::OperateSuction_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franka_pybridge_interfaces__srv__OperateSuction_Response
    std::shared_ptr<franka_pybridge_interfaces::srv::OperateSuction_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OperateSuction_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const OperateSuction_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OperateSuction_Response_

// alias to use template instance with default allocator
using OperateSuction_Response =
  franka_pybridge_interfaces::srv::OperateSuction_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace franka_pybridge_interfaces

namespace franka_pybridge_interfaces
{

namespace srv
{

struct OperateSuction
{
  using Request = franka_pybridge_interfaces::srv::OperateSuction_Request;
  using Response = franka_pybridge_interfaces::srv::OperateSuction_Response;
};

}  // namespace srv

}  // namespace franka_pybridge_interfaces

#endif  // FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__OPERATE_SUCTION__STRUCT_HPP_
