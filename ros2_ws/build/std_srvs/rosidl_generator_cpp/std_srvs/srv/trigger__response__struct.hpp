// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__TRIGGER__RESPONSE__STRUCT_HPP_
#define STD_SRVS__SRV__TRIGGER__RESPONSE__STRUCT_HPP_

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
# define DEPRECATED_std_srvs_srv_Trigger_Response __attribute__((deprecated))
#else
# define DEPRECATED_std_srvs_srv_Trigger_Response __declspec(deprecated)
#endif

namespace std_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Trigger_Response_
{
  using Type = Trigger_Response_<ContainerAllocator>;

  Trigger_Response_()
  {
  }
  explicit Trigger_Response_(const ContainerAllocator & _alloc)
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
      std_srvs::srv::Trigger_Response_<ContainerAllocator> *;
  using ConstRawPtr =
      const std_srvs::srv::Trigger_Response_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<std_srvs::srv::Trigger_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<std_srvs::srv::Trigger_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    std_srvs::srv::Trigger_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<std_srvs::srv::Trigger_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    std_srvs::srv::Trigger_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<std_srvs::srv::Trigger_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<std_srvs::srv::Trigger_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<std_srvs::srv::Trigger_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_std_srvs_srv_Trigger_Response
    std::shared_ptr<std_srvs::srv::Trigger_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_std_srvs_srv_Trigger_Response
    std::shared_ptr<std_srvs::srv::Trigger_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trigger_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trigger_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trigger_Response_

// alias to use template instance with default allocator
using Trigger_Response =
    std_srvs::srv::Trigger_Response_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace std_srvs

#endif  // STD_SRVS__SRV__TRIGGER__RESPONSE__STRUCT_HPP_
