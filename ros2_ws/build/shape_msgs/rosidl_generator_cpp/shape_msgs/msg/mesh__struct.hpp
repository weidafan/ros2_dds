// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__MESH__STRUCT_HPP_
#define SHAPE_MSGS__MSG__MESH__STRUCT_HPP_

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
#include "geometry_msgs/msg/point.hpp"  // vertices
#include "shape_msgs/msg/mesh_triangle.hpp"  // triangles

#ifndef _WIN32
# define DEPRECATED_shape_msgs_msg_Mesh __attribute__((deprecated))
#else
# define DEPRECATED_shape_msgs_msg_Mesh __declspec(deprecated)
#endif

namespace shape_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Mesh_
{
  using Type = Mesh_<ContainerAllocator>;

  Mesh_()
  {
  }
  explicit Mesh_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : triangles(_alloc),
    vertices(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _triangles_type =
      std::vector<shape_msgs::msg::MeshTriangle_<ContainerAllocator>, typename ContainerAllocator::template rebind<shape_msgs::msg::MeshTriangle_<ContainerAllocator>>::other>;
  _triangles_type triangles;
  using _vertices_type =
      std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point_<ContainerAllocator>>::other>;
  _vertices_type vertices;

  // setters for named parameter idiom
  Type * set__triangles(
    const std::vector<shape_msgs::msg::MeshTriangle_<ContainerAllocator>, typename ContainerAllocator::template rebind<shape_msgs::msg::MeshTriangle_<ContainerAllocator>>::other> & _arg)
  {
    this->triangles = _arg;
    return this;
  }
  Type * set__vertices(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point_<ContainerAllocator>>::other> & _arg)
  {
    this->vertices = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      shape_msgs::msg::Mesh_<ContainerAllocator> *;
  using ConstRawPtr =
      const shape_msgs::msg::Mesh_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<shape_msgs::msg::Mesh_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<shape_msgs::msg::Mesh_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    shape_msgs::msg::Mesh_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<shape_msgs::msg::Mesh_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    shape_msgs::msg::Mesh_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<shape_msgs::msg::Mesh_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<shape_msgs::msg::Mesh_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<shape_msgs::msg::Mesh_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_shape_msgs_msg_Mesh
    std::shared_ptr<shape_msgs::msg::Mesh_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_shape_msgs_msg_Mesh
    std::shared_ptr<shape_msgs::msg::Mesh_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mesh_ & other) const
  {
    if (this->triangles != other.triangles) {
      return false;
    }
    if (this->vertices != other.vertices) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mesh_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mesh_

// alias to use template instance with default allocator
using Mesh =
    shape_msgs::msg::Mesh_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace shape_msgs

#endif  // SHAPE_MSGS__MSG__MESH__STRUCT_HPP_
