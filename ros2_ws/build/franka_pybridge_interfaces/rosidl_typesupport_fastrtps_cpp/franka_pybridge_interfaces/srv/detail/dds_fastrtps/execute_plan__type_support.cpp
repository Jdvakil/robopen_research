// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from franka_pybridge_interfaces:srv/ExecutePlan.idl
// generated code does not contain a copyright notice
#include "franka_pybridge_interfaces/srv/detail/execute_plan__rosidl_typesupport_fastrtps_cpp.hpp"
#include "franka_pybridge_interfaces/srv/detail/execute_plan__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace franka_pybridge_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const franka_pybridge_interfaces::msg::JointDataArray &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  franka_pybridge_interfaces::msg::JointDataArray &);
size_t get_serialized_size(
  const franka_pybridge_interfaces::msg::JointDataArray &,
  size_t current_alignment);
size_t
max_serialized_size_JointDataArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace franka_pybridge_interfaces

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above


namespace franka_pybridge_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_pybridge_interfaces
cdr_serialize(
  const franka_pybridge_interfaces::srv::ExecutePlan_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: vel_traj
  {
    size_t size = ros_message.vel_traj.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.vel_traj[i],
        cdr);
    }
  }
  // Member: initial_pos
  franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.initial_pos,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_pybridge_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  franka_pybridge_interfaces::srv::ExecutePlan_Request & ros_message)
{
  // Member: vel_traj
  {
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

    ros_message.vel_traj.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.vel_traj[i]);
    }
  }

  // Member: initial_pos
  franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.initial_pos);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_pybridge_interfaces
get_serialized_size(
  const franka_pybridge_interfaces::srv::ExecutePlan_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: vel_traj
  {
    size_t array_size = ros_message.vel_traj.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.vel_traj[index], current_alignment);
    }
  }
  // Member: initial_pos

  current_alignment +=
    franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.initial_pos, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_pybridge_interfaces
max_serialized_size_ExecutePlan_Request(
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


  // Member: vel_traj
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
      size_t inner_size =
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_JointDataArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: initial_pos
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_JointDataArray(
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
    using DataType = franka_pybridge_interfaces::srv::ExecutePlan_Request;
    is_plain =
      (
      offsetof(DataType, initial_pos) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ExecutePlan_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const franka_pybridge_interfaces::srv::ExecutePlan_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ExecutePlan_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<franka_pybridge_interfaces::srv::ExecutePlan_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ExecutePlan_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const franka_pybridge_interfaces::srv::ExecutePlan_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ExecutePlan_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ExecutePlan_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ExecutePlan_Request__callbacks = {
  "franka_pybridge_interfaces::srv",
  "ExecutePlan_Request",
  _ExecutePlan_Request__cdr_serialize,
  _ExecutePlan_Request__cdr_deserialize,
  _ExecutePlan_Request__get_serialized_size,
  _ExecutePlan_Request__max_serialized_size
};

static rosidl_message_type_support_t _ExecutePlan_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ExecutePlan_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace franka_pybridge_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_franka_pybridge_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_pybridge_interfaces::srv::ExecutePlan_Request>()
{
  return &franka_pybridge_interfaces::srv::typesupport_fastrtps_cpp::_ExecutePlan_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_pybridge_interfaces, srv, ExecutePlan_Request)() {
  return &franka_pybridge_interfaces::srv::typesupport_fastrtps_cpp::_ExecutePlan_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace franka_pybridge_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_pybridge_interfaces
cdr_serialize(
  const franka_pybridge_interfaces::srv::ExecutePlan_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_pybridge_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  franka_pybridge_interfaces::srv::ExecutePlan_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_pybridge_interfaces
get_serialized_size(
  const franka_pybridge_interfaces::srv::ExecutePlan_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_pybridge_interfaces
max_serialized_size_ExecutePlan_Response(
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


  // Member: success
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
    using DataType = franka_pybridge_interfaces::srv::ExecutePlan_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ExecutePlan_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const franka_pybridge_interfaces::srv::ExecutePlan_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ExecutePlan_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<franka_pybridge_interfaces::srv::ExecutePlan_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ExecutePlan_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const franka_pybridge_interfaces::srv::ExecutePlan_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ExecutePlan_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ExecutePlan_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ExecutePlan_Response__callbacks = {
  "franka_pybridge_interfaces::srv",
  "ExecutePlan_Response",
  _ExecutePlan_Response__cdr_serialize,
  _ExecutePlan_Response__cdr_deserialize,
  _ExecutePlan_Response__get_serialized_size,
  _ExecutePlan_Response__max_serialized_size
};

static rosidl_message_type_support_t _ExecutePlan_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ExecutePlan_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace franka_pybridge_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_franka_pybridge_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_pybridge_interfaces::srv::ExecutePlan_Response>()
{
  return &franka_pybridge_interfaces::srv::typesupport_fastrtps_cpp::_ExecutePlan_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_pybridge_interfaces, srv, ExecutePlan_Response)() {
  return &franka_pybridge_interfaces::srv::typesupport_fastrtps_cpp::_ExecutePlan_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace franka_pybridge_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ExecutePlan__callbacks = {
  "franka_pybridge_interfaces::srv",
  "ExecutePlan",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_pybridge_interfaces, srv, ExecutePlan_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_pybridge_interfaces, srv, ExecutePlan_Response)(),
};

static rosidl_service_type_support_t _ExecutePlan__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ExecutePlan__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace franka_pybridge_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_franka_pybridge_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<franka_pybridge_interfaces::srv::ExecutePlan>()
{
  return &franka_pybridge_interfaces::srv::typesupport_fastrtps_cpp::_ExecutePlan__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_pybridge_interfaces, srv, ExecutePlan)() {
  return &franka_pybridge_interfaces::srv::typesupport_fastrtps_cpp::_ExecutePlan__handle;
}

#ifdef __cplusplus
}
#endif
