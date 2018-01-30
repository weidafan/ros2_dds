// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <diagnostic_msgs/srv/self_test__request__rosidl_typesupport_introspection_c.h>
#include "diagnostic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "diagnostic_msgs/srv/self_test__request__struct.h"

#if __cplusplus
extern "C"
{
#endif

static const rosidl_typesupport_introspection_c__MessageMembers diagnostic_msgs__srv__rosidl_typesupport_introspection_c__SelfTest_Request_message_members = {
  "diagnostic_msgs",  // package name
  "SelfTest_Request",  // message name
  0,  // number of fields
  sizeof(diagnostic_msgs__srv__SelfTest_Request),
  0  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t diagnostic_msgs__srv__rosidl_typesupport_introspection_c__SelfTest_Request_message_type_support_handle = {
  0,
  &diagnostic_msgs__srv__rosidl_typesupport_introspection_c__SelfTest_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_diagnostic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, srv, SelfTest_Request)() {
  if (!diagnostic_msgs__srv__rosidl_typesupport_introspection_c__SelfTest_Request_message_type_support_handle.typesupport_identifier) {
    diagnostic_msgs__srv__rosidl_typesupport_introspection_c__SelfTest_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &diagnostic_msgs__srv__rosidl_typesupport_introspection_c__SelfTest_Request_message_type_support_handle;
}

#if __cplusplus
}
#endif
