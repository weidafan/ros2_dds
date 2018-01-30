// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__CHANNEL_FLOAT32__STRUCT_HPP_
#define SENSOR_MSGS__MSG__CHANNEL_FLOAT32__STRUCT_HPP_

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
# define DEPRECATED_sensor_msgs_msg_ChannelFloat32 __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_ChannelFloat32 __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChannelFloat32_
{
  using Type = ChannelFloat32_<ContainerAllocator>;

  ChannelFloat32_()
  {
  }
  explicit ChannelFloat32_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : values(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _name_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _values_type =
      std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _values_type values;

  // setters for named parameter idiom
  Type * set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return this;
  }
  Type * set__values(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->values = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      sensor_msgs::msg::ChannelFloat32_<ContainerAllocator> *;
  using ConstRawPtr =
      const sensor_msgs::msg::ChannelFloat32_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<sensor_msgs::msg::ChannelFloat32_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<sensor_msgs::msg::ChannelFloat32_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::ChannelFloat32_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::ChannelFloat32_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::ChannelFloat32_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::ChannelFloat32_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<sensor_msgs::msg::ChannelFloat32_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<sensor_msgs::msg::ChannelFloat32_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_ChannelFloat32
    std::shared_ptr<sensor_msgs::msg::ChannelFloat32_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_ChannelFloat32
    std::shared_ptr<sensor_msgs::msg::ChannelFloat32_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChannelFloat32_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->values != other.values) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChannelFloat32_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChannelFloat32_

// alias to use template instance with default allocator
using ChannelFloat32 =
    sensor_msgs::msg::ChannelFloat32_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__CHANNEL_FLOAT32__STRUCT_HPP_
