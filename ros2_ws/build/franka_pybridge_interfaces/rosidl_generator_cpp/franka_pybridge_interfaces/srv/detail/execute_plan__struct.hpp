// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franka_pybridge_interfaces:srv/ExecutePlan.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN__STRUCT_HPP_
#define FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vel_traj'
// Member 'initial_pos'
#include "franka_pybridge_interfaces/msg/detail/joint_data_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__franka_pybridge_interfaces__srv__ExecutePlan_Request __attribute__((deprecated))
#else
# define DEPRECATED__franka_pybridge_interfaces__srv__ExecutePlan_Request __declspec(deprecated)
#endif

namespace franka_pybridge_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecutePlan_Request_
{
  using Type = ExecutePlan_Request_<ContainerAllocator>;

  explicit ExecutePlan_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : initial_pos(_init)
  {
    (void)_init;
  }

  explicit ExecutePlan_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : initial_pos(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _vel_traj_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _vel_traj_type vel_traj;
  using _initial_pos_type =
    franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>;
  _initial_pos_type initial_pos;

  // setters for named parameter idiom
  Type & set__vel_traj(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->vel_traj = _arg;
    return *this;
  }
  Type & set__initial_pos(
    const franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator> & _arg)
  {
    this->initial_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franka_pybridge_interfaces::srv::ExecutePlan_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const franka_pybridge_interfaces::srv::ExecutePlan_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franka_pybridge_interfaces::srv::ExecutePlan_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franka_pybridge_interfaces::srv::ExecutePlan_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franka_pybridge_interfaces::srv::ExecutePlan_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franka_pybridge_interfaces::srv::ExecutePlan_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franka_pybridge_interfaces::srv::ExecutePlan_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franka_pybridge_interfaces::srv::ExecutePlan_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franka_pybridge_interfaces::srv::ExecutePlan_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franka_pybridge_interfaces::srv::ExecutePlan_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franka_pybridge_interfaces__srv__ExecutePlan_Request
    std::shared_ptr<franka_pybridge_interfaces::srv::ExecutePlan_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franka_pybridge_interfaces__srv__ExecutePlan_Request
    std::shared_ptr<franka_pybridge_interfaces::srv::ExecutePlan_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecutePlan_Request_ & other) const
  {
    if (this->vel_traj != other.vel_traj) {
      return false;
    }
    if (this->initial_pos != other.initial_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecutePlan_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecutePlan_Request_

// alias to use template instance with default allocator
using ExecutePlan_Request =
  franka_pybridge_interfaces::srv::ExecutePlan_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace franka_pybridge_interfaces


#ifndef _WIN32
# define DEPRECATED__franka_pybridge_interfaces__srv__ExecutePlan_Response __attribute__((deprecated))
#else
# define DEPRECATED__franka_pybridge_interfaces__srv__ExecutePlan_Response __declspec(deprecated)
#endif

namespace franka_pybridge_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecutePlan_Response_
{
  using Type = ExecutePlan_Response_<ContainerAllocator>;

  explicit ExecutePlan_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ExecutePlan_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    franka_pybridge_interfaces::srv::ExecutePlan_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const franka_pybridge_interfaces::srv::ExecutePlan_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franka_pybridge_interfaces::srv::ExecutePlan_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franka_pybridge_interfaces::srv::ExecutePlan_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franka_pybridge_interfaces::srv::ExecutePlan_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franka_pybridge_interfaces::srv::ExecutePlan_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franka_pybridge_interfaces::srv::ExecutePlan_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franka_pybridge_interfaces::srv::ExecutePlan_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franka_pybridge_interfaces::srv::ExecutePlan_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franka_pybridge_interfaces::srv::ExecutePlan_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franka_pybridge_interfaces__srv__ExecutePlan_Response
    std::shared_ptr<franka_pybridge_interfaces::srv::ExecutePlan_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franka_pybridge_interfaces__srv__ExecutePlan_Response
    std::shared_ptr<franka_pybridge_interfaces::srv::ExecutePlan_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecutePlan_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecutePlan_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecutePlan_Response_

// alias to use template instance with default allocator
using ExecutePlan_Response =
  franka_pybridge_interfaces::srv::ExecutePlan_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace franka_pybridge_interfaces

namespace franka_pybridge_interfaces
{

namespace srv
{

struct ExecutePlan
{
  using Request = franka_pybridge_interfaces::srv::ExecutePlan_Request;
  using Response = franka_pybridge_interfaces::srv::ExecutePlan_Response;
};

}  // namespace srv

}  // namespace franka_pybridge_interfaces

#endif  // FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN__STRUCT_HPP_
