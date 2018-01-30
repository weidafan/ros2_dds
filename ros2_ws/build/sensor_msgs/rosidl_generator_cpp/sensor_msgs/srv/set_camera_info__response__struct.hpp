// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__SRV__SET_CAMERA_INFO__RESPONSE__STRUCT_HPP_
#define SENSOR_MSGS__SRV__SET_CAMERA_INFO__RESPONSE__STRUCT_HPP_

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
# define DEPRECATED_sensor_msgs_srv_SetCameraInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_srv_SetCameraInfo_Response __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCameraInfo_Response_
{
  using Type = SetCameraInfo_Response_<ContainerAllocator>;

  SetCameraInfo_Response_()
  {
  }
  explicit SetCameraInfo_Response_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _success_type =
      bool;
  _success_type success;
  using _status_message_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _status_message_type status_message;

  // setters for named parameter idiom
  Type * set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return this;
  }
  Type * set__status_message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->status_message = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      sensor_msgs::srv::SetCameraInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
      const sensor_msgs::srv::SetCameraInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<sensor_msgs::srv::SetCameraInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<sensor_msgs::srv::SetCameraInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::srv::SetCameraInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::srv::SetCameraInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    sensor_msgs::srv::SetCameraInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::srv::SetCameraInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<sensor_msgs::srv::SetCameraInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<sensor_msgs::srv::SetCameraInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_srv_SetCameraInfo_Response
    std::shared_ptr<sensor_msgs::srv::SetCameraInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_srv_SetCameraInfo_Response
    std::shared_ptr<sensor_msgs::srv::SetCameraInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCameraInfo_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->status_message != other.status_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCameraInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCameraInfo_Response_

// alias to use template instance with default allocator
using SetCameraInfo_Response =
    sensor_msgs::srv::SetCameraInfo_Response_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__SRV__SET_CAMERA_INFO__RESPONSE__STRUCT_HPP_
