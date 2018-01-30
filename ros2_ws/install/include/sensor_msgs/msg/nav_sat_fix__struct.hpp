// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__NAV_SAT_FIX__STRUCT_HPP_
#define SENSOR_MSGS__MSG__NAV_SAT_FIX__STRUCT_HPP_

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
#include "sensor_msgs/msg/nav_sat_status.hpp"  // status
#include "std_msgs/msg/header.hpp"  // header

#ifndef _WIN32
# define DEPRECATED_sensor_msgs_msg_NavSatFix __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_NavSatFix __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavSatFix_
{
  using Type = NavSatFix_<ContainerAllocator>;

  NavSatFix_()
  {
  }
  explicit NavSatFix_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _status_type =
      sensor_msgs::msg::NavSatStatus_<ContainerAllocator>;
  _status_type status;
  using _latitude_type =
      double;
  _latitude_type latitude;
  using _longitude_type =
      double;
  _longitude_type longitude;
  using _altitude_type =
      double;
  _altitude_type altitude;
  using _position_covariance_type =
      std::array<double, 9>;
  _position_covariance_type position_covariance;
  using _position_covariance_type_type =
      uint8_t;
  _position_covariance_type_type position_covariance_type;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__status(
    const sensor_msgs::msg::NavSatStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return this;
  }
  Type * set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return this;
  }
  Type * set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return this;
  }
  Type * set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return this;
  }
  Type * set__position_covariance(
    const std::array<double, 9> & _arg)
  {
    this->position_covariance = _arg;
    return this;
  }
  Type * set__position_covariance_type(
    const uint8_t & _arg)
  {
    this->position_covariance_type = _arg;
    return this;
  }

  // constants
  enum { COVARIANCE_TYPE_UNKNOWN = 0u };
  enum { COVARIANCE_TYPE_APPROXIMATED = 1u };
  enum { COVARIANCE_TYPE_DIAGONAL_KNOWN = 2u };
  enum { COVARIANCE_TYPE_KNOWN = 3u };

  // pointer types
  using RawPtr =
      sensor_msgs::msg::NavSatFix_<ContainerAllocator> *;
  using ConstRawPtr =
      const sensor_msgs::msg::NavSatFix_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<sensor_msgs::msg::NavSatFix_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<sensor_msgs::msg::NavSatFix_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::NavSatFix_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::NavSatFix_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::NavSatFix_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::NavSatFix_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<sensor_msgs::msg::NavSatFix_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<sensor_msgs::msg::NavSatFix_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_NavSatFix
    std::shared_ptr<sensor_msgs::msg::NavSatFix_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_NavSatFix
    std::shared_ptr<sensor_msgs::msg::NavSatFix_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavSatFix_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->position_covariance != other.position_covariance) {
      return false;
    }
    if (this->position_covariance_type != other.position_covariance_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavSatFix_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavSatFix_

// alias to use template instance with default allocator
using NavSatFix =
    sensor_msgs::msg::NavSatFix_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__NAV_SAT_FIX__STRUCT_HPP_
