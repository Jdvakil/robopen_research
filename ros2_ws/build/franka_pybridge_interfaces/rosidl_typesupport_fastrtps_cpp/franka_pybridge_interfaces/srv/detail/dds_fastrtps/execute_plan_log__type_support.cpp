// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from franka_pybridge_interfaces:srv/ExecutePlanLog.idl
// generated code does not contain a copyright notice
#include "franka_pybridge_interfaces/srv/detail/execute_plan_log__rosidl_typesupport_fastrtps_cpp.hpp"
#include "franka_pybridge_interfaces/srv/detail/execute_plan_log__struct.hpp"

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
  const franka_pybridge_interfaces::srv::ExecutePlanLog_Request & ros_message,
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
  franka_pybridge_interfaces::srv::ExecutePlanLog_Request & ros_message)
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
  const franka_pybridge_interfaces::srv::ExecutePlanLog_Request & ros_message,
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
max_serialized_size_ExecutePlanLog_Request(
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
    using DataType = franka_pybridge_interfaces::srv::ExecutePlanLog_Request;
    is_plain =
      (
      offsetof(DataType, initial_pos) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ExecutePlanLog_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const franka_pybridge_interfaces::srv::ExecutePlanLog_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ExecutePlanLog_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<franka_pybridge_interfaces::srv::ExecutePlanLog_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ExecutePlanLog_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const franka_pybridge_interfaces::srv::ExecutePlanLog_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ExecutePlanLog_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ExecutePlanLog_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ExecutePlanLog_Request__callbacks = {
  "franka_pybridge_interfaces::srv",
  "ExecutePlanLog_Request",
  _ExecutePlanLog_Request__cdr_serialize,
  _ExecutePlanLog_Request__cdr_deserialize,
  _ExecutePlanLog_Request__get_serialized_size,
  _ExecutePlanLog_Request__max_serialized_size
};

static rosidl_message_type_support_t _ExecutePlanLog_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ExecutePlanLog_Request__callbacks,
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
get_message_type_support_handle<franka_pybridge_interfaces::srv::ExecutePlanLog_Request>()
{
  return &franka_pybridge_interfaces::srv::typesupport_fastrtps_cpp::_ExecutePlanLog_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_pybridge_interfaces, srv, ExecutePlanLog_Request)() {
  return &franka_pybridge_interfaces::srv::typesupport_fastrtps_cpp::_ExecutePlanLog_Request__handle;
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
// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

// functions for franka_pybridge_interfaces::msg::JointDataArray already declared above

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
  const franka_pybridge_interfaces::srv::ExecutePlanLog_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  // Member: o_t_ee
  {
    size_t size = ros_message.o_t_ee.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.o_t_ee[i],
        cdr);
    }
  }
  // Member: o_t_ee_d
  {
    size_t size = ros_message.o_t_ee_d.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.o_t_ee_d[i],
        cdr);
    }
  }
  // Member: f_t_ee
  {
    size_t size = ros_message.f_t_ee.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.f_t_ee[i],
        cdr);
    }
  }
  // Member: f_t_ne
  {
    size_t size = ros_message.f_t_ne.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.f_t_ne[i],
        cdr);
    }
  }
  // Member: ne_t_ee
  {
    size_t size = ros_message.ne_t_ee.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.ne_t_ee[i],
        cdr);
    }
  }
  // Member: ee_t_k
  {
    size_t size = ros_message.ee_t_k.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.ee_t_k[i],
        cdr);
    }
  }
  // Member: m_ee
  franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.m_ee,
    cdr);
  // Member: i_ee
  {
    size_t size = ros_message.i_ee.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.i_ee[i],
        cdr);
    }
  }
  // Member: f_x_cee
  {
    size_t size = ros_message.f_x_cee.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.f_x_cee[i],
        cdr);
    }
  }
  // Member: m_load
  franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.m_load,
    cdr);
  // Member: i_load
  {
    size_t size = ros_message.i_load.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.i_load[i],
        cdr);
    }
  }
  // Member: f_x_cload
  {
    size_t size = ros_message.f_x_cload.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.f_x_cload[i],
        cdr);
    }
  }
  // Member: m_total
  franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.m_total,
    cdr);
  // Member: i_total
  {
    size_t size = ros_message.i_total.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.i_total[i],
        cdr);
    }
  }
  // Member: f_x_ctotal
  {
    size_t size = ros_message.f_x_ctotal.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.f_x_ctotal[i],
        cdr);
    }
  }
  // Member: elbow
  {
    size_t size = ros_message.elbow.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.elbow[i],
        cdr);
    }
  }
  // Member: elbow_d
  {
    size_t size = ros_message.elbow_d.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.elbow_d[i],
        cdr);
    }
  }
  // Member: elbow_c
  {
    size_t size = ros_message.elbow_c.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.elbow_c[i],
        cdr);
    }
  }
  // Member: delbow_c
  {
    size_t size = ros_message.delbow_c.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.delbow_c[i],
        cdr);
    }
  }
  // Member: ddelbow_c
  {
    size_t size = ros_message.ddelbow_c.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.ddelbow_c[i],
        cdr);
    }
  }
  // Member: tau_j
  {
    size_t size = ros_message.tau_j.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.tau_j[i],
        cdr);
    }
  }
  // Member: tau_j_d
  {
    size_t size = ros_message.tau_j_d.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.tau_j_d[i],
        cdr);
    }
  }
  // Member: dtau_j
  {
    size_t size = ros_message.dtau_j.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.dtau_j[i],
        cdr);
    }
  }
  // Member: q
  {
    size_t size = ros_message.q.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.q[i],
        cdr);
    }
  }
  // Member: q_d
  {
    size_t size = ros_message.q_d.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.q_d[i],
        cdr);
    }
  }
  // Member: dq
  {
    size_t size = ros_message.dq.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.dq[i],
        cdr);
    }
  }
  // Member: dq_d
  {
    size_t size = ros_message.dq_d.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.dq_d[i],
        cdr);
    }
  }
  // Member: ddq_d
  {
    size_t size = ros_message.ddq_d.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.ddq_d[i],
        cdr);
    }
  }
  // Member: joint_contact
  {
    size_t size = ros_message.joint_contact.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.joint_contact[i],
        cdr);
    }
  }
  // Member: cartesian_contact
  {
    size_t size = ros_message.cartesian_contact.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.cartesian_contact[i],
        cdr);
    }
  }
  // Member: joint_collision
  {
    size_t size = ros_message.joint_collision.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.joint_collision[i],
        cdr);
    }
  }
  // Member: cartesian_collision
  {
    size_t size = ros_message.cartesian_collision.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.cartesian_collision[i],
        cdr);
    }
  }
  // Member: tau_ext_hat_filtered
  {
    size_t size = ros_message.tau_ext_hat_filtered.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.tau_ext_hat_filtered[i],
        cdr);
    }
  }
  // Member: o_f_ext_hat_k
  {
    size_t size = ros_message.o_f_ext_hat_k.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.o_f_ext_hat_k[i],
        cdr);
    }
  }
  // Member: k_f_ext_hat_k
  {
    size_t size = ros_message.k_f_ext_hat_k.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.k_f_ext_hat_k[i],
        cdr);
    }
  }
  // Member: o_dp_ee_d
  {
    size_t size = ros_message.o_dp_ee_d.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.o_dp_ee_d[i],
        cdr);
    }
  }
  // Member: o_t_ee_c
  {
    size_t size = ros_message.o_t_ee_c.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.o_t_ee_c[i],
        cdr);
    }
  }
  // Member: o_dp_ee_c
  {
    size_t size = ros_message.o_dp_ee_c.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.o_dp_ee_c[i],
        cdr);
    }
  }
  // Member: o_ddp_ee_c
  {
    size_t size = ros_message.o_ddp_ee_c.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.o_ddp_ee_c[i],
        cdr);
    }
  }
  // Member: theta
  {
    size_t size = ros_message.theta.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.theta[i],
        cdr);
    }
  }
  // Member: dtheta
  {
    size_t size = ros_message.dtheta.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.dtheta[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_pybridge_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  franka_pybridge_interfaces::srv::ExecutePlanLog_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: o_t_ee
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

    ros_message.o_t_ee.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.o_t_ee[i]);
    }
  }

  // Member: o_t_ee_d
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

    ros_message.o_t_ee_d.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.o_t_ee_d[i]);
    }
  }

  // Member: f_t_ee
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

    ros_message.f_t_ee.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.f_t_ee[i]);
    }
  }

  // Member: f_t_ne
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

    ros_message.f_t_ne.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.f_t_ne[i]);
    }
  }

  // Member: ne_t_ee
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

    ros_message.ne_t_ee.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.ne_t_ee[i]);
    }
  }

  // Member: ee_t_k
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

    ros_message.ee_t_k.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.ee_t_k[i]);
    }
  }

  // Member: m_ee
  franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.m_ee);

  // Member: i_ee
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

    ros_message.i_ee.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.i_ee[i]);
    }
  }

  // Member: f_x_cee
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

    ros_message.f_x_cee.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.f_x_cee[i]);
    }
  }

  // Member: m_load
  franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.m_load);

  // Member: i_load
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

    ros_message.i_load.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.i_load[i]);
    }
  }

  // Member: f_x_cload
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

    ros_message.f_x_cload.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.f_x_cload[i]);
    }
  }

  // Member: m_total
  franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.m_total);

  // Member: i_total
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

    ros_message.i_total.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.i_total[i]);
    }
  }

  // Member: f_x_ctotal
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

    ros_message.f_x_ctotal.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.f_x_ctotal[i]);
    }
  }

  // Member: elbow
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

    ros_message.elbow.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.elbow[i]);
    }
  }

  // Member: elbow_d
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

    ros_message.elbow_d.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.elbow_d[i]);
    }
  }

  // Member: elbow_c
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

    ros_message.elbow_c.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.elbow_c[i]);
    }
  }

  // Member: delbow_c
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

    ros_message.delbow_c.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.delbow_c[i]);
    }
  }

  // Member: ddelbow_c
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

    ros_message.ddelbow_c.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.ddelbow_c[i]);
    }
  }

  // Member: tau_j
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

    ros_message.tau_j.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.tau_j[i]);
    }
  }

  // Member: tau_j_d
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

    ros_message.tau_j_d.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.tau_j_d[i]);
    }
  }

  // Member: dtau_j
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

    ros_message.dtau_j.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.dtau_j[i]);
    }
  }

  // Member: q
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

    ros_message.q.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.q[i]);
    }
  }

  // Member: q_d
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

    ros_message.q_d.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.q_d[i]);
    }
  }

  // Member: dq
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

    ros_message.dq.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.dq[i]);
    }
  }

  // Member: dq_d
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

    ros_message.dq_d.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.dq_d[i]);
    }
  }

  // Member: ddq_d
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

    ros_message.ddq_d.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.ddq_d[i]);
    }
  }

  // Member: joint_contact
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

    ros_message.joint_contact.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.joint_contact[i]);
    }
  }

  // Member: cartesian_contact
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

    ros_message.cartesian_contact.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.cartesian_contact[i]);
    }
  }

  // Member: joint_collision
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

    ros_message.joint_collision.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.joint_collision[i]);
    }
  }

  // Member: cartesian_collision
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

    ros_message.cartesian_collision.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.cartesian_collision[i]);
    }
  }

  // Member: tau_ext_hat_filtered
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

    ros_message.tau_ext_hat_filtered.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.tau_ext_hat_filtered[i]);
    }
  }

  // Member: o_f_ext_hat_k
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

    ros_message.o_f_ext_hat_k.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.o_f_ext_hat_k[i]);
    }
  }

  // Member: k_f_ext_hat_k
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

    ros_message.k_f_ext_hat_k.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.k_f_ext_hat_k[i]);
    }
  }

  // Member: o_dp_ee_d
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

    ros_message.o_dp_ee_d.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.o_dp_ee_d[i]);
    }
  }

  // Member: o_t_ee_c
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

    ros_message.o_t_ee_c.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.o_t_ee_c[i]);
    }
  }

  // Member: o_dp_ee_c
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

    ros_message.o_dp_ee_c.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.o_dp_ee_c[i]);
    }
  }

  // Member: o_ddp_ee_c
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

    ros_message.o_ddp_ee_c.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.o_ddp_ee_c[i]);
    }
  }

  // Member: theta
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

    ros_message.theta.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.theta[i]);
    }
  }

  // Member: dtheta
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

    ros_message.dtheta.resize(size);
    for (size_t i = 0; i < size; i++) {
      franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.dtheta[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_pybridge_interfaces
get_serialized_size(
  const franka_pybridge_interfaces::srv::ExecutePlanLog_Response & ros_message,
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
  // Member: o_t_ee
  {
    size_t array_size = ros_message.o_t_ee.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.o_t_ee[index], current_alignment);
    }
  }
  // Member: o_t_ee_d
  {
    size_t array_size = ros_message.o_t_ee_d.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.o_t_ee_d[index], current_alignment);
    }
  }
  // Member: f_t_ee
  {
    size_t array_size = ros_message.f_t_ee.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.f_t_ee[index], current_alignment);
    }
  }
  // Member: f_t_ne
  {
    size_t array_size = ros_message.f_t_ne.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.f_t_ne[index], current_alignment);
    }
  }
  // Member: ne_t_ee
  {
    size_t array_size = ros_message.ne_t_ee.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.ne_t_ee[index], current_alignment);
    }
  }
  // Member: ee_t_k
  {
    size_t array_size = ros_message.ee_t_k.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.ee_t_k[index], current_alignment);
    }
  }
  // Member: m_ee

  current_alignment +=
    franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.m_ee, current_alignment);
  // Member: i_ee
  {
    size_t array_size = ros_message.i_ee.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.i_ee[index], current_alignment);
    }
  }
  // Member: f_x_cee
  {
    size_t array_size = ros_message.f_x_cee.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.f_x_cee[index], current_alignment);
    }
  }
  // Member: m_load

  current_alignment +=
    franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.m_load, current_alignment);
  // Member: i_load
  {
    size_t array_size = ros_message.i_load.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.i_load[index], current_alignment);
    }
  }
  // Member: f_x_cload
  {
    size_t array_size = ros_message.f_x_cload.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.f_x_cload[index], current_alignment);
    }
  }
  // Member: m_total

  current_alignment +=
    franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.m_total, current_alignment);
  // Member: i_total
  {
    size_t array_size = ros_message.i_total.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.i_total[index], current_alignment);
    }
  }
  // Member: f_x_ctotal
  {
    size_t array_size = ros_message.f_x_ctotal.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.f_x_ctotal[index], current_alignment);
    }
  }
  // Member: elbow
  {
    size_t array_size = ros_message.elbow.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.elbow[index], current_alignment);
    }
  }
  // Member: elbow_d
  {
    size_t array_size = ros_message.elbow_d.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.elbow_d[index], current_alignment);
    }
  }
  // Member: elbow_c
  {
    size_t array_size = ros_message.elbow_c.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.elbow_c[index], current_alignment);
    }
  }
  // Member: delbow_c
  {
    size_t array_size = ros_message.delbow_c.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.delbow_c[index], current_alignment);
    }
  }
  // Member: ddelbow_c
  {
    size_t array_size = ros_message.ddelbow_c.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.ddelbow_c[index], current_alignment);
    }
  }
  // Member: tau_j
  {
    size_t array_size = ros_message.tau_j.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.tau_j[index], current_alignment);
    }
  }
  // Member: tau_j_d
  {
    size_t array_size = ros_message.tau_j_d.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.tau_j_d[index], current_alignment);
    }
  }
  // Member: dtau_j
  {
    size_t array_size = ros_message.dtau_j.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.dtau_j[index], current_alignment);
    }
  }
  // Member: q
  {
    size_t array_size = ros_message.q.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.q[index], current_alignment);
    }
  }
  // Member: q_d
  {
    size_t array_size = ros_message.q_d.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.q_d[index], current_alignment);
    }
  }
  // Member: dq
  {
    size_t array_size = ros_message.dq.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.dq[index], current_alignment);
    }
  }
  // Member: dq_d
  {
    size_t array_size = ros_message.dq_d.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.dq_d[index], current_alignment);
    }
  }
  // Member: ddq_d
  {
    size_t array_size = ros_message.ddq_d.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.ddq_d[index], current_alignment);
    }
  }
  // Member: joint_contact
  {
    size_t array_size = ros_message.joint_contact.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.joint_contact[index], current_alignment);
    }
  }
  // Member: cartesian_contact
  {
    size_t array_size = ros_message.cartesian_contact.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.cartesian_contact[index], current_alignment);
    }
  }
  // Member: joint_collision
  {
    size_t array_size = ros_message.joint_collision.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.joint_collision[index], current_alignment);
    }
  }
  // Member: cartesian_collision
  {
    size_t array_size = ros_message.cartesian_collision.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.cartesian_collision[index], current_alignment);
    }
  }
  // Member: tau_ext_hat_filtered
  {
    size_t array_size = ros_message.tau_ext_hat_filtered.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.tau_ext_hat_filtered[index], current_alignment);
    }
  }
  // Member: o_f_ext_hat_k
  {
    size_t array_size = ros_message.o_f_ext_hat_k.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.o_f_ext_hat_k[index], current_alignment);
    }
  }
  // Member: k_f_ext_hat_k
  {
    size_t array_size = ros_message.k_f_ext_hat_k.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.k_f_ext_hat_k[index], current_alignment);
    }
  }
  // Member: o_dp_ee_d
  {
    size_t array_size = ros_message.o_dp_ee_d.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.o_dp_ee_d[index], current_alignment);
    }
  }
  // Member: o_t_ee_c
  {
    size_t array_size = ros_message.o_t_ee_c.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.o_t_ee_c[index], current_alignment);
    }
  }
  // Member: o_dp_ee_c
  {
    size_t array_size = ros_message.o_dp_ee_c.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.o_dp_ee_c[index], current_alignment);
    }
  }
  // Member: o_ddp_ee_c
  {
    size_t array_size = ros_message.o_ddp_ee_c.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.o_ddp_ee_c[index], current_alignment);
    }
  }
  // Member: theta
  {
    size_t array_size = ros_message.theta.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.theta[index], current_alignment);
    }
  }
  // Member: dtheta
  {
    size_t array_size = ros_message.dtheta.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        franka_pybridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.dtheta[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_pybridge_interfaces
max_serialized_size_ExecutePlanLog_Response(
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

  // Member: o_t_ee
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

  // Member: o_t_ee_d
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

  // Member: f_t_ee
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

  // Member: f_t_ne
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

  // Member: ne_t_ee
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

  // Member: ee_t_k
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

  // Member: m_ee
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

  // Member: i_ee
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

  // Member: f_x_cee
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

  // Member: m_load
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

  // Member: i_load
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

  // Member: f_x_cload
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

  // Member: m_total
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

  // Member: i_total
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

  // Member: f_x_ctotal
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

  // Member: elbow
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

  // Member: elbow_d
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

  // Member: elbow_c
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

  // Member: delbow_c
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

  // Member: ddelbow_c
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

  // Member: tau_j
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

  // Member: tau_j_d
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

  // Member: dtau_j
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

  // Member: q
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

  // Member: q_d
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

  // Member: dq
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

  // Member: dq_d
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

  // Member: ddq_d
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

  // Member: joint_contact
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

  // Member: cartesian_contact
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

  // Member: joint_collision
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

  // Member: cartesian_collision
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

  // Member: tau_ext_hat_filtered
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

  // Member: o_f_ext_hat_k
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

  // Member: k_f_ext_hat_k
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

  // Member: o_dp_ee_d
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

  // Member: o_t_ee_c
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

  // Member: o_dp_ee_c
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

  // Member: o_ddp_ee_c
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

  // Member: theta
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

  // Member: dtheta
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = franka_pybridge_interfaces::srv::ExecutePlanLog_Response;
    is_plain =
      (
      offsetof(DataType, dtheta) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ExecutePlanLog_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const franka_pybridge_interfaces::srv::ExecutePlanLog_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ExecutePlanLog_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<franka_pybridge_interfaces::srv::ExecutePlanLog_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ExecutePlanLog_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const franka_pybridge_interfaces::srv::ExecutePlanLog_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ExecutePlanLog_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ExecutePlanLog_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ExecutePlanLog_Response__callbacks = {
  "franka_pybridge_interfaces::srv",
  "ExecutePlanLog_Response",
  _ExecutePlanLog_Response__cdr_serialize,
  _ExecutePlanLog_Response__cdr_deserialize,
  _ExecutePlanLog_Response__get_serialized_size,
  _ExecutePlanLog_Response__max_serialized_size
};

static rosidl_message_type_support_t _ExecutePlanLog_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ExecutePlanLog_Response__callbacks,
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
get_message_type_support_handle<franka_pybridge_interfaces::srv::ExecutePlanLog_Response>()
{
  return &franka_pybridge_interfaces::srv::typesupport_fastrtps_cpp::_ExecutePlanLog_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_pybridge_interfaces, srv, ExecutePlanLog_Response)() {
  return &franka_pybridge_interfaces::srv::typesupport_fastrtps_cpp::_ExecutePlanLog_Response__handle;
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

static service_type_support_callbacks_t _ExecutePlanLog__callbacks = {
  "franka_pybridge_interfaces::srv",
  "ExecutePlanLog",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_pybridge_interfaces, srv, ExecutePlanLog_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_pybridge_interfaces, srv, ExecutePlanLog_Response)(),
};

static rosidl_service_type_support_t _ExecutePlanLog__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ExecutePlanLog__callbacks,
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
get_service_type_support_handle<franka_pybridge_interfaces::srv::ExecutePlanLog>()
{
  return &franka_pybridge_interfaces::srv::typesupport_fastrtps_cpp::_ExecutePlanLog__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_pybridge_interfaces, srv, ExecutePlanLog)() {
  return &franka_pybridge_interfaces::srv::typesupport_fastrtps_cpp::_ExecutePlanLog__handle;
}

#ifdef __cplusplus
}
#endif
