// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_COMMUNICATION__MSG__STATIC_ARRAY_NESTED__STRUCT_HPP_
#define TEST_COMMUNICATION__MSG__STATIC_ARRAY_NESTED__STRUCT_HPP_

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
#include "test_communication/msg/primitives.hpp"  // primitive_values

#ifndef _WIN32
# define DEPRECATED_test_communication_msg_StaticArrayNested __attribute__((deprecated))
#else
# define DEPRECATED_test_communication_msg_StaticArrayNested __declspec(deprecated)
#endif

namespace test_communication
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StaticArrayNested_
{
  using Type = StaticArrayNested_<ContainerAllocator>;

  StaticArrayNested_()
  {
  }
  explicit StaticArrayNested_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _primitive_values_type =
      std::array<test_communication::msg::Primitives_<ContainerAllocator>, 4>;
  _primitive_values_type primitive_values;

  // setters for named parameter idiom
  Type * set__primitive_values(
    const std::array<test_communication::msg::Primitives_<ContainerAllocator>, 4> & _arg)
  {
    this->primitive_values = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      test_communication::msg::StaticArrayNested_<ContainerAllocator> *;
  using ConstRawPtr =
      const test_communication::msg::StaticArrayNested_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<test_communication::msg::StaticArrayNested_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<test_communication::msg::StaticArrayNested_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    test_communication::msg::StaticArrayNested_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<test_communication::msg::StaticArrayNested_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    test_communication::msg::StaticArrayNested_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<test_communication::msg::StaticArrayNested_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<test_communication::msg::StaticArrayNested_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<test_communication::msg::StaticArrayNested_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_test_communication_msg_StaticArrayNested
    std::shared_ptr<test_communication::msg::StaticArrayNested_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_test_communication_msg_StaticArrayNested
    std::shared_ptr<test_communication::msg::StaticArrayNested_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StaticArrayNested_ & other) const
  {
    if (this->primitive_values != other.primitive_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const StaticArrayNested_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StaticArrayNested_

// alias to use template instance with default allocator
using StaticArrayNested =
    test_communication::msg::StaticArrayNested_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace test_communication

#endif  // TEST_COMMUNICATION__MSG__STATIC_ARRAY_NESTED__STRUCT_HPP_
