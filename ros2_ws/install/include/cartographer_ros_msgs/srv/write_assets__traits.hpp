// generated from rosidl_generator_cpp/resource/srv__traits.hpp.em
// generated code does not contain a copyright notice


#include "cartographer_ros_msgs/srv/write_assets__struct.hpp"

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__WRITE_ASSETS__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__WRITE_ASSETS__TRAITS_HPP_

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::WriteAssets>
  : std::integral_constant<
    bool,
    has_fixed_size<cartographer_ros_msgs::srv::WriteAssets_Request>::value &&
    has_fixed_size<cartographer_ros_msgs::srv::WriteAssets_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__WRITE_ASSETS__TRAITS_HPP_
