// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__GOAL_STATUS__STRUCT_HPP_
#define ACTIONLIB_MSGS__MSG__GOAL_STATUS__STRUCT_HPP_

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
#include "actionlib_msgs/msg/goal_id.hpp"  // goal_id

#ifndef _WIN32
# define DEPRECATED_actionlib_msgs_msg_GoalStatus __attribute__((deprecated))
#else
# define DEPRECATED_actionlib_msgs_msg_GoalStatus __declspec(deprecated)
#endif

namespace actionlib_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GoalStatus_
{
  using Type = GoalStatus_<ContainerAllocator>;

  GoalStatus_()
  {
  }
  explicit GoalStatus_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _goal_id_type =
      actionlib_msgs::msg::GoalID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _status_type =
      uint8_t;
  _status_type status;
  using _text_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _text_type text;

  // setters for named parameter idiom
  Type * set__goal_id(
    const actionlib_msgs::msg::GoalID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return this;
  }
  Type * set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return this;
  }
  Type * set__text(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->text = _arg;
    return this;
  }

  // constants
  enum { PENDING = 0u };
  enum { ACTIVE = 1u };
  enum { PREEMPTED = 2u };
  enum { SUCCEEDED = 3u };
  enum { ABORTED = 4u };
  enum { REJECTED = 5u };
  enum { PREEMPTING = 6u };
  enum { RECALLING = 7u };
  enum { RECALLED = 8u };
  enum { LOST = 9u };

  // pointer types
  using RawPtr =
      actionlib_msgs::msg::GoalStatus_<ContainerAllocator> *;
  using ConstRawPtr =
      const actionlib_msgs::msg::GoalStatus_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<actionlib_msgs::msg::GoalStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<actionlib_msgs::msg::GoalStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    actionlib_msgs::msg::GoalStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<actionlib_msgs::msg::GoalStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    actionlib_msgs::msg::GoalStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<actionlib_msgs::msg::GoalStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<actionlib_msgs::msg::GoalStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<actionlib_msgs::msg::GoalStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_actionlib_msgs_msg_GoalStatus
    std::shared_ptr<actionlib_msgs::msg::GoalStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_actionlib_msgs_msg_GoalStatus
    std::shared_ptr<actionlib_msgs::msg::GoalStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalStatus_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalStatus_

// alias to use template instance with default allocator
using GoalStatus =
    actionlib_msgs::msg::GoalStatus_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace actionlib_msgs

#endif  // ACTIONLIB_MSGS__MSG__GOAL_STATUS__STRUCT_HPP_
