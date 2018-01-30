// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__SOLID_PRIMITIVE__TRAITS_HPP_
#define SHAPE_MSGS__MSG__SOLID_PRIMITIVE__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "shape_msgs/msg/solid_primitive__struct.hpp"


template<>
struct has_fixed_size<shape_msgs::msg::SolidPrimitive>
  : std::integral_constant<bool, false>{};

}  // namespace rosidl_generator_traits

#endif  // SHAPE_MSGS__MSG__SOLID_PRIMITIVE__TRAITS_HPP_
