// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__SUBMAP_QUERY__RESPONSE__STRUCT_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__SUBMAP_QUERY__RESPONSE__STRUCT_HPP_

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
#include "geometry_msgs/msg/pose.hpp"  // slice_pose

#ifndef _WIN32
# define DEPRECATED_cartographer_ros_msgs_srv_SubmapQuery_Response __attribute__((deprecated))
#else
# define DEPRECATED_cartographer_ros_msgs_srv_SubmapQuery_Response __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SubmapQuery_Response_
{
  using Type = SubmapQuery_Response_<ContainerAllocator>;

  SubmapQuery_Response_()
  {
  }
  explicit SubmapQuery_Response_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : cells(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _submap_version_type =
      int32_t;
  _submap_version_type submap_version;
  using _cells_type =
      std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _cells_type cells;
  using _width_type =
      int32_t;
  _width_type width;
  using _height_type =
      int32_t;
  _height_type height;
  using _resolution_type =
      double;
  _resolution_type resolution;
  using _slice_pose_type =
      geometry_msgs::msg::Pose_<ContainerAllocator>;
  _slice_pose_type slice_pose;
  using _error_message_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _error_message_type error_message;

  // setters for named parameter idiom
  Type * set__submap_version(
    const int32_t & _arg)
  {
    this->submap_version = _arg;
    return this;
  }
  Type * set__cells(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->cells = _arg;
    return this;
  }
  Type * set__width(
    const int32_t & _arg)
  {
    this->width = _arg;
    return this;
  }
  Type * set__height(
    const int32_t & _arg)
  {
    this->height = _arg;
    return this;
  }
  Type * set__resolution(
    const double & _arg)
  {
    this->resolution = _arg;
    return this;
  }
  Type * set__slice_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->slice_pose = _arg;
    return this;
  }
  Type * set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->error_message = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator> *;
  using ConstRawPtr =
      const cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_cartographer_ros_msgs_srv_SubmapQuery_Response
    std::shared_ptr<cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_cartographer_ros_msgs_srv_SubmapQuery_Response
    std::shared_ptr<cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SubmapQuery_Response_ & other) const
  {
    if (this->submap_version != other.submap_version) {
      return false;
    }
    if (this->cells != other.cells) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->resolution != other.resolution) {
      return false;
    }
    if (this->slice_pose != other.slice_pose) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SubmapQuery_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SubmapQuery_Response_

// alias to use template instance with default allocator
using SubmapQuery_Response =
    cartographer_ros_msgs::srv::SubmapQuery_Response_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__SUBMAP_QUERY__RESPONSE__STRUCT_HPP_
