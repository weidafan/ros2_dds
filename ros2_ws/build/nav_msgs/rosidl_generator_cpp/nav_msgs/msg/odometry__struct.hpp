// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__ODOMETRY__STRUCT_HPP_
#define NAV_MSGS__MSG__ODOMETRY__STRUCT_HPP_

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
#include "geometry_msgs/msg/pose_with_covariance.hpp"  // pose
#include "geometry_msgs/msg/twist_with_covariance.hpp"  // twist
#include "std_msgs/msg/header.hpp"  // header

#ifndef _WIN32
# define DEPRECATED_nav_msgs_msg_Odometry __attribute__((deprecated))
#else
# define DEPRECATED_nav_msgs_msg_Odometry __declspec(deprecated)
#endif

namespace nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Odometry_
{
  using Type = Odometry_<ContainerAllocator>;

  Odometry_()
  {
  }
  explicit Odometry_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _child_frame_id_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _child_frame_id_type child_frame_id;
  using _pose_type =
      geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>;
  _pose_type pose;
  using _twist_type =
      geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>;
  _twist_type twist;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__child_frame_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->child_frame_id = _arg;
    return this;
  }
  Type * set__pose(
    const geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return this;
  }
  Type * set__twist(
    const geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      nav_msgs::msg::Odometry_<ContainerAllocator> *;
  using ConstRawPtr =
      const nav_msgs::msg::Odometry_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<nav_msgs::msg::Odometry_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<nav_msgs::msg::Odometry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    nav_msgs::msg::Odometry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<nav_msgs::msg::Odometry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    nav_msgs::msg::Odometry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<nav_msgs::msg::Odometry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<nav_msgs::msg::Odometry_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<nav_msgs::msg::Odometry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_nav_msgs_msg_Odometry
    std::shared_ptr<nav_msgs::msg::Odometry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_nav_msgs_msg_Odometry
    std::shared_ptr<nav_msgs::msg::Odometry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Odometry_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->child_frame_id != other.child_frame_id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    return true;
  }
  bool operator!=(const Odometry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Odometry_

// alias to use template instance with default allocator
using Odometry =
    nav_msgs::msg::Odometry_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace nav_msgs

#endif  // NAV_MSGS__MSG__ODOMETRY__STRUCT_HPP_
