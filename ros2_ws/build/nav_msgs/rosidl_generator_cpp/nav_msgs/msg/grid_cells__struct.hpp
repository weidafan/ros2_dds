// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__GRID_CELLS__STRUCT_HPP_
#define NAV_MSGS__MSG__GRID_CELLS__STRUCT_HPP_

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
#include "geometry_msgs/msg/point.hpp"  // cells
#include "std_msgs/msg/header.hpp"  // header

#ifndef _WIN32
# define DEPRECATED_nav_msgs_msg_GridCells __attribute__((deprecated))
#else
# define DEPRECATED_nav_msgs_msg_GridCells __declspec(deprecated)
#endif

namespace nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GridCells_
{
  using Type = GridCells_<ContainerAllocator>;

  GridCells_()
  {
  }
  explicit GridCells_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : cells(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cell_width_type =
      float;
  _cell_width_type cell_width;
  using _cell_height_type =
      float;
  _cell_height_type cell_height;
  using _cells_type =
      std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point_<ContainerAllocator>>::other>;
  _cells_type cells;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__cell_width(
    const float & _arg)
  {
    this->cell_width = _arg;
    return this;
  }
  Type * set__cell_height(
    const float & _arg)
  {
    this->cell_height = _arg;
    return this;
  }
  Type * set__cells(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point_<ContainerAllocator>>::other> & _arg)
  {
    this->cells = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      nav_msgs::msg::GridCells_<ContainerAllocator> *;
  using ConstRawPtr =
      const nav_msgs::msg::GridCells_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<nav_msgs::msg::GridCells_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<nav_msgs::msg::GridCells_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    nav_msgs::msg::GridCells_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<nav_msgs::msg::GridCells_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    nav_msgs::msg::GridCells_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<nav_msgs::msg::GridCells_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<nav_msgs::msg::GridCells_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<nav_msgs::msg::GridCells_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_nav_msgs_msg_GridCells
    std::shared_ptr<nav_msgs::msg::GridCells_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_nav_msgs_msg_GridCells
    std::shared_ptr<nav_msgs::msg::GridCells_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GridCells_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cell_width != other.cell_width) {
      return false;
    }
    if (this->cell_height != other.cell_height) {
      return false;
    }
    if (this->cells != other.cells) {
      return false;
    }
    return true;
  }
  bool operator!=(const GridCells_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GridCells_

// alias to use template instance with default allocator
using GridCells =
    nav_msgs::msg::GridCells_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace nav_msgs

#endif  // NAV_MSGS__MSG__GRID_CELLS__STRUCT_HPP_
