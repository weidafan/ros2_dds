// generated from rosidl_generator_cpp/resource/srv__traits.hpp.em
// generated code does not contain a copyright notice


#include "sensor_msgs/srv/set_camera_info__struct.hpp"

#ifndef SENSOR_MSGS__SRV__SET_CAMERA_INFO__TRAITS_HPP_
#define SENSOR_MSGS__SRV__SET_CAMERA_INFO__TRAITS_HPP_

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

template<>
struct has_fixed_size<sensor_msgs::srv::SetCameraInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<sensor_msgs::srv::SetCameraInfo_Request>::value &&
    has_fixed_size<sensor_msgs::srv::SetCameraInfo_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__SRV__SET_CAMERA_INFO__TRAITS_HPP_
