// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__MSG__DIAGNOSTIC_ARRAY__STRUCT_HPP_
#define DIAGNOSTIC_MSGS__MSG__DIAGNOSTIC_ARRAY__STRUCT_HPP_

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
#include "std_msgs/msg/header.hpp"  // header

#ifndef _WIN32
# define DEPRECATED_diagnostic_msgs_msg_DiagnosticArray __attribute__((deprecated))
#else
# define DEPRECATED_diagnostic_msgs_msg_DiagnosticArray __declspec(deprecated)
#endif

namespace diagnostic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DiagnosticArray_
{
  using Type = DiagnosticArray_<ContainerAllocator>;

  DiagnosticArray_()
  {
  }
  explicit DiagnosticArray_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : status(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _status_type =
      std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename ContainerAllocator::template rebind<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>::other>;
  _status_type status;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
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
      diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator> *;
  using ConstRawPtr =
      const diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_diagnostic_msgs_msg_DiagnosticArray
    std::shared_ptr<diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_diagnostic_msgs_msg_DiagnosticArray
    std::shared_ptr<diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DiagnosticArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const DiagnosticArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DiagnosticArray_

// alias to use template instance with default allocator
using DiagnosticArray =
    diagnostic_msgs::msg::DiagnosticArray_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace diagnostic_msgs

#endif  // DIAGNOSTIC_MSGS__MSG__DIAGNOSTIC_ARRAY__STRUCT_HPP_
