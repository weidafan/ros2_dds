// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <composition/srv/load_node__request__rosidl_typesupport_introspection_c.h>
#include "composition/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "composition/srv/load_node__request__struct.h"

#if __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember composition__srv__rosidl_typesupport_introspection_c__LoadNode_Request_message_member_array[2] = {
  {
    "package_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(composition__srv__LoadNode_Request, package_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plugin_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(composition__srv__LoadNode_Request, plugin_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers composition__srv__rosidl_typesupport_introspection_c__LoadNode_Request_message_members = {
  "composition",  // package name
  "LoadNode_Request",  // message name
  2,  // number of fields
  sizeof(composition__srv__LoadNode_Request),
  composition__srv__rosidl_typesupport_introspection_c__LoadNode_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t composition__srv__rosidl_typesupport_introspection_c__LoadNode_Request_message_type_support_handle = {
  0,
  &composition__srv__rosidl_typesupport_introspection_c__LoadNode_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_composition
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, composition, srv, LoadNode_Request)() {
  if (!composition__srv__rosidl_typesupport_introspection_c__LoadNode_Request_message_type_support_handle.typesupport_identifier) {
    composition__srv__rosidl_typesupport_introspection_c__LoadNode_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &composition__srv__rosidl_typesupport_introspection_c__LoadNode_Request_message_type_support_handle;
}

#if __cplusplus
}
#endif
