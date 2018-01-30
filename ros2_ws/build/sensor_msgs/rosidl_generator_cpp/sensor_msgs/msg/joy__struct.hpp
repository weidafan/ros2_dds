// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__JOY__STRUCT_HPP_
#define SENSOR_MSGS__MSG__JOY__STRUCT_HPP_

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
# define DEPRECATED_sensor_msgs_msg_Joy __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_Joy __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Joy_
{
  using Type = Joy_<ContainerAllocator>;

  Joy_()
  {
  }
  explicit Joy_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : axes(_alloc),
    buttons(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _axes_type =
      std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _axes_type axes;
  using _buttons_type =
      std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _buttons_type buttons;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__axes(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->axes = _arg;
    return this;
  }
  Type * set__buttons(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->buttons = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      sensor_msgs::msg::Joy_<ContainerAllocator> *;
  using ConstRawPtr =
      const sensor_msgs::msg::Joy_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<sensor_msgs::msg::Joy_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<sensor_msgs::msg::Joy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::Joy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::Joy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::Joy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::Joy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<sensor_msgs::msg::Joy_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<sensor_msgs::msg::Joy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_Joy
    std::shared_ptr<sensor_msgs::msg::Joy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_Joy
    std::shared_ptr<sensor_msgs::msg::Joy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Joy_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->axes != other.axes) {
      return false;
    }
    if (this->buttons != other.buttons) {
      return false;
    }
    return true;
  }
  bool operator!=(const Joy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Joy_

// alias to use template instance with default allocator
using Joy =
    sensor_msgs::msg::Joy_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__JOY__STRUCT_HPP_
