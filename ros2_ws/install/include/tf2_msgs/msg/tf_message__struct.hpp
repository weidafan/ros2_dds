// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__MSG__TF_MESSAGE__STRUCT_HPP_
#define TF2_MSGS__MSG__TF_MESSAGE__STRUCT_HPP_

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
#include "geometry_msgs/msg/transform_stamped.hpp"  // transforms

#ifndef _WIN32
# define DEPRECATED_tf2_msgs_msg_TFMessage __attribute__((deprecated))
#else
# define DEPRECATED_tf2_msgs_msg_TFMessage __declspec(deprecated)
#endif

namespace tf2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TFMessage_
{
  using Type = TFMessage_<ContainerAllocator>;

  TFMessage_()
  {
  }
  explicit TFMessage_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : transforms(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _transforms_type =
      std::vector<geometry_msgs::msg::TransformStamped_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::TransformStamped_<ContainerAllocator>>::other>;
  _transforms_type transforms;

  // setters for named parameter idiom
  Type * set__transforms(
    const std::vector<geometry_msgs::msg::TransformStamped_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::TransformStamped_<ContainerAllocator>>::other> & _arg)
  {
    this->transforms = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      tf2_msgs::msg::TFMessage_<ContainerAllocator> *;
  using ConstRawPtr =
      const tf2_msgs::msg::TFMessage_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<tf2_msgs::msg::TFMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<tf2_msgs::msg::TFMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    tf2_msgs::msg::TFMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<tf2_msgs::msg::TFMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    tf2_msgs::msg::TFMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<tf2_msgs::msg::TFMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<tf2_msgs::msg::TFMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<tf2_msgs::msg::TFMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_tf2_msgs_msg_TFMessage
    std::shared_ptr<tf2_msgs::msg::TFMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_tf2_msgs_msg_TFMessage
    std::shared_ptr<tf2_msgs::msg::TFMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TFMessage_ & other) const
  {
    if (this->transforms != other.transforms) {
      return false;
    }
    return true;
  }
  bool operator!=(const TFMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TFMessage_

// alias to use template instance with default allocator
using TFMessage =
    tf2_msgs::msg::TFMessage_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace tf2_msgs

#endif  // TF2_MSGS__MSG__TF_MESSAGE__STRUCT_HPP_
