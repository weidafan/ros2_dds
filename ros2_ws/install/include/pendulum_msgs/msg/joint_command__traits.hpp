// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef PENDULUM_MSGS__MSG__JOINT_COMMAND__TRAITS_HPP_
#define PENDULUM_MSGS__MSG__JOINT_COMMAND__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "pendulum_msgs/msg/joint_command__struct.hpp"


template<>
struct has_fixed_size<pendulum_msgs::msg::JointCommand>
  : std::integral_constant<bool, true>{};

}  // namespace rosidl_generator_traits

#endif  // PENDULUM_MSGS__MSG__JOINT_COMMAND__TRAITS_HPP_
