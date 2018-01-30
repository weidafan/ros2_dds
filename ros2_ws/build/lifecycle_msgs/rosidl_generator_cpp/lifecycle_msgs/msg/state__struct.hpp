// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__MSG__STATE__STRUCT_HPP_
#define LIFECYCLE_MSGS__MSG__STATE__STRUCT_HPP_

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
# define DEPRECATED_lifecycle_msgs_msg_State __attribute__((deprecated))
#else
# define DEPRECATED_lifecycle_msgs_msg_State __declspec(deprecated)
#endif

namespace lifecycle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct State_
{
  using Type = State_<ContainerAllocator>;

  State_()
  {
  }
  explicit State_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _id_type =
      uint8_t;
  _id_type id;
  using _label_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _label_type label;

  // setters for named parameter idiom
  Type * set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return this;
  }
  Type * set__label(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->label = _arg;
    return this;
  }

  // constants
  enum { PRIMARY_STATE_UNKNOWN = 0u };
  enum { PRIMARY_STATE_UNCONFIGURED = 1u };
  enum { PRIMARY_STATE_INACTIVE = 2u };
  enum { PRIMARY_STATE_ACTIVE = 3u };
  enum { PRIMARY_STATE_FINALIZED = 4u };
  enum { TRANSITION_STATE_CONFIGURING = 10u };
  enum { TRANSITION_STATE_CLEANINGUP = 11u };
  enum { TRANSITION_STATE_SHUTTINGDOWN = 12u };
  enum { TRANSITION_STATE_ACTIVATING = 13u };
  enum { TRANSITION_STATE_DEACTIVATING = 14u };
  enum { TRANSITION_STATE_ERRORPROCESSING = 15u };

  // pointer types
  using RawPtr =
      lifecycle_msgs::msg::State_<ContainerAllocator> *;
  using ConstRawPtr =
      const lifecycle_msgs::msg::State_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<lifecycle_msgs::msg::State_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<lifecycle_msgs::msg::State_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    lifecycle_msgs::msg::State_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<lifecycle_msgs::msg::State_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    lifecycle_msgs::msg::State_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<lifecycle_msgs::msg::State_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<lifecycle_msgs::msg::State_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<lifecycle_msgs::msg::State_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_lifecycle_msgs_msg_State
    std::shared_ptr<lifecycle_msgs::msg::State_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_lifecycle_msgs_msg_State
    std::shared_ptr<lifecycle_msgs::msg::State_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const State_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    return true;
  }
  bool operator!=(const State_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct State_

// alias to use template instance with default allocator
using State =
    lifecycle_msgs::msg::State_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace lifecycle_msgs

#endif  // LIFECYCLE_MSGS__MSG__STATE__STRUCT_HPP_
