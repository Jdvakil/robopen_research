// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from franka_pybridge_interfaces:srv/ExecutePlanLog.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "franka_pybridge_interfaces/srv/detail/execute_plan_log__struct.h"
#include "franka_pybridge_interfaces/srv/detail/execute_plan_log__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace franka_pybridge_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ExecutePlanLog_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecutePlanLog_Request_type_support_ids_t;

static const _ExecutePlanLog_Request_type_support_ids_t _ExecutePlanLog_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecutePlanLog_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecutePlanLog_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecutePlanLog_Request_type_support_symbol_names_t _ExecutePlanLog_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, srv, ExecutePlanLog_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, srv, ExecutePlanLog_Request)),
  }
};

typedef struct _ExecutePlanLog_Request_type_support_data_t
{
  void * data[2];
} _ExecutePlanLog_Request_type_support_data_t;

static _ExecutePlanLog_Request_type_support_data_t _ExecutePlanLog_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecutePlanLog_Request_message_typesupport_map = {
  2,
  "franka_pybridge_interfaces",
  &_ExecutePlanLog_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ExecutePlanLog_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ExecutePlanLog_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecutePlanLog_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecutePlanLog_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace franka_pybridge_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, franka_pybridge_interfaces, srv, ExecutePlanLog_Request)() {
  return &::franka_pybridge_interfaces::srv::rosidl_typesupport_c::ExecutePlanLog_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_pybridge_interfaces/srv/detail/execute_plan_log__struct.h"
// already included above
// #include "franka_pybridge_interfaces/srv/detail/execute_plan_log__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_pybridge_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ExecutePlanLog_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecutePlanLog_Response_type_support_ids_t;

static const _ExecutePlanLog_Response_type_support_ids_t _ExecutePlanLog_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecutePlanLog_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecutePlanLog_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecutePlanLog_Response_type_support_symbol_names_t _ExecutePlanLog_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, srv, ExecutePlanLog_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, srv, ExecutePlanLog_Response)),
  }
};

typedef struct _ExecutePlanLog_Response_type_support_data_t
{
  void * data[2];
} _ExecutePlanLog_Response_type_support_data_t;

static _ExecutePlanLog_Response_type_support_data_t _ExecutePlanLog_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecutePlanLog_Response_message_typesupport_map = {
  2,
  "franka_pybridge_interfaces",
  &_ExecutePlanLog_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ExecutePlanLog_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ExecutePlanLog_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecutePlanLog_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecutePlanLog_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace franka_pybridge_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, franka_pybridge_interfaces, srv, ExecutePlanLog_Response)() {
  return &::franka_pybridge_interfaces::srv::rosidl_typesupport_c::ExecutePlanLog_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "franka_pybridge_interfaces/srv/detail/execute_plan_log__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_pybridge_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ExecutePlanLog_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecutePlanLog_type_support_ids_t;

static const _ExecutePlanLog_type_support_ids_t _ExecutePlanLog_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecutePlanLog_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecutePlanLog_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecutePlanLog_type_support_symbol_names_t _ExecutePlanLog_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_pybridge_interfaces, srv, ExecutePlanLog)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_pybridge_interfaces, srv, ExecutePlanLog)),
  }
};

typedef struct _ExecutePlanLog_type_support_data_t
{
  void * data[2];
} _ExecutePlanLog_type_support_data_t;

static _ExecutePlanLog_type_support_data_t _ExecutePlanLog_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecutePlanLog_service_typesupport_map = {
  2,
  "franka_pybridge_interfaces",
  &_ExecutePlanLog_service_typesupport_ids.typesupport_identifier[0],
  &_ExecutePlanLog_service_typesupport_symbol_names.symbol_name[0],
  &_ExecutePlanLog_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ExecutePlanLog_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecutePlanLog_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace franka_pybridge_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, franka_pybridge_interfaces, srv, ExecutePlanLog)() {
  return &::franka_pybridge_interfaces::srv::rosidl_typesupport_c::ExecutePlanLog_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
