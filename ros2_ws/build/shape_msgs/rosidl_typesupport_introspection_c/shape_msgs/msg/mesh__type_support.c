// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <shape_msgs/msg/mesh__rosidl_typesupport_introspection_c.h>
#include "shape_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "shape_msgs/msg/mesh__struct.h"

// include message dependencies
// triangles
#include "shape_msgs/msg/mesh_triangle.h"
// triangles
#include "shape_msgs/msg/mesh_triangle__rosidl_typesupport_introspection_c.h"
// vertices
#include "geometry_msgs/msg/point.h"
// vertices
#include "geometry_msgs/msg/point__rosidl_typesupport_introspection_c.h"

#if __cplusplus
extern "C"
{
#endif

size_t shape_msgs__msg__rosidl_typesupport_introspection_c__size_function__Mesh__triangles(
  const void * untyped_member)
{
  const shape_msgs__msg__MeshTriangle__Array * member =
    (const shape_msgs__msg__MeshTriangle__Array *)(untyped_member);
  return member->size;
}

const void * shape_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__Mesh__triangles(
  const void * untyped_member, size_t index)
{
  const shape_msgs__msg__MeshTriangle__Array * member =
    (const shape_msgs__msg__MeshTriangle__Array *)(untyped_member);
  return &member->data[index];
}

void * shape_msgs__msg__rosidl_typesupport_introspection_c__get_function__Mesh__triangles(
  void * untyped_member, size_t index)
{
  shape_msgs__msg__MeshTriangle__Array * member =
    (shape_msgs__msg__MeshTriangle__Array *)(untyped_member);
  return &member->data[index];
}

bool shape_msgs__msg__rosidl_typesupport_introspection_c__resize_function__Mesh__triangles(
  void * untyped_member, size_t size)
{
  shape_msgs__msg__MeshTriangle__Array * member =
    (shape_msgs__msg__MeshTriangle__Array *)(untyped_member);
  shape_msgs__msg__MeshTriangle__Array__fini(member);
  return shape_msgs__msg__MeshTriangle__Array__init(member, size);
}

size_t shape_msgs__msg__rosidl_typesupport_introspection_c__size_function__Mesh__vertices(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Array * member =
    (const geometry_msgs__msg__Point__Array *)(untyped_member);
  return member->size;
}

const void * shape_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__Mesh__vertices(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Array * member =
    (const geometry_msgs__msg__Point__Array *)(untyped_member);
  return &member->data[index];
}

void * shape_msgs__msg__rosidl_typesupport_introspection_c__get_function__Mesh__vertices(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Array * member =
    (geometry_msgs__msg__Point__Array *)(untyped_member);
  return &member->data[index];
}

bool shape_msgs__msg__rosidl_typesupport_introspection_c__resize_function__Mesh__vertices(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Array * member =
    (geometry_msgs__msg__Point__Array *)(untyped_member);
  geometry_msgs__msg__Point__Array__fini(member);
  return geometry_msgs__msg__Point__Array__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember shape_msgs__msg__rosidl_typesupport_introspection_c__Mesh_message_member_array[2] = {
  {
    "triangles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shape_msgs__msg__Mesh, triangles),  // bytes offset in struct
    NULL,  // default value
    shape_msgs__msg__rosidl_typesupport_introspection_c__size_function__Mesh__triangles,  // size() function pointer
    shape_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__Mesh__triangles,  // get_const(index) function pointer
    shape_msgs__msg__rosidl_typesupport_introspection_c__get_function__Mesh__triangles,  // get(index) function pointer
    shape_msgs__msg__rosidl_typesupport_introspection_c__resize_function__Mesh__triangles  // resize(index) function pointer
  },
  {
    "vertices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shape_msgs__msg__Mesh, vertices),  // bytes offset in struct
    NULL,  // default value
    shape_msgs__msg__rosidl_typesupport_introspection_c__size_function__Mesh__vertices,  // size() function pointer
    shape_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__Mesh__vertices,  // get_const(index) function pointer
    shape_msgs__msg__rosidl_typesupport_introspection_c__get_function__Mesh__vertices,  // get(index) function pointer
    shape_msgs__msg__rosidl_typesupport_introspection_c__resize_function__Mesh__vertices  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers shape_msgs__msg__rosidl_typesupport_introspection_c__Mesh_message_members = {
  "shape_msgs",  // package name
  "Mesh",  // message name
  2,  // number of fields
  sizeof(shape_msgs__msg__Mesh),
  shape_msgs__msg__rosidl_typesupport_introspection_c__Mesh_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t shape_msgs__msg__rosidl_typesupport_introspection_c__Mesh_message_type_support_handle = {
  0,
  &shape_msgs__msg__rosidl_typesupport_introspection_c__Mesh_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_shape_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_msgs, msg, Mesh)() {
  shape_msgs__msg__rosidl_typesupport_introspection_c__Mesh_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_msgs, msg, MeshTriangle)();
  shape_msgs__msg__rosidl_typesupport_introspection_c__Mesh_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!shape_msgs__msg__rosidl_typesupport_introspection_c__Mesh_message_type_support_handle.typesupport_identifier) {
    shape_msgs__msg__rosidl_typesupport_introspection_c__Mesh_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &shape_msgs__msg__rosidl_typesupport_introspection_c__Mesh_message_type_support_handle;
}

#if __cplusplus
}
#endif
