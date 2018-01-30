// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__MAGNETIC_FIELD__STRUCT_HPP_
#define SENSOR_MSGS__MSG__MAGNETIC_FIELD__STRUCT_HPP_

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
#include "geometry_msgs/msg/vector3.hpp"  // magnetic_field
#include "std_msgs/msg/header.hpp"  // header

#ifndef _WIN32
# define DEPRECATED_sensor_msgs_msg_MagneticField __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_MagneticField __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MagneticField_
{
  using Type = MagneticField_<ContainerAllocator>;

  MagneticField_()
  {
  }
  explicit MagneticField_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _magnetic_field_type =
      geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _magnetic_field_type magnetic_field;
  using _magnetic_field_covariance_type =
      std::array<double, 9>;
  _magnetic_field_covariance_type magnetic_field_covariance;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__magnetic_field(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->magnetic_field = _arg;
    return this;
  }
  Type * set__magnetic_field_covariance(
    const std::array<double, 9> & _arg)
  {
    this->magnetic_field_covariance = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      sensor_msgs::msg::MagneticField_<ContainerAllocator> *;
  using ConstRawPtr =
      const sensor_msgs::msg::MagneticField_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<sensor_msgs::msg::MagneticField_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<sensor_msgs::msg::MagneticField_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::MagneticField_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::MagneticField_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::MagneticField_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::MagneticField_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<sensor_msgs::msg::MagneticField_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<sensor_msgs::msg::MagneticField_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_MagneticField
    std::shared_ptr<sensor_msgs::msg::MagneticField_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_MagneticField
    std::shared_ptr<sensor_msgs::msg::MagneticField_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MagneticField_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->magnetic_field != other.magnetic_field) {
      return false;
    }
    if (this->magnetic_field_covariance != other.magnetic_field_covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const MagneticField_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MagneticField_

// alias to use template instance with default allocator
using MagneticField =
    sensor_msgs::msg::MagneticField_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__MAGNETIC_FIELD__STRUCT_HPP_
