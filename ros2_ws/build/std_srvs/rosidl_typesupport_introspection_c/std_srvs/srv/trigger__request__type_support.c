// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <std_srvs/srv/trigger__request__rosidl_typesupport_introspection_c.h>
#include "std_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "std_srvs/srv/trigger__request__struct.h"

#if __cplusplus
extern "C"
{
#endif

static const rosidl_typesupport_introspection_c__MessageMembers std_srvs__srv__rosidl_typesupport_introspection_c__Trigger_Request_message_members = {
  "std_srvs",  // package name
  "Trigger_Request",  // message name
  0,  // number of fields
  sizeof(std_srvs__srv__Trigger_Request),
  0  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t std_srvs__srv__rosidl_typesupport_introspection_c__Trigger_Request_message_type_support_handle = {
  0,
  &std_srvs__srv__rosidl_typesupport_introspection_c__Trigger_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_std_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger_Request)() {
  if (!std_srvs__srv__rosidl_typesupport_introspection_c__Trigger_Request_message_type_support_handle.typesupport_identifier) {
    std_srvs__srv__rosidl_typesupport_introspection_c__Trigger_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &std_srvs__srv__rosidl_typesupport_introspection_c__Trigger_Request_message_type_support_handle;
}

#if __cplusplus
}
#endif
