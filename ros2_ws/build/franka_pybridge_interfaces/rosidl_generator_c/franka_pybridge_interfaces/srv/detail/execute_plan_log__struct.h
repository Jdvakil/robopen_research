// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franka_pybridge_interfaces:srv/ExecutePlanLog.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN_LOG__STRUCT_H_
#define FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN_LOG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vel_traj'
// Member 'initial_pos'
#include "franka_pybridge_interfaces/msg/detail/joint_data_array__struct.h"

/// Struct defined in srv/ExecutePlanLog in the package franka_pybridge_interfaces.
typedef struct franka_pybridge_interfaces__srv__ExecutePlanLog_Request
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence vel_traj;
  franka_pybridge_interfaces__msg__JointDataArray initial_pos;
} franka_pybridge_interfaces__srv__ExecutePlanLog_Request;

// Struct for a sequence of franka_pybridge_interfaces__srv__ExecutePlanLog_Request.
typedef struct franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence
{
  franka_pybridge_interfaces__srv__ExecutePlanLog_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence;


// Constants defined in the message

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
// #include "franka_pybridge_interfaces/msg/detail/joint_data_array__struct.h"

/// Struct defined in srv/ExecutePlanLog in the package franka_pybridge_interfaces.
typedef struct franka_pybridge_interfaces__srv__ExecutePlanLog_Response
{
  bool success;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence o_t_ee;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence o_t_ee_d;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence f_t_ee;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence f_t_ne;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence ne_t_ee;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence ee_t_k;
  franka_pybridge_interfaces__msg__JointDataArray m_ee;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence i_ee;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence f_x_cee;
  franka_pybridge_interfaces__msg__JointDataArray m_load;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence i_load;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence f_x_cload;
  franka_pybridge_interfaces__msg__JointDataArray m_total;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence i_total;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence f_x_ctotal;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence elbow;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence elbow_d;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence elbow_c;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence delbow_c;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence ddelbow_c;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence tau_j;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence tau_j_d;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence dtau_j;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence q;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence q_d;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence dq;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence dq_d;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence ddq_d;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence joint_contact;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence cartesian_contact;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence joint_collision;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence cartesian_collision;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence tau_ext_hat_filtered;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence o_f_ext_hat_k;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence k_f_ext_hat_k;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence o_dp_ee_d;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence o_t_ee_c;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence o_dp_ee_c;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence o_ddp_ee_c;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence theta;
  franka_pybridge_interfaces__msg__JointDataArray__Sequence dtheta;
} franka_pybridge_interfaces__srv__ExecutePlanLog_Response;

// Struct for a sequence of franka_pybridge_interfaces__srv__ExecutePlanLog_Response.
typedef struct franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence
{
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN_LOG__STRUCT_H_
