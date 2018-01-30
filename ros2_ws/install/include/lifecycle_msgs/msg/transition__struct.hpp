// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__MSG__TRANSITION__STRUCT_HPP_
#define LIFECYCLE_MSGS__MSG__TRANSITION__STRUCT_HPP_

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
# define DEPRECATED_lifecycle_msgs_msg_Transition __attribute__((deprecated))
#else
# define DEPRECATED_lifecycle_msgs_msg_Transition __declspec(deprecated)
#endif

namespace lifecycle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Transition_
{
  using Type = Transition_<ContainerAllocator>;

  Transition_()
  {
  }
  explicit Transition_(const ContainerAllocator & _alloc)
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
  enum { TRANSITION_CREATE = 0u };
  enum { TRANSITION_CONFIGURE = 1u };
  enum { TRANSITION_CLEANUP = 2u };
  enum { TRANSITION_ACTIVATE = 3u };
  enum { TRANSITION_DEACTIVATE = 4u };
  enum { TRANSITION_SHUTDOWN = 5u };
  enum { TRANSITION_DESTROY = 6u };
  enum { TRANSITION_ON_CONFIGURE_SUCCESS = 10u };
  enum { TRANSITION_ON_CONFIGURE_FAILURE = 11u };
  enum { TRANSITION_ON_CONFIGURE_ERROR = 12u };
  enum { TRANSITION_ON_CLEANUP_SUCCESS = 20u };
  enum { TRANSITION_ON_CLEANUP_FAILURE = 21u };
  enum { TRANSITION_ON_CLEANUP_ERROR = 22u };
  enum { TRANSITION_ON_ACTIVATE_SUCCESS = 30u };
  enum { TRANSITION_ON_ACTIVATE_FAILURE = 31u };
  enum { TRANSITION_ON_ACTIVATE_ERROR = 32u };
  enum { TRANSITION_ON_DEACTIVATE_SUCCESS = 40u };
  enum { TRANSITION_ON_DEACTIVATE_FAILURE = 41u };
  enum { TRANSITION_ON_DEACTIVATE_ERROR = 42u };
  enum { TRANSITION_UNCONFIGURED_SHUTDOWN = 50u };
  enum { TRANSITION_INACTIVE_SHUTDOWN = 51u };
  enum { TRANSITION_ACTIVE_SHUTDOWN = 52u };
  enum { TRANSITION_ON_SHUTDOWN_SUCCESS = 53u };
  enum { TRANSITION_ON_SHUTDOWN_FAILURE = 54u };
  enum { TRANSITION_ON_SHUTDOWN_ERROR = 55u };
  enum { TRANSITION_ON_ERROR_SUCCESS = 60u };
  enum { TRANSITION_ON_ERROR_FAILURE = 61u };
  enum { TRANSITION_ON_ERROR_ERROR = 62u };

  // pointer types
  using RawPtr =
      lifecycle_msgs::msg::Transition_<ContainerAllocator> *;
  using ConstRawPtr =
      const lifecycle_msgs::msg::Transition_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<lifecycle_msgs::msg::Transition_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<lifecycle_msgs::msg::Transition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    lifecycle_msgs::msg::Transition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<lifecycle_msgs::msg::Transition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    lifecycle_msgs::msg::Transition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<lifecycle_msgs::msg::Transition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<lifecycle_msgs::msg::Transition_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<lifecycle_msgs::msg::Transition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_lifecycle_msgs_msg_Transition
    std::shared_ptr<lifecycle_msgs::msg::Transition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_lifecycle_msgs_msg_Transition
    std::shared_ptr<lifecycle_msgs::msg::Transition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Transition_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    return true;
  }
  bool operator!=(const Transition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Transition_

// alias to use template instance with default allocator
using Transition =
    lifecycle_msgs::msg::Transition_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace lifecycle_msgs

#endif  // LIFECYCLE_MSGS__MSG__TRANSITION__STRUCT_HPP_
