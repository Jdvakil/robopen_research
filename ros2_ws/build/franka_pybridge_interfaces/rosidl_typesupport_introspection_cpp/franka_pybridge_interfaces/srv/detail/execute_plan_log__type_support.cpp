// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from franka_pybridge_interfaces:srv/ExecutePlanLog.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "franka_pybridge_interfaces/srv/detail/execute_plan_log__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace franka_pybridge_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecutePlanLog_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) franka_pybridge_interfaces::srv::ExecutePlanLog_Request(_init);
}

void ExecutePlanLog_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<franka_pybridge_interfaces::srv::ExecutePlanLog_Request *>(message_memory);
  typed_message->~ExecutePlanLog_Request();
}

size_t size_function__ExecutePlanLog_Request__vel_traj(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Request__vel_traj(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Request__vel_traj(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Request__vel_traj(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Request__vel_traj(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Request__vel_traj(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Request__vel_traj(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Request__vel_traj(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecutePlanLog_Request_message_member_array[2] = {
  {
    "vel_traj",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Request, vel_traj),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Request__vel_traj,  // size() function pointer
    get_const_function__ExecutePlanLog_Request__vel_traj,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Request__vel_traj,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Request__vel_traj,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Request__vel_traj,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Request__vel_traj  // resize(index) function pointer
  },
  {
    "initial_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Request, initial_pos),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecutePlanLog_Request_message_members = {
  "franka_pybridge_interfaces::srv",  // message namespace
  "ExecutePlanLog_Request",  // message name
  2,  // number of fields
  sizeof(franka_pybridge_interfaces::srv::ExecutePlanLog_Request),
  ExecutePlanLog_Request_message_member_array,  // message members
  ExecutePlanLog_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecutePlanLog_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecutePlanLog_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecutePlanLog_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace franka_pybridge_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_pybridge_interfaces::srv::ExecutePlanLog_Request>()
{
  return &::franka_pybridge_interfaces::srv::rosidl_typesupport_introspection_cpp::ExecutePlanLog_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_pybridge_interfaces, srv, ExecutePlanLog_Request)() {
  return &::franka_pybridge_interfaces::srv::rosidl_typesupport_introspection_cpp::ExecutePlanLog_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "franka_pybridge_interfaces/srv/detail/execute_plan_log__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace franka_pybridge_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecutePlanLog_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) franka_pybridge_interfaces::srv::ExecutePlanLog_Response(_init);
}

void ExecutePlanLog_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<franka_pybridge_interfaces::srv::ExecutePlanLog_Response *>(message_memory);
  typed_message->~ExecutePlanLog_Response();
}

size_t size_function__ExecutePlanLog_Response__o_t_ee(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__o_t_ee(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__o_t_ee(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__o_t_ee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__o_t_ee(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__o_t_ee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__o_t_ee(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__o_t_ee(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__o_t_ee_d(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__o_t_ee_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__o_t_ee_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__o_t_ee_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__o_t_ee_d(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__o_t_ee_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__o_t_ee_d(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__o_t_ee_d(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__f_t_ee(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__f_t_ee(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__f_t_ee(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__f_t_ee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__f_t_ee(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__f_t_ee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__f_t_ee(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__f_t_ee(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__f_t_ne(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__f_t_ne(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__f_t_ne(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__f_t_ne(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__f_t_ne(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__f_t_ne(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__f_t_ne(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__f_t_ne(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__ne_t_ee(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__ne_t_ee(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__ne_t_ee(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__ne_t_ee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__ne_t_ee(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__ne_t_ee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__ne_t_ee(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__ne_t_ee(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__ee_t_k(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__ee_t_k(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__ee_t_k(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__ee_t_k(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__ee_t_k(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__ee_t_k(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__ee_t_k(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__ee_t_k(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__i_ee(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__i_ee(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__i_ee(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__i_ee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__i_ee(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__i_ee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__i_ee(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__i_ee(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__f_x_cee(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__f_x_cee(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__f_x_cee(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__f_x_cee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__f_x_cee(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__f_x_cee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__f_x_cee(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__f_x_cee(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__i_load(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__i_load(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__i_load(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__i_load(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__i_load(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__i_load(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__i_load(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__i_load(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__f_x_cload(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__f_x_cload(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__f_x_cload(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__f_x_cload(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__f_x_cload(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__f_x_cload(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__f_x_cload(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__f_x_cload(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__i_total(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__i_total(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__i_total(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__i_total(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__i_total(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__i_total(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__i_total(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__i_total(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__f_x_ctotal(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__f_x_ctotal(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__f_x_ctotal(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__f_x_ctotal(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__f_x_ctotal(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__f_x_ctotal(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__f_x_ctotal(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__f_x_ctotal(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__elbow(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__elbow(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__elbow(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__elbow(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__elbow(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__elbow(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__elbow(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__elbow(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__elbow_d(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__elbow_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__elbow_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__elbow_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__elbow_d(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__elbow_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__elbow_d(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__elbow_d(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__elbow_c(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__elbow_c(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__elbow_c(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__elbow_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__elbow_c(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__elbow_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__elbow_c(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__elbow_c(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__delbow_c(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__delbow_c(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__delbow_c(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__delbow_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__delbow_c(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__delbow_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__delbow_c(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__delbow_c(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__ddelbow_c(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__ddelbow_c(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__ddelbow_c(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__ddelbow_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__ddelbow_c(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__ddelbow_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__ddelbow_c(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__ddelbow_c(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__tau_j(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__tau_j(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__tau_j(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__tau_j(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__tau_j(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__tau_j(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__tau_j(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__tau_j(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__tau_j_d(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__tau_j_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__tau_j_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__tau_j_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__tau_j_d(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__tau_j_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__tau_j_d(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__tau_j_d(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__dtau_j(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__dtau_j(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__dtau_j(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__dtau_j(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__dtau_j(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__dtau_j(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__dtau_j(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__dtau_j(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__q(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__q(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__q(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__q(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__q(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__q(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__q_d(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__q_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__q_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__q_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__q_d(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__q_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__q_d(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__q_d(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__dq(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__dq(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__dq(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__dq(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__dq(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__dq(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__dq(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__dq(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__dq_d(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__dq_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__dq_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__dq_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__dq_d(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__dq_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__dq_d(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__dq_d(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__ddq_d(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__ddq_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__ddq_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__ddq_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__ddq_d(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__ddq_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__ddq_d(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__ddq_d(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__joint_contact(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__joint_contact(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__joint_contact(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__joint_contact(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__joint_contact(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__joint_contact(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__joint_contact(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__joint_contact(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__cartesian_contact(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__cartesian_contact(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__cartesian_contact(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__cartesian_contact(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__cartesian_contact(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__cartesian_contact(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__cartesian_contact(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__cartesian_contact(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__joint_collision(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__joint_collision(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__joint_collision(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__joint_collision(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__joint_collision(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__joint_collision(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__joint_collision(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__joint_collision(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__cartesian_collision(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__cartesian_collision(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__cartesian_collision(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__cartesian_collision(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__cartesian_collision(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__cartesian_collision(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__cartesian_collision(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__cartesian_collision(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__tau_ext_hat_filtered(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__tau_ext_hat_filtered(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__tau_ext_hat_filtered(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__tau_ext_hat_filtered(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__tau_ext_hat_filtered(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__tau_ext_hat_filtered(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__tau_ext_hat_filtered(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__tau_ext_hat_filtered(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__o_f_ext_hat_k(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__o_f_ext_hat_k(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__o_f_ext_hat_k(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__o_f_ext_hat_k(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__o_f_ext_hat_k(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__o_f_ext_hat_k(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__o_f_ext_hat_k(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__o_f_ext_hat_k(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__k_f_ext_hat_k(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__k_f_ext_hat_k(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__k_f_ext_hat_k(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__k_f_ext_hat_k(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__k_f_ext_hat_k(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__k_f_ext_hat_k(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__k_f_ext_hat_k(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__k_f_ext_hat_k(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__o_dp_ee_d(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__o_dp_ee_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__o_dp_ee_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__o_dp_ee_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__o_dp_ee_d(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__o_dp_ee_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__o_dp_ee_d(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__o_dp_ee_d(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__o_t_ee_c(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__o_t_ee_c(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__o_t_ee_c(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__o_t_ee_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__o_t_ee_c(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__o_t_ee_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__o_t_ee_c(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__o_t_ee_c(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__o_dp_ee_c(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__o_dp_ee_c(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__o_dp_ee_c(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__o_dp_ee_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__o_dp_ee_c(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__o_dp_ee_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__o_dp_ee_c(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__o_dp_ee_c(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__o_ddp_ee_c(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__o_ddp_ee_c(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__o_ddp_ee_c(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__o_ddp_ee_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__o_ddp_ee_c(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__o_ddp_ee_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__o_ddp_ee_c(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__o_ddp_ee_c(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__theta(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__theta(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__theta(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__theta(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__theta(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__theta(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__theta(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__theta(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePlanLog_Response__dtheta(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePlanLog_Response__dtheta(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePlanLog_Response__dtheta(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePlanLog_Response__dtheta(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(
    get_const_function__ExecutePlanLog_Response__dtheta(untyped_member, index));
  auto & value = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  value = item;
}

void assign_function__ExecutePlanLog_Response__dtheta(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<franka_pybridge_interfaces::msg::JointDataArray *>(
    get_function__ExecutePlanLog_Response__dtheta(untyped_member, index));
  const auto & value = *reinterpret_cast<const franka_pybridge_interfaces::msg::JointDataArray *>(untyped_value);
  item = value;
}

void resize_function__ExecutePlanLog_Response__dtheta(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<franka_pybridge_interfaces::msg::JointDataArray> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecutePlanLog_Response_message_member_array[42] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "o_t_ee",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, o_t_ee),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__o_t_ee,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__o_t_ee,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__o_t_ee,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__o_t_ee,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__o_t_ee,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__o_t_ee  // resize(index) function pointer
  },
  {
    "o_t_ee_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, o_t_ee_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__o_t_ee_d,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__o_t_ee_d,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__o_t_ee_d,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__o_t_ee_d,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__o_t_ee_d,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__o_t_ee_d  // resize(index) function pointer
  },
  {
    "f_t_ee",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, f_t_ee),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__f_t_ee,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__f_t_ee,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__f_t_ee,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__f_t_ee,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__f_t_ee,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__f_t_ee  // resize(index) function pointer
  },
  {
    "f_t_ne",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, f_t_ne),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__f_t_ne,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__f_t_ne,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__f_t_ne,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__f_t_ne,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__f_t_ne,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__f_t_ne  // resize(index) function pointer
  },
  {
    "ne_t_ee",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, ne_t_ee),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__ne_t_ee,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__ne_t_ee,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__ne_t_ee,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__ne_t_ee,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__ne_t_ee,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__ne_t_ee  // resize(index) function pointer
  },
  {
    "ee_t_k",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, ee_t_k),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__ee_t_k,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__ee_t_k,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__ee_t_k,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__ee_t_k,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__ee_t_k,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__ee_t_k  // resize(index) function pointer
  },
  {
    "m_ee",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, m_ee),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "i_ee",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, i_ee),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__i_ee,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__i_ee,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__i_ee,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__i_ee,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__i_ee,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__i_ee  // resize(index) function pointer
  },
  {
    "f_x_cee",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, f_x_cee),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__f_x_cee,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__f_x_cee,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__f_x_cee,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__f_x_cee,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__f_x_cee,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__f_x_cee  // resize(index) function pointer
  },
  {
    "m_load",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, m_load),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "i_load",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, i_load),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__i_load,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__i_load,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__i_load,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__i_load,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__i_load,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__i_load  // resize(index) function pointer
  },
  {
    "f_x_cload",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, f_x_cload),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__f_x_cload,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__f_x_cload,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__f_x_cload,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__f_x_cload,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__f_x_cload,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__f_x_cload  // resize(index) function pointer
  },
  {
    "m_total",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, m_total),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "i_total",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, i_total),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__i_total,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__i_total,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__i_total,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__i_total,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__i_total,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__i_total  // resize(index) function pointer
  },
  {
    "f_x_ctotal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, f_x_ctotal),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__f_x_ctotal,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__f_x_ctotal,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__f_x_ctotal,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__f_x_ctotal,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__f_x_ctotal,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__f_x_ctotal  // resize(index) function pointer
  },
  {
    "elbow",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, elbow),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__elbow,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__elbow,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__elbow,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__elbow,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__elbow,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__elbow  // resize(index) function pointer
  },
  {
    "elbow_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, elbow_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__elbow_d,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__elbow_d,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__elbow_d,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__elbow_d,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__elbow_d,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__elbow_d  // resize(index) function pointer
  },
  {
    "elbow_c",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, elbow_c),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__elbow_c,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__elbow_c,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__elbow_c,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__elbow_c,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__elbow_c,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__elbow_c  // resize(index) function pointer
  },
  {
    "delbow_c",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, delbow_c),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__delbow_c,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__delbow_c,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__delbow_c,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__delbow_c,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__delbow_c,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__delbow_c  // resize(index) function pointer
  },
  {
    "ddelbow_c",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, ddelbow_c),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__ddelbow_c,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__ddelbow_c,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__ddelbow_c,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__ddelbow_c,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__ddelbow_c,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__ddelbow_c  // resize(index) function pointer
  },
  {
    "tau_j",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, tau_j),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__tau_j,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__tau_j,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__tau_j,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__tau_j,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__tau_j,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__tau_j  // resize(index) function pointer
  },
  {
    "tau_j_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, tau_j_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__tau_j_d,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__tau_j_d,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__tau_j_d,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__tau_j_d,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__tau_j_d,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__tau_j_d  // resize(index) function pointer
  },
  {
    "dtau_j",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, dtau_j),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__dtau_j,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__dtau_j,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__dtau_j,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__dtau_j,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__dtau_j,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__dtau_j  // resize(index) function pointer
  },
  {
    "q",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, q),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__q,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__q,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__q,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__q,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__q,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__q  // resize(index) function pointer
  },
  {
    "q_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, q_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__q_d,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__q_d,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__q_d,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__q_d,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__q_d,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__q_d  // resize(index) function pointer
  },
  {
    "dq",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, dq),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__dq,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__dq,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__dq,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__dq,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__dq,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__dq  // resize(index) function pointer
  },
  {
    "dq_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, dq_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__dq_d,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__dq_d,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__dq_d,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__dq_d,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__dq_d,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__dq_d  // resize(index) function pointer
  },
  {
    "ddq_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, ddq_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__ddq_d,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__ddq_d,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__ddq_d,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__ddq_d,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__ddq_d,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__ddq_d  // resize(index) function pointer
  },
  {
    "joint_contact",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, joint_contact),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__joint_contact,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__joint_contact,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__joint_contact,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__joint_contact,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__joint_contact,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__joint_contact  // resize(index) function pointer
  },
  {
    "cartesian_contact",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, cartesian_contact),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__cartesian_contact,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__cartesian_contact,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__cartesian_contact,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__cartesian_contact,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__cartesian_contact,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__cartesian_contact  // resize(index) function pointer
  },
  {
    "joint_collision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, joint_collision),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__joint_collision,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__joint_collision,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__joint_collision,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__joint_collision,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__joint_collision,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__joint_collision  // resize(index) function pointer
  },
  {
    "cartesian_collision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, cartesian_collision),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__cartesian_collision,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__cartesian_collision,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__cartesian_collision,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__cartesian_collision,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__cartesian_collision,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__cartesian_collision  // resize(index) function pointer
  },
  {
    "tau_ext_hat_filtered",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, tau_ext_hat_filtered),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__tau_ext_hat_filtered,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__tau_ext_hat_filtered,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__tau_ext_hat_filtered,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__tau_ext_hat_filtered,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__tau_ext_hat_filtered,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__tau_ext_hat_filtered  // resize(index) function pointer
  },
  {
    "o_f_ext_hat_k",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, o_f_ext_hat_k),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__o_f_ext_hat_k,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__o_f_ext_hat_k,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__o_f_ext_hat_k,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__o_f_ext_hat_k,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__o_f_ext_hat_k,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__o_f_ext_hat_k  // resize(index) function pointer
  },
  {
    "k_f_ext_hat_k",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, k_f_ext_hat_k),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__k_f_ext_hat_k,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__k_f_ext_hat_k,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__k_f_ext_hat_k,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__k_f_ext_hat_k,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__k_f_ext_hat_k,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__k_f_ext_hat_k  // resize(index) function pointer
  },
  {
    "o_dp_ee_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, o_dp_ee_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__o_dp_ee_d,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__o_dp_ee_d,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__o_dp_ee_d,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__o_dp_ee_d,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__o_dp_ee_d,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__o_dp_ee_d  // resize(index) function pointer
  },
  {
    "o_t_ee_c",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, o_t_ee_c),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__o_t_ee_c,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__o_t_ee_c,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__o_t_ee_c,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__o_t_ee_c,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__o_t_ee_c,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__o_t_ee_c  // resize(index) function pointer
  },
  {
    "o_dp_ee_c",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, o_dp_ee_c),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__o_dp_ee_c,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__o_dp_ee_c,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__o_dp_ee_c,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__o_dp_ee_c,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__o_dp_ee_c,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__o_dp_ee_c  // resize(index) function pointer
  },
  {
    "o_ddp_ee_c",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, o_ddp_ee_c),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__o_ddp_ee_c,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__o_ddp_ee_c,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__o_ddp_ee_c,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__o_ddp_ee_c,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__o_ddp_ee_c,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__o_ddp_ee_c  // resize(index) function pointer
  },
  {
    "theta",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, theta),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__theta,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__theta,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__theta,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__theta,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__theta,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__theta  // resize(index) function pointer
  },
  {
    "dtheta",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_pybridge_interfaces::msg::JointDataArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response, dtheta),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePlanLog_Response__dtheta,  // size() function pointer
    get_const_function__ExecutePlanLog_Response__dtheta,  // get_const(index) function pointer
    get_function__ExecutePlanLog_Response__dtheta,  // get(index) function pointer
    fetch_function__ExecutePlanLog_Response__dtheta,  // fetch(index, &value) function pointer
    assign_function__ExecutePlanLog_Response__dtheta,  // assign(index, value) function pointer
    resize_function__ExecutePlanLog_Response__dtheta  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecutePlanLog_Response_message_members = {
  "franka_pybridge_interfaces::srv",  // message namespace
  "ExecutePlanLog_Response",  // message name
  42,  // number of fields
  sizeof(franka_pybridge_interfaces::srv::ExecutePlanLog_Response),
  ExecutePlanLog_Response_message_member_array,  // message members
  ExecutePlanLog_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecutePlanLog_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecutePlanLog_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecutePlanLog_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace franka_pybridge_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_pybridge_interfaces::srv::ExecutePlanLog_Response>()
{
  return &::franka_pybridge_interfaces::srv::rosidl_typesupport_introspection_cpp::ExecutePlanLog_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_pybridge_interfaces, srv, ExecutePlanLog_Response)() {
  return &::franka_pybridge_interfaces::srv::rosidl_typesupport_introspection_cpp::ExecutePlanLog_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "franka_pybridge_interfaces/srv/detail/execute_plan_log__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace franka_pybridge_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ExecutePlanLog_service_members = {
  "franka_pybridge_interfaces::srv",  // service namespace
  "ExecutePlanLog",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<franka_pybridge_interfaces::srv::ExecutePlanLog>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ExecutePlanLog_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecutePlanLog_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace franka_pybridge_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<franka_pybridge_interfaces::srv::ExecutePlanLog>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::franka_pybridge_interfaces::srv::rosidl_typesupport_introspection_cpp::ExecutePlanLog_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::franka_pybridge_interfaces::srv::ExecutePlanLog_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::franka_pybridge_interfaces::srv::ExecutePlanLog_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_pybridge_interfaces, srv, ExecutePlanLog)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<franka_pybridge_interfaces::srv::ExecutePlanLog>();
}

#ifdef __cplusplus
}
#endif
