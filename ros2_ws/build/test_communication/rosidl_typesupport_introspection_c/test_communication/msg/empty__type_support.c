// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <test_communication/msg/empty__rosidl_typesupport_introspection_c.h>
#include "test_communication/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "test_communication/msg/empty__struct.h"

#if __cplusplus
extern "C"
{
#endif

static const rosidl_typesupport_introspection_c__MessageMembers test_communication__msg__rosidl_typesupport_introspection_c__Empty_message_members = {
  "test_communication",  // package name
  "Empty",  // message name
  0,  // number of fields
  sizeof(test_communication__msg__Empty),
  0  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t test_communication__msg__rosidl_typesupport_introspection_c__Empty_message_type_support_handle = {
  0,
  &test_communication__msg__rosidl_typesupport_introspection_c__Empty_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_communication
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_communication, msg, Empty)() {
  if (!test_communication__msg__rosidl_typesupport_introspection_c__Empty_message_type_support_handle.typesupport_identifier) {
    test_communication__msg__rosidl_typesupport_introspection_c__Empty_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &test_communication__msg__rosidl_typesupport_introspection_c__Empty_message_type_support_handle;
}

#if __cplusplus
}
#endif
