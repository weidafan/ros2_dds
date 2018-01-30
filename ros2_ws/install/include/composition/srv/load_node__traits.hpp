// generated from rosidl_generator_cpp/resource/srv__traits.hpp.em
// generated code does not contain a copyright notice


#include "composition/srv/load_node__struct.hpp"

#ifndef COMPOSITION__SRV__LOAD_NODE__TRAITS_HPP_
#define COMPOSITION__SRV__LOAD_NODE__TRAITS_HPP_

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

template<>
struct has_fixed_size<composition::srv::LoadNode>
  : std::integral_constant<
    bool,
    has_fixed_size<composition::srv::LoadNode_Request>::value &&
    has_fixed_size<composition::srv::LoadNode_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // COMPOSITION__SRV__LOAD_NODE__TRAITS_HPP_
