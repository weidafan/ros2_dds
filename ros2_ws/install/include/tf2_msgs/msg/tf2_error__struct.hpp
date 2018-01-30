// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__MSG__TF2_ERROR__STRUCT_HPP_
#define TF2_MSGS__MSG__TF2_ERROR__STRUCT_HPP_

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
# define DEPRECATED_tf2_msgs_msg_TF2Error __attribute__((deprecated))
#else
# define DEPRECATED_tf2_msgs_msg_TF2Error __declspec(deprecated)
#endif

namespace tf2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TF2Error_
{
  using Type = TF2Error_<ContainerAllocator>;

  TF2Error_()
  {
  }
  explicit TF2Error_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _error_type =
      uint8_t;
  _error_type error;
  using _error_string_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _error_string_type error_string;

  // setters for named parameter idiom
  Type * set__error(
    const uint8_t & _arg)
  {
    this->error = _arg;
    return this;
  }
  Type * set__error_string(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->error_string = _arg;
    return this;
  }

  // constants
  enum { NO_ERROR = 0u };
  enum { LOOKUP_ERROR = 1u };
  enum { CONNECTIVITY_ERROR = 2u };
  enum { EXTRAPOLATION_ERROR = 3u };
  enum { INVALID_ARGUMENT_ERROR = 4u };
  enum { TIMEOUT_ERROR = 5u };
  enum { TRANSFORM_ERROR = 6u };

  // pointer types
  using RawPtr =
      tf2_msgs::msg::TF2Error_<ContainerAllocator> *;
  using ConstRawPtr =
      const tf2_msgs::msg::TF2Error_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<tf2_msgs::msg::TF2Error_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<tf2_msgs::msg::TF2Error_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    tf2_msgs::msg::TF2Error_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<tf2_msgs::msg::TF2Error_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    tf2_msgs::msg::TF2Error_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<tf2_msgs::msg::TF2Error_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<tf2_msgs::msg::TF2Error_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<tf2_msgs::msg::TF2Error_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_tf2_msgs_msg_TF2Error
    std::shared_ptr<tf2_msgs::msg::TF2Error_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_tf2_msgs_msg_TF2Error
    std::shared_ptr<tf2_msgs::msg::TF2Error_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TF2Error_ & other) const
  {
    if (this->error != other.error) {
      return false;
    }
    if (this->error_string != other.error_string) {
      return false;
    }
    return true;
  }
  bool operator!=(const TF2Error_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TF2Error_

// alias to use template instance with default allocator
using TF2Error =
    tf2_msgs::msg::TF2Error_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace tf2_msgs

#endif  // TF2_MSGS__MSG__TF2_ERROR__STRUCT_HPP_
