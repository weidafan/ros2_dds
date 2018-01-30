// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <pendulum_msgs/msg/joint_state__rosidl_typesupport_introspection_c.h>
#include "pendulum_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "pendulum_msgs/msg/joint_state__struct.h"

#if __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember pendulum_msgs__msg__rosidl_typesupport_introspection_c__JointState_message_member_array[3] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pendulum_msgs__msg__JointState, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pendulum_msgs__msg__JointState, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "effort",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pendulum_msgs__msg__JointState, effort),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pendulum_msgs__msg__rosidl_typesupport_introspection_c__JointState_message_members = {
  "pendulum_msgs",  // package name
  "JointState",  // message name
  3,  // number of fields
  sizeof(pendulum_msgs__msg__JointState),
  pendulum_msgs__msg__rosidl_typesupport_introspection_c__JointState_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pendulum_msgs__msg__rosidl_typesupport_introspection_c__JointState_message_type_support_handle = {
  0,
  &pendulum_msgs__msg__rosidl_typesupport_introspection_c__JointState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pendulum_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pendulum_msgs, msg, JointState)() {
  if (!pendulum_msgs__msg__rosidl_typesupport_introspection_c__JointState_message_type_support_handle.typesupport_identifier) {
    pendulum_msgs__msg__rosidl_typesupport_introspection_c__JointState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pendulum_msgs__msg__rosidl_typesupport_introspection_c__JointState_message_type_support_handle;
}

#if __cplusplus
}
#endif