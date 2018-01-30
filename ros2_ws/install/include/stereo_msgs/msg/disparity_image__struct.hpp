// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef STEREO_MSGS__MSG__DISPARITY_IMAGE__STRUCT_HPP_
#define STEREO_MSGS__MSG__DISPARITY_IMAGE__STRUCT_HPP_

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
#include "sensor_msgs/msg/image.hpp"  // image
#include "sensor_msgs/msg/region_of_interest.hpp"  // valid_window
#include "std_msgs/msg/header.hpp"  // header

#ifndef _WIN32
# define DEPRECATED_stereo_msgs_msg_DisparityImage __attribute__((deprecated))
#else
# define DEPRECATED_stereo_msgs_msg_DisparityImage __declspec(deprecated)
#endif

namespace stereo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DisparityImage_
{
  using Type = DisparityImage_<ContainerAllocator>;

  DisparityImage_()
  {
  }
  explicit DisparityImage_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _image_type =
      sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _f_type =
      float;
  _f_type f;
  using _t_type =
      float;
  _t_type t;
  using _valid_window_type =
      sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _valid_window_type valid_window;
  using _min_disparity_type =
      float;
  _min_disparity_type min_disparity;
  using _max_disparity_type =
      float;
  _max_disparity_type max_disparity;
  using _delta_d_type =
      float;
  _delta_d_type delta_d;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return this;
  }
  Type * set__f(
    const float & _arg)
  {
    this->f = _arg;
    return this;
  }
  Type * set__t(
    const float & _arg)
  {
    this->t = _arg;
    return this;
  }
  Type * set__valid_window(
    const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->valid_window = _arg;
    return this;
  }
  Type * set__min_disparity(
    const float & _arg)
  {
    this->min_disparity = _arg;
    return this;
  }
  Type * set__max_disparity(
    const float & _arg)
  {
    this->max_disparity = _arg;
    return this;
  }
  Type * set__delta_d(
    const float & _arg)
  {
    this->delta_d = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      stereo_msgs::msg::DisparityImage_<ContainerAllocator> *;
  using ConstRawPtr =
      const stereo_msgs::msg::DisparityImage_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<stereo_msgs::msg::DisparityImage_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<stereo_msgs::msg::DisparityImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    stereo_msgs::msg::DisparityImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<stereo_msgs::msg::DisparityImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    stereo_msgs::msg::DisparityImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<stereo_msgs::msg::DisparityImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<stereo_msgs::msg::DisparityImage_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<stereo_msgs::msg::DisparityImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_stereo_msgs_msg_DisparityImage
    std::shared_ptr<stereo_msgs::msg::DisparityImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_stereo_msgs_msg_DisparityImage
    std::shared_ptr<stereo_msgs::msg::DisparityImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DisparityImage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    if (this->f != other.f) {
      return false;
    }
    if (this->t != other.t) {
      return false;
    }
    if (this->valid_window != other.valid_window) {
      return false;
    }
    if (this->min_disparity != other.min_disparity) {
      return false;
    }
    if (this->max_disparity != other.max_disparity) {
      return false;
    }
    if (this->delta_d != other.delta_d) {
      return false;
    }
    return true;
  }
  bool operator!=(const DisparityImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DisparityImage_

// alias to use template instance with default allocator
using DisparityImage =
    stereo_msgs::msg::DisparityImage_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace stereo_msgs

#endif  // STEREO_MSGS__MSG__DISPARITY_IMAGE__STRUCT_HPP_
