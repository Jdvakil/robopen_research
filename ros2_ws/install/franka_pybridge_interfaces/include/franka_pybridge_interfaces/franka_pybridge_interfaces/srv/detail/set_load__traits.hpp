// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franka_pybridge_interfaces:srv/SetLoad.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__SET_LOAD__TRAITS_HPP_
#define FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__SET_LOAD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "franka_pybridge_interfaces/srv/detail/set_load__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace franka_pybridge_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLoad_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mass
  {
    out << "mass: ";
    rosidl_generator_traits::value_to_yaml(msg.mass, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLoad_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass: ";
    rosidl_generator_traits::value_to_yaml(msg.mass, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLoad_Request & msg, bool use_flow_style = false)
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
  const franka_pybridge_interfaces::srv::SetLoad_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_pybridge_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_pybridge_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const franka_pybridge_interfaces::srv::SetLoad_Request & msg)
{
  return franka_pybridge_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<franka_pybridge_interfaces::srv::SetLoad_Request>()
{
  return "franka_pybridge_interfaces::srv::SetLoad_Request";
}

template<>
inline const char * name<franka_pybridge_interfaces::srv::SetLoad_Request>()
{
  return "franka_pybridge_interfaces/srv/SetLoad_Request";
}

template<>
struct has_fixed_size<franka_pybridge_interfaces::srv::SetLoad_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<franka_pybridge_interfaces::srv::SetLoad_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<franka_pybridge_interfaces::srv::SetLoad_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace franka_pybridge_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLoad_Response & msg,
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
  const SetLoad_Response & msg,
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

inline std::string to_yaml(const SetLoad_Response & msg, bool use_flow_style = false)
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
  const franka_pybridge_interfaces::srv::SetLoad_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_pybridge_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_pybridge_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const franka_pybridge_interfaces::srv::SetLoad_Response & msg)
{
  return franka_pybridge_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<franka_pybridge_interfaces::srv::SetLoad_Response>()
{
  return "franka_pybridge_interfaces::srv::SetLoad_Response";
}

template<>
inline const char * name<franka_pybridge_interfaces::srv::SetLoad_Response>()
{
  return "franka_pybridge_interfaces/srv/SetLoad_Response";
}

template<>
struct has_fixed_size<franka_pybridge_interfaces::srv::SetLoad_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<franka_pybridge_interfaces::srv::SetLoad_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<franka_pybridge_interfaces::srv::SetLoad_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_pybridge_interfaces::srv::SetLoad>()
{
  return "franka_pybridge_interfaces::srv::SetLoad";
}

template<>
inline const char * name<franka_pybridge_interfaces::srv::SetLoad>()
{
  return "franka_pybridge_interfaces/srv/SetLoad";
}

template<>
struct has_fixed_size<franka_pybridge_interfaces::srv::SetLoad>
  : std::integral_constant<
    bool,
    has_fixed_size<franka_pybridge_interfaces::srv::SetLoad_Request>::value &&
    has_fixed_size<franka_pybridge_interfaces::srv::SetLoad_Response>::value
  >
{
};

template<>
struct has_bounded_size<franka_pybridge_interfaces::srv::SetLoad>
  : std::integral_constant<
    bool,
    has_bounded_size<franka_pybridge_interfaces::srv::SetLoad_Request>::value &&
    has_bounded_size<franka_pybridge_interfaces::srv::SetLoad_Response>::value
  >
{
};

template<>
struct is_service<franka_pybridge_interfaces::srv::SetLoad>
  : std::true_type
{
};

template<>
struct is_service_request<franka_pybridge_interfaces::srv::SetLoad_Request>
  : std::true_type
{
};

template<>
struct is_service_response<franka_pybridge_interfaces::srv::SetLoad_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__SET_LOAD__TRAITS_HPP_
