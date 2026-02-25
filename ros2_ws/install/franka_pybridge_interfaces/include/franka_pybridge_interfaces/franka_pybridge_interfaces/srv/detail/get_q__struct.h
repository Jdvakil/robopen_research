// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franka_pybridge_interfaces:srv/GetQ.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__GET_Q__STRUCT_H_
#define FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__GET_Q__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetQ in the package franka_pybridge_interfaces.
typedef struct franka_pybridge_interfaces__srv__GetQ_Request
{
  uint8_t structure_needs_at_least_one_member;
} franka_pybridge_interfaces__srv__GetQ_Request;

// Struct for a sequence of franka_pybridge_interfaces__srv__GetQ_Request.
typedef struct franka_pybridge_interfaces__srv__GetQ_Request__Sequence
{
  franka_pybridge_interfaces__srv__GetQ_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_pybridge_interfaces__srv__GetQ_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'joint_config'
#include "franka_pybridge_interfaces/msg/detail/joint_data_array__struct.h"

/// Struct defined in srv/GetQ in the package franka_pybridge_interfaces.
typedef struct franka_pybridge_interfaces__srv__GetQ_Response
{
  bool success;
  franka_pybridge_interfaces__msg__JointDataArray joint_config;
} franka_pybridge_interfaces__srv__GetQ_Response;

// Struct for a sequence of franka_pybridge_interfaces__srv__GetQ_Response.
typedef struct franka_pybridge_interfaces__srv__GetQ_Response__Sequence
{
  franka_pybridge_interfaces__srv__GetQ_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_pybridge_interfaces__srv__GetQ_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__GET_Q__STRUCT_H_
