// generated from rosidl_generator_cpp/resource/srv__traits.hpp.em
// generated code does not contain a copyright notice


#include "diagnostic_msgs/srv/self_test__struct.hpp"

#ifndef DIAGNOSTIC_MSGS__SRV__SELF_TEST__TRAITS_HPP_
#define DIAGNOSTIC_MSGS__SRV__SELF_TEST__TRAITS_HPP_

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

template<>
struct has_fixed_size<diagnostic_msgs::srv::SelfTest>
  : std::integral_constant<
    bool,
    has_fixed_size<diagnostic_msgs::srv::SelfTest_Request>::value &&
    has_fixed_size<diagnostic_msgs::srv::SelfTest_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // DIAGNOSTIC_MSGS__SRV__SELF_TEST__TRAITS_HPP_
