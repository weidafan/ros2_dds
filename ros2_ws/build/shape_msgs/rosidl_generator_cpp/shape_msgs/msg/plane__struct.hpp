// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__PLANE__STRUCT_HPP_
#define SHAPE_MSGS__MSG__PLANE__STRUCT_HPP_

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
# define DEPRECATED_shape_msgs_msg_Plane __attribute__((deprecated))
#else
# define DEPRECATED_shape_msgs_msg_Plane __declspec(deprecated)
#endif

namespace shape_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Plane_
{
  using Type = Plane_<ContainerAllocator>;

  Plane_()
  {
  }
  explicit Plane_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _coef_type =
      std::array<double, 4>;
  _coef_type coef;

  // setters for named parameter idiom
  Type * set__coef(
    const std::array<double, 4> & _arg)
  {
    this->coef = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      shape_msgs::msg::Plane_<ContainerAllocator> *;
  using ConstRawPtr =
      const shape_msgs::msg::Plane_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<shape_msgs::msg::Plane_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<shape_msgs::msg::Plane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    shape_msgs::msg::Plane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<shape_msgs::msg::Plane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    shape_msgs::msg::Plane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<shape_msgs::msg::Plane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<shape_msgs::msg::Plane_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<shape_msgs::msg::Plane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_shape_msgs_msg_Plane
    std::shared_ptr<shape_msgs::msg::Plane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_shape_msgs_msg_Plane
    std::shared_ptr<shape_msgs::msg::Plane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Plane_ & other) const
  {
    if (this->coef != other.coef) {
      return false;
    }
    return true;
  }
  bool operator!=(const Plane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Plane_

// alias to use template instance with default allocator
using Plane =
    shape_msgs::msg::Plane_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace shape_msgs

#endif  // SHAPE_MSGS__MSG__PLANE__STRUCT_HPP_
