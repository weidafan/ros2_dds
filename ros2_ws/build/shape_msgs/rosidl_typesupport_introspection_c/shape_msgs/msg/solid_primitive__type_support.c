// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <shape_msgs/msg/solid_primitive__rosidl_typesupport_introspection_c.h>
#include "shape_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "shape_msgs/msg/solid_primitive__struct.h"

// include message dependencies
// dimensions
#include "rosidl_generator_c/primitives_array_functions.h"

#if __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember shape_msgs__msg__rosidl_typesupport_introspection_c__SolidPrimitive_message_member_array[2] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shape_msgs__msg__SolidPrimitive, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dimensions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(shape_msgs__msg__SolidPrimitive, dimensions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers shape_msgs__msg__rosidl_typesupport_introspection_c__SolidPrimitive_message_members = {
  "shape_msgs",  // package name
  "SolidPrimitive",  // message name
  2,  // number of fields
  sizeof(shape_msgs__msg__SolidPrimitive),
  shape_msgs__msg__rosidl_typesupport_introspection_c__SolidPrimitive_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t shape_msgs__msg__rosidl_typesupport_introspection_c__SolidPrimitive_message_type_support_handle = {
  0,
  &shape_msgs__msg__rosidl_typesupport_introspection_c__SolidPrimitive_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_shape_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_msgs, msg, SolidPrimitive)() {
  if (!shape_msgs__msg__rosidl_typesupport_introspection_c__SolidPrimitive_message_type_support_handle.typesupport_identifier) {
    shape_msgs__msg__rosidl_typesupport_introspection_c__SolidPrimitive_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &shape_msgs__msg__rosidl_typesupport_introspection_c__SolidPrimitive_message_type_support_handle;
}

#if __cplusplus
}
#endif
