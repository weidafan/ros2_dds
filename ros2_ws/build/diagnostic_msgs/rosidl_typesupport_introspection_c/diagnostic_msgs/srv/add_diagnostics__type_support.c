// generated from rosidl_typesupport_introspection_c/resource/srv__type_support.c.em
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__ADD_DIAGNOSTICS__TYPE_SUPPORT_H_
#define DIAGNOSTIC_MSGS__SRV__ADD_DIAGNOSTICS__TYPE_SUPPORT_H_

#include <rosidl_generator_c/service_type_support.h>
#include "diagnostic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "diagnostic_msgs/srv/add_diagnostics__rosidl_typesupport_introspection_c.h"
#include "diagnostic_msgs/srv/add_diagnostics__request__rosidl_typesupport_introspection_c.h"
#include "diagnostic_msgs/srv/add_diagnostics__response__rosidl_typesupport_introspection_c.h"

#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers diagnostic_msgs__srv__rosidl_typesupport_introspection_c__AddDiagnostics_service_members = {
  "diagnostic_msgs",  // package name
  "AddDiagnostics",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // diagnostic_msgs__srv__rosidl_typesupport_introspection_c__AddDiagnostics_Request_message_type_support_handle,
  NULL  // response message
  // diagnostic_msgs__srv__rosidl_typesupport_introspection_c__AddDiagnostics_Request_message_type_support_handle
};

static rosidl_service_type_support_t diagnostic_msgs__srv__rosidl_typesupport_introspection_c__AddDiagnostics_service_type_support_handle = {
  0,
  &diagnostic_msgs__srv__rosidl_typesupport_introspection_c__AddDiagnostics_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, srv, AddDiagnostics_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, srv, AddDiagnostics_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_diagnostic_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, AddDiagnostics)() {
  if (!diagnostic_msgs__srv__rosidl_typesupport_introspection_c__AddDiagnostics_service_type_support_handle.typesupport_identifier) {
    diagnostic_msgs__srv__rosidl_typesupport_introspection_c__AddDiagnostics_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)diagnostic_msgs__srv__rosidl_typesupport_introspection_c__AddDiagnostics_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, srv, AddDiagnostics_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, srv, AddDiagnostics_Response)()->data;
  }

  return &diagnostic_msgs__srv__rosidl_typesupport_introspection_c__AddDiagnostics_service_type_support_handle;
}

#endif  // DIAGNOSTIC_MSGS__SRV__ADD_DIAGNOSTICS__TYPE_SUPPORT_H_
