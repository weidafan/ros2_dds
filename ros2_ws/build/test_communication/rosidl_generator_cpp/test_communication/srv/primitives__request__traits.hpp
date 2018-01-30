// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_COMMUNICATION__SRV__PRIMITIVES__REQUEST__TRAITS_HPP_
#define TEST_COMMUNICATION__SRV__PRIMITIVES__REQUEST__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "test_communication/srv/primitives__request__struct.hpp"


template<>
struct has_fixed_size<test_communication::srv::Primitives_Request>
  : std::integral_constant<bool, false>{};

}  // namespace rosidl_generator_traits

#endif  // TEST_COMMUNICATION__SRV__PRIMITIVES__REQUEST__TRAITS_HPP_
