// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__ACCEL_WITH_COVARIANCE__STRUCT_HPP_
#define GEOMETRY_MSGS__MSG__ACCEL_WITH_COVARIANCE__STRUCT_HPP_

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
#include "geometry_msgs/msg/accel.hpp"  // accel

#ifndef _WIN32
# define DEPRECATED_geometry_msgs_msg_AccelWithCovariance __attribute__((deprecated))
#else
# define DEPRECATED_geometry_msgs_msg_AccelWithCovariance __declspec(deprecated)
#endif

namespace geometry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AccelWithCovariance_
{
  using Type = AccelWithCovariance_<ContainerAllocator>;

  AccelWithCovariance_()
  {
  }
  explicit AccelWithCovariance_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _accel_type =
      geometry_msgs::msg::Accel_<ContainerAllocator>;
  _accel_type accel;
  using _covariance_type =
      std::array<double, 36>;
  _covariance_type covariance;

  // setters for named parameter idiom
  Type * set__accel(
    const geometry_msgs::msg::Accel_<ContainerAllocator> & _arg)
  {
    this->accel = _arg;
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
      geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator> *;
  using ConstRawPtr =
      const geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_geometry_msgs_msg_AccelWithCovariance
    std::shared_ptr<geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_geometry_msgs_msg_AccelWithCovariance
    std::shared_ptr<geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AccelWithCovariance_ & other) const
  {
    if (this->accel != other.accel) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const AccelWithCovariance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AccelWithCovariance_

// alias to use template instance with default allocator
using AccelWithCovariance =
    geometry_msgs::msg::AccelWithCovariance_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__ACCEL_WITH_COVARIANCE__STRUCT_HPP_
