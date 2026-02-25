// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franka_pybridge_interfaces:srv/ExecutePlan.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN__TRAITS_HPP_
#define FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "franka_pybridge_interfaces/srv/detail/execute_plan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'vel_traj'
// Member 'initial_pos'
#include "franka_pybridge_interfaces/msg/detail/joint_data_array__traits.hpp"

namespace franka_pybridge_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExecutePlan_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: vel_traj
  {
    if (msg.vel_traj.size() == 0) {
      out << "vel_traj: []";
    } else {
      out << "vel_traj: [";
      size_t pending_items = msg.vel_traj.size();
      for (auto item : msg.vel_traj) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: initial_pos
  {
    out << "initial_pos: ";
    to_flow_style_yaml(msg.initial_pos, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecutePlan_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vel_traj
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vel_traj.size() == 0) {
      out << "vel_traj: []\n";
    } else {
      out << "vel_traj:\n";
      for (auto item : msg.vel_traj) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: initial_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_pos:\n";
    to_block_style_yaml(msg.initial_pos, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecutePlan_Request & msg, bool use_flow_style = false)
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
  const franka_pybridge_interfaces::srv::ExecutePlan_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_pybridge_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_pybridge_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const franka_pybridge_interfaces::srv::ExecutePlan_Request & msg)
{
  return franka_pybridge_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<franka_pybridge_interfaces::srv::ExecutePlan_Request>()
{
  return "franka_pybridge_interfaces::srv::ExecutePlan_Request";
}

template<>
inline const char * name<franka_pybridge_interfaces::srv::ExecutePlan_Request>()
{
  return "franka_pybridge_interfaces/srv/ExecutePlan_Request";
}

template<>
struct has_fixed_size<franka_pybridge_interfaces::srv::ExecutePlan_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<franka_pybridge_interfaces::srv::ExecutePlan_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<franka_pybridge_interfaces::srv::ExecutePlan_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace franka_pybridge_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExecutePlan_Response & msg,
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
  const ExecutePlan_Response & msg,
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

inline std::string to_yaml(const ExecutePlan_Response & msg, bool use_flow_style = false)
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
  const franka_pybridge_interfaces::srv::ExecutePlan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_pybridge_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_pybridge_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const franka_pybridge_interfaces::srv::ExecutePlan_Response & msg)
{
  return franka_pybridge_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<franka_pybridge_interfaces::srv::ExecutePlan_Response>()
{
  return "franka_pybridge_interfaces::srv::ExecutePlan_Response";
}

template<>
inline const char * name<franka_pybridge_interfaces::srv::ExecutePlan_Response>()
{
  return "franka_pybridge_interfaces/srv/ExecutePlan_Response";
}

template<>
struct has_fixed_size<franka_pybridge_interfaces::srv::ExecutePlan_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<franka_pybridge_interfaces::srv::ExecutePlan_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<franka_pybridge_interfaces::srv::ExecutePlan_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_pybridge_interfaces::srv::ExecutePlan>()
{
  return "franka_pybridge_interfaces::srv::ExecutePlan";
}

template<>
inline const char * name<franka_pybridge_interfaces::srv::ExecutePlan>()
{
  return "franka_pybridge_interfaces/srv/ExecutePlan";
}

template<>
struct has_fixed_size<franka_pybridge_interfaces::srv::ExecutePlan>
  : std::integral_constant<
    bool,
    has_fixed_size<franka_pybridge_interfaces::srv::ExecutePlan_Request>::value &&
    has_fixed_size<franka_pybridge_interfaces::srv::ExecutePlan_Response>::value
  >
{
};

template<>
struct has_bounded_size<franka_pybridge_interfaces::srv::ExecutePlan>
  : std::integral_constant<
    bool,
    has_bounded_size<franka_pybridge_interfaces::srv::ExecutePlan_Request>::value &&
    has_bounded_size<franka_pybridge_interfaces::srv::ExecutePlan_Response>::value
  >
{
};

template<>
struct is_service<franka_pybridge_interfaces::srv::ExecutePlan>
  : std::true_type
{
};

template<>
struct is_service_request<franka_pybridge_interfaces::srv::ExecutePlan_Request>
  : std::true_type
{
};

template<>
struct is_service_response<franka_pybridge_interfaces::srv::ExecutePlan_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FRANKA_PYBRIDGE_INTERFACES__SRV__DETAIL__EXECUTE_PLAN__TRAITS_HPP_
