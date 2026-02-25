// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franka_pybridge_interfaces:srv/ExecutePlanLog.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN_LOG__BUILDER_HPP_
#define FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN_LOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franka_pybridge_interfaces/srv/detail/execute_plan_log__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franka_pybridge_interfaces
{

namespace srv
{

namespace builder
{

class Init_ExecutePlanLog_Request_initial_pos
{
public:
  explicit Init_ExecutePlanLog_Request_initial_pos(::franka_pybridge_interfaces::srv::ExecutePlanLog_Request & msg)
  : msg_(msg)
  {}
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Request initial_pos(::franka_pybridge_interfaces::srv::ExecutePlanLog_Request::_initial_pos_type arg)
  {
    msg_.initial_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Request msg_;
};

class Init_ExecutePlanLog_Request_vel_traj
{
public:
  Init_ExecutePlanLog_Request_vel_traj()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecutePlanLog_Request_initial_pos vel_traj(::franka_pybridge_interfaces::srv::ExecutePlanLog_Request::_vel_traj_type arg)
  {
    msg_.vel_traj = std::move(arg);
    return Init_ExecutePlanLog_Request_initial_pos(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_pybridge_interfaces::srv::ExecutePlanLog_Request>()
{
  return franka_pybridge_interfaces::srv::builder::Init_ExecutePlanLog_Request_vel_traj();
}

}  // namespace franka_pybridge_interfaces


namespace franka_pybridge_interfaces
{

namespace srv
{

namespace builder
{

class Init_ExecutePlanLog_Response_dtheta
{
public:
  explicit Init_ExecutePlanLog_Response_dtheta(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response dtheta(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_dtheta_type arg)
  {
    msg_.dtheta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_theta
{
public:
  explicit Init_ExecutePlanLog_Response_theta(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_dtheta theta(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_ExecutePlanLog_Response_dtheta(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_o_ddp_ee_c
{
public:
  explicit Init_ExecutePlanLog_Response_o_ddp_ee_c(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_theta o_ddp_ee_c(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_o_ddp_ee_c_type arg)
  {
    msg_.o_ddp_ee_c = std::move(arg);
    return Init_ExecutePlanLog_Response_theta(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_o_dp_ee_c
{
public:
  explicit Init_ExecutePlanLog_Response_o_dp_ee_c(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_o_ddp_ee_c o_dp_ee_c(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_o_dp_ee_c_type arg)
  {
    msg_.o_dp_ee_c = std::move(arg);
    return Init_ExecutePlanLog_Response_o_ddp_ee_c(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_o_t_ee_c
{
public:
  explicit Init_ExecutePlanLog_Response_o_t_ee_c(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_o_dp_ee_c o_t_ee_c(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_o_t_ee_c_type arg)
  {
    msg_.o_t_ee_c = std::move(arg);
    return Init_ExecutePlanLog_Response_o_dp_ee_c(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_o_dp_ee_d
{
public:
  explicit Init_ExecutePlanLog_Response_o_dp_ee_d(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_o_t_ee_c o_dp_ee_d(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_o_dp_ee_d_type arg)
  {
    msg_.o_dp_ee_d = std::move(arg);
    return Init_ExecutePlanLog_Response_o_t_ee_c(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_k_f_ext_hat_k
{
public:
  explicit Init_ExecutePlanLog_Response_k_f_ext_hat_k(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_o_dp_ee_d k_f_ext_hat_k(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_k_f_ext_hat_k_type arg)
  {
    msg_.k_f_ext_hat_k = std::move(arg);
    return Init_ExecutePlanLog_Response_o_dp_ee_d(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_o_f_ext_hat_k
{
public:
  explicit Init_ExecutePlanLog_Response_o_f_ext_hat_k(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_k_f_ext_hat_k o_f_ext_hat_k(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_o_f_ext_hat_k_type arg)
  {
    msg_.o_f_ext_hat_k = std::move(arg);
    return Init_ExecutePlanLog_Response_k_f_ext_hat_k(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_tau_ext_hat_filtered
{
public:
  explicit Init_ExecutePlanLog_Response_tau_ext_hat_filtered(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_o_f_ext_hat_k tau_ext_hat_filtered(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_tau_ext_hat_filtered_type arg)
  {
    msg_.tau_ext_hat_filtered = std::move(arg);
    return Init_ExecutePlanLog_Response_o_f_ext_hat_k(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_cartesian_collision
{
public:
  explicit Init_ExecutePlanLog_Response_cartesian_collision(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_tau_ext_hat_filtered cartesian_collision(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_cartesian_collision_type arg)
  {
    msg_.cartesian_collision = std::move(arg);
    return Init_ExecutePlanLog_Response_tau_ext_hat_filtered(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_joint_collision
{
public:
  explicit Init_ExecutePlanLog_Response_joint_collision(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_cartesian_collision joint_collision(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_joint_collision_type arg)
  {
    msg_.joint_collision = std::move(arg);
    return Init_ExecutePlanLog_Response_cartesian_collision(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_cartesian_contact
{
public:
  explicit Init_ExecutePlanLog_Response_cartesian_contact(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_joint_collision cartesian_contact(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_cartesian_contact_type arg)
  {
    msg_.cartesian_contact = std::move(arg);
    return Init_ExecutePlanLog_Response_joint_collision(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_joint_contact
{
public:
  explicit Init_ExecutePlanLog_Response_joint_contact(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_cartesian_contact joint_contact(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_joint_contact_type arg)
  {
    msg_.joint_contact = std::move(arg);
    return Init_ExecutePlanLog_Response_cartesian_contact(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_ddq_d
{
public:
  explicit Init_ExecutePlanLog_Response_ddq_d(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_joint_contact ddq_d(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_ddq_d_type arg)
  {
    msg_.ddq_d = std::move(arg);
    return Init_ExecutePlanLog_Response_joint_contact(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_dq_d
{
public:
  explicit Init_ExecutePlanLog_Response_dq_d(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_ddq_d dq_d(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_dq_d_type arg)
  {
    msg_.dq_d = std::move(arg);
    return Init_ExecutePlanLog_Response_ddq_d(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_dq
{
public:
  explicit Init_ExecutePlanLog_Response_dq(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_dq_d dq(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_dq_type arg)
  {
    msg_.dq = std::move(arg);
    return Init_ExecutePlanLog_Response_dq_d(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_q_d
{
public:
  explicit Init_ExecutePlanLog_Response_q_d(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_dq q_d(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_q_d_type arg)
  {
    msg_.q_d = std::move(arg);
    return Init_ExecutePlanLog_Response_dq(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_q
{
public:
  explicit Init_ExecutePlanLog_Response_q(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_q_d q(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_ExecutePlanLog_Response_q_d(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_dtau_j
{
public:
  explicit Init_ExecutePlanLog_Response_dtau_j(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_q dtau_j(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_dtau_j_type arg)
  {
    msg_.dtau_j = std::move(arg);
    return Init_ExecutePlanLog_Response_q(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_tau_j_d
{
public:
  explicit Init_ExecutePlanLog_Response_tau_j_d(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_dtau_j tau_j_d(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_tau_j_d_type arg)
  {
    msg_.tau_j_d = std::move(arg);
    return Init_ExecutePlanLog_Response_dtau_j(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_tau_j
{
public:
  explicit Init_ExecutePlanLog_Response_tau_j(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_tau_j_d tau_j(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_tau_j_type arg)
  {
    msg_.tau_j = std::move(arg);
    return Init_ExecutePlanLog_Response_tau_j_d(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_ddelbow_c
{
public:
  explicit Init_ExecutePlanLog_Response_ddelbow_c(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_tau_j ddelbow_c(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_ddelbow_c_type arg)
  {
    msg_.ddelbow_c = std::move(arg);
    return Init_ExecutePlanLog_Response_tau_j(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_delbow_c
{
public:
  explicit Init_ExecutePlanLog_Response_delbow_c(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_ddelbow_c delbow_c(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_delbow_c_type arg)
  {
    msg_.delbow_c = std::move(arg);
    return Init_ExecutePlanLog_Response_ddelbow_c(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_elbow_c
{
public:
  explicit Init_ExecutePlanLog_Response_elbow_c(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_delbow_c elbow_c(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_elbow_c_type arg)
  {
    msg_.elbow_c = std::move(arg);
    return Init_ExecutePlanLog_Response_delbow_c(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_elbow_d
{
public:
  explicit Init_ExecutePlanLog_Response_elbow_d(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_elbow_c elbow_d(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_elbow_d_type arg)
  {
    msg_.elbow_d = std::move(arg);
    return Init_ExecutePlanLog_Response_elbow_c(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_elbow
{
public:
  explicit Init_ExecutePlanLog_Response_elbow(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_elbow_d elbow(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_elbow_type arg)
  {
    msg_.elbow = std::move(arg);
    return Init_ExecutePlanLog_Response_elbow_d(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_f_x_ctotal
{
public:
  explicit Init_ExecutePlanLog_Response_f_x_ctotal(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_elbow f_x_ctotal(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_f_x_ctotal_type arg)
  {
    msg_.f_x_ctotal = std::move(arg);
    return Init_ExecutePlanLog_Response_elbow(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_i_total
{
public:
  explicit Init_ExecutePlanLog_Response_i_total(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_f_x_ctotal i_total(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_i_total_type arg)
  {
    msg_.i_total = std::move(arg);
    return Init_ExecutePlanLog_Response_f_x_ctotal(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_m_total
{
public:
  explicit Init_ExecutePlanLog_Response_m_total(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_i_total m_total(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_m_total_type arg)
  {
    msg_.m_total = std::move(arg);
    return Init_ExecutePlanLog_Response_i_total(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_f_x_cload
{
public:
  explicit Init_ExecutePlanLog_Response_f_x_cload(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_m_total f_x_cload(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_f_x_cload_type arg)
  {
    msg_.f_x_cload = std::move(arg);
    return Init_ExecutePlanLog_Response_m_total(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_i_load
{
public:
  explicit Init_ExecutePlanLog_Response_i_load(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_f_x_cload i_load(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_i_load_type arg)
  {
    msg_.i_load = std::move(arg);
    return Init_ExecutePlanLog_Response_f_x_cload(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_m_load
{
public:
  explicit Init_ExecutePlanLog_Response_m_load(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_i_load m_load(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_m_load_type arg)
  {
    msg_.m_load = std::move(arg);
    return Init_ExecutePlanLog_Response_i_load(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_f_x_cee
{
public:
  explicit Init_ExecutePlanLog_Response_f_x_cee(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_m_load f_x_cee(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_f_x_cee_type arg)
  {
    msg_.f_x_cee = std::move(arg);
    return Init_ExecutePlanLog_Response_m_load(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_i_ee
{
public:
  explicit Init_ExecutePlanLog_Response_i_ee(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_f_x_cee i_ee(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_i_ee_type arg)
  {
    msg_.i_ee = std::move(arg);
    return Init_ExecutePlanLog_Response_f_x_cee(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_m_ee
{
public:
  explicit Init_ExecutePlanLog_Response_m_ee(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_i_ee m_ee(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_m_ee_type arg)
  {
    msg_.m_ee = std::move(arg);
    return Init_ExecutePlanLog_Response_i_ee(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_ee_t_k
{
public:
  explicit Init_ExecutePlanLog_Response_ee_t_k(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_m_ee ee_t_k(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_ee_t_k_type arg)
  {
    msg_.ee_t_k = std::move(arg);
    return Init_ExecutePlanLog_Response_m_ee(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_ne_t_ee
{
public:
  explicit Init_ExecutePlanLog_Response_ne_t_ee(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_ee_t_k ne_t_ee(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_ne_t_ee_type arg)
  {
    msg_.ne_t_ee = std::move(arg);
    return Init_ExecutePlanLog_Response_ee_t_k(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_f_t_ne
{
public:
  explicit Init_ExecutePlanLog_Response_f_t_ne(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_ne_t_ee f_t_ne(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_f_t_ne_type arg)
  {
    msg_.f_t_ne = std::move(arg);
    return Init_ExecutePlanLog_Response_ne_t_ee(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_f_t_ee
{
public:
  explicit Init_ExecutePlanLog_Response_f_t_ee(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_f_t_ne f_t_ee(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_f_t_ee_type arg)
  {
    msg_.f_t_ee = std::move(arg);
    return Init_ExecutePlanLog_Response_f_t_ne(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_o_t_ee_d
{
public:
  explicit Init_ExecutePlanLog_Response_o_t_ee_d(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_f_t_ee o_t_ee_d(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_o_t_ee_d_type arg)
  {
    msg_.o_t_ee_d = std::move(arg);
    return Init_ExecutePlanLog_Response_f_t_ee(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_o_t_ee
{
public:
  explicit Init_ExecutePlanLog_Response_o_t_ee(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePlanLog_Response_o_t_ee_d o_t_ee(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_o_t_ee_type arg)
  {
    msg_.o_t_ee = std::move(arg);
    return Init_ExecutePlanLog_Response_o_t_ee_d(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

class Init_ExecutePlanLog_Response_success
{
public:
  Init_ExecutePlanLog_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecutePlanLog_Response_o_t_ee success(::franka_pybridge_interfaces::srv::ExecutePlanLog_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExecutePlanLog_Response_o_t_ee(msg_);
  }

private:
  ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_pybridge_interfaces::srv::ExecutePlanLog_Response>()
{
  return franka_pybridge_interfaces::srv::builder::Init_ExecutePlanLog_Response_success();
}

}  // namespace franka_pybridge_interfaces

#endif  // FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN_LOG__BUILDER_HPP_
