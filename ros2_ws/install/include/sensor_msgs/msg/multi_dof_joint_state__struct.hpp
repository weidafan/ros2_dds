// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__MULTI_DOF_JOINT_STATE__STRUCT_HPP_
#define SENSOR_MSGS__MSG__MULTI_DOF_JOINT_STATE__STRUCT_HPP_

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
#include "geometry_msgs/msg/transform.hpp"  // transforms
#include "geometry_msgs/msg/twist.hpp"  // twist
#include "geometry_msgs/msg/wrench.hpp"  // wrench
#include "std_msgs/msg/header.hpp"  // header

#ifndef _WIN32
# define DEPRECATED_sensor_msgs_msg_MultiDOFJointState __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_MultiDOFJointState __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MultiDOFJointState_
{
  using Type = MultiDOFJointState_<ContainerAllocator>;

  MultiDOFJointState_()
  {
  }
  explicit MultiDOFJointState_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : joint_names(_alloc),
    transforms(_alloc),
    twist(_alloc),
    wrench(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _joint_names_type =
      std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _joint_names_type joint_names;
  using _transforms_type =
      std::vector<geometry_msgs::msg::Transform_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Transform_<ContainerAllocator>>::other>;
  _transforms_type transforms;
  using _twist_type =
      std::vector<geometry_msgs::msg::Twist_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Twist_<ContainerAllocator>>::other>;
  _twist_type twist;
  using _wrench_type =
      std::vector<geometry_msgs::msg::Wrench_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Wrench_<ContainerAllocator>>::other>;
  _wrench_type wrench;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__joint_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->joint_names = _arg;
    return this;
  }
  Type * set__transforms(
    const std::vector<geometry_msgs::msg::Transform_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Transform_<ContainerAllocator>>::other> & _arg)
  {
    this->transforms = _arg;
    return this;
  }
  Type * set__twist(
    const std::vector<geometry_msgs::msg::Twist_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Twist_<ContainerAllocator>>::other> & _arg)
  {
    this->twist = _arg;
    return this;
  }
  Type * set__wrench(
    const std::vector<geometry_msgs::msg::Wrench_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Wrench_<ContainerAllocator>>::other> & _arg)
  {
    this->wrench = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator> *;
  using ConstRawPtr =
      const sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_MultiDOFJointState
    std::shared_ptr<sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_MultiDOFJointState
    std::shared_ptr<sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiDOFJointState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->joint_names != other.joint_names) {
      return false;
    }
    if (this->transforms != other.transforms) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    if (this->wrench != other.wrench) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiDOFJointState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiDOFJointState_

// alias to use template instance with default allocator
using MultiDOFJointState =
    sensor_msgs::msg::MultiDOFJointState_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__MULTI_DOF_JOINT_STATE__STRUCT_HPP_
