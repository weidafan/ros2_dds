// generated from rosidl_generator_cpp/resource/srv__traits.hpp.em
// generated code does not contain a copyright notice


#include "cartographer_ros_msgs/srv/finish_trajectory__struct.hpp"

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__FINISH_TRAJECTORY__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__FINISH_TRAJECTORY__TRAITS_HPP_

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::FinishTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<cartographer_ros_msgs::srv::FinishTrajectory_Request>::value &&
    has_fixed_size<cartographer_ros_msgs::srv::FinishTrajectory_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__FINISH_TRAJECTORY__TRAITS_HPP_
