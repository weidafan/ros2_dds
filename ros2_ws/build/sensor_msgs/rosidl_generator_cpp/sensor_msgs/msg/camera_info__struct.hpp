// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__CAMERA_INFO__STRUCT_HPP_
#define SENSOR_MSGS__MSG__CAMERA_INFO__STRUCT_HPP_

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
#include "sensor_msgs/msg/region_of_interest.hpp"  // roi
#include "std_msgs/msg/header.hpp"  // header

#ifndef _WIN32
# define DEPRECATED_sensor_msgs_msg_CameraInfo __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_CameraInfo __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraInfo_
{
  using Type = CameraInfo_<ContainerAllocator>;

  CameraInfo_()
  {
  }
  explicit CameraInfo_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : d(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _height_type =
      uint32_t;
  _height_type height;
  using _width_type =
      uint32_t;
  _width_type width;
  using _distortion_model_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _distortion_model_type distortion_model;
  using _d_type =
      std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _d_type d;
  using _k_type =
      std::array<double, 9>;
  _k_type k;
  using _r_type =
      std::array<double, 9>;
  _r_type r;
  using _p_type =
      std::array<double, 12>;
  _p_type p;
  using _binning_x_type =
      uint32_t;
  _binning_x_type binning_x;
  using _binning_y_type =
      uint32_t;
  _binning_y_type binning_y;
  using _roi_type =
      sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _roi_type roi;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
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
  Type * set__distortion_model(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->distortion_model = _arg;
    return this;
  }
  Type * set__d(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->d = _arg;
    return this;
  }
  Type * set__k(
    const std::array<double, 9> & _arg)
  {
    this->k = _arg;
    return this;
  }
  Type * set__r(
    const std::array<double, 9> & _arg)
  {
    this->r = _arg;
    return this;
  }
  Type * set__p(
    const std::array<double, 12> & _arg)
  {
    this->p = _arg;
    return this;
  }
  Type * set__binning_x(
    const uint32_t & _arg)
  {
    this->binning_x = _arg;
    return this;
  }
  Type * set__binning_y(
    const uint32_t & _arg)
  {
    this->binning_y = _arg;
    return this;
  }
  Type * set__roi(
    const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->roi = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      sensor_msgs::msg::CameraInfo_<ContainerAllocator> *;
  using ConstRawPtr =
      const sensor_msgs::msg::CameraInfo_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<sensor_msgs::msg::CameraInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<sensor_msgs::msg::CameraInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::CameraInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::CameraInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::CameraInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::CameraInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<sensor_msgs::msg::CameraInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<sensor_msgs::msg::CameraInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_CameraInfo
    std::shared_ptr<sensor_msgs::msg::CameraInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_CameraInfo
    std::shared_ptr<sensor_msgs::msg::CameraInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->distortion_model != other.distortion_model) {
      return false;
    }
    if (this->d != other.d) {
      return false;
    }
    if (this->k != other.k) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->p != other.p) {
      return false;
    }
    if (this->binning_x != other.binning_x) {
      return false;
    }
    if (this->binning_y != other.binning_y) {
      return false;
    }
    if (this->roi != other.roi) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraInfo_

// alias to use template instance with default allocator
using CameraInfo =
    sensor_msgs::msg::CameraInfo_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__CAMERA_INFO__STRUCT_HPP_
