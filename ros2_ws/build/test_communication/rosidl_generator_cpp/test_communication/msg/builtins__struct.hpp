// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_COMMUNICATION__MSG__BUILTINS__STRUCT_HPP_
#define TEST_COMMUNICATION__MSG__BUILTINS__STRUCT_HPP_

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
#include "builtin_interfaces/msg/duration.hpp"  // duration_value
#include "builtin_interfaces/msg/time.hpp"  // time_value

#ifndef _WIN32
# define DEPRECATED_test_communication_msg_Builtins __attribute__((deprecated))
#else
# define DEPRECATED_test_communication_msg_Builtins __declspec(deprecated)
#endif

namespace test_communication
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Builtins_
{
  using Type = Builtins_<ContainerAllocator>;

  Builtins_()
  {
  }
  explicit Builtins_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _duration_value_type =
      builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _duration_value_type duration_value;
  using _time_value_type =
      builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_value_type time_value;

  // setters for named parameter idiom
  Type * set__duration_value(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->duration_value = _arg;
    return this;
  }
  Type * set__time_value(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->time_value = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      test_communication::msg::Builtins_<ContainerAllocator> *;
  using ConstRawPtr =
      const test_communication::msg::Builtins_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<test_communication::msg::Builtins_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<test_communication::msg::Builtins_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    test_communication::msg::Builtins_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<test_communication::msg::Builtins_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    test_communication::msg::Builtins_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<test_communication::msg::Builtins_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<test_communication::msg::Builtins_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<test_communication::msg::Builtins_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_test_communication_msg_Builtins
    std::shared_ptr<test_communication::msg::Builtins_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_test_communication_msg_Builtins
    std::shared_ptr<test_communication::msg::Builtins_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Builtins_ & other) const
  {
    if (this->duration_value != other.duration_value) {
      return false;
    }
    if (this->time_value != other.time_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Builtins_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Builtins_

// alias to use template instance with default allocator
using Builtins =
    test_communication::msg::Builtins_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace test_communication

#endif  // TEST_COMMUNICATION__MSG__BUILTINS__STRUCT_HPP_
