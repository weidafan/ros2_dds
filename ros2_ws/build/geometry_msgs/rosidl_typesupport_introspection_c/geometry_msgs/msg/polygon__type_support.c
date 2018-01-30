// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <geometry_msgs/msg/polygon__rosidl_typesupport_introspection_c.h>
#include "geometry_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "geometry_msgs/msg/polygon__struct.h"

// include message dependencies
// points
#include "geometry_msgs/msg/point32.h"
// points
#include "geometry_msgs/msg/point32__rosidl_typesupport_introspection_c.h"

#if __cplusplus
extern "C"
{
#endif

size_t geometry_msgs__msg__rosidl_typesupport_introspection_c__size_function__Polygon__points(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point32__Array * member =
    (const geometry_msgs__msg__Point32__Array *)(untyped_member);
  return member->size;
}

const void * geometry_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__Polygon__points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point32__Array * member =
    (const geometry_msgs__msg__Point32__Array *)(untyped_member);
  return &member->data[index];
}

void * geometry_msgs__msg__rosidl_typesupport_introspection_c__get_function__Polygon__points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point32__Array * member =
    (geometry_msgs__msg__Point32__Array *)(untyped_member);
  return &member->data[index];
}

bool geometry_msgs__msg__rosidl_typesupport_introspection_c__resize_function__Polygon__points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point32__Array * member =
    (geometry_msgs__msg__Point32__Array *)(untyped_member);
  geometry_msgs__msg__Point32__Array__fini(member);
  return geometry_msgs__msg__Point32__Array__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember geometry_msgs__msg__rosidl_typesupport_introspection_c__Polygon_message_member_array[1] = {
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs__msg__Polygon, points),  // bytes offset in struct
    NULL,  // default value
    geometry_msgs__msg__rosidl_typesupport_introspection_c__size_function__Polygon__points,  // size() function pointer
    geometry_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__Polygon__points,  // get_const(index) function pointer
    geometry_msgs__msg__rosidl_typesupport_introspection_c__get_function__Polygon__points,  // get(index) function pointer
    geometry_msgs__msg__rosidl_typesupport_introspection_c__resize_function__Polygon__points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers geometry_msgs__msg__rosidl_typesupport_introspection_c__Polygon_message_members = {
  "geometry_msgs",  // package name
  "Polygon",  // message name
  1,  // number of fields
  sizeof(geometry_msgs__msg__Polygon),
  geometry_msgs__msg__rosidl_typesupport_introspection_c__Polygon_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t geometry_msgs__msg__rosidl_typesupport_introspection_c__Polygon_message_type_support_handle = {
  0,
  &geometry_msgs__msg__rosidl_typesupport_introspection_c__Polygon_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geometry_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Polygon)() {
  geometry_msgs__msg__rosidl_typesupport_introspection_c__Polygon_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point32)();
  if (!geometry_msgs__msg__rosidl_typesupport_introspection_c__Polygon_message_type_support_handle.typesupport_identifier) {
    geometry_msgs__msg__rosidl_typesupport_introspection_c__Polygon_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &geometry_msgs__msg__rosidl_typesupport_introspection_c__Polygon_message_type_support_handle;
}

#if __cplusplus
}
#endif
