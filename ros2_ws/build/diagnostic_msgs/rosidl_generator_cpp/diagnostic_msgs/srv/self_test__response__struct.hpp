// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__SELF_TEST__RESPONSE__STRUCT_HPP_
#define DIAGNOSTIC_MSGS__SRV__SELF_TEST__RESPONSE__STRUCT_HPP_

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
#include "diagnostic_msgs/msg/diagnostic_status.hpp"  // status

#ifndef _WIN32
# define DEPRECATED_diagnostic_msgs_srv_SelfTest_Response __attribute__((deprecated))
#else
# define DEPRECATED_diagnostic_msgs_srv_SelfTest_Response __declspec(deprecated)
#endif

namespace diagnostic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SelfTest_Response_
{
  using Type = SelfTest_Response_<ContainerAllocator>;

  SelfTest_Response_()
  {
  }
  explicit SelfTest_Response_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : status(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _id_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _id_type id;
  using _passed_type =
      uint8_t;
  _passed_type passed;
  using _status_type =
      std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename ContainerAllocator::template rebind<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>::other>;
  _status_type status;

  // setters for named parameter idiom
  Type * set__id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->id = _arg;
    return this;
  }
  Type * set__passed(
    const uint8_t & _arg)
  {
    this->passed = _arg;
    return this;
  }
  Type * set__status(
    const std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename ContainerAllocator::template rebind<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>::other> & _arg)
  {
    this->status = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator> *;
  using ConstRawPtr =
      const diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_diagnostic_msgs_srv_SelfTest_Response
    std::shared_ptr<diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_diagnostic_msgs_srv_SelfTest_Response
    std::shared_ptr<diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SelfTest_Response_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->passed != other.passed) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SelfTest_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SelfTest_Response_

// alias to use template instance with default allocator
using SelfTest_Response =
    diagnostic_msgs::srv::SelfTest_Response_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace diagnostic_msgs

#endif  // DIAGNOSTIC_MSGS__SRV__SELF_TEST__RESPONSE__STRUCT_HPP_
