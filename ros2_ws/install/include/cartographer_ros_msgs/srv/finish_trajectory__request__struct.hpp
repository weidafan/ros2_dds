// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__FINISH_TRAJECTORY__REQUEST__STRUCT_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__FINISH_TRAJECTORY__REQUEST__STRUCT_HPP_

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
# define DEPRECATED_cartographer_ros_msgs_srv_FinishTrajectory_Request __attribute__((deprecated))
#else
# define DEPRECATED_cartographer_ros_msgs_srv_FinishTrajectory_Request __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FinishTrajectory_Request_
{
  using Type = FinishTrajectory_Request_<ContainerAllocator>;

  FinishTrajectory_Request_()
  {
  }
  explicit FinishTrajectory_Request_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _trajectory_id_type =
      int32_t;
  _trajectory_id_type trajectory_id;

  // setters for named parameter idiom
  Type * set__trajectory_id(
    const int32_t & _arg)
  {
    this->trajectory_id = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      cartographer_ros_msgs::srv::FinishTrajectory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
      const cartographer_ros_msgs::srv::FinishTrajectory_Request_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<cartographer_ros_msgs::srv::FinishTrajectory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<cartographer_ros_msgs::srv::FinishTrajectory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    cartographer_ros_msgs::srv::FinishTrajectory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<cartographer_ros_msgs::srv::FinishTrajectory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    cartographer_ros_msgs::srv::FinishTrajectory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<cartographer_ros_msgs::srv::FinishTrajectory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<cartographer_ros_msgs::srv::FinishTrajectory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<cartographer_ros_msgs::srv::FinishTrajectory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_cartographer_ros_msgs_srv_FinishTrajectory_Request
    std::shared_ptr<cartographer_ros_msgs::srv::FinishTrajectory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_cartographer_ros_msgs_srv_FinishTrajectory_Request
    std::shared_ptr<cartographer_ros_msgs::srv::FinishTrajectory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FinishTrajectory_Request_ & other) const
  {
    if (this->trajectory_id != other.trajectory_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const FinishTrajectory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FinishTrajectory_Request_

// alias to use template instance with default allocator
using FinishTrajectory_Request =
    cartographer_ros_msgs::srv::FinishTrajectory_Request_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__FINISH_TRAJECTORY__REQUEST__STRUCT_HPP_
