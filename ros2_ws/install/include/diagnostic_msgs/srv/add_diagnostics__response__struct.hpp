// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__ADD_DIAGNOSTICS__RESPONSE__STRUCT_HPP_
#define DIAGNOSTIC_MSGS__SRV__ADD_DIAGNOSTICS__RESPONSE__STRUCT_HPP_

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
# define DEPRECATED_diagnostic_msgs_srv_AddDiagnostics_Response __attribute__((deprecated))
#else
# define DEPRECATED_diagnostic_msgs_srv_AddDiagnostics_Response __declspec(deprecated)
#endif

namespace diagnostic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddDiagnostics_Response_
{
  using Type = AddDiagnostics_Response_<ContainerAllocator>;

  AddDiagnostics_Response_()
  {
  }
  explicit AddDiagnostics_Response_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _success_type =
      bool;
  _success_type success;
  using _message_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type * set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return this;
  }
  Type * set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator> *;
  using ConstRawPtr =
      const diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_diagnostic_msgs_srv_AddDiagnostics_Response
    std::shared_ptr<diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_diagnostic_msgs_srv_AddDiagnostics_Response
    std::shared_ptr<diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddDiagnostics_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddDiagnostics_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddDiagnostics_Response_

// alias to use template instance with default allocator
using AddDiagnostics_Response =
    diagnostic_msgs::srv::AddDiagnostics_Response_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace diagnostic_msgs

#endif  // DIAGNOSTIC_MSGS__SRV__ADD_DIAGNOSTICS__RESPONSE__STRUCT_HPP_
