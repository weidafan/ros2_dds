// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__ILLUMINANCE__STRUCT_HPP_
#define SENSOR_MSGS__MSG__ILLUMINANCE__STRUCT_HPP_

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
#include "std_msgs/msg/header.hpp"  // header

#ifndef _WIN32
# define DEPRECATED_sensor_msgs_msg_Illuminance __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_Illuminance __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Illuminance_
{
  using Type = Illuminance_<ContainerAllocator>;

  Illuminance_()
  {
  }
  explicit Illuminance_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _illuminance_type =
      double;
  _illuminance_type illuminance;
  using _variance_type =
      double;
  _variance_type variance;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__illuminance(
    const double & _arg)
  {
    this->illuminance = _arg;
    return this;
  }
  Type * set__variance(
    const double & _arg)
  {
    this->variance = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      sensor_msgs::msg::Illuminance_<ContainerAllocator> *;
  using ConstRawPtr =
      const sensor_msgs::msg::Illuminance_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<sensor_msgs::msg::Illuminance_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<sensor_msgs::msg::Illuminance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::Illuminance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::Illuminance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::Illuminance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::Illuminance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<sensor_msgs::msg::Illuminance_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<sensor_msgs::msg::Illuminance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_Illuminance
    std::shared_ptr<sensor_msgs::msg::Illuminance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_Illuminance
    std::shared_ptr<sensor_msgs::msg::Illuminance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Illuminance_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->illuminance != other.illuminance) {
      return false;
    }
    if (this->variance != other.variance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Illuminance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Illuminance_

// alias to use template instance with default allocator
using Illuminance =
    sensor_msgs::msg::Illuminance_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__ILLUMINANCE__STRUCT_HPP_
