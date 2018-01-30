// generated from rosidl_generator_cpp/resource/srv__traits.hpp.em
// generated code does not contain a copyright notice


#include "tf2_msgs/srv/frame_graph__struct.hpp"

#ifndef TF2_MSGS__SRV__FRAME_GRAPH__TRAITS_HPP_
#define TF2_MSGS__SRV__FRAME_GRAPH__TRAITS_HPP_

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

template<>
struct has_fixed_size<tf2_msgs::srv::FrameGraph>
  : std::integral_constant<
    bool,
    has_fixed_size<tf2_msgs::srv::FrameGraph_Request>::value &&
    has_fixed_size<tf2_msgs::srv::FrameGraph_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // TF2_MSGS__SRV__FRAME_GRAPH__TRAITS_HPP_
