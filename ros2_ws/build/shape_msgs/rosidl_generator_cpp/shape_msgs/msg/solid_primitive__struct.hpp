// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__SOLID_PRIMITIVE__STRUCT_HPP_
#define SHAPE_MSGS__MSG__SOLID_PRIMITIVE__STRUCT_HPP_

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
# define DEPRECATED_shape_msgs_msg_SolidPrimitive __attribute__((deprecated))
#else
# define DEPRECATED_shape_msgs_msg_SolidPrimitive __declspec(deprecated)
#endif

namespace shape_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SolidPrimitive_
{
  using Type = SolidPrimitive_<ContainerAllocator>;

  SolidPrimitive_()
  {
  }
  explicit SolidPrimitive_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : dimensions(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _type_type =
      uint8_t;
  _type_type type;
  using _dimensions_type =
      rosidl_generator_cpp::BoundedVector<double, 3, typename ContainerAllocator::template rebind<double>::other>;
  _dimensions_type dimensions;

  // setters for named parameter idiom
  Type * set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return this;
  }
  Type * set__dimensions(
    const rosidl_generator_cpp::BoundedVector<double, 3, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->dimensions = _arg;
    return this;
  }

  // constants
  enum { BOX = 1u };
  enum { SPHERE = 2u };
  enum { CYLINDER = 3u };
  enum { CONE = 4u };
  enum { BOX_X = 0u };
  enum { BOX_Y = 1u };
  enum { BOX_Z = 2u };
  enum { SPHERE_RADIUS = 0u };
  enum { CYLINDER_HEIGHT = 0u };
  enum { CYLINDER_RADIUS = 1u };
  enum { CONE_HEIGHT = 0u };
  enum { CONE_RADIUS = 1u };

  // pointer types
  using RawPtr =
      shape_msgs::msg::SolidPrimitive_<ContainerAllocator> *;
  using ConstRawPtr =
      const shape_msgs::msg::SolidPrimitive_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<shape_msgs::msg::SolidPrimitive_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<shape_msgs::msg::SolidPrimitive_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    shape_msgs::msg::SolidPrimitive_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<shape_msgs::msg::SolidPrimitive_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    shape_msgs::msg::SolidPrimitive_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<shape_msgs::msg::SolidPrimitive_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<shape_msgs::msg::SolidPrimitive_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<shape_msgs::msg::SolidPrimitive_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_shape_msgs_msg_SolidPrimitive
    std::shared_ptr<shape_msgs::msg::SolidPrimitive_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_shape_msgs_msg_SolidPrimitive
    std::shared_ptr<shape_msgs::msg::SolidPrimitive_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SolidPrimitive_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->dimensions != other.dimensions) {
      return false;
    }
    return true;
  }
  bool operator!=(const SolidPrimitive_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SolidPrimitive_

// alias to use template instance with default allocator
using SolidPrimitive =
    shape_msgs::msg::SolidPrimitive_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace shape_msgs

#endif  // SHAPE_MSGS__MSG__SOLID_PRIMITIVE__STRUCT_HPP_
