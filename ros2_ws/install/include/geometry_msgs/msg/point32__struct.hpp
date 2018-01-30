// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__POINT32__STRUCT_HPP_
#define GEOMETRY_MSGS__MSG__POINT32__STRUCT_HPP_

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
# define DEPRECATED_geometry_msgs_msg_Point32 __attribute__((deprecated))
#else
# define DEPRECATED_geometry_msgs_msg_Point32 __declspec(deprecated)
#endif

namespace geometry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Point32_
{
  using Type = Point32_<ContainerAllocator>;

  Point32_()
  {
  }
  explicit Point32_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _x_type =
      float;
  _x_type x;
  using _y_type =
      float;
  _y_type y;
  using _z_type =
      float;
  _z_type z;

  // setters for named parameter idiom
  Type * set__x(
    const float & _arg)
  {
    this->x = _arg;
    return this;
  }
  Type * set__y(
    const float & _arg)
  {
    this->y = _arg;
    return this;
  }
  Type * set__z(
    const float & _arg)
  {
    this->z = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      geometry_msgs::msg::Point32_<ContainerAllocator> *;
  using ConstRawPtr =
      const geometry_msgs::msg::Point32_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<geometry_msgs::msg::Point32_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<geometry_msgs::msg::Point32_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    geometry_msgs::msg::Point32_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<geometry_msgs::msg::Point32_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    geometry_msgs::msg::Point32_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<geometry_msgs::msg::Point32_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<geometry_msgs::msg::Point32_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<geometry_msgs::msg::Point32_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_geometry_msgs_msg_Point32
    std::shared_ptr<geometry_msgs::msg::Point32_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_geometry_msgs_msg_Point32
    std::shared_ptr<geometry_msgs::msg::Point32_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Point32_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Point32_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Point32_

// alias to use template instance with default allocator
using Point32 =
    geometry_msgs::msg::Point32_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__POINT32__STRUCT_HPP_
