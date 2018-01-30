// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_COMMUNICATION__MSG__FIELDS_WITH_SAME_TYPE__STRUCT_HPP_
#define TEST_COMMUNICATION__MSG__FIELDS_WITH_SAME_TYPE__STRUCT_HPP_

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
#include "test_communication/msg/primitives.hpp"  // primitive_values1, primitive_values2

#ifndef _WIN32
# define DEPRECATED_test_communication_msg_FieldsWithSameType __attribute__((deprecated))
#else
# define DEPRECATED_test_communication_msg_FieldsWithSameType __declspec(deprecated)
#endif

namespace test_communication
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FieldsWithSameType_
{
  using Type = FieldsWithSameType_<ContainerAllocator>;

  FieldsWithSameType_()
  {
  }
  explicit FieldsWithSameType_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _primitive_values1_type =
      test_communication::msg::Primitives_<ContainerAllocator>;
  _primitive_values1_type primitive_values1;
  using _primitive_values2_type =
      test_communication::msg::Primitives_<ContainerAllocator>;
  _primitive_values2_type primitive_values2;

  // setters for named parameter idiom
  Type * set__primitive_values1(
    const test_communication::msg::Primitives_<ContainerAllocator> & _arg)
  {
    this->primitive_values1 = _arg;
    return this;
  }
  Type * set__primitive_values2(
    const test_communication::msg::Primitives_<ContainerAllocator> & _arg)
  {
    this->primitive_values2 = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      test_communication::msg::FieldsWithSameType_<ContainerAllocator> *;
  using ConstRawPtr =
      const test_communication::msg::FieldsWithSameType_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<test_communication::msg::FieldsWithSameType_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<test_communication::msg::FieldsWithSameType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    test_communication::msg::FieldsWithSameType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<test_communication::msg::FieldsWithSameType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    test_communication::msg::FieldsWithSameType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<test_communication::msg::FieldsWithSameType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<test_communication::msg::FieldsWithSameType_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<test_communication::msg::FieldsWithSameType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_test_communication_msg_FieldsWithSameType
    std::shared_ptr<test_communication::msg::FieldsWithSameType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_test_communication_msg_FieldsWithSameType
    std::shared_ptr<test_communication::msg::FieldsWithSameType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FieldsWithSameType_ & other) const
  {
    if (this->primitive_values1 != other.primitive_values1) {
      return false;
    }
    if (this->primitive_values2 != other.primitive_values2) {
      return false;
    }
    return true;
  }
  bool operator!=(const FieldsWithSameType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FieldsWithSameType_

// alias to use template instance with default allocator
using FieldsWithSameType =
    test_communication::msg::FieldsWithSameType_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace test_communication

#endif  // TEST_COMMUNICATION__MSG__FIELDS_WITH_SAME_TYPE__STRUCT_HPP_
