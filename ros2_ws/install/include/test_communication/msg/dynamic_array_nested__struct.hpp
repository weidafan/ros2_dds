// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_COMMUNICATION__MSG__DYNAMIC_ARRAY_NESTED__STRUCT_HPP_
#define TEST_COMMUNICATION__MSG__DYNAMIC_ARRAY_NESTED__STRUCT_HPP_

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
# define DEPRECATED_test_communication_msg_DynamicArrayNested __attribute__((deprecated))
#else
# define DEPRECATED_test_communication_msg_DynamicArrayNested __declspec(deprecated)
#endif

namespace test_communication
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DynamicArrayNested_
{
  using Type = DynamicArrayNested_<ContainerAllocator>;

  DynamicArrayNested_()
  {
  }
  explicit DynamicArrayNested_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : primitive_values(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _primitive_values_type =
      std::vector<test_communication::msg::Primitives_<ContainerAllocator>, typename ContainerAllocator::template rebind<test_communication::msg::Primitives_<ContainerAllocator>>::other>;
  _primitive_values_type primitive_values;

  // setters for named parameter idiom
  Type * set__primitive_values(
    const std::vector<test_communication::msg::Primitives_<ContainerAllocator>, typename ContainerAllocator::template rebind<test_communication::msg::Primitives_<ContainerAllocator>>::other> & _arg)
  {
    this->primitive_values = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      test_communication::msg::DynamicArrayNested_<ContainerAllocator> *;
  using ConstRawPtr =
      const test_communication::msg::DynamicArrayNested_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<test_communication::msg::DynamicArrayNested_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<test_communication::msg::DynamicArrayNested_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    test_communication::msg::DynamicArrayNested_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<test_communication::msg::DynamicArrayNested_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    test_communication::msg::DynamicArrayNested_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<test_communication::msg::DynamicArrayNested_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<test_communication::msg::DynamicArrayNested_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<test_communication::msg::DynamicArrayNested_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_test_communication_msg_DynamicArrayNested
    std::shared_ptr<test_communication::msg::DynamicArrayNested_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_test_communication_msg_DynamicArrayNested
    std::shared_ptr<test_communication::msg::DynamicArrayNested_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamicArrayNested_ & other) const
  {
    if (this->primitive_values != other.primitive_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamicArrayNested_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamicArrayNested_

// alias to use template instance with default allocator
using DynamicArrayNested =
    test_communication::msg::DynamicArrayNested_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace test_communication

#endif  // TEST_COMMUNICATION__MSG__DYNAMIC_ARRAY_NESTED__STRUCT_HPP_
