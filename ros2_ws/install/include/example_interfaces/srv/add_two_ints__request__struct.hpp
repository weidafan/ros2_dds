// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__REQUEST__STRUCT_HPP_
#define EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__REQUEST__STRUCT_HPP_

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
# define DEPRECATED_example_interfaces_srv_AddTwoInts_Request __attribute__((deprecated))
#else
# define DEPRECATED_example_interfaces_srv_AddTwoInts_Request __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddTwoInts_Request_
{
  using Type = AddTwoInts_Request_<ContainerAllocator>;

  AddTwoInts_Request_()
  {
  }
  explicit AddTwoInts_Request_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _a_type =
      int64_t;
  _a_type a;
  using _b_type =
      int64_t;
  _b_type b;

  // setters for named parameter idiom
  Type * set__a(
    const int64_t & _arg)
  {
    this->a = _arg;
    return this;
  }
  Type * set__b(
    const int64_t & _arg)
  {
    this->b = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      example_interfaces::srv::AddTwoInts_Request_<ContainerAllocator> *;
  using ConstRawPtr =
      const example_interfaces::srv::AddTwoInts_Request_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<example_interfaces::srv::AddTwoInts_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<example_interfaces::srv::AddTwoInts_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    example_interfaces::srv::AddTwoInts_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<example_interfaces::srv::AddTwoInts_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    example_interfaces::srv::AddTwoInts_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<example_interfaces::srv::AddTwoInts_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<example_interfaces::srv::AddTwoInts_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<example_interfaces::srv::AddTwoInts_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_example_interfaces_srv_AddTwoInts_Request
    std::shared_ptr<example_interfaces::srv::AddTwoInts_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_example_interfaces_srv_AddTwoInts_Request
    std::shared_ptr<example_interfaces::srv::AddTwoInts_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddTwoInts_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddTwoInts_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddTwoInts_Request_

// alias to use template instance with default allocator
using AddTwoInts_Request =
    example_interfaces::srv::AddTwoInts_Request_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__REQUEST__STRUCT_HPP_
