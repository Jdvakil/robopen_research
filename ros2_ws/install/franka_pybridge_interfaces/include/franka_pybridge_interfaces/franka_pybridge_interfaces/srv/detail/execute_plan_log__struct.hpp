// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franka_pybridge_interfaces:srv/ExecutePlanLog.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN_LOG__STRUCT_HPP_
#define FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN_LOG__STRUCT_HPP_

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
# define DEPRECATED__franka_pybridge_interfaces__srv__ExecutePlanLog_Request __attribute__((deprecated))
#else
# define DEPRECATED__franka_pybridge_interfaces__srv__ExecutePlanLog_Request __declspec(deprecated)
#endif

namespace franka_pybridge_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecutePlanLog_Request_
{
  using Type = ExecutePlanLog_Request_<ContainerAllocator>;

  explicit ExecutePlanLog_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : initial_pos(_init)
  {
    (void)_init;
  }

  explicit ExecutePlanLog_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    franka_pybridge_interfaces::srv::ExecutePlanLog_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const franka_pybridge_interfaces::srv::ExecutePlanLog_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franka_pybridge_interfaces::srv::ExecutePlanLog_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franka_pybridge_interfaces::srv::ExecutePlanLog_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franka_pybridge_interfaces::srv::ExecutePlanLog_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franka_pybridge_interfaces::srv::ExecutePlanLog_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franka_pybridge_interfaces::srv::ExecutePlanLog_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franka_pybridge_interfaces::srv::ExecutePlanLog_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franka_pybridge_interfaces::srv::ExecutePlanLog_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franka_pybridge_interfaces::srv::ExecutePlanLog_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franka_pybridge_interfaces__srv__ExecutePlanLog_Request
    std::shared_ptr<franka_pybridge_interfaces::srv::ExecutePlanLog_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franka_pybridge_interfaces__srv__ExecutePlanLog_Request
    std::shared_ptr<franka_pybridge_interfaces::srv::ExecutePlanLog_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecutePlanLog_Request_ & other) const
  {
    if (this->vel_traj != other.vel_traj) {
      return false;
    }
    if (this->initial_pos != other.initial_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecutePlanLog_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecutePlanLog_Request_

// alias to use template instance with default allocator
using ExecutePlanLog_Request =
  franka_pybridge_interfaces::srv::ExecutePlanLog_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace franka_pybridge_interfaces


// Include directives for member types
// Member 'o_t_ee'
// Member 'o_t_ee_d'
// Member 'f_t_ee'
// Member 'f_t_ne'
// Member 'ne_t_ee'
// Member 'ee_t_k'
// Member 'm_ee'
// Member 'i_ee'
// Member 'f_x_cee'
// Member 'm_load'
// Member 'i_load'
// Member 'f_x_cload'
// Member 'm_total'
// Member 'i_total'
// Member 'f_x_ctotal'
// Member 'elbow'
// Member 'elbow_d'
// Member 'elbow_c'
// Member 'delbow_c'
// Member 'ddelbow_c'
// Member 'tau_j'
// Member 'tau_j_d'
// Member 'dtau_j'
// Member 'q'
// Member 'q_d'
// Member 'dq'
// Member 'dq_d'
// Member 'ddq_d'
// Member 'joint_contact'
// Member 'cartesian_contact'
// Member 'joint_collision'
// Member 'cartesian_collision'
// Member 'tau_ext_hat_filtered'
// Member 'o_f_ext_hat_k'
// Member 'k_f_ext_hat_k'
// Member 'o_dp_ee_d'
// Member 'o_t_ee_c'
// Member 'o_dp_ee_c'
// Member 'o_ddp_ee_c'
// Member 'theta'
// Member 'dtheta'
// already included above
// #include "franka_pybridge_interfaces/msg/detail/joint_data_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__franka_pybridge_interfaces__srv__ExecutePlanLog_Response __attribute__((deprecated))
#else
# define DEPRECATED__franka_pybridge_interfaces__srv__ExecutePlanLog_Response __declspec(deprecated)
#endif

namespace franka_pybridge_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecutePlanLog_Response_
{
  using Type = ExecutePlanLog_Response_<ContainerAllocator>;

  explicit ExecutePlanLog_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : m_ee(_init),
    m_load(_init),
    m_total(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ExecutePlanLog_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : m_ee(_alloc, _init),
    m_load(_alloc, _init),
    m_total(_alloc, _init)
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
  using _o_t_ee_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _o_t_ee_type o_t_ee;
  using _o_t_ee_d_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _o_t_ee_d_type o_t_ee_d;
  using _f_t_ee_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _f_t_ee_type f_t_ee;
  using _f_t_ne_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _f_t_ne_type f_t_ne;
  using _ne_t_ee_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _ne_t_ee_type ne_t_ee;
  using _ee_t_k_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _ee_t_k_type ee_t_k;
  using _m_ee_type =
    franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>;
  _m_ee_type m_ee;
  using _i_ee_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _i_ee_type i_ee;
  using _f_x_cee_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _f_x_cee_type f_x_cee;
  using _m_load_type =
    franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>;
  _m_load_type m_load;
  using _i_load_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _i_load_type i_load;
  using _f_x_cload_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _f_x_cload_type f_x_cload;
  using _m_total_type =
    franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>;
  _m_total_type m_total;
  using _i_total_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _i_total_type i_total;
  using _f_x_ctotal_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _f_x_ctotal_type f_x_ctotal;
  using _elbow_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _elbow_type elbow;
  using _elbow_d_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _elbow_d_type elbow_d;
  using _elbow_c_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _elbow_c_type elbow_c;
  using _delbow_c_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _delbow_c_type delbow_c;
  using _ddelbow_c_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _ddelbow_c_type ddelbow_c;
  using _tau_j_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _tau_j_type tau_j;
  using _tau_j_d_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _tau_j_d_type tau_j_d;
  using _dtau_j_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _dtau_j_type dtau_j;
  using _q_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _q_type q;
  using _q_d_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _q_d_type q_d;
  using _dq_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _dq_type dq;
  using _dq_d_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _dq_d_type dq_d;
  using _ddq_d_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _ddq_d_type ddq_d;
  using _joint_contact_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _joint_contact_type joint_contact;
  using _cartesian_contact_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _cartesian_contact_type cartesian_contact;
  using _joint_collision_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _joint_collision_type joint_collision;
  using _cartesian_collision_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _cartesian_collision_type cartesian_collision;
  using _tau_ext_hat_filtered_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _tau_ext_hat_filtered_type tau_ext_hat_filtered;
  using _o_f_ext_hat_k_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _o_f_ext_hat_k_type o_f_ext_hat_k;
  using _k_f_ext_hat_k_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _k_f_ext_hat_k_type k_f_ext_hat_k;
  using _o_dp_ee_d_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _o_dp_ee_d_type o_dp_ee_d;
  using _o_t_ee_c_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _o_t_ee_c_type o_t_ee_c;
  using _o_dp_ee_c_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _o_dp_ee_c_type o_dp_ee_c;
  using _o_ddp_ee_c_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _o_ddp_ee_c_type o_ddp_ee_c;
  using _theta_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _theta_type theta;
  using _dtheta_type =
    std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>>;
  _dtheta_type dtheta;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__o_t_ee(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->o_t_ee = _arg;
    return *this;
  }
  Type & set__o_t_ee_d(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->o_t_ee_d = _arg;
    return *this;
  }
  Type & set__f_t_ee(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->f_t_ee = _arg;
    return *this;
  }
  Type & set__f_t_ne(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->f_t_ne = _arg;
    return *this;
  }
  Type & set__ne_t_ee(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->ne_t_ee = _arg;
    return *this;
  }
  Type & set__ee_t_k(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->ee_t_k = _arg;
    return *this;
  }
  Type & set__m_ee(
    const franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator> & _arg)
  {
    this->m_ee = _arg;
    return *this;
  }
  Type & set__i_ee(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->i_ee = _arg;
    return *this;
  }
  Type & set__f_x_cee(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->f_x_cee = _arg;
    return *this;
  }
  Type & set__m_load(
    const franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator> & _arg)
  {
    this->m_load = _arg;
    return *this;
  }
  Type & set__i_load(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->i_load = _arg;
    return *this;
  }
  Type & set__f_x_cload(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->f_x_cload = _arg;
    return *this;
  }
  Type & set__m_total(
    const franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator> & _arg)
  {
    this->m_total = _arg;
    return *this;
  }
  Type & set__i_total(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->i_total = _arg;
    return *this;
  }
  Type & set__f_x_ctotal(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->f_x_ctotal = _arg;
    return *this;
  }
  Type & set__elbow(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->elbow = _arg;
    return *this;
  }
  Type & set__elbow_d(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->elbow_d = _arg;
    return *this;
  }
  Type & set__elbow_c(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->elbow_c = _arg;
    return *this;
  }
  Type & set__delbow_c(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->delbow_c = _arg;
    return *this;
  }
  Type & set__ddelbow_c(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->ddelbow_c = _arg;
    return *this;
  }
  Type & set__tau_j(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->tau_j = _arg;
    return *this;
  }
  Type & set__tau_j_d(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->tau_j_d = _arg;
    return *this;
  }
  Type & set__dtau_j(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->dtau_j = _arg;
    return *this;
  }
  Type & set__q(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__q_d(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->q_d = _arg;
    return *this;
  }
  Type & set__dq(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->dq = _arg;
    return *this;
  }
  Type & set__dq_d(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->dq_d = _arg;
    return *this;
  }
  Type & set__ddq_d(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->ddq_d = _arg;
    return *this;
  }
  Type & set__joint_contact(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->joint_contact = _arg;
    return *this;
  }
  Type & set__cartesian_contact(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->cartesian_contact = _arg;
    return *this;
  }
  Type & set__joint_collision(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->joint_collision = _arg;
    return *this;
  }
  Type & set__cartesian_collision(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->cartesian_collision = _arg;
    return *this;
  }
  Type & set__tau_ext_hat_filtered(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->tau_ext_hat_filtered = _arg;
    return *this;
  }
  Type & set__o_f_ext_hat_k(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->o_f_ext_hat_k = _arg;
    return *this;
  }
  Type & set__k_f_ext_hat_k(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->k_f_ext_hat_k = _arg;
    return *this;
  }
  Type & set__o_dp_ee_d(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->o_dp_ee_d = _arg;
    return *this;
  }
  Type & set__o_t_ee_c(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->o_t_ee_c = _arg;
    return *this;
  }
  Type & set__o_dp_ee_c(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->o_dp_ee_c = _arg;
    return *this;
  }
  Type & set__o_ddp_ee_c(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->o_ddp_ee_c = _arg;
    return *this;
  }
  Type & set__theta(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__dtheta(
    const std::vector<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<franka_pybridge_interfaces::msg::JointDataArray_<ContainerAllocator>>> & _arg)
  {
    this->dtheta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franka_pybridge_interfaces::srv::ExecutePlanLog_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const franka_pybridge_interfaces::srv::ExecutePlanLog_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franka_pybridge_interfaces::srv::ExecutePlanLog_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franka_pybridge_interfaces::srv::ExecutePlanLog_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franka_pybridge_interfaces::srv::ExecutePlanLog_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franka_pybridge_interfaces::srv::ExecutePlanLog_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franka_pybridge_interfaces::srv::ExecutePlanLog_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franka_pybridge_interfaces::srv::ExecutePlanLog_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franka_pybridge_interfaces::srv::ExecutePlanLog_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franka_pybridge_interfaces::srv::ExecutePlanLog_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franka_pybridge_interfaces__srv__ExecutePlanLog_Response
    std::shared_ptr<franka_pybridge_interfaces::srv::ExecutePlanLog_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franka_pybridge_interfaces__srv__ExecutePlanLog_Response
    std::shared_ptr<franka_pybridge_interfaces::srv::ExecutePlanLog_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecutePlanLog_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->o_t_ee != other.o_t_ee) {
      return false;
    }
    if (this->o_t_ee_d != other.o_t_ee_d) {
      return false;
    }
    if (this->f_t_ee != other.f_t_ee) {
      return false;
    }
    if (this->f_t_ne != other.f_t_ne) {
      return false;
    }
    if (this->ne_t_ee != other.ne_t_ee) {
      return false;
    }
    if (this->ee_t_k != other.ee_t_k) {
      return false;
    }
    if (this->m_ee != other.m_ee) {
      return false;
    }
    if (this->i_ee != other.i_ee) {
      return false;
    }
    if (this->f_x_cee != other.f_x_cee) {
      return false;
    }
    if (this->m_load != other.m_load) {
      return false;
    }
    if (this->i_load != other.i_load) {
      return false;
    }
    if (this->f_x_cload != other.f_x_cload) {
      return false;
    }
    if (this->m_total != other.m_total) {
      return false;
    }
    if (this->i_total != other.i_total) {
      return false;
    }
    if (this->f_x_ctotal != other.f_x_ctotal) {
      return false;
    }
    if (this->elbow != other.elbow) {
      return false;
    }
    if (this->elbow_d != other.elbow_d) {
      return false;
    }
    if (this->elbow_c != other.elbow_c) {
      return false;
    }
    if (this->delbow_c != other.delbow_c) {
      return false;
    }
    if (this->ddelbow_c != other.ddelbow_c) {
      return false;
    }
    if (this->tau_j != other.tau_j) {
      return false;
    }
    if (this->tau_j_d != other.tau_j_d) {
      return false;
    }
    if (this->dtau_j != other.dtau_j) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    if (this->q_d != other.q_d) {
      return false;
    }
    if (this->dq != other.dq) {
      return false;
    }
    if (this->dq_d != other.dq_d) {
      return false;
    }
    if (this->ddq_d != other.ddq_d) {
      return false;
    }
    if (this->joint_contact != other.joint_contact) {
      return false;
    }
    if (this->cartesian_contact != other.cartesian_contact) {
      return false;
    }
    if (this->joint_collision != other.joint_collision) {
      return false;
    }
    if (this->cartesian_collision != other.cartesian_collision) {
      return false;
    }
    if (this->tau_ext_hat_filtered != other.tau_ext_hat_filtered) {
      return false;
    }
    if (this->o_f_ext_hat_k != other.o_f_ext_hat_k) {
      return false;
    }
    if (this->k_f_ext_hat_k != other.k_f_ext_hat_k) {
      return false;
    }
    if (this->o_dp_ee_d != other.o_dp_ee_d) {
      return false;
    }
    if (this->o_t_ee_c != other.o_t_ee_c) {
      return false;
    }
    if (this->o_dp_ee_c != other.o_dp_ee_c) {
      return false;
    }
    if (this->o_ddp_ee_c != other.o_ddp_ee_c) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->dtheta != other.dtheta) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecutePlanLog_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecutePlanLog_Response_

// alias to use template instance with default allocator
using ExecutePlanLog_Response =
  franka_pybridge_interfaces::srv::ExecutePlanLog_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace franka_pybridge_interfaces

namespace franka_pybridge_interfaces
{

namespace srv
{

struct ExecutePlanLog
{
  using Request = franka_pybridge_interfaces::srv::ExecutePlanLog_Request;
  using Response = franka_pybridge_interfaces::srv::ExecutePlanLog_Response;
};

}  // namespace srv

}  // namespace franka_pybridge_interfaces

#endif  // FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN_LOG__STRUCT_HPP_
