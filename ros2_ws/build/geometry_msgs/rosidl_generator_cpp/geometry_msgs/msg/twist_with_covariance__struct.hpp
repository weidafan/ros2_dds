// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__TWIST_WITH_COVARIANCE__STRUCT_HPP_
#define GEOMETRY_MSGS__MSG__TWIST_WITH_COVARIANCE__STRUCT_HPP_

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
#include "geometry_msgs/msg/twist.hpp"  // twist

#ifndef _WIN32
# define DEPRECATED_geometry_msgs_msg_TwistWithCovariance __attribute__((deprecated))
#else
# define DEPRECATED_geometry_msgs_msg_TwistWithCovariance __declspec(deprecated)
#endif

namespace geometry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TwistWithCovariance_
{
  using Type = TwistWithCovariance_<ContainerAllocator>;

  TwistWithCovariance_()
  {
  }
  explicit TwistWithCovariance_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _twist_type =
      geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;
  using _covariance_type =
      std::array<double, 36>;
  _covariance_type covariance;

  // setters for named parameter idiom
  Type * set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return this;
  }
  Type * set__covariance(
    const std::array<double, 36> & _arg)
  {
    this->covariance = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> *;
  using ConstRawPtr =
      const geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_geometry_msgs_msg_TwistWithCovariance
    std::shared_ptr<geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_geometry_msgs_msg_TwistWithCovariance
    std::shared_ptr<geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TwistWithCovariance_ & other) const
  {
    if (this->twist != other.twist) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const TwistWithCovariance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TwistWithCovariance_

// alias to use template instance with default allocator
using TwistWithCovariance =
    geometry_msgs::msg::TwistWithCovariance_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__TWIST_WITH_COVARIANCE__STRUCT_HPP_
