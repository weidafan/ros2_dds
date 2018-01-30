// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__POINT_FIELD__STRUCT_HPP_
#define SENSOR_MSGS__MSG__POINT_FIELD__STRUCT_HPP_

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
# define DEPRECATED_sensor_msgs_msg_PointField __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_PointField __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointField_
{
  using Type = PointField_<ContainerAllocator>;

  PointField_()
  {
  }
  explicit PointField_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _name_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _offset_type =
      uint32_t;
  _offset_type offset;
  using _datatype_type =
      uint8_t;
  _datatype_type datatype;
  using _count_type =
      uint32_t;
  _count_type count;

  // setters for named parameter idiom
  Type * set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return this;
  }
  Type * set__offset(
    const uint32_t & _arg)
  {
    this->offset = _arg;
    return this;
  }
  Type * set__datatype(
    const uint8_t & _arg)
  {
    this->datatype = _arg;
    return this;
  }
  Type * set__count(
    const uint32_t & _arg)
  {
    this->count = _arg;
    return this;
  }

  // constants
  enum { INT8 = 1u };
  enum { UINT8 = 2u };
  enum { INT16 = 3u };
  enum { UINT16 = 4u };
  enum { INT32 = 5u };
  enum { UINT32 = 6u };
  enum { FLOAT32 = 7u };
  enum { FLOAT64 = 8u };

  // pointer types
  using RawPtr =
      sensor_msgs::msg::PointField_<ContainerAllocator> *;
  using ConstRawPtr =
      const sensor_msgs::msg::PointField_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<sensor_msgs::msg::PointField_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<sensor_msgs::msg::PointField_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::PointField_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::PointField_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::msg::PointField_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::PointField_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<sensor_msgs::msg::PointField_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<sensor_msgs::msg::PointField_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_PointField
    std::shared_ptr<sensor_msgs::msg::PointField_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_PointField
    std::shared_ptr<sensor_msgs::msg::PointField_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointField_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    if (this->datatype != other.datatype) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointField_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointField_

// alias to use template instance with default allocator
using PointField =
    sensor_msgs::msg::PointField_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__POINT_FIELD__STRUCT_HPP_
