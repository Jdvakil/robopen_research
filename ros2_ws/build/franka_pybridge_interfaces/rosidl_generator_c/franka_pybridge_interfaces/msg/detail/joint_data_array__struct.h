// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franka_pybridge_interfaces:msg/JointDataArray.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_PYBRIDGE_INTERFACES__MSG__DETAIL__JOINT_DATA_ARRAY__STRUCT_H_
#define FRANKA_PYBRIDGE_INTERFACES__MSG__DETAIL__JOINT_DATA_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointDataArray in the package franka_pybridge_interfaces.
typedef struct franka_pybridge_interfaces__msg__JointDataArray
{
  rosidl_runtime_c__double__Sequence data;
} franka_pybridge_interfaces__msg__JointDataArray;

// Struct for a sequence of franka_pybridge_interfaces__msg__JointDataArray.
typedef struct franka_pybridge_interfaces__msg__JointDataArray__Sequence
{
  franka_pybridge_interfaces__msg__JointDataArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_pybridge_interfaces__msg__JointDataArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKA_PYBRIDGE_INTERFACES__MSG__DETAIL__JOINT_DATA_ARRAY__STRUCT_H_
