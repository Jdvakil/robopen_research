// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from franka_pybridge_interfaces:srv/ExecutePlan.idl
// generated code does not contain a copyright notice
#include "franka_pybridge_interfaces/srv/detail/execute_plan__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "franka_pybridge_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "franka_pybridge_interfaces/srv/detail/execute_plan__struct.h"
#include "franka_pybridge_interfaces/srv/detail/execute_plan__functions.h"
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


using _ExecutePlan_Request__ros_msg_type = franka_pybridge_interfaces__srv__ExecutePlan_Request;

static bool _ExecutePlan_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ExecutePlan_Request__ros_msg_type * ros_message = static_cast<const _ExecutePlan_Request__ros_msg_type *>(untyped_ros_message);
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

static bool _ExecutePlan_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ExecutePlan_Request__ros_msg_type * ros_message = static_cast<_ExecutePlan_Request__ros_msg_type *>(untyped_ros_message);
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
size_t get_serialized_size_franka_pybridge_interfaces__srv__ExecutePlan_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ExecutePlan_Request__ros_msg_type * ros_message = static_cast<const _ExecutePlan_Request__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _ExecutePlan_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_franka_pybridge_interfaces__srv__ExecutePlan_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_franka_pybridge_interfaces
size_t max_serialized_size_franka_pybridge_interfaces__srv__ExecutePlan_Request(
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
    using DataType = franka_pybridge_interfaces__srv__ExecutePlan_Request;
    is_plain =
      (
      offsetof(DataType, initial_pos) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ExecutePlan_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_franka_pybridge_interfaces__srv__ExecutePlan_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ExecutePlan_Request = {
  "franka_pybridge_interfaces::srv",
  "ExecutePlan_Request",
  _ExecutePlan_Request__cdr_serialize,
  _ExecutePlan_Request__cdr_deserialize,
  _ExecutePlan_Request__get_serialized_size,
  _ExecutePlan_Request__max_serialized_size
};

static rosidl_message_type_support_t _ExecutePlan_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ExecutePlan_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, srv, ExecutePlan_Request)() {
  return &_ExecutePlan_Request__type_support;
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
// #include "franka_pybridge_interfaces/srv/detail/execute_plan__struct.h"
// already included above
// #include "franka_pybridge_interfaces/srv/detail/execute_plan__functions.h"
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


// forward declare type support functions


using _ExecutePlan_Response__ros_msg_type = franka_pybridge_interfaces__srv__ExecutePlan_Response;

static bool _ExecutePlan_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ExecutePlan_Response__ros_msg_type * ros_message = static_cast<const _ExecutePlan_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _ExecutePlan_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ExecutePlan_Response__ros_msg_type * ros_message = static_cast<_ExecutePlan_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_franka_pybridge_interfaces
size_t get_serialized_size_franka_pybridge_interfaces__srv__ExecutePlan_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ExecutePlan_Response__ros_msg_type * ros_message = static_cast<const _ExecutePlan_Response__ros_msg_type *>(untyped_ros_message);
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

  return current_alignment - initial_alignment;
}

static uint32_t _ExecutePlan_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_franka_pybridge_interfaces__srv__ExecutePlan_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_franka_pybridge_interfaces
size_t max_serialized_size_franka_pybridge_interfaces__srv__ExecutePlan_Response(
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = franka_pybridge_interfaces__srv__ExecutePlan_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ExecutePlan_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_franka_pybridge_interfaces__srv__ExecutePlan_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ExecutePlan_Response = {
  "franka_pybridge_interfaces::srv",
  "ExecutePlan_Response",
  _ExecutePlan_Response__cdr_serialize,
  _ExecutePlan_Response__cdr_deserialize,
  _ExecutePlan_Response__get_serialized_size,
  _ExecutePlan_Response__max_serialized_size
};

static rosidl_message_type_support_t _ExecutePlan_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ExecutePlan_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, srv, ExecutePlan_Response)() {
  return &_ExecutePlan_Response__type_support;
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
#include "franka_pybridge_interfaces/srv/execute_plan.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ExecutePlan__callbacks = {
  "franka_pybridge_interfaces::srv",
  "ExecutePlan",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, srv, ExecutePlan_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, srv, ExecutePlan_Response)(),
};

static rosidl_service_type_support_t ExecutePlan__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ExecutePlan__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, srv, ExecutePlan)() {
  return &ExecutePlan__handle;
}

#if defined(__cplusplus)
}
#endif
