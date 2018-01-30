// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__START_TRAJECTORY__REQUEST__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__START_TRAJECTORY__REQUEST__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "cartographer_ros_msgs/srv/start_trajectory__request__struct.hpp"


template<>
struct has_fixed_size<cartographer_ros_msgs::srv::StartTrajectory_Request>
  : std::integral_constant<bool, has_fixed_size<cartographer_ros_msgs::msg::TrajectoryOptions>::value && has_fixed_size<cartographer_ros_msgs::msg::SensorTopics>::value>{};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__START_TRAJECTORY__REQUEST__TRAITS_HPP_
