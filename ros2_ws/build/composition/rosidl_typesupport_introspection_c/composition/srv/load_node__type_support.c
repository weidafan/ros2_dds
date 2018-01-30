// generated from rosidl_typesupport_introspection_c/resource/srv__type_support.c.em
// generated code does not contain a copyright notice

#ifndef COMPOSITION__SRV__LOAD_NODE__TYPE_SUPPORT_H_
#define COMPOSITION__SRV__LOAD_NODE__TYPE_SUPPORT_H_

#include <rosidl_generator_c/service_type_support.h>
#include "composition/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "composition/srv/load_node__rosidl_typesupport_introspection_c.h"
#include "composition/srv/load_node__request__rosidl_typesupport_introspection_c.h"
#include "composition/srv/load_node__response__rosidl_typesupport_introspection_c.h"

#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers composition__srv__rosidl_typesupport_introspection_c__LoadNode_service_members = {
  "composition",  // package name
  "LoadNode",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // composition__srv__rosidl_typesupport_introspection_c__LoadNode_Request_message_type_support_handle,
  NULL  // response message
  // composition__srv__rosidl_typesupport_introspection_c__LoadNode_Request_message_type_support_handle
};

static rosidl_service_type_support_t composition__srv__rosidl_typesupport_introspection_c__LoadNode_service_type_support_handle = {
  0,
  &composition__srv__rosidl_typesupport_introspection_c__LoadNode_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, composition, srv, LoadNode_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, composition, srv, LoadNode_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_composition
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, composition, LoadNode)() {
  if (!composition__srv__rosidl_typesupport_introspection_c__LoadNode_service_type_support_handle.typesupport_identifier) {
    composition__srv__rosidl_typesupport_introspection_c__LoadNode_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)composition__srv__rosidl_typesupport_introspection_c__LoadNode_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, composition, srv, LoadNode_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, composition, srv, LoadNode_Response)()->data;
  }

  return &composition__srv__rosidl_typesupport_introspection_c__LoadNode_service_type_support_handle;
}

#endif  // COMPOSITION__SRV__LOAD_NODE__TYPE_SUPPORT_H_
