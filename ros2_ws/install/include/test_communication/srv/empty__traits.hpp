// generated from rosidl_generator_cpp/resource/srv__traits.hpp.em
// generated code does not contain a copyright notice


#include "test_communication/srv/empty__struct.hpp"

#ifndef TEST_COMMUNICATION__SRV__EMPTY__TRAITS_HPP_
#define TEST_COMMUNICATION__SRV__EMPTY__TRAITS_HPP_

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

template<>
struct has_fixed_size<test_communication::srv::Empty>
  : std::integral_constant<
    bool,
    has_fixed_size<test_communication::srv::Empty_Request>::value &&
    has_fixed_size<test_communication::srv::Empty_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // TEST_COMMUNICATION__SRV__EMPTY__TRAITS_HPP_
