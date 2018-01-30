// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__GOAL_ID__STRUCT_HPP_
#define ACTIONLIB_MSGS__MSG__GOAL_ID__STRUCT_HPP_

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
#include "builtin_interfaces/msg/time.hpp"  // stamp

#ifndef _WIN32
# define DEPRECATED_actionlib_msgs_msg_GoalID __attribute__((deprecated))
#else
# define DEPRECATED_actionlib_msgs_msg_GoalID __declspec(deprecated)
#endif

namespace actionlib_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GoalID_
{
  using Type = GoalID_<ContainerAllocator>;

  GoalID_()
  {
  }
  explicit GoalID_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _stamp_type =
      builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _id_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _id_type id;

  // setters for named parameter idiom
  Type * set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return this;
  }
  Type * set__id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->id = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      actionlib_msgs::msg::GoalID_<ContainerAllocator> *;
  using ConstRawPtr =
      const actionlib_msgs::msg::GoalID_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<actionlib_msgs::msg::GoalID_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<actionlib_msgs::msg::GoalID_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    actionlib_msgs::msg::GoalID_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<actionlib_msgs::msg::GoalID_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    actionlib_msgs::msg::GoalID_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<actionlib_msgs::msg::GoalID_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<actionlib_msgs::msg::GoalID_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<actionlib_msgs::msg::GoalID_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_actionlib_msgs_msg_GoalID
    std::shared_ptr<actionlib_msgs::msg::GoalID_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_actionlib_msgs_msg_GoalID
    std::shared_ptr<actionlib_msgs::msg::GoalID_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalID_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalID_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalID_

// alias to use template instance with default allocator
using GoalID =
    actionlib_msgs::msg::GoalID_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace actionlib_msgs

#endif  // ACTIONLIB_MSGS__MSG__GOAL_ID__STRUCT_HPP_
