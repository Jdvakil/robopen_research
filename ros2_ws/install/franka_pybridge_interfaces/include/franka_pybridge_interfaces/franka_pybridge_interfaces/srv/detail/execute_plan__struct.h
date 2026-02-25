// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franka_pybridge_interfaces:srv/ExecutePlan.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN__STRUCT_H_
#define FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vel_traj'
// Member 'initial_pos'
#include "franka_pybridge_interfaces/msg/detail/joint_data_array__struct.h"

/// Struct defined in srv/ExecutePlan in the package franka_pybridge_interfaces.
typedef struct franka_pybridge_interfaces__srv__ExecutePlan_Request
{
  franka_pybridge_interfaces__msg__JointDataArray__Sequence vel_traj;
  franka_pybridge_interfaces__msg__JointDataArray initial_pos;
} franka_pybridge_interfaces__srv__ExecutePlan_Request;

// Struct for a sequence of franka_pybridge_interfaces__srv__ExecutePlan_Request.
typedef struct franka_pybridge_interfaces__srv__ExecutePlan_Request__Sequence
{
  franka_pybridge_interfaces__srv__ExecutePlan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_pybridge_interfaces__srv__ExecutePlan_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ExecutePlan in the package franka_pybridge_interfaces.
typedef struct franka_pybridge_interfaces__srv__ExecutePlan_Response
{
  bool success;
} franka_pybridge_interfaces__srv__ExecutePlan_Response;

// Struct for a sequence of franka_pybridge_interfaces__srv__ExecutePlan_Response.
typedef struct franka_pybridge_interfaces__srv__ExecutePlan_Response__Sequence
{
  franka_pybridge_interfaces__srv__ExecutePlan_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_pybridge_interfaces__srv__ExecutePlan_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN__STRUCT_H_
