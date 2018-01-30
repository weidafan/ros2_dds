// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__FINISH_TRAJECTORY__RESPONSE__STRUCT_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__FINISH_TRAJECTORY__RESPONSE__STRUCT_HPP_

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
# define DEPRECATED_cartographer_ros_msgs_srv_FinishTrajectory_Response __attribute__((deprecated))
#else
# define DEPRECATED_cartographer_ros_msgs_srv_FinishTrajectory_Response __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FinishTrajectory_Response_
{
  using Type = FinishTrajectory_Response_<ContainerAllocator>;

  FinishTrajectory_Response_()
  {
  }
  explicit FinishTrajectory_Response_(const ContainerAllocator & _alloc)
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
      cartographer_ros_msgs::srv::FinishTrajectory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
      const cartographer_ros_msgs::srv::FinishTrajectory_Response_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<cartographer_ros_msgs::srv::FinishTrajectory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<cartographer_ros_msgs::srv::FinishTrajectory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    cartographer_ros_msgs::srv::FinishTrajectory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<cartographer_ros_msgs::srv::FinishTrajectory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    cartographer_ros_msgs::srv::FinishTrajectory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<cartographer_ros_msgs::srv::FinishTrajectory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<cartographer_ros_msgs::srv::FinishTrajectory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<cartographer_ros_msgs::srv::FinishTrajectory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_cartographer_ros_msgs_srv_FinishTrajectory_Response
    std::shared_ptr<cartographer_ros_msgs::srv::FinishTrajectory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_cartographer_ros_msgs_srv_FinishTrajectory_Response
    std::shared_ptr<cartographer_ros_msgs::srv::FinishTrajectory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FinishTrajectory_Response_ & other) const
  {
    (void)other;
    return true;
  }
  bool operator!=(const FinishTrajectory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FinishTrajectory_Response_

// alias to use template instance with default allocator
using FinishTrajectory_Response =
    cartographer_ros_msgs::srv::FinishTrajectory_Response_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__FINISH_TRAJECTORY__RESPONSE__STRUCT_HPP_
