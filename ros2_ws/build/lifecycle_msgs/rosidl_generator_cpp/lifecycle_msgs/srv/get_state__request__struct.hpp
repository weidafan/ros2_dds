// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__SRV__GET_STATE__REQUEST__STRUCT_HPP_
#define LIFECYCLE_MSGS__SRV__GET_STATE__REQUEST__STRUCT_HPP_

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
# define DEPRECATED_lifecycle_msgs_srv_GetState_Request __attribute__((deprecated))
#else
# define DEPRECATED_lifecycle_msgs_srv_GetState_Request __declspec(deprecated)
#endif

namespace lifecycle_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetState_Request_
{
  using Type = GetState_Request_<ContainerAllocator>;

  GetState_Request_()
  {
  }
  explicit GetState_Request_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _node_name_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _node_name_type node_name;

  // setters for named parameter idiom
  Type * set__node_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->node_name = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      lifecycle_msgs::srv::GetState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
      const lifecycle_msgs::srv::GetState_Request_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<lifecycle_msgs::srv::GetState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<lifecycle_msgs::srv::GetState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    lifecycle_msgs::srv::GetState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<lifecycle_msgs::srv::GetState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    lifecycle_msgs::srv::GetState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<lifecycle_msgs::srv::GetState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<lifecycle_msgs::srv::GetState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<lifecycle_msgs::srv::GetState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_lifecycle_msgs_srv_GetState_Request
    std::shared_ptr<lifecycle_msgs::srv::GetState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_lifecycle_msgs_srv_GetState_Request
    std::shared_ptr<lifecycle_msgs::srv::GetState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetState_Request_ & other) const
  {
    if (this->node_name != other.node_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetState_Request_

// alias to use template instance with default allocator
using GetState_Request =
    lifecycle_msgs::srv::GetState_Request_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace lifecycle_msgs

#endif  // LIFECYCLE_MSGS__SRV__GET_STATE__REQUEST__STRUCT_HPP_
