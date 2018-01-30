// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef COMPOSITION__SRV__LOAD_NODE__REQUEST__STRUCT_HPP_
#define COMPOSITION__SRV__LOAD_NODE__REQUEST__STRUCT_HPP_

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
# define DEPRECATED_composition_srv_LoadNode_Request __attribute__((deprecated))
#else
# define DEPRECATED_composition_srv_LoadNode_Request __declspec(deprecated)
#endif

namespace composition
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadNode_Request_
{
  using Type = LoadNode_Request_<ContainerAllocator>;

  LoadNode_Request_()
  {
  }
  explicit LoadNode_Request_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _package_name_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _package_name_type package_name;
  using _plugin_name_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _plugin_name_type plugin_name;

  // setters for named parameter idiom
  Type * set__package_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->package_name = _arg;
    return this;
  }
  Type * set__plugin_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->plugin_name = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      composition::srv::LoadNode_Request_<ContainerAllocator> *;
  using ConstRawPtr =
      const composition::srv::LoadNode_Request_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<composition::srv::LoadNode_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<composition::srv::LoadNode_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    composition::srv::LoadNode_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<composition::srv::LoadNode_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    composition::srv::LoadNode_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<composition::srv::LoadNode_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<composition::srv::LoadNode_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<composition::srv::LoadNode_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_composition_srv_LoadNode_Request
    std::shared_ptr<composition::srv::LoadNode_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_composition_srv_LoadNode_Request
    std::shared_ptr<composition::srv::LoadNode_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadNode_Request_ & other) const
  {
    if (this->package_name != other.package_name) {
      return false;
    }
    if (this->plugin_name != other.plugin_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadNode_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadNode_Request_

// alias to use template instance with default allocator
using LoadNode_Request =
    composition::srv::LoadNode_Request_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace composition

#endif  // COMPOSITION__SRV__LOAD_NODE__REQUEST__STRUCT_HPP_
