// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__POINT_CLOUD__STRUCT_HPP_
#define SENSOR_MSGS__MSG__POINT_CLOUD__STRUCT_HPP_

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
#include "geometry_msgs/msg/point32.hpp"  // points
#include "sensor_msgs/msg/channel_float32.hpp"  // channels
#include "std_msgs/msg/header.hpp"  // header

#ifndef _WIN32
# define DEPRECATED_sensor_msgs_msg_PointCloud __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_PointCloud __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointCloud_
{
  using Type = PointCloud_<ContainerAllocator>;

  PointCloud_()
  {
  }
  explicit PointCloud_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : points(_alloc),
    channels(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _points_type =
      std::vector<geometry_msgs::msg::Point32_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point32_<ContainerAllocator>>::other>;
  _points_type points;
  using _channels_type =
      std::vector<sensor_msgs::msg::ChannelFloat32_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::ChannelFloat32_<ContainerAllocator>>::other>;
  _channels_type channels;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__points(
    const std::vector<geometry_msgs::msg::Point32_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point32_<ContainerAllocator>>::other> & _arg)
  {
    this->points = _arg;
    return this;
  }
  Type * set__channels(
    const std::vector<sensor_msgs::msg::ChannelFloat32_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::ChannelFloat32_<ContainerAllocator>>::other> & _arg)
  {
    this->channels = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      sensor_msgs::msg::PointCloud_<ContainerAllocator> *;
  using ConstRawPtr =
      const sensor_msgs::msg::PointCloud_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<sensor_msgs::msg::PointCloud_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<sensor_msgs::msg::PointCloud_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::PointCloud_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::PointCloud_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::PointCloud_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::PointCloud_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<sensor_msgs::msg::PointCloud_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<sensor_msgs::msg::PointCloud_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_PointCloud
    std::shared_ptr<sensor_msgs::msg::PointCloud_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_PointCloud
    std::shared_ptr<sensor_msgs::msg::PointCloud_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointCloud_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->channels != other.channels) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointCloud_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointCloud_

// alias to use template instance with default allocator
using PointCloud =
    sensor_msgs::msg::PointCloud_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__POINT_CLOUD__STRUCT_HPP_
