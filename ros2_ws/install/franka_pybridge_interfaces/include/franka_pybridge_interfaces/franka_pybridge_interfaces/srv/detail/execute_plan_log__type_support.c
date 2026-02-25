// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from franka_pybridge_interfaces:srv/ExecutePlanLog.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "franka_pybridge_interfaces/srv/detail/execute_plan_log__rosidl_typesupport_introspection_c.h"
#include "franka_pybridge_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "franka_pybridge_interfaces/srv/detail/execute_plan_log__functions.h"
#include "franka_pybridge_interfaces/srv/detail/execute_plan_log__struct.h"


// Include directives for member types
// Member `vel_traj`
// Member `initial_pos`
#include "franka_pybridge_interfaces/msg/joint_data_array.h"
// Member `vel_traj`
// Member `initial_pos`
#include "franka_pybridge_interfaces/msg/detail/joint_data_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__ExecutePlanLog_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  franka_pybridge_interfaces__srv__ExecutePlanLog_Request__init(message_memory);
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__ExecutePlanLog_Request_fini_function(void * message_memory)
{
  franka_pybridge_interfaces__srv__ExecutePlanLog_Request__fini(message_memory);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Request__vel_traj(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Request__vel_traj(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Request__vel_traj(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Request__vel_traj(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Request__vel_traj(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Request__vel_traj(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Request__vel_traj(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Request__vel_traj(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__ExecutePlanLog_Request_message_member_array[2] = {
  {
    "vel_traj",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Request, vel_traj),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Request__vel_traj,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Request__vel_traj,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Request__vel_traj,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Request__vel_traj,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Request__vel_traj,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Request__vel_traj  // resize(index) function pointer
  },
  {
    "initial_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Request, initial_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__ExecutePlanLog_Request_message_members = {
  "franka_pybridge_interfaces__srv",  // message namespace
  "ExecutePlanLog_Request",  // message name
  2,  // number of fields
  sizeof(franka_pybridge_interfaces__srv__ExecutePlanLog_Request),
  franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__ExecutePlanLog_Request_message_member_array,  // message members
  franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__ExecutePlanLog_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__ExecutePlanLog_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__ExecutePlanLog_Request_message_type_support_handle = {
  0,
  &franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__ExecutePlanLog_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franka_pybridge_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, srv, ExecutePlanLog_Request)() {
  franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__ExecutePlanLog_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__ExecutePlanLog_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  if (!franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__ExecutePlanLog_Request_message_type_support_handle.typesupport_identifier) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__ExecutePlanLog_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &franka_pybridge_interfaces__srv__ExecutePlanLog_Request__rosidl_typesupport_introspection_c__ExecutePlanLog_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "franka_pybridge_interfaces/srv/detail/execute_plan_log__rosidl_typesupport_introspection_c.h"
// already included above
// #include "franka_pybridge_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "franka_pybridge_interfaces/srv/detail/execute_plan_log__functions.h"
// already included above
// #include "franka_pybridge_interfaces/srv/detail/execute_plan_log__struct.h"


// Include directives for member types
// Member `o_t_ee`
// Member `o_t_ee_d`
// Member `f_t_ee`
// Member `f_t_ne`
// Member `ne_t_ee`
// Member `ee_t_k`
// Member `m_ee`
// Member `i_ee`
// Member `f_x_cee`
// Member `m_load`
// Member `i_load`
// Member `f_x_cload`
// Member `m_total`
// Member `i_total`
// Member `f_x_ctotal`
// Member `elbow`
// Member `elbow_d`
// Member `elbow_c`
// Member `delbow_c`
// Member `ddelbow_c`
// Member `tau_j`
// Member `tau_j_d`
// Member `dtau_j`
// Member `q`
// Member `q_d`
// Member `dq`
// Member `dq_d`
// Member `ddq_d`
// Member `joint_contact`
// Member `cartesian_contact`
// Member `joint_collision`
// Member `cartesian_collision`
// Member `tau_ext_hat_filtered`
// Member `o_f_ext_hat_k`
// Member `k_f_ext_hat_k`
// Member `o_dp_ee_d`
// Member `o_t_ee_c`
// Member `o_dp_ee_c`
// Member `o_ddp_ee_c`
// Member `theta`
// Member `dtheta`
// already included above
// #include "franka_pybridge_interfaces/msg/joint_data_array.h"
// Member `o_t_ee`
// Member `o_t_ee_d`
// Member `f_t_ee`
// Member `f_t_ne`
// Member `ne_t_ee`
// Member `ee_t_k`
// Member `m_ee`
// Member `i_ee`
// Member `f_x_cee`
// Member `m_load`
// Member `i_load`
// Member `f_x_cload`
// Member `m_total`
// Member `i_total`
// Member `f_x_ctotal`
// Member `elbow`
// Member `elbow_d`
// Member `elbow_c`
// Member `delbow_c`
// Member `ddelbow_c`
// Member `tau_j`
// Member `tau_j_d`
// Member `dtau_j`
// Member `q`
// Member `q_d`
// Member `dq`
// Member `dq_d`
// Member `ddq_d`
// Member `joint_contact`
// Member `cartesian_contact`
// Member `joint_collision`
// Member `cartesian_collision`
// Member `tau_ext_hat_filtered`
// Member `o_f_ext_hat_k`
// Member `k_f_ext_hat_k`
// Member `o_dp_ee_d`
// Member `o_t_ee_c`
// Member `o_dp_ee_c`
// Member `o_ddp_ee_c`
// Member `theta`
// Member `dtheta`
// already included above
// #include "franka_pybridge_interfaces/msg/detail/joint_data_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__init(message_memory);
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_fini_function(void * message_memory)
{
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(message_memory);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__o_t_ee(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_t_ee(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_t_ee(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__o_t_ee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_t_ee(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__o_t_ee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_t_ee(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__o_t_ee(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__o_t_ee_d(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_t_ee_d(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_t_ee_d(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__o_t_ee_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_t_ee_d(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__o_t_ee_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_t_ee_d(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__o_t_ee_d(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__f_t_ee(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__f_t_ee(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__f_t_ee(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__f_t_ee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__f_t_ee(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__f_t_ee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__f_t_ee(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__f_t_ee(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__f_t_ne(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__f_t_ne(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__f_t_ne(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__f_t_ne(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__f_t_ne(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__f_t_ne(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__f_t_ne(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__f_t_ne(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__ne_t_ee(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__ne_t_ee(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__ne_t_ee(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__ne_t_ee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__ne_t_ee(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__ne_t_ee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__ne_t_ee(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__ne_t_ee(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__ee_t_k(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__ee_t_k(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__ee_t_k(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__ee_t_k(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__ee_t_k(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__ee_t_k(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__ee_t_k(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__ee_t_k(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__i_ee(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__i_ee(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__i_ee(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__i_ee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__i_ee(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__i_ee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__i_ee(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__i_ee(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__f_x_cee(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__f_x_cee(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__f_x_cee(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__f_x_cee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__f_x_cee(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__f_x_cee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__f_x_cee(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__f_x_cee(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__i_load(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__i_load(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__i_load(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__i_load(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__i_load(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__i_load(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__i_load(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__i_load(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__f_x_cload(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__f_x_cload(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__f_x_cload(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__f_x_cload(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__f_x_cload(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__f_x_cload(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__f_x_cload(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__f_x_cload(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__i_total(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__i_total(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__i_total(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__i_total(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__i_total(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__i_total(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__i_total(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__i_total(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__f_x_ctotal(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__f_x_ctotal(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__f_x_ctotal(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__f_x_ctotal(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__f_x_ctotal(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__f_x_ctotal(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__f_x_ctotal(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__f_x_ctotal(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__elbow(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__elbow(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__elbow(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__elbow(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__elbow(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__elbow(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__elbow(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__elbow(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__elbow_d(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__elbow_d(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__elbow_d(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__elbow_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__elbow_d(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__elbow_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__elbow_d(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__elbow_d(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__elbow_c(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__elbow_c(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__elbow_c(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__elbow_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__elbow_c(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__elbow_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__elbow_c(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__elbow_c(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__delbow_c(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__delbow_c(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__delbow_c(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__delbow_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__delbow_c(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__delbow_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__delbow_c(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__delbow_c(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__ddelbow_c(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__ddelbow_c(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__ddelbow_c(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__ddelbow_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__ddelbow_c(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__ddelbow_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__ddelbow_c(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__ddelbow_c(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__tau_j(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__tau_j(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__tau_j(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__tau_j(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__tau_j(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__tau_j(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__tau_j(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__tau_j(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__tau_j_d(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__tau_j_d(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__tau_j_d(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__tau_j_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__tau_j_d(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__tau_j_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__tau_j_d(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__tau_j_d(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__dtau_j(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__dtau_j(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__dtau_j(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__dtau_j(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__dtau_j(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__dtau_j(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__dtau_j(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__dtau_j(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__q(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__q(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__q(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__q(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__q(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__q(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__q_d(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__q_d(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__q_d(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__q_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__q_d(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__q_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__q_d(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__q_d(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__dq(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__dq(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__dq(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__dq(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__dq(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__dq(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__dq(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__dq(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__dq_d(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__dq_d(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__dq_d(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__dq_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__dq_d(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__dq_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__dq_d(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__dq_d(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__ddq_d(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__ddq_d(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__ddq_d(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__ddq_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__ddq_d(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__ddq_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__ddq_d(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__ddq_d(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__joint_contact(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__joint_contact(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__joint_contact(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__joint_contact(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__joint_contact(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__joint_contact(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__joint_contact(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__joint_contact(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__cartesian_contact(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__cartesian_contact(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__cartesian_contact(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__cartesian_contact(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__cartesian_contact(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__cartesian_contact(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__cartesian_contact(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__cartesian_contact(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__joint_collision(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__joint_collision(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__joint_collision(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__joint_collision(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__joint_collision(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__joint_collision(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__joint_collision(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__joint_collision(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__cartesian_collision(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__cartesian_collision(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__cartesian_collision(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__cartesian_collision(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__cartesian_collision(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__cartesian_collision(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__cartesian_collision(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__cartesian_collision(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__tau_ext_hat_filtered(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__tau_ext_hat_filtered(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__tau_ext_hat_filtered(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__tau_ext_hat_filtered(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__tau_ext_hat_filtered(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__tau_ext_hat_filtered(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__tau_ext_hat_filtered(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__tau_ext_hat_filtered(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__o_f_ext_hat_k(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_f_ext_hat_k(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_f_ext_hat_k(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__o_f_ext_hat_k(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_f_ext_hat_k(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__o_f_ext_hat_k(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_f_ext_hat_k(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__o_f_ext_hat_k(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__k_f_ext_hat_k(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__k_f_ext_hat_k(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__k_f_ext_hat_k(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__k_f_ext_hat_k(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__k_f_ext_hat_k(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__k_f_ext_hat_k(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__k_f_ext_hat_k(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__k_f_ext_hat_k(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__o_dp_ee_d(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_dp_ee_d(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_dp_ee_d(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__o_dp_ee_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_dp_ee_d(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__o_dp_ee_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_dp_ee_d(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__o_dp_ee_d(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__o_t_ee_c(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_t_ee_c(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_t_ee_c(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__o_t_ee_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_t_ee_c(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__o_t_ee_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_t_ee_c(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__o_t_ee_c(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__o_dp_ee_c(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_dp_ee_c(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_dp_ee_c(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__o_dp_ee_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_dp_ee_c(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__o_dp_ee_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_dp_ee_c(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__o_dp_ee_c(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__o_ddp_ee_c(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_ddp_ee_c(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_ddp_ee_c(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__o_ddp_ee_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_ddp_ee_c(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__o_ddp_ee_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_ddp_ee_c(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__o_ddp_ee_c(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__theta(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__theta(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__theta(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__theta(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__theta(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__theta(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__theta(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__theta(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

size_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__dtheta(
  const void * untyped_member)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__dtheta(
  const void * untyped_member, size_t index)
{
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (const franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__dtheta(
  void * untyped_member, size_t index)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__dtheta(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const franka_pybridge_interfaces__msg__JointDataArray * item =
    ((const franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__dtheta(untyped_member, index));
  franka_pybridge_interfaces__msg__JointDataArray * value =
    (franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__dtheta(
  void * untyped_member, size_t index, const void * untyped_value)
{
  franka_pybridge_interfaces__msg__JointDataArray * item =
    ((franka_pybridge_interfaces__msg__JointDataArray *)
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__dtheta(untyped_member, index));
  const franka_pybridge_interfaces__msg__JointDataArray * value =
    (const franka_pybridge_interfaces__msg__JointDataArray *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__dtheta(
  void * untyped_member, size_t size)
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * member =
    (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)(untyped_member);
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(member);
  return franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[42] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "o_t_ee",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, o_t_ee),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__o_t_ee,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_t_ee,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_t_ee,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__o_t_ee,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__o_t_ee,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__o_t_ee  // resize(index) function pointer
  },
  {
    "o_t_ee_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, o_t_ee_d),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__o_t_ee_d,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_t_ee_d,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_t_ee_d,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__o_t_ee_d,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__o_t_ee_d,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__o_t_ee_d  // resize(index) function pointer
  },
  {
    "f_t_ee",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, f_t_ee),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__f_t_ee,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__f_t_ee,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__f_t_ee,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__f_t_ee,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__f_t_ee,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__f_t_ee  // resize(index) function pointer
  },
  {
    "f_t_ne",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, f_t_ne),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__f_t_ne,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__f_t_ne,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__f_t_ne,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__f_t_ne,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__f_t_ne,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__f_t_ne  // resize(index) function pointer
  },
  {
    "ne_t_ee",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, ne_t_ee),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__ne_t_ee,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__ne_t_ee,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__ne_t_ee,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__ne_t_ee,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__ne_t_ee,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__ne_t_ee  // resize(index) function pointer
  },
  {
    "ee_t_k",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, ee_t_k),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__ee_t_k,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__ee_t_k,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__ee_t_k,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__ee_t_k,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__ee_t_k,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__ee_t_k  // resize(index) function pointer
  },
  {
    "m_ee",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, m_ee),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "i_ee",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, i_ee),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__i_ee,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__i_ee,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__i_ee,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__i_ee,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__i_ee,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__i_ee  // resize(index) function pointer
  },
  {
    "f_x_cee",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, f_x_cee),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__f_x_cee,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__f_x_cee,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__f_x_cee,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__f_x_cee,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__f_x_cee,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__f_x_cee  // resize(index) function pointer
  },
  {
    "m_load",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, m_load),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "i_load",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, i_load),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__i_load,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__i_load,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__i_load,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__i_load,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__i_load,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__i_load  // resize(index) function pointer
  },
  {
    "f_x_cload",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, f_x_cload),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__f_x_cload,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__f_x_cload,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__f_x_cload,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__f_x_cload,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__f_x_cload,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__f_x_cload  // resize(index) function pointer
  },
  {
    "m_total",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, m_total),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "i_total",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, i_total),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__i_total,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__i_total,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__i_total,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__i_total,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__i_total,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__i_total  // resize(index) function pointer
  },
  {
    "f_x_ctotal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, f_x_ctotal),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__f_x_ctotal,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__f_x_ctotal,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__f_x_ctotal,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__f_x_ctotal,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__f_x_ctotal,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__f_x_ctotal  // resize(index) function pointer
  },
  {
    "elbow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, elbow),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__elbow,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__elbow,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__elbow,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__elbow,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__elbow,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__elbow  // resize(index) function pointer
  },
  {
    "elbow_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, elbow_d),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__elbow_d,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__elbow_d,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__elbow_d,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__elbow_d,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__elbow_d,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__elbow_d  // resize(index) function pointer
  },
  {
    "elbow_c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, elbow_c),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__elbow_c,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__elbow_c,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__elbow_c,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__elbow_c,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__elbow_c,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__elbow_c  // resize(index) function pointer
  },
  {
    "delbow_c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, delbow_c),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__delbow_c,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__delbow_c,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__delbow_c,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__delbow_c,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__delbow_c,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__delbow_c  // resize(index) function pointer
  },
  {
    "ddelbow_c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, ddelbow_c),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__ddelbow_c,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__ddelbow_c,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__ddelbow_c,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__ddelbow_c,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__ddelbow_c,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__ddelbow_c  // resize(index) function pointer
  },
  {
    "tau_j",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, tau_j),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__tau_j,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__tau_j,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__tau_j,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__tau_j,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__tau_j,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__tau_j  // resize(index) function pointer
  },
  {
    "tau_j_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, tau_j_d),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__tau_j_d,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__tau_j_d,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__tau_j_d,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__tau_j_d,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__tau_j_d,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__tau_j_d  // resize(index) function pointer
  },
  {
    "dtau_j",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, dtau_j),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__dtau_j,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__dtau_j,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__dtau_j,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__dtau_j,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__dtau_j,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__dtau_j  // resize(index) function pointer
  },
  {
    "q",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, q),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__q,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__q,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__q,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__q,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__q,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__q  // resize(index) function pointer
  },
  {
    "q_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, q_d),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__q_d,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__q_d,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__q_d,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__q_d,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__q_d,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__q_d  // resize(index) function pointer
  },
  {
    "dq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, dq),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__dq,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__dq,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__dq,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__dq,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__dq,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__dq  // resize(index) function pointer
  },
  {
    "dq_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, dq_d),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__dq_d,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__dq_d,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__dq_d,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__dq_d,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__dq_d,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__dq_d  // resize(index) function pointer
  },
  {
    "ddq_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, ddq_d),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__ddq_d,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__ddq_d,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__ddq_d,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__ddq_d,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__ddq_d,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__ddq_d  // resize(index) function pointer
  },
  {
    "joint_contact",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, joint_contact),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__joint_contact,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__joint_contact,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__joint_contact,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__joint_contact,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__joint_contact,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__joint_contact  // resize(index) function pointer
  },
  {
    "cartesian_contact",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, cartesian_contact),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__cartesian_contact,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__cartesian_contact,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__cartesian_contact,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__cartesian_contact,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__cartesian_contact,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__cartesian_contact  // resize(index) function pointer
  },
  {
    "joint_collision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, joint_collision),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__joint_collision,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__joint_collision,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__joint_collision,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__joint_collision,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__joint_collision,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__joint_collision  // resize(index) function pointer
  },
  {
    "cartesian_collision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, cartesian_collision),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__cartesian_collision,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__cartesian_collision,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__cartesian_collision,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__cartesian_collision,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__cartesian_collision,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__cartesian_collision  // resize(index) function pointer
  },
  {
    "tau_ext_hat_filtered",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, tau_ext_hat_filtered),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__tau_ext_hat_filtered,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__tau_ext_hat_filtered,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__tau_ext_hat_filtered,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__tau_ext_hat_filtered,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__tau_ext_hat_filtered,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__tau_ext_hat_filtered  // resize(index) function pointer
  },
  {
    "o_f_ext_hat_k",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, o_f_ext_hat_k),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__o_f_ext_hat_k,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_f_ext_hat_k,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_f_ext_hat_k,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__o_f_ext_hat_k,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__o_f_ext_hat_k,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__o_f_ext_hat_k  // resize(index) function pointer
  },
  {
    "k_f_ext_hat_k",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, k_f_ext_hat_k),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__k_f_ext_hat_k,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__k_f_ext_hat_k,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__k_f_ext_hat_k,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__k_f_ext_hat_k,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__k_f_ext_hat_k,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__k_f_ext_hat_k  // resize(index) function pointer
  },
  {
    "o_dp_ee_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, o_dp_ee_d),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__o_dp_ee_d,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_dp_ee_d,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_dp_ee_d,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__o_dp_ee_d,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__o_dp_ee_d,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__o_dp_ee_d  // resize(index) function pointer
  },
  {
    "o_t_ee_c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, o_t_ee_c),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__o_t_ee_c,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_t_ee_c,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_t_ee_c,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__o_t_ee_c,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__o_t_ee_c,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__o_t_ee_c  // resize(index) function pointer
  },
  {
    "o_dp_ee_c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, o_dp_ee_c),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__o_dp_ee_c,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_dp_ee_c,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_dp_ee_c,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__o_dp_ee_c,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__o_dp_ee_c,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__o_dp_ee_c  // resize(index) function pointer
  },
  {
    "o_ddp_ee_c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, o_ddp_ee_c),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__o_ddp_ee_c,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__o_ddp_ee_c,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__o_ddp_ee_c,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__o_ddp_ee_c,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__o_ddp_ee_c,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__o_ddp_ee_c  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, theta),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__theta,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__theta,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__theta,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__theta,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__theta,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__theta  // resize(index) function pointer
  },
  {
    "dtheta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response, dtheta),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__size_function__ExecutePlanLog_Response__dtheta,  // size() function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_const_function__ExecutePlanLog_Response__dtheta,  // get_const(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__get_function__ExecutePlanLog_Response__dtheta,  // get(index) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__fetch_function__ExecutePlanLog_Response__dtheta,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__assign_function__ExecutePlanLog_Response__dtheta,  // assign(index, value) function pointer
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__resize_function__ExecutePlanLog_Response__dtheta  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_members = {
  "franka_pybridge_interfaces__srv",  // message namespace
  "ExecutePlanLog_Response",  // message name
  42,  // number of fields
  sizeof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response),
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array,  // message members
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_type_support_handle = {
  0,
  &franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franka_pybridge_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, srv, ExecutePlanLog_Response)() {
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[18].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[19].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[20].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[21].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[22].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[23].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[24].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[25].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[26].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[27].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[28].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[29].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[30].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[31].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[32].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[33].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[34].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[35].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[36].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[37].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[38].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[39].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[40].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_member_array[41].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)();
  if (!franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_type_support_handle.typesupport_identifier) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &franka_pybridge_interfaces__srv__ExecutePlanLog_Response__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "franka_pybridge_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "franka_pybridge_interfaces/srv/detail/execute_plan_log__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers franka_pybridge_interfaces__srv__detail__execute_plan_log__rosidl_typesupport_introspection_c__ExecutePlanLog_service_members = {
  "franka_pybridge_interfaces__srv",  // service namespace
  "ExecutePlanLog",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // franka_pybridge_interfaces__srv__detail__execute_plan_log__rosidl_typesupport_introspection_c__ExecutePlanLog_Request_message_type_support_handle,
  NULL  // response message
  // franka_pybridge_interfaces__srv__detail__execute_plan_log__rosidl_typesupport_introspection_c__ExecutePlanLog_Response_message_type_support_handle
};

static rosidl_service_type_support_t franka_pybridge_interfaces__srv__detail__execute_plan_log__rosidl_typesupport_introspection_c__ExecutePlanLog_service_type_support_handle = {
  0,
  &franka_pybridge_interfaces__srv__detail__execute_plan_log__rosidl_typesupport_introspection_c__ExecutePlanLog_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, srv, ExecutePlanLog_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, srv, ExecutePlanLog_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franka_pybridge_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, srv, ExecutePlanLog)() {
  if (!franka_pybridge_interfaces__srv__detail__execute_plan_log__rosidl_typesupport_introspection_c__ExecutePlanLog_service_type_support_handle.typesupport_identifier) {
    franka_pybridge_interfaces__srv__detail__execute_plan_log__rosidl_typesupport_introspection_c__ExecutePlanLog_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)franka_pybridge_interfaces__srv__detail__execute_plan_log__rosidl_typesupport_introspection_c__ExecutePlanLog_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, srv, ExecutePlanLog_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, srv, ExecutePlanLog_Response)()->data;
  }

  return &franka_pybridge_interfaces__srv__detail__execute_plan_log__rosidl_typesupport_introspection_c__ExecutePlanLog_service_type_support_handle;
}
