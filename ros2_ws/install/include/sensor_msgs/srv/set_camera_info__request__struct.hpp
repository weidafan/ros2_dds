// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__SRV__SET_CAMERA_INFO__REQUEST__STRUCT_HPP_
#define SENSOR_MSGS__SRV__SET_CAMERA_INFO__REQUEST__STRUCT_HPP_

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
#include "sensor_msgs/msg/camera_info.hpp"  // camera_info

#ifndef _WIN32
# define DEPRECATED_sensor_msgs_srv_SetCameraInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_srv_SetCameraInfo_Request __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCameraInfo_Request_
{
  using Type = SetCameraInfo_Request_<ContainerAllocator>;

  SetCameraInfo_Request_()
  {
  }
  explicit SetCameraInfo_Request_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _camera_info_type =
      sensor_msgs::msg::CameraInfo_<ContainerAllocator>;
  _camera_info_type camera_info;

  // setters for named parameter idiom
  Type * set__camera_info(
    const sensor_msgs::msg::CameraInfo_<ContainerAllocator> & _arg)
  {
    this->camera_info = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      sensor_msgs::srv::SetCameraInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
      const sensor_msgs::srv::SetCameraInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<sensor_msgs::srv::SetCameraInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<sensor_msgs::srv::SetCameraInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::srv::SetCameraInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::srv::SetCameraInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::srv::SetCameraInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::srv::SetCameraInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<sensor_msgs::srv::SetCameraInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<sensor_msgs::srv::SetCameraInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_srv_SetCameraInfo_Request
    std::shared_ptr<sensor_msgs::srv::SetCameraInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_srv_SetCameraInfo_Request
    std::shared_ptr<sensor_msgs::srv::SetCameraInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCameraInfo_Request_ & other) const
  {
    if (this->camera_info != other.camera_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCameraInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCameraInfo_Request_

// alias to use template instance with default allocator
using SetCameraInfo_Request =
    sensor_msgs::srv::SetCameraInfo_Request_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__SRV__SET_CAMERA_INFO__REQUEST__STRUCT_HPP_
