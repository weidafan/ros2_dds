// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__JOINT_STATE__STRUCT_HPP_
#define SENSOR_MSGS__MSG__JOINT_STATE__STRUCT_HPP_

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
# define DEPRECATED_sensor_msgs_msg_JointState __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_JointState __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointState_
{
  using Type = JointState_<ContainerAllocator>;

  JointState_()
  {
  }
  explicit JointState_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : name(_alloc),
    position(_alloc),
    velocity(_alloc),
    effort(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _name_type =
      std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _name_type name;
  using _position_type =
      std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _position_type position;
  using _velocity_type =
      std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _velocity_type velocity;
  using _effort_type =
      std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _effort_type effort;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->name = _arg;
    return this;
  }
  Type * set__position(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->position = _arg;
    return this;
  }
  Type * set__velocity(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->velocity = _arg;
    return this;
  }
  Type * set__effort(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->effort = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      sensor_msgs::msg::JointState_<ContainerAllocator> *;
  using ConstRawPtr =
      const sensor_msgs::msg::JointState_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<sensor_msgs::msg::JointState_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<sensor_msgs::msg::JointState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::JointState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::JointState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::JointState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::JointState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<sensor_msgs::msg::JointState_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<sensor_msgs::msg::JointState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_JointState
    std::shared_ptr<sensor_msgs::msg::JointState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_JointState
    std::shared_ptr<sensor_msgs::msg::JointState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->effort != other.effort) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointState_

// alias to use template instance with default allocator
using JointState =
    sensor_msgs::msg::JointState_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__JOINT_STATE__STRUCT_HPP_
