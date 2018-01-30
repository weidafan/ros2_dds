// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <tf2_msgs/srv/frame_graph__request__rosidl_typesupport_introspection_c.h>
#include "tf2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "tf2_msgs/srv/frame_graph__request__struct.h"

#if __cplusplus
extern "C"
{
#endif

static const rosidl_typesupport_introspection_c__MessageMembers tf2_msgs__srv__rosidl_typesupport_introspection_c__FrameGraph_Request_message_members = {
  "tf2_msgs",  // package name
  "FrameGraph_Request",  // message name
  0,  // number of fields
  sizeof(tf2_msgs__srv__FrameGraph_Request),
  0  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tf2_msgs__srv__rosidl_typesupport_introspection_c__FrameGraph_Request_message_type_support_handle = {
  0,
  &tf2_msgs__srv__rosidl_typesupport_introspection_c__FrameGraph_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_msgs, srv, FrameGraph_Request)() {
  if (!tf2_msgs__srv__rosidl_typesupport_introspection_c__FrameGraph_Request_message_type_support_handle.typesupport_identifier) {
    tf2_msgs__srv__rosidl_typesupport_introspection_c__FrameGraph_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tf2_msgs__srv__rosidl_typesupport_introspection_c__FrameGraph_Request_message_type_support_handle;
}

#if __cplusplus
}
#endif
