// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__POLYGON__STRUCT_HPP_
#define GEOMETRY_MSGS__MSG__POLYGON__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED_geometry_msgs_msg_Polygon __attribute__((deprecated))
#else
# define DEPRECATED_geometry_msgs_msg_Polygon __declspec(deprecated)
#endif

namespace geometry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Polygon_
{
  using Type = Polygon_<ContainerAllocator>;

  Polygon_()
  {
  }
  explicit Polygon_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : points(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _points_type =
      std::vector<geometry_msgs::msg::Point32_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point32_<ContainerAllocator>>::other>;
  _points_type points;

  // setters for named parameter idiom
  Type * set__points(
    const std::vector<geometry_msgs::msg::Point32_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point32_<ContainerAllocator>>::other> & _arg)
  {
    this->points = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      geometry_msgs::msg::Polygon_<ContainerAllocator> *;
  using ConstRawPtr =
      const geometry_msgs::msg::Polygon_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<geometry_msgs::msg::Polygon_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<geometry_msgs::msg::Polygon_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    geometry_msgs::msg::Polygon_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<geometry_msgs::msg::Polygon_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    geometry_msgs::msg::Polygon_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<geometry_msgs::msg::Polygon_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<geometry_msgs::msg::Polygon_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<geometry_msgs::msg::Polygon_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_geometry_msgs_msg_Polygon
    std::shared_ptr<geometry_msgs::msg::Polygon_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_geometry_msgs_msg_Polygon
    std::shared_ptr<geometry_msgs::msg::Polygon_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Polygon_ & other) const
  {
    if (this->points != other.points) {
      return false;
    }
    return true;
  }
  bool operator!=(const Polygon_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Polygon_

// alias to use template instance with default allocator
using Polygon =
    geometry_msgs::msg::Polygon_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__POLYGON__STRUCT_HPP_
