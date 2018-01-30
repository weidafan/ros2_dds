// generated from rosidl_typesupport_introspection_c/resource/srv__type_support.c.em
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__SRV__FRAME_GRAPH__TYPE_SUPPORT_H_
#define TF2_MSGS__SRV__FRAME_GRAPH__TYPE_SUPPORT_H_

#include <rosidl_generator_c/service_type_support.h>
#include "tf2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "tf2_msgs/srv/frame_graph__rosidl_typesupport_introspection_c.h"
#include "tf2_msgs/srv/frame_graph__request__rosidl_typesupport_introspection_c.h"
#include "tf2_msgs/srv/frame_graph__response__rosidl_typesupport_introspection_c.h"

#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tf2_msgs__srv__rosidl_typesupport_introspection_c__FrameGraph_service_members = {
  "tf2_msgs",  // package name
  "FrameGraph",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tf2_msgs__srv__rosidl_typesupport_introspection_c__FrameGraph_Request_message_type_support_handle,
  NULL  // response message
  // tf2_msgs__srv__rosidl_typesupport_introspection_c__FrameGraph_Request_message_type_support_handle
};

static rosidl_service_type_support_t tf2_msgs__srv__rosidl_typesupport_introspection_c__FrameGraph_service_type_support_handle = {
  0,
  &tf2_msgs__srv__rosidl_typesupport_introspection_c__FrameGraph_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_msgs, srv, FrameGraph_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_msgs, srv, FrameGraph_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_msgs, FrameGraph)() {
  if (!tf2_msgs__srv__rosidl_typesupport_introspection_c__FrameGraph_service_type_support_handle.typesupport_identifier) {
    tf2_msgs__srv__rosidl_typesupport_introspection_c__FrameGraph_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tf2_msgs__srv__rosidl_typesupport_introspection_c__FrameGraph_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_msgs, srv, FrameGraph_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_msgs, srv, FrameGraph_Response)()->data;
  }

  return &tf2_msgs__srv__rosidl_typesupport_introspection_c__FrameGraph_service_type_support_handle;
}

#endif  // TF2_MSGS__SRV__FRAME_GRAPH__TYPE_SUPPORT_H_
