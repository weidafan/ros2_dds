// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__REQUEST__TRAITS_HPP_
#define EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__REQUEST__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "example_interfaces/srv/add_two_ints__request__struct.hpp"


template<>
struct has_fixed_size<example_interfaces::srv::AddTwoInts_Request>
  : std::integral_constant<bool, true>{};

}  // namespace rosidl_generator_traits

#endif  // EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__REQUEST__TRAITS_HPP_
