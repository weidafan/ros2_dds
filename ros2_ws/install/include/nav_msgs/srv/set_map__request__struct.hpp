// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__SET_MAP__REQUEST__STRUCT_HPP_
#define NAV_MSGS__SRV__SET_MAP__REQUEST__STRUCT_HPP_

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
#include "geometry_msgs/msg/pose_with_covariance_stamped.hpp"  // initial_pose
#include "nav_msgs/msg/occupancy_grid.hpp"  // map

#ifndef _WIN32
# define DEPRECATED_nav_msgs_srv_SetMap_Request __attribute__((deprecated))
#else
# define DEPRECATED_nav_msgs_srv_SetMap_Request __declspec(deprecated)
#endif

namespace nav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMap_Request_
{
  using Type = SetMap_Request_<ContainerAllocator>;

  SetMap_Request_()
  {
  }
  explicit SetMap_Request_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _map_type =
      nav_msgs::msg::OccupancyGrid_<ContainerAllocator>;
  _map_type map;
  using _initial_pose_type =
      geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator>;
  _initial_pose_type initial_pose;

  // setters for named parameter idiom
  Type * set__map(
    const nav_msgs::msg::OccupancyGrid_<ContainerAllocator> & _arg)
  {
    this->map = _arg;
    return this;
  }
  Type * set__initial_pose(
    const geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator> & _arg)
  {
    this->initial_pose = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      nav_msgs::srv::SetMap_Request_<ContainerAllocator> *;
  using ConstRawPtr =
      const nav_msgs::srv::SetMap_Request_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<nav_msgs::srv::SetMap_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<nav_msgs::srv::SetMap_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    nav_msgs::srv::SetMap_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<nav_msgs::srv::SetMap_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    nav_msgs::srv::SetMap_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<nav_msgs::srv::SetMap_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<nav_msgs::srv::SetMap_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<nav_msgs::srv::SetMap_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_nav_msgs_srv_SetMap_Request
    std::shared_ptr<nav_msgs::srv::SetMap_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_nav_msgs_srv_SetMap_Request
    std::shared_ptr<nav_msgs::srv::SetMap_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMap_Request_ & other) const
  {
    if (this->map != other.map) {
      return false;
    }
    if (this->initial_pose != other.initial_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMap_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMap_Request_

// alias to use template instance with default allocator
using SetMap_Request =
    nav_msgs::srv::SetMap_Request_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace nav_msgs

#endif  // NAV_MSGS__SRV__SET_MAP__REQUEST__STRUCT_HPP_
