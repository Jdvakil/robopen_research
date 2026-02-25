// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from franka_pybridge_interfaces:srv/ExecutePlanLog.idl
// generated code does not contain a copyright notice
#include "franka_pybridge_interfaces/srv/detail/execute_plan_log__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "franka_pybridge_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "franka_pybridge_interfaces/srv/detail/execute_plan_log__struct.h"
#include "franka_pybridge_interfaces/srv/detail/execute_plan_log__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "franka_pybridge_interfaces/msg/detail/joint_data_array__functions.h"  // initial_pos, vel_traj

// forward declare type support functions
size_t get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray)();


using _ExecutePlanLog_Request__ros_msg_type = franka_pybridge_interfaces__srv__ExecutePlanLog_Request;

static bool _ExecutePlanLog_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ExecutePlanLog_Request__ros_msg_type * ros_message = static_cast<const _ExecutePlanLog_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: vel_traj
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->vel_traj.size;
    auto array_ptr = ros_message->vel_traj.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: initial_pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->initial_pos, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ExecutePlanLog_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ExecutePlanLog_Request__ros_msg_type * ros_message = static_cast<_ExecutePlanLog_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: vel_traj
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->vel_traj.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->vel_traj);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->vel_traj, size)) {
      fprintf(stderr, "failed to create array for field 'vel_traj'");
      return false;
    }
    auto array_ptr = ros_message->vel_traj.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: initial_pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->initial_pos))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_franka_pybridge_interfaces
size_t get_serialized_size_franka_pybridge_interfaces__srv__ExecutePlanLog_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ExecutePlanLog_Request__ros_msg_type * ros_message = static_cast<const _ExecutePlanLog_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name vel_traj
  {
    size_t array_size = ros_message->vel_traj.size;
    auto array_ptr = ros_message->vel_traj.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name initial_pos

  current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
    &(ros_message->initial_pos), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ExecutePlanLog_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_franka_pybridge_interfaces__srv__ExecutePlanLog_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_franka_pybridge_interfaces
size_t max_serialized_size_franka_pybridge_interfaces__srv__ExecutePlanLog_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: vel_traj
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: initial_pos
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = franka_pybridge_interfaces__srv__ExecutePlanLog_Request;
    is_plain =
      (
      offsetof(DataType, initial_pos) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ExecutePlanLog_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_franka_pybridge_interfaces__srv__ExecutePlanLog_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ExecutePlanLog_Request = {
  "franka_pybridge_interfaces::srv",
  "ExecutePlanLog_Request",
  _ExecutePlanLog_Request__cdr_serialize,
  _ExecutePlanLog_Request__cdr_deserialize,
  _ExecutePlanLog_Request__get_serialized_size,
  _ExecutePlanLog_Request__max_serialized_size
};

static rosidl_message_type_support_t _ExecutePlanLog_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ExecutePlanLog_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, srv, ExecutePlanLog_Request)() {
  return &_ExecutePlanLog_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "franka_pybridge_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "franka_pybridge_interfaces/srv/detail/execute_plan_log__struct.h"
// already included above
// #include "franka_pybridge_interfaces/srv/detail/execute_plan_log__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "franka_pybridge_interfaces/msg/detail/joint_data_array__functions.h"  // cartesian_collision, cartesian_contact, ddelbow_c, ddq_d, delbow_c, dq, dq_d, dtau_j, dtheta, ee_t_k, elbow, elbow_c, elbow_d, f_t_ee, f_t_ne, f_x_cee, f_x_cload, f_x_ctotal, i_ee, i_load, i_total, joint_collision, joint_contact, k_f_ext_hat_k, m_ee, m_load, m_total, ne_t_ee, o_ddp_ee_c, o_dp_ee_c, o_dp_ee_d, o_f_ext_hat_k, o_t_ee, o_t_ee_c, o_t_ee_d, q, q_d, tau_ext_hat_filtered, tau_j, tau_j_d, theta

// forward declare type support functions
size_t get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray)();


using _ExecutePlanLog_Response__ros_msg_type = franka_pybridge_interfaces__srv__ExecutePlanLog_Response;

static bool _ExecutePlanLog_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ExecutePlanLog_Response__ros_msg_type * ros_message = static_cast<const _ExecutePlanLog_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: o_t_ee
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->o_t_ee.size;
    auto array_ptr = ros_message->o_t_ee.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: o_t_ee_d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->o_t_ee_d.size;
    auto array_ptr = ros_message->o_t_ee_d.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: f_t_ee
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->f_t_ee.size;
    auto array_ptr = ros_message->f_t_ee.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: f_t_ne
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->f_t_ne.size;
    auto array_ptr = ros_message->f_t_ne.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: ne_t_ee
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->ne_t_ee.size;
    auto array_ptr = ros_message->ne_t_ee.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: ee_t_k
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->ee_t_k.size;
    auto array_ptr = ros_message->ee_t_k.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: m_ee
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->m_ee, cdr))
    {
      return false;
    }
  }

  // Field name: i_ee
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->i_ee.size;
    auto array_ptr = ros_message->i_ee.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: f_x_cee
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->f_x_cee.size;
    auto array_ptr = ros_message->f_x_cee.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: m_load
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->m_load, cdr))
    {
      return false;
    }
  }

  // Field name: i_load
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->i_load.size;
    auto array_ptr = ros_message->i_load.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: f_x_cload
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->f_x_cload.size;
    auto array_ptr = ros_message->f_x_cload.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: m_total
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->m_total, cdr))
    {
      return false;
    }
  }

  // Field name: i_total
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->i_total.size;
    auto array_ptr = ros_message->i_total.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: f_x_ctotal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->f_x_ctotal.size;
    auto array_ptr = ros_message->f_x_ctotal.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: elbow
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->elbow.size;
    auto array_ptr = ros_message->elbow.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: elbow_d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->elbow_d.size;
    auto array_ptr = ros_message->elbow_d.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: elbow_c
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->elbow_c.size;
    auto array_ptr = ros_message->elbow_c.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: delbow_c
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->delbow_c.size;
    auto array_ptr = ros_message->delbow_c.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: ddelbow_c
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->ddelbow_c.size;
    auto array_ptr = ros_message->ddelbow_c.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: tau_j
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->tau_j.size;
    auto array_ptr = ros_message->tau_j.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: tau_j_d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->tau_j_d.size;
    auto array_ptr = ros_message->tau_j_d.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: dtau_j
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->dtau_j.size;
    auto array_ptr = ros_message->dtau_j.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: q
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->q.size;
    auto array_ptr = ros_message->q.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: q_d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->q_d.size;
    auto array_ptr = ros_message->q_d.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: dq
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->dq.size;
    auto array_ptr = ros_message->dq.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: dq_d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->dq_d.size;
    auto array_ptr = ros_message->dq_d.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: ddq_d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->ddq_d.size;
    auto array_ptr = ros_message->ddq_d.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: joint_contact
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->joint_contact.size;
    auto array_ptr = ros_message->joint_contact.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: cartesian_contact
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->cartesian_contact.size;
    auto array_ptr = ros_message->cartesian_contact.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: joint_collision
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->joint_collision.size;
    auto array_ptr = ros_message->joint_collision.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: cartesian_collision
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->cartesian_collision.size;
    auto array_ptr = ros_message->cartesian_collision.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: tau_ext_hat_filtered
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->tau_ext_hat_filtered.size;
    auto array_ptr = ros_message->tau_ext_hat_filtered.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: o_f_ext_hat_k
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->o_f_ext_hat_k.size;
    auto array_ptr = ros_message->o_f_ext_hat_k.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: k_f_ext_hat_k
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->k_f_ext_hat_k.size;
    auto array_ptr = ros_message->k_f_ext_hat_k.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: o_dp_ee_d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->o_dp_ee_d.size;
    auto array_ptr = ros_message->o_dp_ee_d.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: o_t_ee_c
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->o_t_ee_c.size;
    auto array_ptr = ros_message->o_t_ee_c.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: o_dp_ee_c
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->o_dp_ee_c.size;
    auto array_ptr = ros_message->o_dp_ee_c.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: o_ddp_ee_c
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->o_ddp_ee_c.size;
    auto array_ptr = ros_message->o_ddp_ee_c.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: theta
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->theta.size;
    auto array_ptr = ros_message->theta.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: dtheta
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    size_t size = ros_message->dtheta.size;
    auto array_ptr = ros_message->dtheta.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _ExecutePlanLog_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ExecutePlanLog_Response__ros_msg_type * ros_message = static_cast<_ExecutePlanLog_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: o_t_ee
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->o_t_ee.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->o_t_ee);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->o_t_ee, size)) {
      fprintf(stderr, "failed to create array for field 'o_t_ee'");
      return false;
    }
    auto array_ptr = ros_message->o_t_ee.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: o_t_ee_d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->o_t_ee_d.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->o_t_ee_d);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->o_t_ee_d, size)) {
      fprintf(stderr, "failed to create array for field 'o_t_ee_d'");
      return false;
    }
    auto array_ptr = ros_message->o_t_ee_d.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: f_t_ee
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->f_t_ee.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->f_t_ee);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->f_t_ee, size)) {
      fprintf(stderr, "failed to create array for field 'f_t_ee'");
      return false;
    }
    auto array_ptr = ros_message->f_t_ee.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: f_t_ne
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->f_t_ne.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->f_t_ne);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->f_t_ne, size)) {
      fprintf(stderr, "failed to create array for field 'f_t_ne'");
      return false;
    }
    auto array_ptr = ros_message->f_t_ne.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: ne_t_ee
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->ne_t_ee.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->ne_t_ee);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->ne_t_ee, size)) {
      fprintf(stderr, "failed to create array for field 'ne_t_ee'");
      return false;
    }
    auto array_ptr = ros_message->ne_t_ee.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: ee_t_k
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->ee_t_k.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->ee_t_k);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->ee_t_k, size)) {
      fprintf(stderr, "failed to create array for field 'ee_t_k'");
      return false;
    }
    auto array_ptr = ros_message->ee_t_k.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: m_ee
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->m_ee))
    {
      return false;
    }
  }

  // Field name: i_ee
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->i_ee.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->i_ee);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->i_ee, size)) {
      fprintf(stderr, "failed to create array for field 'i_ee'");
      return false;
    }
    auto array_ptr = ros_message->i_ee.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: f_x_cee
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->f_x_cee.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->f_x_cee);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->f_x_cee, size)) {
      fprintf(stderr, "failed to create array for field 'f_x_cee'");
      return false;
    }
    auto array_ptr = ros_message->f_x_cee.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: m_load
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->m_load))
    {
      return false;
    }
  }

  // Field name: i_load
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->i_load.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->i_load);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->i_load, size)) {
      fprintf(stderr, "failed to create array for field 'i_load'");
      return false;
    }
    auto array_ptr = ros_message->i_load.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: f_x_cload
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->f_x_cload.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->f_x_cload);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->f_x_cload, size)) {
      fprintf(stderr, "failed to create array for field 'f_x_cload'");
      return false;
    }
    auto array_ptr = ros_message->f_x_cload.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: m_total
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->m_total))
    {
      return false;
    }
  }

  // Field name: i_total
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->i_total.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->i_total);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->i_total, size)) {
      fprintf(stderr, "failed to create array for field 'i_total'");
      return false;
    }
    auto array_ptr = ros_message->i_total.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: f_x_ctotal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->f_x_ctotal.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->f_x_ctotal);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->f_x_ctotal, size)) {
      fprintf(stderr, "failed to create array for field 'f_x_ctotal'");
      return false;
    }
    auto array_ptr = ros_message->f_x_ctotal.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: elbow
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->elbow.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->elbow);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->elbow, size)) {
      fprintf(stderr, "failed to create array for field 'elbow'");
      return false;
    }
    auto array_ptr = ros_message->elbow.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: elbow_d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->elbow_d.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->elbow_d);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->elbow_d, size)) {
      fprintf(stderr, "failed to create array for field 'elbow_d'");
      return false;
    }
    auto array_ptr = ros_message->elbow_d.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: elbow_c
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->elbow_c.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->elbow_c);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->elbow_c, size)) {
      fprintf(stderr, "failed to create array for field 'elbow_c'");
      return false;
    }
    auto array_ptr = ros_message->elbow_c.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: delbow_c
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->delbow_c.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->delbow_c);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->delbow_c, size)) {
      fprintf(stderr, "failed to create array for field 'delbow_c'");
      return false;
    }
    auto array_ptr = ros_message->delbow_c.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: ddelbow_c
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->ddelbow_c.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->ddelbow_c);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->ddelbow_c, size)) {
      fprintf(stderr, "failed to create array for field 'ddelbow_c'");
      return false;
    }
    auto array_ptr = ros_message->ddelbow_c.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: tau_j
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->tau_j.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->tau_j);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->tau_j, size)) {
      fprintf(stderr, "failed to create array for field 'tau_j'");
      return false;
    }
    auto array_ptr = ros_message->tau_j.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: tau_j_d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->tau_j_d.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->tau_j_d);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->tau_j_d, size)) {
      fprintf(stderr, "failed to create array for field 'tau_j_d'");
      return false;
    }
    auto array_ptr = ros_message->tau_j_d.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: dtau_j
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->dtau_j.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->dtau_j);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->dtau_j, size)) {
      fprintf(stderr, "failed to create array for field 'dtau_j'");
      return false;
    }
    auto array_ptr = ros_message->dtau_j.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: q
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->q.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->q);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->q, size)) {
      fprintf(stderr, "failed to create array for field 'q'");
      return false;
    }
    auto array_ptr = ros_message->q.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: q_d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->q_d.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->q_d);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->q_d, size)) {
      fprintf(stderr, "failed to create array for field 'q_d'");
      return false;
    }
    auto array_ptr = ros_message->q_d.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: dq
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->dq.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->dq);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->dq, size)) {
      fprintf(stderr, "failed to create array for field 'dq'");
      return false;
    }
    auto array_ptr = ros_message->dq.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: dq_d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->dq_d.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->dq_d);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->dq_d, size)) {
      fprintf(stderr, "failed to create array for field 'dq_d'");
      return false;
    }
    auto array_ptr = ros_message->dq_d.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: ddq_d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->ddq_d.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->ddq_d);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->ddq_d, size)) {
      fprintf(stderr, "failed to create array for field 'ddq_d'");
      return false;
    }
    auto array_ptr = ros_message->ddq_d.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: joint_contact
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->joint_contact.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->joint_contact);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->joint_contact, size)) {
      fprintf(stderr, "failed to create array for field 'joint_contact'");
      return false;
    }
    auto array_ptr = ros_message->joint_contact.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: cartesian_contact
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->cartesian_contact.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->cartesian_contact);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->cartesian_contact, size)) {
      fprintf(stderr, "failed to create array for field 'cartesian_contact'");
      return false;
    }
    auto array_ptr = ros_message->cartesian_contact.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: joint_collision
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->joint_collision.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->joint_collision);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->joint_collision, size)) {
      fprintf(stderr, "failed to create array for field 'joint_collision'");
      return false;
    }
    auto array_ptr = ros_message->joint_collision.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: cartesian_collision
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->cartesian_collision.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->cartesian_collision);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->cartesian_collision, size)) {
      fprintf(stderr, "failed to create array for field 'cartesian_collision'");
      return false;
    }
    auto array_ptr = ros_message->cartesian_collision.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: tau_ext_hat_filtered
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->tau_ext_hat_filtered.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->tau_ext_hat_filtered);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->tau_ext_hat_filtered, size)) {
      fprintf(stderr, "failed to create array for field 'tau_ext_hat_filtered'");
      return false;
    }
    auto array_ptr = ros_message->tau_ext_hat_filtered.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: o_f_ext_hat_k
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->o_f_ext_hat_k.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->o_f_ext_hat_k);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->o_f_ext_hat_k, size)) {
      fprintf(stderr, "failed to create array for field 'o_f_ext_hat_k'");
      return false;
    }
    auto array_ptr = ros_message->o_f_ext_hat_k.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: k_f_ext_hat_k
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->k_f_ext_hat_k.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->k_f_ext_hat_k);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->k_f_ext_hat_k, size)) {
      fprintf(stderr, "failed to create array for field 'k_f_ext_hat_k'");
      return false;
    }
    auto array_ptr = ros_message->k_f_ext_hat_k.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: o_dp_ee_d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->o_dp_ee_d.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->o_dp_ee_d);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->o_dp_ee_d, size)) {
      fprintf(stderr, "failed to create array for field 'o_dp_ee_d'");
      return false;
    }
    auto array_ptr = ros_message->o_dp_ee_d.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: o_t_ee_c
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->o_t_ee_c.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->o_t_ee_c);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->o_t_ee_c, size)) {
      fprintf(stderr, "failed to create array for field 'o_t_ee_c'");
      return false;
    }
    auto array_ptr = ros_message->o_t_ee_c.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: o_dp_ee_c
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->o_dp_ee_c.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->o_dp_ee_c);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->o_dp_ee_c, size)) {
      fprintf(stderr, "failed to create array for field 'o_dp_ee_c'");
      return false;
    }
    auto array_ptr = ros_message->o_dp_ee_c.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: o_ddp_ee_c
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->o_ddp_ee_c.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->o_ddp_ee_c);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->o_ddp_ee_c, size)) {
      fprintf(stderr, "failed to create array for field 'o_ddp_ee_c'");
      return false;
    }
    auto array_ptr = ros_message->o_ddp_ee_c.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: theta
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->theta.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->theta);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->theta, size)) {
      fprintf(stderr, "failed to create array for field 'theta'");
      return false;
    }
    auto array_ptr = ros_message->theta.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: dtheta
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, msg, JointDataArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->dtheta.data) {
      franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&ros_message->dtheta);
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&ros_message->dtheta, size)) {
      fprintf(stderr, "failed to create array for field 'dtheta'");
      return false;
    }
    auto array_ptr = ros_message->dtheta.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_franka_pybridge_interfaces
size_t get_serialized_size_franka_pybridge_interfaces__srv__ExecutePlanLog_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ExecutePlanLog_Response__ros_msg_type * ros_message = static_cast<const _ExecutePlanLog_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name o_t_ee
  {
    size_t array_size = ros_message->o_t_ee.size;
    auto array_ptr = ros_message->o_t_ee.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name o_t_ee_d
  {
    size_t array_size = ros_message->o_t_ee_d.size;
    auto array_ptr = ros_message->o_t_ee_d.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name f_t_ee
  {
    size_t array_size = ros_message->f_t_ee.size;
    auto array_ptr = ros_message->f_t_ee.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name f_t_ne
  {
    size_t array_size = ros_message->f_t_ne.size;
    auto array_ptr = ros_message->f_t_ne.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name ne_t_ee
  {
    size_t array_size = ros_message->ne_t_ee.size;
    auto array_ptr = ros_message->ne_t_ee.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name ee_t_k
  {
    size_t array_size = ros_message->ee_t_k.size;
    auto array_ptr = ros_message->ee_t_k.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name m_ee

  current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
    &(ros_message->m_ee), current_alignment);
  // field.name i_ee
  {
    size_t array_size = ros_message->i_ee.size;
    auto array_ptr = ros_message->i_ee.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name f_x_cee
  {
    size_t array_size = ros_message->f_x_cee.size;
    auto array_ptr = ros_message->f_x_cee.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name m_load

  current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
    &(ros_message->m_load), current_alignment);
  // field.name i_load
  {
    size_t array_size = ros_message->i_load.size;
    auto array_ptr = ros_message->i_load.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name f_x_cload
  {
    size_t array_size = ros_message->f_x_cload.size;
    auto array_ptr = ros_message->f_x_cload.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name m_total

  current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
    &(ros_message->m_total), current_alignment);
  // field.name i_total
  {
    size_t array_size = ros_message->i_total.size;
    auto array_ptr = ros_message->i_total.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name f_x_ctotal
  {
    size_t array_size = ros_message->f_x_ctotal.size;
    auto array_ptr = ros_message->f_x_ctotal.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name elbow
  {
    size_t array_size = ros_message->elbow.size;
    auto array_ptr = ros_message->elbow.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name elbow_d
  {
    size_t array_size = ros_message->elbow_d.size;
    auto array_ptr = ros_message->elbow_d.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name elbow_c
  {
    size_t array_size = ros_message->elbow_c.size;
    auto array_ptr = ros_message->elbow_c.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name delbow_c
  {
    size_t array_size = ros_message->delbow_c.size;
    auto array_ptr = ros_message->delbow_c.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name ddelbow_c
  {
    size_t array_size = ros_message->ddelbow_c.size;
    auto array_ptr = ros_message->ddelbow_c.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name tau_j
  {
    size_t array_size = ros_message->tau_j.size;
    auto array_ptr = ros_message->tau_j.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name tau_j_d
  {
    size_t array_size = ros_message->tau_j_d.size;
    auto array_ptr = ros_message->tau_j_d.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name dtau_j
  {
    size_t array_size = ros_message->dtau_j.size;
    auto array_ptr = ros_message->dtau_j.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name q
  {
    size_t array_size = ros_message->q.size;
    auto array_ptr = ros_message->q.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name q_d
  {
    size_t array_size = ros_message->q_d.size;
    auto array_ptr = ros_message->q_d.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name dq
  {
    size_t array_size = ros_message->dq.size;
    auto array_ptr = ros_message->dq.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name dq_d
  {
    size_t array_size = ros_message->dq_d.size;
    auto array_ptr = ros_message->dq_d.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name ddq_d
  {
    size_t array_size = ros_message->ddq_d.size;
    auto array_ptr = ros_message->ddq_d.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name joint_contact
  {
    size_t array_size = ros_message->joint_contact.size;
    auto array_ptr = ros_message->joint_contact.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name cartesian_contact
  {
    size_t array_size = ros_message->cartesian_contact.size;
    auto array_ptr = ros_message->cartesian_contact.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name joint_collision
  {
    size_t array_size = ros_message->joint_collision.size;
    auto array_ptr = ros_message->joint_collision.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name cartesian_collision
  {
    size_t array_size = ros_message->cartesian_collision.size;
    auto array_ptr = ros_message->cartesian_collision.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name tau_ext_hat_filtered
  {
    size_t array_size = ros_message->tau_ext_hat_filtered.size;
    auto array_ptr = ros_message->tau_ext_hat_filtered.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name o_f_ext_hat_k
  {
    size_t array_size = ros_message->o_f_ext_hat_k.size;
    auto array_ptr = ros_message->o_f_ext_hat_k.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name k_f_ext_hat_k
  {
    size_t array_size = ros_message->k_f_ext_hat_k.size;
    auto array_ptr = ros_message->k_f_ext_hat_k.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name o_dp_ee_d
  {
    size_t array_size = ros_message->o_dp_ee_d.size;
    auto array_ptr = ros_message->o_dp_ee_d.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name o_t_ee_c
  {
    size_t array_size = ros_message->o_t_ee_c.size;
    auto array_ptr = ros_message->o_t_ee_c.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name o_dp_ee_c
  {
    size_t array_size = ros_message->o_dp_ee_c.size;
    auto array_ptr = ros_message->o_dp_ee_c.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name o_ddp_ee_c
  {
    size_t array_size = ros_message->o_ddp_ee_c.size;
    auto array_ptr = ros_message->o_ddp_ee_c.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name theta
  {
    size_t array_size = ros_message->theta.size;
    auto array_ptr = ros_message->theta.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name dtheta
  {
    size_t array_size = ros_message->dtheta.size;
    auto array_ptr = ros_message->dtheta.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ExecutePlanLog_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_franka_pybridge_interfaces__srv__ExecutePlanLog_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_franka_pybridge_interfaces
size_t max_serialized_size_franka_pybridge_interfaces__srv__ExecutePlanLog_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: o_t_ee
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: o_t_ee_d
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: f_t_ee
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: f_t_ne
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: ne_t_ee
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: ee_t_k
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: m_ee
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: i_ee
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: f_x_cee
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: m_load
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: i_load
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: f_x_cload
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: m_total
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: i_total
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: f_x_ctotal
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: elbow
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: elbow_d
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: elbow_c
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: delbow_c
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: ddelbow_c
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: tau_j
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: tau_j_d
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: dtau_j
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: q
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: q_d
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: dq
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: dq_d
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: ddq_d
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: joint_contact
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: cartesian_contact
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: joint_collision
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: cartesian_collision
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: tau_ext_hat_filtered
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: o_f_ext_hat_k
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: k_f_ext_hat_k
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: o_dp_ee_d
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: o_t_ee_c
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: o_dp_ee_c
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: o_ddp_ee_c
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: theta
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: dtheta
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_pybridge_interfaces__msg__JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = franka_pybridge_interfaces__srv__ExecutePlanLog_Response;
    is_plain =
      (
      offsetof(DataType, dtheta) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ExecutePlanLog_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_franka_pybridge_interfaces__srv__ExecutePlanLog_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ExecutePlanLog_Response = {
  "franka_pybridge_interfaces::srv",
  "ExecutePlanLog_Response",
  _ExecutePlanLog_Response__cdr_serialize,
  _ExecutePlanLog_Response__cdr_deserialize,
  _ExecutePlanLog_Response__get_serialized_size,
  _ExecutePlanLog_Response__max_serialized_size
};

static rosidl_message_type_support_t _ExecutePlanLog_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ExecutePlanLog_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, srv, ExecutePlanLog_Response)() {
  return &_ExecutePlanLog_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "franka_pybridge_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "franka_pybridge_interfaces/srv/execute_plan_log.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ExecutePlanLog__callbacks = {
  "franka_pybridge_interfaces::srv",
  "ExecutePlanLog",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, srv, ExecutePlanLog_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, srv, ExecutePlanLog_Response)(),
};

static rosidl_service_type_support_t ExecutePlanLog__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ExecutePlanLog__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, srv, ExecutePlanLog)() {
  return &ExecutePlanLog__handle;
}

#if defined(__cplusplus)
}
#endif
