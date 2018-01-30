// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <std_msgs/msg/int64_multi_array__rosidl_typesupport_introspection_c.h>
#include "std_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "std_msgs/msg/int64_multi_array__struct.h"

// include message dependencies
// layout
#include "std_msgs/msg/multi_array_layout.h"
// layout
#include "std_msgs/msg/multi_array_layout__rosidl_typesupport_introspection_c.h"
// data
#include "rosidl_generator_c/primitives_array_functions.h"

#if __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember std_msgs__msg__rosidl_typesupport_introspection_c__Int64MultiArray_message_member_array[2] = {
  {
    "layout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_msgs__msg__Int64MultiArray, layout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_msgs__msg__Int64MultiArray, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers std_msgs__msg__rosidl_typesupport_introspection_c__Int64MultiArray_message_members = {
  "std_msgs",  // package name
  "Int64MultiArray",  // message name
  2,  // number of fields
  sizeof(std_msgs__msg__Int64MultiArray),
  std_msgs__msg__rosidl_typesupport_introspection_c__Int64MultiArray_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t std_msgs__msg__rosidl_typesupport_introspection_c__Int64MultiArray_message_type_support_handle = {
  0,
  &std_msgs__msg__rosidl_typesupport_introspection_c__Int64MultiArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_std_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int64MultiArray)() {
  std_msgs__msg__rosidl_typesupport_introspection_c__Int64MultiArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, MultiArrayLayout)();
  if (!std_msgs__msg__rosidl_typesupport_introspection_c__Int64MultiArray_message_type_support_handle.typesupport_identifier) {
    std_msgs__msg__rosidl_typesupport_introspection_c__Int64MultiArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &std_msgs__msg__rosidl_typesupport_introspection_c__Int64MultiArray_message_type_support_handle;
}

#if __cplusplus
}
#endif
