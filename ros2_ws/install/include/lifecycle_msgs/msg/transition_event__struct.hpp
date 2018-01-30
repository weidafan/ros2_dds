// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__MSG__TRANSITION_EVENT__STRUCT_HPP_
#define LIFECYCLE_MSGS__MSG__TRANSITION_EVENT__STRUCT_HPP_

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
#include "lifecycle_msgs/msg/state.hpp"  // start_state, goal_state
#include "lifecycle_msgs/msg/transition.hpp"  // transition

#ifndef _WIN32
# define DEPRECATED_lifecycle_msgs_msg_TransitionEvent __attribute__((deprecated))
#else
# define DEPRECATED_lifecycle_msgs_msg_TransitionEvent __declspec(deprecated)
#endif

namespace lifecycle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TransitionEvent_
{
  using Type = TransitionEvent_<ContainerAllocator>;

  TransitionEvent_()
  {
  }
  explicit TransitionEvent_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _timestamp_type =
      uint64_t;
  _timestamp_type timestamp;
  using _transition_type =
      lifecycle_msgs::msg::Transition_<ContainerAllocator>;
  _transition_type transition;
  using _start_state_type =
      lifecycle_msgs::msg::State_<ContainerAllocator>;
  _start_state_type start_state;
  using _goal_state_type =
      lifecycle_msgs::msg::State_<ContainerAllocator>;
  _goal_state_type goal_state;

  // setters for named parameter idiom
  Type * set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return this;
  }
  Type * set__transition(
    const lifecycle_msgs::msg::Transition_<ContainerAllocator> & _arg)
  {
    this->transition = _arg;
    return this;
  }
  Type * set__start_state(
    const lifecycle_msgs::msg::State_<ContainerAllocator> & _arg)
  {
    this->start_state = _arg;
    return this;
  }
  Type * set__goal_state(
    const lifecycle_msgs::msg::State_<ContainerAllocator> & _arg)
  {
    this->goal_state = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      lifecycle_msgs::msg::TransitionEvent_<ContainerAllocator> *;
  using ConstRawPtr =
      const lifecycle_msgs::msg::TransitionEvent_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<lifecycle_msgs::msg::TransitionEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<lifecycle_msgs::msg::TransitionEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    lifecycle_msgs::msg::TransitionEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<lifecycle_msgs::msg::TransitionEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    lifecycle_msgs::msg::TransitionEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<lifecycle_msgs::msg::TransitionEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<lifecycle_msgs::msg::TransitionEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<lifecycle_msgs::msg::TransitionEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_lifecycle_msgs_msg_TransitionEvent
    std::shared_ptr<lifecycle_msgs::msg::TransitionEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_lifecycle_msgs_msg_TransitionEvent
    std::shared_ptr<lifecycle_msgs::msg::TransitionEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TransitionEvent_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->transition != other.transition) {
      return false;
    }
    if (this->start_state != other.start_state) {
      return false;
    }
    if (this->goal_state != other.goal_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const TransitionEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TransitionEvent_

// alias to use template instance with default allocator
using TransitionEvent =
    lifecycle_msgs::msg::TransitionEvent_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace lifecycle_msgs

#endif  // LIFECYCLE_MSGS__MSG__TRANSITION_EVENT__STRUCT_HPP_
