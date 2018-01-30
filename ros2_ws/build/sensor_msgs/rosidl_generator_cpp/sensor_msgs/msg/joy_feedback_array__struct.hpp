// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__JOY_FEEDBACK_ARRAY__STRUCT_HPP_
#define SENSOR_MSGS__MSG__JOY_FEEDBACK_ARRAY__STRUCT_HPP_

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
#include "sensor_msgs/msg/joy_feedback.hpp"  // array

#ifndef _WIN32
# define DEPRECATED_sensor_msgs_msg_JoyFeedbackArray __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_JoyFeedbackArray __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JoyFeedbackArray_
{
  using Type = JoyFeedbackArray_<ContainerAllocator>;

  JoyFeedbackArray_()
  {
  }
  explicit JoyFeedbackArray_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : array(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _array_type =
      std::vector<sensor_msgs::msg::JoyFeedback_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::JoyFeedback_<ContainerAllocator>>::other>;
  _array_type array;

  // setters for named parameter idiom
  Type * set__array(
    const std::vector<sensor_msgs::msg::JoyFeedback_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::JoyFeedback_<ContainerAllocator>>::other> & _arg)
  {
    this->array = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator> *;
  using ConstRawPtr =
      const sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_JoyFeedbackArray
    std::shared_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_JoyFeedbackArray
    std::shared_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JoyFeedbackArray_ & other) const
  {
    if (this->array != other.array) {
      return false;
    }
    return true;
  }
  bool operator!=(const JoyFeedbackArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JoyFeedbackArray_

// alias to use template instance with default allocator
using JoyFeedbackArray =
    sensor_msgs::msg::JoyFeedbackArray_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__JOY_FEEDBACK_ARRAY__STRUCT_HPP_
