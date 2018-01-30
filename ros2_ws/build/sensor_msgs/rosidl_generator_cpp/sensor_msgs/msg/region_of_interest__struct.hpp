// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__REGION_OF_INTEREST__STRUCT_HPP_
#define SENSOR_MSGS__MSG__REGION_OF_INTEREST__STRUCT_HPP_

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
# define DEPRECATED_sensor_msgs_msg_RegionOfInterest __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_RegionOfInterest __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RegionOfInterest_
{
  using Type = RegionOfInterest_<ContainerAllocator>;

  RegionOfInterest_()
  {
  }
  explicit RegionOfInterest_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _x_offset_type =
      uint32_t;
  _x_offset_type x_offset;
  using _y_offset_type =
      uint32_t;
  _y_offset_type y_offset;
  using _height_type =
      uint32_t;
  _height_type height;
  using _width_type =
      uint32_t;
  _width_type width;
  using _do_rectify_type =
      bool;
  _do_rectify_type do_rectify;

  // setters for named parameter idiom
  Type * set__x_offset(
    const uint32_t & _arg)
  {
    this->x_offset = _arg;
    return this;
  }
  Type * set__y_offset(
    const uint32_t & _arg)
  {
    this->y_offset = _arg;
    return this;
  }
  Type * set__height(
    const uint32_t & _arg)
  {
    this->height = _arg;
    return this;
  }
  Type * set__width(
    const uint32_t & _arg)
  {
    this->width = _arg;
    return this;
  }
  Type * set__do_rectify(
    const bool & _arg)
  {
    this->do_rectify = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> *;
  using ConstRawPtr =
      const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_RegionOfInterest
    std::shared_ptr<sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_RegionOfInterest
    std::shared_ptr<sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegionOfInterest_ & other) const
  {
    if (this->x_offset != other.x_offset) {
      return false;
    }
    if (this->y_offset != other.y_offset) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->do_rectify != other.do_rectify) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegionOfInterest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegionOfInterest_

// alias to use template instance with default allocator
using RegionOfInterest =
    sensor_msgs::msg::RegionOfInterest_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__REGION_OF_INTEREST__STRUCT_HPP_
