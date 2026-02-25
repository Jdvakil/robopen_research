// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franka_pybridge_interfaces:srv/SetLoad.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__SET_LOAD__STRUCT_H_
#define FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__SET_LOAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetLoad in the package franka_pybridge_interfaces.
typedef struct franka_pybridge_interfaces__srv__SetLoad_Request
{
  double mass;
} franka_pybridge_interfaces__srv__SetLoad_Request;

// Struct for a sequence of franka_pybridge_interfaces__srv__SetLoad_Request.
typedef struct franka_pybridge_interfaces__srv__SetLoad_Request__Sequence
{
  franka_pybridge_interfaces__srv__SetLoad_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_pybridge_interfaces__srv__SetLoad_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetLoad in the package franka_pybridge_interfaces.
typedef struct franka_pybridge_interfaces__srv__SetLoad_Response
{
  bool success;
} franka_pybridge_interfaces__srv__SetLoad_Response;

// Struct for a sequence of franka_pybridge_interfaces__srv__SetLoad_Response.
typedef struct franka_pybridge_interfaces__srv__SetLoad_Response__Sequence
{
  franka_pybridge_interfaces__srv__SetLoad_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_pybridge_interfaces__srv__SetLoad_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__SET_LOAD__STRUCT_H_
