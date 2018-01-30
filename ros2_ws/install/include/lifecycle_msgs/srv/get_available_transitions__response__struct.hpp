// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__SRV__GET_AVAILABLE_TRANSITIONS__RESPONSE__STRUCT_HPP_
#define LIFECYCLE_MSGS__SRV__GET_AVAILABLE_TRANSITIONS__RESPONSE__STRUCT_HPP_

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
#include "lifecycle_msgs/msg/transition_description.hpp"  // available_transitions

#ifndef _WIN32
# define DEPRECATED_lifecycle_msgs_srv_GetAvailableTransitions_Response __attribute__((deprecated))
#else
# define DEPRECATED_lifecycle_msgs_srv_GetAvailableTransitions_Response __declspec(deprecated)
#endif

namespace lifecycle_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAvailableTransitions_Response_
{
  using Type = GetAvailableTransitions_Response_<ContainerAllocator>;

  GetAvailableTransitions_Response_()
  {
  }
  explicit GetAvailableTransitions_Response_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : available_transitions(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _available_transitions_type =
      std::vector<lifecycle_msgs::msg::TransitionDescription_<ContainerAllocator>, typename ContainerAllocator::template rebind<lifecycle_msgs::msg::TransitionDescription_<ContainerAllocator>>::other>;
  _available_transitions_type available_transitions;

  // setters for named parameter idiom
  Type * set__available_transitions(
    const std::vector<lifecycle_msgs::msg::TransitionDescription_<ContainerAllocator>, typename ContainerAllocator::template rebind<lifecycle_msgs::msg::TransitionDescription_<ContainerAllocator>>::other> & _arg)
  {
    this->available_transitions = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      lifecycle_msgs::srv::GetAvailableTransitions_Response_<ContainerAllocator> *;
  using ConstRawPtr =
      const lifecycle_msgs::srv::GetAvailableTransitions_Response_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<lifecycle_msgs::srv::GetAvailableTransitions_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<lifecycle_msgs::srv::GetAvailableTransitions_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    lifecycle_msgs::srv::GetAvailableTransitions_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<lifecycle_msgs::srv::GetAvailableTransitions_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    lifecycle_msgs::srv::GetAvailableTransitions_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<lifecycle_msgs::srv::GetAvailableTransitions_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<lifecycle_msgs::srv::GetAvailableTransitions_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<lifecycle_msgs::srv::GetAvailableTransitions_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_lifecycle_msgs_srv_GetAvailableTransitions_Response
    std::shared_ptr<lifecycle_msgs::srv::GetAvailableTransitions_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_lifecycle_msgs_srv_GetAvailableTransitions_Response
    std::shared_ptr<lifecycle_msgs::srv::GetAvailableTransitions_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAvailableTransitions_Response_ & other) const
  {
    if (this->available_transitions != other.available_transitions) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAvailableTransitions_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAvailableTransitions_Response_

// alias to use template instance with default allocator
using GetAvailableTransitions_Response =
    lifecycle_msgs::srv::GetAvailableTransitions_Response_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace lifecycle_msgs

#endif  // LIFECYCLE_MSGS__SRV__GET_AVAILABLE_TRANSITIONS__RESPONSE__STRUCT_HPP_
