// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <diagnostic_msgs/msg/diagnostic_status__rosidl_typesupport_introspection_c.h>
#include "diagnostic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "diagnostic_msgs/msg/diagnostic_status__struct.h"

// include message dependencies
// values
#include "diagnostic_msgs/msg/key_value.h"
// values
#include "diagnostic_msgs/msg/key_value__rosidl_typesupport_introspection_c.h"

#if __cplusplus
extern "C"
{
#endif

size_t diagnostic_msgs__msg__rosidl_typesupport_introspection_c__size_function__DiagnosticStatus__values(
  const void * untyped_member)
{
  const diagnostic_msgs__msg__KeyValue__Array * member =
    (const diagnostic_msgs__msg__KeyValue__Array *)(untyped_member);
  return member->size;
}

const void * diagnostic_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__DiagnosticStatus__values(
  const void * untyped_member, size_t index)
{
  const diagnostic_msgs__msg__KeyValue__Array * member =
    (const diagnostic_msgs__msg__KeyValue__Array *)(untyped_member);
  return &member->data[index];
}

void * diagnostic_msgs__msg__rosidl_typesupport_introspection_c__get_function__DiagnosticStatus__values(
  void * untyped_member, size_t index)
{
  diagnostic_msgs__msg__KeyValue__Array * member =
    (diagnostic_msgs__msg__KeyValue__Array *)(untyped_member);
  return &member->data[index];
}

bool diagnostic_msgs__msg__rosidl_typesupport_introspection_c__resize_function__DiagnosticStatus__values(
  void * untyped_member, size_t size)
{
  diagnostic_msgs__msg__KeyValue__Array * member =
    (diagnostic_msgs__msg__KeyValue__Array *)(untyped_member);
  diagnostic_msgs__msg__KeyValue__Array__fini(member);
  return diagnostic_msgs__msg__KeyValue__Array__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember diagnostic_msgs__msg__rosidl_typesupport_introspection_c__DiagnosticStatus_message_member_array[5] = {
  {
    "level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BYTE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__msg__DiagnosticStatus, level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__msg__DiagnosticStatus, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__msg__DiagnosticStatus, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hardware_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__msg__DiagnosticStatus, hardware_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__msg__DiagnosticStatus, values),  // bytes offset in struct
    NULL,  // default value
    diagnostic_msgs__msg__rosidl_typesupport_introspection_c__size_function__DiagnosticStatus__values,  // size() function pointer
    diagnostic_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__DiagnosticStatus__values,  // get_const(index) function pointer
    diagnostic_msgs__msg__rosidl_typesupport_introspection_c__get_function__DiagnosticStatus__values,  // get(index) function pointer
    diagnostic_msgs__msg__rosidl_typesupport_introspection_c__resize_function__DiagnosticStatus__values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers diagnostic_msgs__msg__rosidl_typesupport_introspection_c__DiagnosticStatus_message_members = {
  "diagnostic_msgs",  // package name
  "DiagnosticStatus",  // message name
  5,  // number of fields
  sizeof(diagnostic_msgs__msg__DiagnosticStatus),
  diagnostic_msgs__msg__rosidl_typesupport_introspection_c__DiagnosticStatus_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t diagnostic_msgs__msg__rosidl_typesupport_introspection_c__DiagnosticStatus_message_type_support_handle = {
  0,
  &diagnostic_msgs__msg__rosidl_typesupport_introspection_c__DiagnosticStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_diagnostic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticStatus)() {
  diagnostic_msgs__msg__rosidl_typesupport_introspection_c__DiagnosticStatus_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, KeyValue)();
  if (!diagnostic_msgs__msg__rosidl_typesupport_introspection_c__DiagnosticStatus_message_type_support_handle.typesupport_identifier) {
    diagnostic_msgs__msg__rosidl_typesupport_introspection_c__DiagnosticStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &diagnostic_msgs__msg__rosidl_typesupport_introspection_c__DiagnosticStatus_message_type_support_handle;
}

#if __cplusplus
}
#endif
