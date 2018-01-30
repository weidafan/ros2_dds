// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__TRAJECTORY_SUBMAP_LIST__STRUCT_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__TRAJECTORY_SUBMAP_LIST__STRUCT_HPP_

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
#include "cartographer_ros_msgs/msg/submap_entry.hpp"  // submap

#ifndef _WIN32
# define DEPRECATED_cartographer_ros_msgs_msg_TrajectorySubmapList __attribute__((deprecated))
#else
# define DEPRECATED_cartographer_ros_msgs_msg_TrajectorySubmapList __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectorySubmapList_
{
  using Type = TrajectorySubmapList_<ContainerAllocator>;

  TrajectorySubmapList_()
  {
  }
  explicit TrajectorySubmapList_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : submap(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _submap_type =
      std::vector<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator>, typename ContainerAllocator::template rebind<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator>>::other>;
  _submap_type submap;

  // setters for named parameter idiom
  Type * set__submap(
    const std::vector<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator>, typename ContainerAllocator::template rebind<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator>>::other> & _arg)
  {
    this->submap = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      cartographer_ros_msgs::msg::TrajectorySubmapList_<ContainerAllocator> *;
  using ConstRawPtr =
      const cartographer_ros_msgs::msg::TrajectorySubmapList_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<cartographer_ros_msgs::msg::TrajectorySubmapList_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<cartographer_ros_msgs::msg::TrajectorySubmapList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    cartographer_ros_msgs::msg::TrajectorySubmapList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<cartographer_ros_msgs::msg::TrajectorySubmapList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    cartographer_ros_msgs::msg::TrajectorySubmapList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<cartographer_ros_msgs::msg::TrajectorySubmapList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<cartographer_ros_msgs::msg::TrajectorySubmapList_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<cartographer_ros_msgs::msg::TrajectorySubmapList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_cartographer_ros_msgs_msg_TrajectorySubmapList
    std::shared_ptr<cartographer_ros_msgs::msg::TrajectorySubmapList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_cartographer_ros_msgs_msg_TrajectorySubmapList
    std::shared_ptr<cartographer_ros_msgs::msg::TrajectorySubmapList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectorySubmapList_ & other) const
  {
    if (this->submap != other.submap) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectorySubmapList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectorySubmapList_

// alias to use template instance with default allocator
using TrajectorySubmapList =
    cartographer_ros_msgs::msg::TrajectorySubmapList_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__TRAJECTORY_SUBMAP_LIST__STRUCT_HPP_
