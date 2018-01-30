// generated from rosidl_typesupport_introspection_c/resource/srv__type_support.c.em
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__TRIGGER__TYPE_SUPPORT_H_
#define STD_SRVS__SRV__TRIGGER__TYPE_SUPPORT_H_

#include <rosidl_generator_c/service_type_support.h>
#include "std_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "std_srvs/srv/trigger__rosidl_typesupport_introspection_c.h"
#include "std_srvs/srv/trigger__request__rosidl_typesupport_introspection_c.h"
#include "std_srvs/srv/trigger__response__rosidl_typesupport_introspection_c.h"

#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers std_srvs__srv__rosidl_typesupport_introspection_c__Trigger_service_members = {
  "std_srvs",  // package name
  "Trigger",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // std_srvs__srv__rosidl_typesupport_introspection_c__Trigger_Request_message_type_support_handle,
  NULL  // response message
  // std_srvs__srv__rosidl_typesupport_introspection_c__Trigger_Request_message_type_support_handle
};

static rosidl_service_type_support_t std_srvs__srv__rosidl_typesupport_introspection_c__Trigger_service_type_support_handle = {
  0,
  &std_srvs__srv__rosidl_typesupport_introspection_c__Trigger_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_std_srvs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, Trigger)() {
  if (!std_srvs__srv__rosidl_typesupport_introspection_c__Trigger_service_type_support_handle.typesupport_identifier) {
    std_srvs__srv__rosidl_typesupport_introspection_c__Trigger_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)std_srvs__srv__rosidl_typesupport_introspection_c__Trigger_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger_Response)()->data;
  }

  return &std_srvs__srv__rosidl_typesupport_introspection_c__Trigger_service_type_support_handle;
}

#endif  // STD_SRVS__SRV__TRIGGER__TYPE_SUPPORT_H_
