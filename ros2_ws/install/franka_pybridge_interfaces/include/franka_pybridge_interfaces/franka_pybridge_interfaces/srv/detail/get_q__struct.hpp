// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franka_pybridge_interfaces:srv/GetQ.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__GET_Q__STRUCT_HPP_
#define FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__GET_Q__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__franka_pybridge_interfaces__srv__GetQ_Request __attribute__((deprecated))
#else
# define DEPRECATED__franka_pybridge_interfaces__srv__GetQ_Request __declspec(deprecated)
#endif

namespace franka_pybridge_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetQ_Request_
{
  using Type = GetQ_Request_<ContainerAllocator>;

  explicit GetQ_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetQ_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    franka_pybridge_interfaces::srv::GetQ_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const franka_pybridge_interfaces::srv::GetQ_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franka_pybridge_interfaces::srv::GetQ_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franka_pybridge_interfaces::srv::GetQ_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franka_pybridge_interfaces::srv::GetQ_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franka_pybridge_interfaces::srv::GetQ_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franka_pybridge_interfaces::srv::GetQ_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franka_pybridge_interfaces::srv::GetQ_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franka_pybridge_interfaces::srv::GetQ_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franka_pybridge_interfaces::srv::GetQ_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franka_pybridge_interfaces__srv__GetQ_Request
    std::shared_ptr<franka_pybridge_interfaces::srv::GetQ_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franka_pybridge_interfaces__srv__GetQ_Request
    std::shared_ptr<franka_pybridge_interfaces::srv::GetQ_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetQ_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetQ_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetQ_Request_

// alias to use template instance with default allocator
using GetQ_Request =
  franka_pybridge_interfaces::srv::GetQ_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace franka_pybridge_interfaces


// Include directives for member types
// Member 'joint_config'
#include "franka_pybridge_interfaces/msg/detail/joint_data_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__franka_pybridge_interfaces__srv__GetQ_Response __attribute__((deprecated))
#else
# define DEPRECATED__franka_pybridge_interfaces__srv__GetQ_Response __declspec(deprecated)
#endif

namespace franka_pybridge_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetQ_Response_
{
  using Type = GetQ_Response_<ContainerAllocator>;

  explicit GetQ_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_config(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit GetQ_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_config(_alloc, _init)
  {
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
  using _joint_config_type =
    franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>;
  _joint_config_type joint_config;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__joint_config(
    const franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator> & _arg)
  {
    this->joint_config = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franka_pybridge_interfaces::srv::GetQ_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const franka_pybridge_interfaces::srv::GetQ_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franka_pybridge_interfaces::srv::GetQ_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franka_pybridge_interfaces::srv::GetQ_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franka_pybridge_interfaces::srv::GetQ_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franka_pybridge_interfaces::srv::GetQ_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franka_pybridge_interfaces::srv::GetQ_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franka_pybridge_interfaces::srv::GetQ_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franka_pybridge_interfaces::srv::GetQ_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franka_pybridge_interfaces::srv::GetQ_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franka_pybridge_interfaces__srv__GetQ_Response
    std::shared_ptr<franka_pybridge_interfaces::srv::GetQ_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franka_pybridge_interfaces__srv__GetQ_Response
    std::shared_ptr<franka_pybridge_interfaces::srv::GetQ_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetQ_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->joint_config != other.joint_config) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetQ_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetQ_Response_

// alias to use template instance with default allocator
using GetQ_Response =
  franka_pybridge_interfaces::srv::GetQ_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace franka_pybridge_interfaces

namespace franka_pybridge_interfaces
{

namespace srv
{

struct GetQ
{
  using Request = franka_pybridge_interfaces::srv::GetQ_Request;
  using Response = franka_pybridge_interfaces::srv::GetQ_Response;
};

}  // namespace srv

}  // namespace franka_pybridge_interfaces

#endif  // FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__GET_Q__STRUCT_HPP_
