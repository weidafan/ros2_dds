// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__SRV__FRAME_GRAPH__RESPONSE__STRUCT_HPP_
#define TF2_MSGS__SRV__FRAME_GRAPH__RESPONSE__STRUCT_HPP_

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
# define DEPRECATED_tf2_msgs_srv_FrameGraph_Response __attribute__((deprecated))
#else
# define DEPRECATED_tf2_msgs_srv_FrameGraph_Response __declspec(deprecated)
#endif

namespace tf2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FrameGraph_Response_
{
  using Type = FrameGraph_Response_<ContainerAllocator>;

  FrameGraph_Response_()
  {
  }
  explicit FrameGraph_Response_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _frame_yaml_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _frame_yaml_type frame_yaml;

  // setters for named parameter idiom
  Type * set__frame_yaml(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->frame_yaml = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      tf2_msgs::srv::FrameGraph_Response_<ContainerAllocator> *;
  using ConstRawPtr =
      const tf2_msgs::srv::FrameGraph_Response_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<tf2_msgs::srv::FrameGraph_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<tf2_msgs::srv::FrameGraph_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    tf2_msgs::srv::FrameGraph_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<tf2_msgs::srv::FrameGraph_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    tf2_msgs::srv::FrameGraph_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<tf2_msgs::srv::FrameGraph_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<tf2_msgs::srv::FrameGraph_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<tf2_msgs::srv::FrameGraph_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_tf2_msgs_srv_FrameGraph_Response
    std::shared_ptr<tf2_msgs::srv::FrameGraph_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_tf2_msgs_srv_FrameGraph_Response
    std::shared_ptr<tf2_msgs::srv::FrameGraph_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FrameGraph_Response_ & other) const
  {
    if (this->frame_yaml != other.frame_yaml) {
      return false;
    }
    return true;
  }
  bool operator!=(const FrameGraph_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FrameGraph_Response_

// alias to use template instance with default allocator
using FrameGraph_Response =
    tf2_msgs::srv::FrameGraph_Response_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace tf2_msgs

#endif  // TF2_MSGS__SRV__FRAME_GRAPH__RESPONSE__STRUCT_HPP_
