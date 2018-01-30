// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__TIME_REFERENCE__STRUCT_HPP_
#define SENSOR_MSGS__MSG__TIME_REFERENCE__STRUCT_HPP_

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
#include "builtin_interfaces/msg/time.hpp"  // time_ref
#include "std_msgs/msg/header.hpp"  // header

#ifndef _WIN32
# define DEPRECATED_sensor_msgs_msg_TimeReference __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_TimeReference __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TimeReference_
{
  using Type = TimeReference_<ContainerAllocator>;

  TimeReference_()
  {
  }
  explicit TimeReference_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _time_ref_type =
      builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_ref_type time_ref;
  using _source_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _source_type source;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__time_ref(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->time_ref = _arg;
    return this;
  }
  Type * set__source(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->source = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      sensor_msgs::msg::TimeReference_<ContainerAllocator> *;
  using ConstRawPtr =
      const sensor_msgs::msg::TimeReference_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<sensor_msgs::msg::TimeReference_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<sensor_msgs::msg::TimeReference_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::TimeReference_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::TimeReference_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::TimeReference_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::TimeReference_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<sensor_msgs::msg::TimeReference_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<sensor_msgs::msg::TimeReference_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_TimeReference
    std::shared_ptr<sensor_msgs::msg::TimeReference_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_TimeReference
    std::shared_ptr<sensor_msgs::msg::TimeReference_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimeReference_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_ref != other.time_ref) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimeReference_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimeReference_

// alias to use template instance with default allocator
using TimeReference =
    sensor_msgs::msg::TimeReference_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__TIME_REFERENCE__STRUCT_HPP_
