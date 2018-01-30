// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__SRV__SET_CAMERA_INFO__REQUEST__TRAITS_HPP_
#define SENSOR_MSGS__SRV__SET_CAMERA_INFO__REQUEST__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "sensor_msgs/srv/set_camera_info__request__struct.hpp"


template<>
struct has_fixed_size<sensor_msgs::srv::SetCameraInfo_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::CameraInfo>::value>{};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__SRV__SET_CAMERA_INFO__REQUEST__TRAITS_HPP_
