// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__RANGE__STRUCT_HPP_
#define SENSOR_MSGS__MSG__RANGE__STRUCT_HPP_

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
# define DEPRECATED_sensor_msgs_msg_Range __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_Range __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Range_
{
  using Type = Range_<ContainerAllocator>;

  Range_()
  {
  }
  explicit Range_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _radiation_type_type =
      uint8_t;
  _radiation_type_type radiation_type;
  using _field_of_view_type =
      float;
  _field_of_view_type field_of_view;
  using _min_range_type =
      float;
  _min_range_type min_range;
  using _max_range_type =
      float;
  _max_range_type max_range;
  using _range_type =
      float;
  _range_type range;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__radiation_type(
    const uint8_t & _arg)
  {
    this->radiation_type = _arg;
    return this;
  }
  Type * set__field_of_view(
    const float & _arg)
  {
    this->field_of_view = _arg;
    return this;
  }
  Type * set__min_range(
    const float & _arg)
  {
    this->min_range = _arg;
    return this;
  }
  Type * set__max_range(
    const float & _arg)
  {
    this->max_range = _arg;
    return this;
  }
  Type * set__range(
    const float & _arg)
  {
    this->range = _arg;
    return this;
  }

  // constants
  enum { ULTRASOUND = 0u };
  enum { INFRARED = 1u };

  // pointer types
  using RawPtr =
      sensor_msgs::msg::Range_<ContainerAllocator> *;
  using ConstRawPtr =
      const sensor_msgs::msg::Range_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<sensor_msgs::msg::Range_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<sensor_msgs::msg::Range_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::Range_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::Range_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::Range_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::Range_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<sensor_msgs::msg::Range_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<sensor_msgs::msg::Range_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_Range
    std::shared_ptr<sensor_msgs::msg::Range_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_Range
    std::shared_ptr<sensor_msgs::msg::Range_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Range_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->radiation_type != other.radiation_type) {
      return false;
    }
    if (this->field_of_view != other.field_of_view) {
      return false;
    }
    if (this->min_range != other.min_range) {
      return false;
    }
    if (this->max_range != other.max_range) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    return true;
  }
  bool operator!=(const Range_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Range_

// alias to use template instance with default allocator
using Range =
    sensor_msgs::msg::Range_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__RANGE__STRUCT_HPP_
