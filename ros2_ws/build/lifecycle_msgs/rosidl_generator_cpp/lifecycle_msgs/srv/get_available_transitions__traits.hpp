// generated from rosidl_generator_cpp/resource/srv__traits.hpp.em
// generated code does not contain a copyright notice


#include "lifecycle_msgs/srv/get_available_transitions__struct.hpp"

#ifndef LIFECYCLE_MSGS__SRV__GET_AVAILABLE_TRANSITIONS__TRAITS_HPP_
#define LIFECYCLE_MSGS__SRV__GET_AVAILABLE_TRANSITIONS__TRAITS_HPP_

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

template<>
struct has_fixed_size<lifecycle_msgs::srv::GetAvailableTransitions>
  : std::integral_constant<
    bool,
    has_fixed_size<lifecycle_msgs::srv::GetAvailableTransitions_Request>::value &&
    has_fixed_size<lifecycle_msgs::srv::GetAvailableTransitions_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // LIFECYCLE_MSGS__SRV__GET_AVAILABLE_TRANSITIONS__TRAITS_HPP_
