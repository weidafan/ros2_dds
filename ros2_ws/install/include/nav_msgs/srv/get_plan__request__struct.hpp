// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__GET_PLAN__REQUEST__STRUCT_HPP_
#define NAV_MSGS__SRV__GET_PLAN__REQUEST__STRUCT_HPP_

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
#include "geometry_msgs/msg/pose_stamped.hpp"  // start, goal

#ifndef _WIN32
# define DEPRECATED_nav_msgs_srv_GetPlan_Request __attribute__((deprecated))
#else
# define DEPRECATED_nav_msgs_srv_GetPlan_Request __declspec(deprecated)
#endif

namespace nav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPlan_Request_
{
  using Type = GetPlan_Request_<ContainerAllocator>;

  GetPlan_Request_()
  {
  }
  explicit GetPlan_Request_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _start_type =
      geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _start_type start;
  using _goal_type =
      geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _goal_type goal;
  using _tolerance_type =
      float;
  _tolerance_type tolerance;

  // setters for named parameter idiom
  Type * set__start(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->start = _arg;
    return this;
  }
  Type * set__goal(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return this;
  }
  Type * set__tolerance(
    const float & _arg)
  {
    this->tolerance = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      nav_msgs::srv::GetPlan_Request_<ContainerAllocator> *;
  using ConstRawPtr =
      const nav_msgs::srv::GetPlan_Request_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<nav_msgs::srv::GetPlan_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<nav_msgs::srv::GetPlan_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    nav_msgs::srv::GetPlan_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<nav_msgs::srv::GetPlan_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    nav_msgs::srv::GetPlan_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<nav_msgs::srv::GetPlan_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<nav_msgs::srv::GetPlan_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<nav_msgs::srv::GetPlan_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_nav_msgs_srv_GetPlan_Request
    std::shared_ptr<nav_msgs::srv::GetPlan_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_nav_msgs_srv_GetPlan_Request
    std::shared_ptr<nav_msgs::srv::GetPlan_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPlan_Request_ & other) const
  {
    if (this->start != other.start) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    if (this->tolerance != other.tolerance) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPlan_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPlan_Request_

// alias to use template instance with default allocator
using GetPlan_Request =
    nav_msgs::srv::GetPlan_Request_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace nav_msgs

#endif  // NAV_MSGS__SRV__GET_PLAN__REQUEST__STRUCT_HPP_
