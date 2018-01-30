// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__SUBMAP_ENTRY__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__SUBMAP_ENTRY__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "cartographer_ros_msgs/msg/submap_entry__struct.hpp"


template<>
struct has_fixed_size<cartographer_ros_msgs::msg::SubmapEntry>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value>{};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__SUBMAP_ENTRY__TRAITS_HPP_