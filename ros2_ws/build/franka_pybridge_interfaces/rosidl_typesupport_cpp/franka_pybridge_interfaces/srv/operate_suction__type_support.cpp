// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from franka_pybridge_interfaces:srv/OperateSuction.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "franka_pybridge_interfaces/srv/detail/operate_suction__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace franka_pybridge_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _OperateSuction_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OperateSuction_Request_type_support_ids_t;

static const _OperateSuction_Request_type_support_ids_t _OperateSuction_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _OperateSuction_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OperateSuction_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OperateSuction_Request_type_support_symbol_names_t _OperateSuction_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_pybridge_interfaces, srv, OperateSuction_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_pybridge_interfaces, srv, OperateSuction_Request)),
  }
};

typedef struct _OperateSuction_Request_type_support_data_t
{
  void * data[2];
} _OperateSuction_Request_type_support_data_t;

static _OperateSuction_Request_type_support_data_t _OperateSuction_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OperateSuction_Request_message_typesupport_map = {
  2,
  "franka_pybridge_interfaces",
  &_OperateSuction_Request_message_typesupport_ids.typesupport_identifier[0],
  &_OperateSuction_Request_message_typesupport_symbol_names.symbol_name[0],
  &_OperateSuction_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OperateSuction_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OperateSuction_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace franka_pybridge_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_pybridge_interfaces::srv::OperateSuction_Request>()
{
  return &::franka_pybridge_interfaces::srv::rosidl_typesupport_cpp::OperateSuction_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_pybridge_interfaces, srv, OperateSuction_Request)() {
  return get_message_type_support_handle<franka_pybridge_interfaces::srv::OperateSuction_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_pybridge_interfaces/srv/detail/operate_suction__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_pybridge_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _OperateSuction_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OperateSuction_Response_type_support_ids_t;

static const _OperateSuction_Response_type_support_ids_t _OperateSuction_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _OperateSuction_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OperateSuction_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OperateSuction_Response_type_support_symbol_names_t _OperateSuction_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_pybridge_interfaces, srv, OperateSuction_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_pybridge_interfaces, srv, OperateSuction_Response)),
  }
};

typedef struct _OperateSuction_Response_type_support_data_t
{
  void * data[2];
} _OperateSuction_Response_type_support_data_t;

static _OperateSuction_Response_type_support_data_t _OperateSuction_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OperateSuction_Response_message_typesupport_map = {
  2,
  "franka_pybridge_interfaces",
  &_OperateSuction_Response_message_typesupport_ids.typesupport_identifier[0],
  &_OperateSuction_Response_message_typesupport_symbol_names.symbol_name[0],
  &_OperateSuction_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OperateSuction_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OperateSuction_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace franka_pybridge_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_pybridge_interfaces::srv::OperateSuction_Response>()
{
  return &::franka_pybridge_interfaces::srv::rosidl_typesupport_cpp::OperateSuction_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_pybridge_interfaces, srv, OperateSuction_Response)() {
  return get_message_type_support_handle<franka_pybridge_interfaces::srv::OperateSuction_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "franka_pybridge_interfaces/srv/detail/operate_suction__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_pybridge_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _OperateSuction_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OperateSuction_type_support_ids_t;

static const _OperateSuction_type_support_ids_t _OperateSuction_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _OperateSuction_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OperateSuction_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OperateSuction_type_support_symbol_names_t _OperateSuction_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_pybridge_interfaces, srv, OperateSuction)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_pybridge_interfaces, srv, OperateSuction)),
  }
};

typedef struct _OperateSuction_type_support_data_t
{
  void * data[2];
} _OperateSuction_type_support_data_t;

static _OperateSuction_type_support_data_t _OperateSuction_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OperateSuction_service_typesupport_map = {
  2,
  "franka_pybridge_interfaces",
  &_OperateSuction_service_typesupport_ids.typesupport_identifier[0],
  &_OperateSuction_service_typesupport_symbol_names.symbol_name[0],
  &_OperateSuction_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t OperateSuction_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OperateSuction_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace franka_pybridge_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<franka_pybridge_interfaces::srv::OperateSuction>()
{
  return &::franka_pybridge_interfaces::srv::rosidl_typesupport_cpp::OperateSuction_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_pybridge_interfaces, srv, OperateSuction)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<franka_pybridge_interfaces::srv::OperateSuction>();
}

#ifdef __cplusplus
}
#endif
