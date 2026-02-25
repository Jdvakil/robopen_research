// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from franka_pybridge_interfaces:msg/JointDataArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "franka_pybridge_interfaces/msg/detail/joint_data_array__rosidl_typesupport_introspection_c.h"
#include "franka_pybridge_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "franka_pybridge_interfaces/msg/detail/joint_data_array__functions.h"
#include "franka_pybridge_interfaces/msg/detail/joint_data_array__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__JointDataArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  franka_pybridge_interfaces__msg__JointDataArray__init(message_memory);
}

void franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__JointDataArray_fini_function(void * message_memory)
{
  franka_pybridge_interfaces__msg__JointDataArray__fini(message_memory);
}

size_t franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__size_function__JointDataArray__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__get_const_function__JointDataArray__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__get_function__JointDataArray__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__fetch_function__JointDataArray__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__get_const_function__JointDataArray__data(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__assign_function__JointDataArray__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__get_function__JointDataArray__data(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__resize_function__JointDataArray__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__JointDataArray_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_pybridge_interfaces__msg__JointDataArray, data),  // bytes offset in struct
    NULL,  // default value
    franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__size_function__JointDataArray__data,  // size() function pointer
    franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__get_const_function__JointDataArray__data,  // get_const(index) function pointer
    franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__get_function__JointDataArray__data,  // get(index) function pointer
    franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__fetch_function__JointDataArray__data,  // fetch(index, &value) function pointer
    franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__assign_function__JointDataArray__data,  // assign(index, value) function pointer
    franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__resize_function__JointDataArray__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__JointDataArray_message_members = {
  "franka_pybridge_interfaces__msg",  // message namespace
  "JointDataArray",  // message name
  1,  // number of fields
  sizeof(franka_pybridge_interfaces__msg__JointDataArray),
  franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__JointDataArray_message_member_array,  // message members
  franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__JointDataArray_init_function,  // function to initialize message memory (memory has to be allocated)
  franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__JointDataArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__JointDataArray_message_type_support_handle = {
  0,
  &franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__JointDataArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franka_pybridge_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, msg, JointDataArray)() {
  if (!franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__JointDataArray_message_type_support_handle.typesupport_identifier) {
    franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__JointDataArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &franka_pybridge_interfaces__msg__JointDataArray__rosidl_typesupport_introspection_c__JointDataArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
