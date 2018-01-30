// generated from rosidl_generator_cpp/resource/srv__traits.hpp.em
// generated code does not contain a copyright notice


#include "nav_msgs/srv/get_plan__struct.hpp"

#ifndef NAV_MSGS__SRV__GET_PLAN__TRAITS_HPP_
#define NAV_MSGS__SRV__GET_PLAN__TRAITS_HPP_

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

template<>
struct has_fixed_size<nav_msgs::srv::GetPlan>
  : std::integral_constant<
    bool,
    has_fixed_size<nav_msgs::srv::GetPlan_Request>::value &&
    has_fixed_size<nav_msgs::srv::GetPlan_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // NAV_MSGS__SRV__GET_PLAN__TRAITS_HPP_
