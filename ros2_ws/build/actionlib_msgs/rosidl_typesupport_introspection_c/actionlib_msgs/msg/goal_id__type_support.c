// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <actionlib_msgs/msg/goal_id__rosidl_typesupport_introspection_c.h>
#include "actionlib_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "actionlib_msgs/msg/goal_id__struct.h"

// include message dependencies
// stamp
#include "builtin_interfaces/msg/time.h"
// stamp
#include "builtin_interfaces/msg/time__rosidl_typesupport_introspection_c.h"

#if __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember actionlib_msgs__msg__rosidl_typesupport_introspection_c__GoalID_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(actionlib_msgs__msg__GoalID, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(actionlib_msgs__msg__GoalID, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers actionlib_msgs__msg__rosidl_typesupport_introspection_c__GoalID_message_members = {
  "actionlib_msgs",  // package name
  "GoalID",  // message name
  2,  // number of fields
  sizeof(actionlib_msgs__msg__GoalID),
  actionlib_msgs__msg__rosidl_typesupport_introspection_c__GoalID_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t actionlib_msgs__msg__rosidl_typesupport_introspection_c__GoalID_message_type_support_handle = {
  0,
  &actionlib_msgs__msg__rosidl_typesupport_introspection_c__GoalID_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_actionlib_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, actionlib_msgs, msg, GoalID)() {
  actionlib_msgs__msg__rosidl_typesupport_introspection_c__GoalID_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!actionlib_msgs__msg__rosidl_typesupport_introspection_c__GoalID_message_type_support_handle.typesupport_identifier) {
    actionlib_msgs__msg__rosidl_typesupport_introspection_c__GoalID_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &actionlib_msgs__msg__rosidl_typesupport_introspection_c__GoalID_message_type_support_handle;
}

#if __cplusplus
}
#endif
