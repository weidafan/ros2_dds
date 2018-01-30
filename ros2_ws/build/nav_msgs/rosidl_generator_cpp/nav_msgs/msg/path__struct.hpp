// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__PATH__STRUCT_HPP_
#define NAV_MSGS__MSG__PATH__STRUCT_HPP_

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
#include "geometry_msgs/msg/pose_stamped.hpp"  // poses
#include "std_msgs/msg/header.hpp"  // header

#ifndef _WIN32
# define DEPRECATED_nav_msgs_msg_Path __attribute__((deprecated))
#else
# define DEPRECATED_nav_msgs_msg_Path __declspec(deprecated)
#endif

namespace nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Path_
{
  using Type = Path_<ContainerAllocator>;

  Path_()
  {
  }
  explicit Path_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : poses(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _poses_type =
      std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>::other>;
  _poses_type poses;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__poses(
    const std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>::other> & _arg)
  {
    this->poses = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      nav_msgs::msg::Path_<ContainerAllocator> *;
  using ConstRawPtr =
      const nav_msgs::msg::Path_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<nav_msgs::msg::Path_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<nav_msgs::msg::Path_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    nav_msgs::msg::Path_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<nav_msgs::msg::Path_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    nav_msgs::msg::Path_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<nav_msgs::msg::Path_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<nav_msgs::msg::Path_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<nav_msgs::msg::Path_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_nav_msgs_msg_Path
    std::shared_ptr<nav_msgs::msg::Path_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_nav_msgs_msg_Path
    std::shared_ptr<nav_msgs::msg::Path_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Path_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const Path_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Path_

// alias to use template instance with default allocator
using Path =
    nav_msgs::msg::Path_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace nav_msgs

#endif  // NAV_MSGS__MSG__PATH__STRUCT_HPP_
