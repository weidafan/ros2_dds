// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <diagnostic_msgs/srv/self_test__response__rosidl_typesupport_introspection_c.h>
#include "diagnostic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "diagnostic_msgs/srv/self_test__response__struct.h"

// include message dependencies
// status
#include "diagnostic_msgs/msg/diagnostic_status.h"
// status
#include "diagnostic_msgs/msg/diagnostic_status__rosidl_typesupport_introspection_c.h"

#if __cplusplus
extern "C"
{
#endif

size_t diagnostic_msgs__srv__rosidl_typesupport_introspection_c__size_function__SelfTest_Response__status(
  const void * untyped_member)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Array * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Array *)(untyped_member);
  return member->size;
}

const void * diagnostic_msgs__srv__rosidl_typesupport_introspection_c__get_const_function__SelfTest_Response__status(
  const void * untyped_member, size_t index)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Array * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Array *)(untyped_member);
  return &member->data[index];
}

void * diagnostic_msgs__srv__rosidl_typesupport_introspection_c__get_function__SelfTest_Response__status(
  void * untyped_member, size_t index)
{
  diagnostic_msgs__msg__DiagnosticStatus__Array * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Array *)(untyped_member);
  return &member->data[index];
}

bool diagnostic_msgs__srv__rosidl_typesupport_introspection_c__resize_function__SelfTest_Response__status(
  void * untyped_member, size_t size)
{
  diagnostic_msgs__msg__DiagnosticStatus__Array * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Array *)(untyped_member);
  diagnostic_msgs__msg__DiagnosticStatus__Array__fini(member);
  return diagnostic_msgs__msg__DiagnosticStatus__Array__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember diagnostic_msgs__srv__rosidl_typesupport_introspection_c__SelfTest_Response_message_member_array[3] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__srv__SelfTest_Response, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "passed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BYTE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__srv__SelfTest_Response, passed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__srv__SelfTest_Response, status),  // bytes offset in struct
    NULL,  // default value
    diagnostic_msgs__srv__rosidl_typesupport_introspection_c__size_function__SelfTest_Response__status,  // size() function pointer
    diagnostic_msgs__srv__rosidl_typesupport_introspection_c__get_const_function__SelfTest_Response__status,  // get_const(index) function pointer
    diagnostic_msgs__srv__rosidl_typesupport_introspection_c__get_function__SelfTest_Response__status,  // get(index) function pointer
    diagnostic_msgs__srv__rosidl_typesupport_introspection_c__resize_function__SelfTest_Response__status  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers diagnostic_msgs__srv__rosidl_typesupport_introspection_c__SelfTest_Response_message_members = {
  "diagnostic_msgs",  // package name
  "SelfTest_Response",  // message name
  3,  // number of fields
  sizeof(diagnostic_msgs__srv__SelfTest_Response),
  diagnostic_msgs__srv__rosidl_typesupport_introspection_c__SelfTest_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t diagnostic_msgs__srv__rosidl_typesupport_introspection_c__SelfTest_Response_message_type_support_handle = {
  0,
  &diagnostic_msgs__srv__rosidl_typesupport_introspection_c__SelfTest_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_diagnostic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, srv, SelfTest_Response)() {
  diagnostic_msgs__srv__rosidl_typesupport_introspection_c__SelfTest_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticStatus)();
  if (!diagnostic_msgs__srv__rosidl_typesupport_introspection_c__SelfTest_Response_message_type_support_handle.typesupport_identifier) {
    diagnostic_msgs__srv__rosidl_typesupport_introspection_c__SelfTest_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &diagnostic_msgs__srv__rosidl_typesupport_introspection_c__SelfTest_Response_message_type_support_handle;
}

#if __cplusplus
}
#endif
