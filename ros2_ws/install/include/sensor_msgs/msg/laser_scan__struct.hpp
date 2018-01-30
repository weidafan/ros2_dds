// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__LASER_SCAN__STRUCT_HPP_
#define SENSOR_MSGS__MSG__LASER_SCAN__STRUCT_HPP_

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
# define DEPRECATED_sensor_msgs_msg_LaserScan __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_LaserScan __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaserScan_
{
  using Type = LaserScan_<ContainerAllocator>;

  LaserScan_()
  {
  }
  explicit LaserScan_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : ranges(_alloc),
    intensities(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _angle_min_type =
      float;
  _angle_min_type angle_min;
  using _angle_max_type =
      float;
  _angle_max_type angle_max;
  using _angle_increment_type =
      float;
  _angle_increment_type angle_increment;
  using _time_increment_type =
      float;
  _time_increment_type time_increment;
  using _scan_time_type =
      float;
  _scan_time_type scan_time;
  using _range_min_type =
      float;
  _range_min_type range_min;
  using _range_max_type =
      float;
  _range_max_type range_max;
  using _ranges_type =
      std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _ranges_type ranges;
  using _intensities_type =
      std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _intensities_type intensities;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__angle_min(
    const float & _arg)
  {
    this->angle_min = _arg;
    return this;
  }
  Type * set__angle_max(
    const float & _arg)
  {
    this->angle_max = _arg;
    return this;
  }
  Type * set__angle_increment(
    const float & _arg)
  {
    this->angle_increment = _arg;
    return this;
  }
  Type * set__time_increment(
    const float & _arg)
  {
    this->time_increment = _arg;
    return this;
  }
  Type * set__scan_time(
    const float & _arg)
  {
    this->scan_time = _arg;
    return this;
  }
  Type * set__range_min(
    const float & _arg)
  {
    this->range_min = _arg;
    return this;
  }
  Type * set__range_max(
    const float & _arg)
  {
    this->range_max = _arg;
    return this;
  }
  Type * set__ranges(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->ranges = _arg;
    return this;
  }
  Type * set__intensities(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->intensities = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      sensor_msgs::msg::LaserScan_<ContainerAllocator> *;
  using ConstRawPtr =
      const sensor_msgs::msg::LaserScan_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<sensor_msgs::msg::LaserScan_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<sensor_msgs::msg::LaserScan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::LaserScan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::LaserScan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::LaserScan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::LaserScan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<sensor_msgs::msg::LaserScan_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<sensor_msgs::msg::LaserScan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_LaserScan
    std::shared_ptr<sensor_msgs::msg::LaserScan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_LaserScan
    std::shared_ptr<sensor_msgs::msg::LaserScan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaserScan_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->angle_min != other.angle_min) {
      return false;
    }
    if (this->angle_max != other.angle_max) {
      return false;
    }
    if (this->angle_increment != other.angle_increment) {
      return false;
    }
    if (this->time_increment != other.time_increment) {
      return false;
    }
    if (this->scan_time != other.scan_time) {
      return false;
    }
    if (this->range_min != other.range_min) {
      return false;
    }
    if (this->range_max != other.range_max) {
      return false;
    }
    if (this->ranges != other.ranges) {
      return false;
    }
    if (this->intensities != other.intensities) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaserScan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaserScan_

// alias to use template instance with default allocator
using LaserScan =
    sensor_msgs::msg::LaserScan_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__LASER_SCAN__STRUCT_HPP_
