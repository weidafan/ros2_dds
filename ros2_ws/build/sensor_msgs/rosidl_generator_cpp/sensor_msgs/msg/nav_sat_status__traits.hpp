// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__NAV_SAT_STATUS__TRAITS_HPP_
#define SENSOR_MSGS__MSG__NAV_SAT_STATUS__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "sensor_msgs/msg/nav_sat_status__struct.hpp"


template<>
struct has_fixed_size<sensor_msgs::msg::NavSatStatus>
  : std::integral_constant<bool, true>{};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__NAV_SAT_STATUS__TRAITS_HPP_
