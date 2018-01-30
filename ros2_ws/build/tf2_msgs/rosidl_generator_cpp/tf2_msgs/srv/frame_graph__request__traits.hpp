// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__SRV__FRAME_GRAPH__REQUEST__TRAITS_HPP_
#define TF2_MSGS__SRV__FRAME_GRAPH__REQUEST__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "tf2_msgs/srv/frame_graph__request__struct.hpp"


template<>
struct has_fixed_size<tf2_msgs::srv::FrameGraph_Request>
  : std::integral_constant<bool, true>{};

}  // namespace rosidl_generator_traits

#endif  // TF2_MSGS__SRV__FRAME_GRAPH__REQUEST__TRAITS_HPP_
