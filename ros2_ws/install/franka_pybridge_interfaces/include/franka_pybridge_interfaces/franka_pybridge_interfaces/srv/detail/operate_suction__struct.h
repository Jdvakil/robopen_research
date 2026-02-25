// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franka_pybridge_interfaces:srv/OperateSuction.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__OPERATE_SUCTION__STRUCT_H_
#define FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__OPERATE_SUCTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/OperateSuction in the package franka_pybridge_interfaces.
typedef struct franka_pybridge_interfaces__srv__OperateSuction_Request
{
  bool operation;
  int32_t sucction_time_ms;
  int32_t strength;
} franka_pybridge_interfaces__srv__OperateSuction_Request;

// Struct for a sequence of franka_pybridge_interfaces__srv__OperateSuction_Request.
typedef struct franka_pybridge_interfaces__srv__OperateSuction_Request__Sequence
{
  franka_pybridge_interfaces__srv__OperateSuction_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_pybridge_interfaces__srv__OperateSuction_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/OperateSuction in the package franka_pybridge_interfaces.
typedef struct franka_pybridge_interfaces__srv__OperateSuction_Response
{
  bool success;
} franka_pybridge_interfaces__srv__OperateSuction_Response;

// Struct for a sequence of franka_pybridge_interfaces__srv__OperateSuction_Response.
typedef struct franka_pybridge_interfaces__srv__OperateSuction_Response__Sequence
{
  franka_pybridge_interfaces__srv__OperateSuction_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_pybridge_interfaces__srv__OperateSuction_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__OPERATE_SUCTION__STRUCT_H_
