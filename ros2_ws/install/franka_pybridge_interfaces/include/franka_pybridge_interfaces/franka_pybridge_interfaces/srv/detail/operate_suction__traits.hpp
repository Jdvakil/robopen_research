// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franka_pybridge_interfaces:srv/OperateSuction.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__OPERATE_SUCTION__TRAITS_HPP_
#define FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__OPERATE_SUCTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "franka_pybridge_interfaces/srv/detail/operate_suction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace franka_pybridge_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const OperateSuction_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: operation
  {
    out << "operation: ";
    rosidl_generator_traits::value_to_yaml(msg.operation, out);
    out << ", ";
  }

  // member: sucction_time_ms
  {
    out << "sucction_time_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.sucction_time_ms, out);
    out << ", ";
  }

  // member: strength
  {
    out << "strength: ";
    rosidl_generator_traits::value_to_yaml(msg.strength, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OperateSuction_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: operation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation: ";
    rosidl_generator_traits::value_to_yaml(msg.operation, out);
    out << "\n";
  }

  // member: sucction_time_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sucction_time_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.sucction_time_ms, out);
    out << "\n";
  }

  // member: strength
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "strength: ";
    rosidl_generator_traits::value_to_yaml(msg.strength, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OperateSuction_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace franka_pybridge_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use franka_pybridge_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franka_pybridge_interfaces::srv::OperateSuction_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_pybridge_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_pybridge_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const franka_pybridge_interfaces::srv::OperateSuction_Request & msg)
{
  return franka_pybridge_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<franka_pybridge_interfaces::srv::OperateSuction_Request>()
{
  return "franka_pybridge_interfaces::srv::OperateSuction_Request";
}

template<>
inline const char * name<franka_pybridge_interfaces::srv::OperateSuction_Request>()
{
  return "franka_pybridge_interfaces/srv/OperateSuction_Request";
}

template<>
struct has_fixed_size<franka_pybridge_interfaces::srv::OperateSuction_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<franka_pybridge_interfaces::srv::OperateSuction_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<franka_pybridge_interfaces::srv::OperateSuction_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace franka_pybridge_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const OperateSuction_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OperateSuction_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OperateSuction_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace franka_pybridge_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use franka_pybridge_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franka_pybridge_interfaces::srv::OperateSuction_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_pybridge_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_pybridge_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const franka_pybridge_interfaces::srv::OperateSuction_Response & msg)
{
  return franka_pybridge_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<franka_pybridge_interfaces::srv::OperateSuction_Response>()
{
  return "franka_pybridge_interfaces::srv::OperateSuction_Response";
}

template<>
inline const char * name<franka_pybridge_interfaces::srv::OperateSuction_Response>()
{
  return "franka_pybridge_interfaces/srv/OperateSuction_Response";
}

template<>
struct has_fixed_size<franka_pybridge_interfaces::srv::OperateSuction_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<franka_pybridge_interfaces::srv::OperateSuction_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<franka_pybridge_interfaces::srv::OperateSuction_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_pybridge_interfaces::srv::OperateSuction>()
{
  return "franka_pybridge_interfaces::srv::OperateSuction";
}

template<>
inline const char * name<franka_pybridge_interfaces::srv::OperateSuction>()
{
  return "franka_pybridge_interfaces/srv/OperateSuction";
}

template<>
struct has_fixed_size<franka_pybridge_interfaces::srv::OperateSuction>
  : std::integral_constant<
    bool,
    has_fixed_size<franka_pybridge_interfaces::srv::OperateSuction_Request>::value &&
    has_fixed_size<franka_pybridge_interfaces::srv::OperateSuction_Response>::value
  >
{
};

template<>
struct has_bounded_size<franka_pybridge_interfaces::srv::OperateSuction>
  : std::integral_constant<
    bool,
    has_bounded_size<franka_pybridge_interfaces::srv::OperateSuction_Request>::value &&
    has_bounded_size<franka_pybridge_interfaces::srv::OperateSuction_Response>::value
  >
{
};

template<>
struct is_service<franka_pybridge_interfaces::srv::OperateSuction>
  : std::true_type
{
};

template<>
struct is_service_request<franka_pybridge_interfaces::srv::OperateSuction_Request>
  : std::true_type
{
};

template<>
struct is_service_response<franka_pybridge_interfaces::srv::OperateSuction_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__OPERATE_SUCTION__TRAITS_HPP_
