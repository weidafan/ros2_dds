// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__MSG__TF_MESSAGE__TRAITS_HPP_
#define TF2_MSGS__MSG__TF_MESSAGE__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "tf2_msgs/msg/tf_message__struct.hpp"


template<>
struct has_fixed_size<tf2_msgs::msg::TFMessage>
  : std::integral_constant<bool, false>{};

}  // namespace rosidl_generator_traits

#endif  // TF2_MSGS__MSG__TF_MESSAGE__TRAITS_HPP_
