// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__POINT__TRAITS_HPP_
#define GEOMETRY_MSGS__MSG__POINT__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "geometry_msgs/msg/point__struct.hpp"


template<>
struct has_fixed_size<geometry_msgs::msg::Point>
  : std::integral_constant<bool, true>{};

}  // namespace rosidl_generator_traits

#endif  // GEOMETRY_MSGS__MSG__POINT__TRAITS_HPP_
