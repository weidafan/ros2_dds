// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__GET_PLAN__RESPONSE__STRUCT_HPP_
#define NAV_MSGS__SRV__GET_PLAN__RESPONSE__STRUCT_HPP_

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32) && defined(ERROR)
  #undef ERROR
#endif

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include "nav_msgs/msg/path.hpp"  // plan

#ifndef _WIN32
# define DEPRECATED_nav_msgs_srv_GetPlan_Response __attribute__((deprecated))
#else
# define DEPRECATED_nav_msgs_srv_GetPlan_Response __declspec(deprecated)
#endif

namespace nav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPlan_Response_
{
  using Type = GetPlan_Response_<ContainerAllocator>;

  GetPlan_Response_()
  {
  }
  explicit GetPlan_Response_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _plan_type =
      nav_msgs::msg::Path_<ContainerAllocator>;
  _plan_type plan;

  // setters for named parameter idiom
  Type * set__plan(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->plan = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      nav_msgs::srv::GetPlan_Response_<ContainerAllocator> *;
  using ConstRawPtr =
      const nav_msgs::srv::GetPlan_Response_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<nav_msgs::srv::GetPlan_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<nav_msgs::srv::GetPlan_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    nav_msgs::srv::GetPlan_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<nav_msgs::srv::GetPlan_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    nav_msgs::srv::GetPlan_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<nav_msgs::srv::GetPlan_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<nav_msgs::srv::GetPlan_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<nav_msgs::srv::GetPlan_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_nav_msgs_srv_GetPlan_Response
    std::shared_ptr<nav_msgs::srv::GetPlan_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_nav_msgs_srv_GetPlan_Response
    std::shared_ptr<nav_msgs::srv::GetPlan_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPlan_Response_ & other) const
  {
    if (this->plan != other.plan) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPlan_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPlan_Response_

// alias to use template instance with default allocator
using GetPlan_Response =
    nav_msgs::srv::GetPlan_Response_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace nav_msgs

#endif  // NAV_MSGS__SRV__GET_PLAN__RESPONSE__STRUCT_HPP_
