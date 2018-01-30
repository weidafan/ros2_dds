// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__SELF_TEST__REQUEST__STRUCT_HPP_
#define DIAGNOSTIC_MSGS__SRV__SELF_TEST__REQUEST__STRUCT_HPP_

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
# define DEPRECATED_diagnostic_msgs_srv_SelfTest_Request __attribute__((deprecated))
#else
# define DEPRECATED_diagnostic_msgs_srv_SelfTest_Request __declspec(deprecated)
#endif

namespace diagnostic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SelfTest_Request_
{
  using Type = SelfTest_Request_<ContainerAllocator>;

  SelfTest_Request_()
  {
  }
  explicit SelfTest_Request_(const ContainerAllocator & _alloc)
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
      diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator> *;
  using ConstRawPtr =
      const diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_diagnostic_msgs_srv_SelfTest_Request
    std::shared_ptr<diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_diagnostic_msgs_srv_SelfTest_Request
    std::shared_ptr<diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SelfTest_Request_ & other) const
  {
    (void)other;
    return true;
  }
  bool operator!=(const SelfTest_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SelfTest_Request_

// alias to use template instance with default allocator
using SelfTest_Request =
    diagnostic_msgs::srv::SelfTest_Request_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace diagnostic_msgs

#endif  // DIAGNOSTIC_MSGS__SRV__SELF_TEST__REQUEST__STRUCT_HPP_
