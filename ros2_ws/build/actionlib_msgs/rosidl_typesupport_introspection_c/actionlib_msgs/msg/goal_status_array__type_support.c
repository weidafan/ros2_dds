// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <actionlib_msgs/msg/goal_status_array__rosidl_typesupport_introspection_c.h>
#include "actionlib_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "actionlib_msgs/msg/goal_status_array__struct.h"

// include message dependencies
// header
#include "std_msgs/msg/header.h"
// header
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// status_list
#include "actionlib_msgs/msg/goal_status.h"
// status_list
#include "actionlib_msgs/msg/goal_status__rosidl_typesupport_introspection_c.h"

#if __cplusplus
extern "C"
{
#endif

size_t actionlib_msgs__msg__rosidl_typesupport_introspection_c__size_function__GoalStatusArray__status_list(
  const void * untyped_member)
{
  const actionlib_msgs__msg__GoalStatus__Array * member =
    (const actionlib_msgs__msg__GoalStatus__Array *)(untyped_member);
  return member->size;
}

const void * actionlib_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__GoalStatusArray__status_list(
  const void * untyped_member, size_t index)
{
  const actionlib_msgs__msg__GoalStatus__Array * member =
    (const actionlib_msgs__msg__GoalStatus__Array *)(untyped_member);
  return &member->data[index];
}

void * actionlib_msgs__msg__rosidl_typesupport_introspection_c__get_function__GoalStatusArray__status_list(
  void * untyped_member, size_t index)
{
  actionlib_msgs__msg__GoalStatus__Array * member =
    (actionlib_msgs__msg__GoalStatus__Array *)(untyped_member);
  return &member->data[index];
}

bool actionlib_msgs__msg__rosidl_typesupport_introspection_c__resize_function__GoalStatusArray__status_list(
  void * untyped_member, size_t size)
{
  actionlib_msgs__msg__GoalStatus__Array * member =
    (actionlib_msgs__msg__GoalStatus__Array *)(untyped_member);
  actionlib_msgs__msg__GoalStatus__Array__fini(member);
  return actionlib_msgs__msg__GoalStatus__Array__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember actionlib_msgs__msg__rosidl_typesupport_introspection_c__GoalStatusArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(actionlib_msgs__msg__GoalStatusArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(actionlib_msgs__msg__GoalStatusArray, status_list),  // bytes offset in struct
    NULL,  // default value
    actionlib_msgs__msg__rosidl_typesupport_introspection_c__size_function__GoalStatusArray__status_list,  // size() function pointer
    actionlib_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__GoalStatusArray__status_list,  // get_const(index) function pointer
    actionlib_msgs__msg__rosidl_typesupport_introspection_c__get_function__GoalStatusArray__status_list,  // get(index) function pointer
    actionlib_msgs__msg__rosidl_typesupport_introspection_c__resize_function__GoalStatusArray__status_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers actionlib_msgs__msg__rosidl_typesupport_introspection_c__GoalStatusArray_message_members = {
  "actionlib_msgs",  // package name
  "GoalStatusArray",  // message name
  2,  // number of fields
  sizeof(actionlib_msgs__msg__GoalStatusArray),
  actionlib_msgs__msg__rosidl_typesupport_introspection_c__GoalStatusArray_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t actionlib_msgs__msg__rosidl_typesupport_introspection_c__GoalStatusArray_message_type_support_handle = {
  0,
  &actionlib_msgs__msg__rosidl_typesupport_introspection_c__GoalStatusArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_actionlib_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, actionlib_msgs, msg, GoalStatusArray)() {
  actionlib_msgs__msg__rosidl_typesupport_introspection_c__GoalStatusArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  actionlib_msgs__msg__rosidl_typesupport_introspection_c__GoalStatusArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, actionlib_msgs, msg, GoalStatus)();
  if (!actionlib_msgs__msg__rosidl_typesupport_introspection_c__GoalStatusArray_message_type_support_handle.typesupport_identifier) {
    actionlib_msgs__msg__rosidl_typesupport_introspection_c__GoalStatusArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &actionlib_msgs__msg__rosidl_typesupport_introspection_c__GoalStatusArray_message_type_support_handle;
}

#if __cplusplus
}
#endif
