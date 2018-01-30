// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef COMPOSITION__SRV__LOAD_NODE__RESPONSE__STRUCT_HPP_
#define COMPOSITION__SRV__LOAD_NODE__RESPONSE__STRUCT_HPP_

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
# define DEPRECATED_composition_srv_LoadNode_Response __attribute__((deprecated))
#else
# define DEPRECATED_composition_srv_LoadNode_Response __declspec(deprecated)
#endif

namespace composition
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadNode_Response_
{
  using Type = LoadNode_Response_<ContainerAllocator>;

  LoadNode_Response_()
  {
  }
  explicit LoadNode_Response_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _success_type =
      bool;
  _success_type success;

  // setters for named parameter idiom
  Type * set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      composition::srv::LoadNode_Response_<ContainerAllocator> *;
  using ConstRawPtr =
      const composition::srv::LoadNode_Response_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<composition::srv::LoadNode_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<composition::srv::LoadNode_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    composition::srv::LoadNode_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<composition::srv::LoadNode_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    composition::srv::LoadNode_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<composition::srv::LoadNode_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<composition::srv::LoadNode_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<composition::srv::LoadNode_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_composition_srv_LoadNode_Response
    std::shared_ptr<composition::srv::LoadNode_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_composition_srv_LoadNode_Response
    std::shared_ptr<composition::srv::LoadNode_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadNode_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadNode_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadNode_Response_

// alias to use template instance with default allocator
using LoadNode_Response =
    composition::srv::LoadNode_Response_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace composition

#endif  // COMPOSITION__SRV__LOAD_NODE__RESPONSE__STRUCT_HPP_
