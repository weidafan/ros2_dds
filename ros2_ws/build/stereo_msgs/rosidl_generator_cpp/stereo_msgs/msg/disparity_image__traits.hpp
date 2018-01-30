// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef STEREO_MSGS__MSG__DISPARITY_IMAGE__TRAITS_HPP_
#define STEREO_MSGS__MSG__DISPARITY_IMAGE__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "stereo_msgs/msg/disparity_image__struct.hpp"


template<>
struct has_fixed_size<stereo_msgs::msg::DisparityImage>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<sensor_msgs::msg::Image>::value && has_fixed_size<sensor_msgs::msg::RegionOfInterest>::value>{};

}  // namespace rosidl_generator_traits

#endif  // STEREO_MSGS__MSG__DISPARITY_IMAGE__TRAITS_HPP_
