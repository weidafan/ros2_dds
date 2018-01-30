// generated from rosidl_generator_cpp/resource/srv__traits.hpp.em
// generated code does not contain a copyright notice


#include "std_srvs/srv/empty__struct.hpp"

#ifndef STD_SRVS__SRV__EMPTY__TRAITS_HPP_
#define STD_SRVS__SRV__EMPTY__TRAITS_HPP_

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

template<>
struct has_fixed_size<std_srvs::srv::Empty>
  : std::integral_constant<
    bool,
    has_fixed_size<std_srvs::srv::Empty_Request>::value &&
    has_fixed_size<std_srvs::srv::Empty_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // STD_SRVS__SRV__EMPTY__TRAITS_HPP_
