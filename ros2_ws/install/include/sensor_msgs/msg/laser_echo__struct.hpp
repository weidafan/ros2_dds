// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__LASER_ECHO__STRUCT_HPP_
#define SENSOR_MSGS__MSG__LASER_ECHO__STRUCT_HPP_

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
# define DEPRECATED_sensor_msgs_msg_LaserEcho __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_LaserEcho __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaserEcho_
{
  using Type = LaserEcho_<ContainerAllocator>;

  LaserEcho_()
  {
  }
  explicit LaserEcho_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : echoes(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _echoes_type =
      std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _echoes_type echoes;

  // setters for named parameter idiom
  Type * set__echoes(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->echoes = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      sensor_msgs::msg::LaserEcho_<ContainerAllocator> *;
  using ConstRawPtr =
      const sensor_msgs::msg::LaserEcho_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::LaserEcho_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::LaserEcho_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_LaserEcho
    std::shared_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_LaserEcho
    std::shared_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaserEcho_ & other) const
  {
    if (this->echoes != other.echoes) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaserEcho_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaserEcho_

// alias to use template instance with default allocator
using LaserEcho =
    sensor_msgs::msg::LaserEcho_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__LASER_ECHO__STRUCT_HPP_
