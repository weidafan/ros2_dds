// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__JOY_FEEDBACK__STRUCT_HPP_
#define SENSOR_MSGS__MSG__JOY_FEEDBACK__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED_sensor_msgs_msg_JoyFeedback __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_JoyFeedback __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JoyFeedback_
{
  using Type = JoyFeedback_<ContainerAllocator>;

  JoyFeedback_()
  {
  }
  explicit JoyFeedback_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _type_type =
      uint8_t;
  _type_type type;
  using _id_type =
      uint8_t;
  _id_type id;
  using _intensity_type =
      float;
  _intensity_type intensity;

  // setters for named parameter idiom
  Type * set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return this;
  }
  Type * set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return this;
  }
  Type * set__intensity(
    const float & _arg)
  {
    this->intensity = _arg;
    return this;
  }

  // constants
  enum { TYPE_LED = 0u };
  enum { TYPE_RUMBLE = 1u };
  enum { TYPE_BUZZER = 2u };

  // pointer types
  using RawPtr =
      sensor_msgs::msg::JoyFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
      const sensor_msgs::msg::JoyFeedback_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<sensor_msgs::msg::JoyFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<sensor_msgs::msg::JoyFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::JoyFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::JoyFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::JoyFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::JoyFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<sensor_msgs::msg::JoyFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<sensor_msgs::msg::JoyFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_JoyFeedback
    std::shared_ptr<sensor_msgs::msg::JoyFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_JoyFeedback
    std::shared_ptr<sensor_msgs::msg::JoyFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JoyFeedback_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->intensity != other.intensity) {
      return false;
    }
    return true;
  }
  bool operator!=(const JoyFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JoyFeedback_

// alias to use template instance with default allocator
using JoyFeedback =
    sensor_msgs::msg::JoyFeedback_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__JOY_FEEDBACK__STRUCT_HPP_
