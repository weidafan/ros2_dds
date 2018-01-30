// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// providing offsetof()
#include <cstddef>
#include <vector>

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"

#include "shape_msgs/msg/mesh__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace shape_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__Mesh__triangles(const void * untyped_member)
{
  const std::vector<shape_msgs::msg::MeshTriangle> * member =
    reinterpret_cast<const std::vector<shape_msgs::msg::MeshTriangle> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Mesh__triangles(const void * untyped_member, size_t index)
{
  const std::vector<shape_msgs::msg::MeshTriangle> & member =
    *reinterpret_cast<const std::vector<shape_msgs::msg::MeshTriangle> *>(untyped_member);
  return &member[index];
}

void * get_function__Mesh__triangles(void * untyped_member, size_t index)
{
  std::vector<shape_msgs::msg::MeshTriangle> & member =
    *reinterpret_cast<std::vector<shape_msgs::msg::MeshTriangle> *>(untyped_member);
  return &member[index];
}

void resize_function__Mesh__triangles(void * untyped_member, size_t size)
{
  std::vector<shape_msgs::msg::MeshTriangle> * member =
    reinterpret_cast<std::vector<shape_msgs::msg::MeshTriangle> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Mesh__vertices(const void * untyped_member)
{
  const std::vector<geometry_msgs::msg::Point> * member =
    reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Mesh__vertices(const void * untyped_member, size_t index)
{
  const std::vector<geometry_msgs::msg::Point> & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__Mesh__vertices(void * untyped_member, size_t index)
{
  std::vector<geometry_msgs::msg::Point> & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void resize_function__Mesh__vertices(void * untyped_member, size_t size)
{
  std::vector<geometry_msgs::msg::Point> * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Mesh_message_member_array[2] = {
  {
    "triangles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<shape_msgs::msg::MeshTriangle>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shape_msgs::msg::Mesh, triangles),  // bytes offset in struct
    nullptr,  // default value
    size_function__Mesh__triangles,  // size() function pointer
    get_const_function__Mesh__triangles,  // get_const(index) function pointer
    get_function__Mesh__triangles,  // get(index) function pointer
    resize_function__Mesh__triangles  // resize(index) function pointer
  },
  {
    "vertices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shape_msgs::msg::Mesh, vertices),  // bytes offset in struct
    nullptr,  // default value
    size_function__Mesh__vertices,  // size() function pointer
    get_const_function__Mesh__vertices,  // get_const(index) function pointer
    get_function__Mesh__vertices,  // get(index) function pointer
    resize_function__Mesh__vertices  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Mesh_message_members = {
  "shape_msgs",  // package name
  "Mesh",  // message name
  2,  // number of fields
  sizeof(shape_msgs::msg::Mesh),
  Mesh_message_member_array  // message members
};

static const rosidl_message_type_support_t Mesh_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Mesh_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace shape_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<shape_msgs::msg::Mesh>()
{
  return &::shape_msgs::msg::rosidl_typesupport_introspection_cpp::Mesh_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, shape_msgs, msg, Mesh)() {
  return &::shape_msgs::msg::rosidl_typesupport_introspection_cpp::Mesh_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
