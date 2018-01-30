// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__SUBMAP_ENTRY__STRUCT_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__SUBMAP_ENTRY__STRUCT_HPP_

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
#include "geometry_msgs/msg/pose.hpp"  // pose

#ifndef _WIN32
# define DEPRECATED_cartographer_ros_msgs_msg_SubmapEntry __attribute__((deprecated))
#else
# define DEPRECATED_cartographer_ros_msgs_msg_SubmapEntry __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SubmapEntry_
{
  using Type = SubmapEntry_<ContainerAllocator>;

  SubmapEntry_()
  {
  }
  explicit SubmapEntry_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _submap_version_type =
      int32_t;
  _submap_version_type submap_version;
  using _pose_type =
      geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type * set__submap_version(
    const int32_t & _arg)
  {
    this->submap_version = _arg;
    return this;
  }
  Type * set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator> *;
  using ConstRawPtr =
      const cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_cartographer_ros_msgs_msg_SubmapEntry
    std::shared_ptr<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_cartographer_ros_msgs_msg_SubmapEntry
    std::shared_ptr<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SubmapEntry_ & other) const
  {
    if (this->submap_version != other.submap_version) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const SubmapEntry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SubmapEntry_

// alias to use template instance with default allocator
using SubmapEntry =
    cartographer_ros_msgs::msg::SubmapEntry_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__SUBMAP_ENTRY__STRUCT_HPP_
