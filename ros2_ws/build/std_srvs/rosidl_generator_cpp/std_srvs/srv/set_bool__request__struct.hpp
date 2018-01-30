// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__SET_BOOL__REQUEST__STRUCT_HPP_
#define STD_SRVS__SRV__SET_BOOL__REQUEST__STRUCT_HPP_

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
# define DEPRECATED_std_srvs_srv_SetBool_Request __attribute__((deprecated))
#else
# define DEPRECATED_std_srvs_srv_SetBool_Request __declspec(deprecated)
#endif

namespace std_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetBool_Request_
{
  using Type = SetBool_Request_<ContainerAllocator>;

  SetBool_Request_()
  {
  }
  explicit SetBool_Request_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _data_type =
      bool;
  _data_type data;

  // setters for named parameter idiom
  Type * set__data(
    const bool & _arg)
  {
    this->data = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      std_srvs::srv::SetBool_Request_<ContainerAllocator> *;
  using ConstRawPtr =
      const std_srvs::srv::SetBool_Request_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<std_srvs::srv::SetBool_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<std_srvs::srv::SetBool_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    std_srvs::srv::SetBool_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<std_srvs::srv::SetBool_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    std_srvs::srv::SetBool_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<std_srvs::srv::SetBool_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<std_srvs::srv::SetBool_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<std_srvs::srv::SetBool_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_std_srvs_srv_SetBool_Request
    std::shared_ptr<std_srvs::srv::SetBool_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_std_srvs_srv_SetBool_Request
    std::shared_ptr<std_srvs::srv::SetBool_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetBool_Request_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetBool_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetBool_Request_

// alias to use template instance with default allocator
using SetBool_Request =
    std_srvs::srv::SetBool_Request_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace std_srvs

#endif  // STD_SRVS__SRV__SET_BOOL__REQUEST__STRUCT_HPP_
