// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <geometry_msgs/msg/pose_array__rosidl_typesupport_introspection_c.h>
#include "geometry_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "geometry_msgs/msg/pose_array__struct.h"

// include message dependencies
// header
#include "std_msgs/msg/header.h"
// header
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// poses
#include "geometry_msgs/msg/pose.h"
// poses
#include "geometry_msgs/msg/pose__rosidl_typesupport_introspection_c.h"

#if __cplusplus
extern "C"
{
#endif

size_t geometry_msgs__msg__rosidl_typesupport_introspection_c__size_function__PoseArray__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Array * member =
    (const geometry_msgs__msg__Pose__Array *)(untyped_member);
  return member->size;
}

const void * geometry_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__PoseArray__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Array * member =
    (const geometry_msgs__msg__Pose__Array *)(untyped_member);
  return &member->data[index];
}

void * geometry_msgs__msg__rosidl_typesupport_introspection_c__get_function__PoseArray__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Array * member =
    (geometry_msgs__msg__Pose__Array *)(untyped_member);
  return &member->data[index];
}

bool geometry_msgs__msg__rosidl_typesupport_introspection_c__resize_function__PoseArray__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Array * member =
    (geometry_msgs__msg__Pose__Array *)(untyped_member);
  geometry_msgs__msg__Pose__Array__fini(member);
  return geometry_msgs__msg__Pose__Array__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember geometry_msgs__msg__rosidl_typesupport_introspection_c__PoseArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs__msg__PoseArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs__msg__PoseArray, poses),  // bytes offset in struct
    NULL,  // default value
    geometry_msgs__msg__rosidl_typesupport_introspection_c__size_function__PoseArray__poses,  // size() function pointer
    geometry_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__PoseArray__poses,  // get_const(index) function pointer
    geometry_msgs__msg__rosidl_typesupport_introspection_c__get_function__PoseArray__poses,  // get(index) function pointer
    geometry_msgs__msg__rosidl_typesupport_introspection_c__resize_function__PoseArray__poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers geometry_msgs__msg__rosidl_typesupport_introspection_c__PoseArray_message_members = {
  "geometry_msgs",  // package name
  "PoseArray",  // message name
  2,  // number of fields
  sizeof(geometry_msgs__msg__PoseArray),
  geometry_msgs__msg__rosidl_typesupport_introspection_c__PoseArray_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t geometry_msgs__msg__rosidl_typesupport_introspection_c__PoseArray_message_type_support_handle = {
  0,
  &geometry_msgs__msg__rosidl_typesupport_introspection_c__PoseArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geometry_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseArray)() {
  geometry_msgs__msg__rosidl_typesupport_introspection_c__PoseArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  geometry_msgs__msg__rosidl_typesupport_introspection_c__PoseArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!geometry_msgs__msg__rosidl_typesupport_introspection_c__PoseArray_message_type_support_handle.typesupport_identifier) {
    geometry_msgs__msg__rosidl_typesupport_introspection_c__PoseArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &geometry_msgs__msg__rosidl_typesupport_introspection_c__PoseArray_message_type_support_handle;
}

#if __cplusplus
}
#endif
