// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__SUBMAP_LIST__STRUCT_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__SUBMAP_LIST__STRUCT_HPP_

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
#include "cartographer_ros_msgs/msg/trajectory_submap_list.hpp"  // trajectory
#include "std_msgs/msg/header.hpp"  // header

#ifndef _WIN32
# define DEPRECATED_cartographer_ros_msgs_msg_SubmapList __attribute__((deprecated))
#else
# define DEPRECATED_cartographer_ros_msgs_msg_SubmapList __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SubmapList_
{
  using Type = SubmapList_<ContainerAllocator>;

  SubmapList_()
  {
  }
  explicit SubmapList_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : trajectory(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _trajectory_type =
      std::vector<cartographer_ros_msgs::msg::TrajectorySubmapList_<ContainerAllocator>, typename ContainerAllocator::template rebind<cartographer_ros_msgs::msg::TrajectorySubmapList_<ContainerAllocator>>::other>;
  _trajectory_type trajectory;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__trajectory(
    const std::vector<cartographer_ros_msgs::msg::TrajectorySubmapList_<ContainerAllocator>, typename ContainerAllocator::template rebind<cartographer_ros_msgs::msg::TrajectorySubmapList_<ContainerAllocator>>::other> & _arg)
  {
    this->trajectory = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator> *;
  using ConstRawPtr =
      const cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_cartographer_ros_msgs_msg_SubmapList
    std::shared_ptr<cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_cartographer_ros_msgs_msg_SubmapList
    std::shared_ptr<cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SubmapList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->trajectory != other.trajectory) {
      return false;
    }
    return true;
  }
  bool operator!=(const SubmapList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SubmapList_

// alias to use template instance with default allocator
using SubmapList =
    cartographer_ros_msgs::msg::SubmapList_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__SUBMAP_LIST__STRUCT_HPP_
