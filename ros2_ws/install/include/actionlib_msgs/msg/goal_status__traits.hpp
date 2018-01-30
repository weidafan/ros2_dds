// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__GOAL_STATUS__TRAITS_HPP_
#define ACTIONLIB_MSGS__MSG__GOAL_STATUS__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "actionlib_msgs/msg/goal_status__struct.hpp"


template<>
struct has_fixed_size<actionlib_msgs::msg::GoalStatus>
  : std::integral_constant<bool, false>{};

}  // namespace rosidl_generator_traits

#endif  // ACTIONLIB_MSGS__MSG__GOAL_STATUS__TRAITS_HPP_
