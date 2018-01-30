// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__SRV__FRAME_GRAPH__REQUEST__STRUCT_HPP_
#define TF2_MSGS__SRV__FRAME_GRAPH__REQUEST__STRUCT_HPP_

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
# define DEPRECATED_tf2_msgs_srv_FrameGraph_Request __attribute__((deprecated))
#else
# define DEPRECATED_tf2_msgs_srv_FrameGraph_Request __declspec(deprecated)
#endif

namespace tf2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FrameGraph_Request_
{
  using Type = FrameGraph_Request_<ContainerAllocator>;

  FrameGraph_Request_()
  {
  }
  explicit FrameGraph_Request_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members

  // setters for named parameter idiom

  // constants

  // pointer types
  using RawPtr =
      tf2_msgs::srv::FrameGraph_Request_<ContainerAllocator> *;
  using ConstRawPtr =
      const tf2_msgs::srv::FrameGraph_Request_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<tf2_msgs::srv::FrameGraph_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<tf2_msgs::srv::FrameGraph_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    tf2_msgs::srv::FrameGraph_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<tf2_msgs::srv::FrameGraph_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    tf2_msgs::srv::FrameGraph_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<tf2_msgs::srv::FrameGraph_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<tf2_msgs::srv::FrameGraph_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<tf2_msgs::srv::FrameGraph_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_tf2_msgs_srv_FrameGraph_Request
    std::shared_ptr<tf2_msgs::srv::FrameGraph_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_tf2_msgs_srv_FrameGraph_Request
    std::shared_ptr<tf2_msgs::srv::FrameGraph_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FrameGraph_Request_ & other) const
  {
    (void)other;
    return true;
  }
  bool operator!=(const FrameGraph_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FrameGraph_Request_

// alias to use template instance with default allocator
using FrameGraph_Request =
    tf2_msgs::srv::FrameGraph_Request_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace tf2_msgs

#endif  // TF2_MSGS__SRV__FRAME_GRAPH__REQUEST__STRUCT_HPP_
