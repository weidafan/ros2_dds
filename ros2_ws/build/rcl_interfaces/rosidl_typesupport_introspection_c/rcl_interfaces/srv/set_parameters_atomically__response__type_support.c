// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <rcl_interfaces/srv/set_parameters_atomically__response__rosidl_typesupport_introspection_c.h>
#include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "rcl_interfaces/srv/set_parameters_atomically__response__struct.h"

// include message dependencies
// result
#include "rcl_interfaces/msg/set_parameters_result.h"
// result
#include "rcl_interfaces/msg/set_parameters_result__rosidl_typesupport_introspection_c.h"

#if __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember rcl_interfaces__srv__rosidl_typesupport_introspection_c__SetParametersAtomically_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__srv__SetParametersAtomically_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rcl_interfaces__srv__rosidl_typesupport_introspection_c__SetParametersAtomically_Response_message_members = {
  "rcl_interfaces",  // package name
  "SetParametersAtomically_Response",  // message name
  1,  // number of fields
  sizeof(rcl_interfaces__srv__SetParametersAtomically_Response),
  rcl_interfaces__srv__rosidl_typesupport_introspection_c__SetParametersAtomically_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rcl_interfaces__srv__rosidl_typesupport_introspection_c__SetParametersAtomically_Response_message_type_support_handle = {
  0,
  &rcl_interfaces__srv__rosidl_typesupport_introspection_c__SetParametersAtomically_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, SetParametersAtomically_Response)() {
  rcl_interfaces__srv__rosidl_typesupport_introspection_c__SetParametersAtomically_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, SetParametersResult)();
  if (!rcl_interfaces__srv__rosidl_typesupport_introspection_c__SetParametersAtomically_Response_message_type_support_handle.typesupport_identifier) {
    rcl_interfaces__srv__rosidl_typesupport_introspection_c__SetParametersAtomically_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rcl_interfaces__srv__rosidl_typesupport_introspection_c__SetParametersAtomically_Response_message_type_support_handle;
}

#if __cplusplus
}
#endif
