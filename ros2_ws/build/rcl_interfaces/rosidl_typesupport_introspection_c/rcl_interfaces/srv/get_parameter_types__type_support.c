// generated from rosidl_typesupport_introspection_c/resource/srv__type_support.c.em
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__GET_PARAMETER_TYPES__TYPE_SUPPORT_H_
#define RCL_INTERFACES__SRV__GET_PARAMETER_TYPES__TYPE_SUPPORT_H_

#include <rosidl_generator_c/service_type_support.h>
#include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rcl_interfaces/srv/get_parameter_types__rosidl_typesupport_introspection_c.h"
#include "rcl_interfaces/srv/get_parameter_types__request__rosidl_typesupport_introspection_c.h"
#include "rcl_interfaces/srv/get_parameter_types__response__rosidl_typesupport_introspection_c.h"

#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rcl_interfaces__srv__rosidl_typesupport_introspection_c__GetParameterTypes_service_members = {
  "rcl_interfaces",  // package name
  "GetParameterTypes",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rcl_interfaces__srv__rosidl_typesupport_introspection_c__GetParameterTypes_Request_message_type_support_handle,
  NULL  // response message
  // rcl_interfaces__srv__rosidl_typesupport_introspection_c__GetParameterTypes_Request_message_type_support_handle
};

static rosidl_service_type_support_t rcl_interfaces__srv__rosidl_typesupport_introspection_c__GetParameterTypes_service_type_support_handle = {
  0,
  &rcl_interfaces__srv__rosidl_typesupport_introspection_c__GetParameterTypes_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetParameterTypes_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetParameterTypes_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, GetParameterTypes)() {
  if (!rcl_interfaces__srv__rosidl_typesupport_introspection_c__GetParameterTypes_service_type_support_handle.typesupport_identifier) {
    rcl_interfaces__srv__rosidl_typesupport_introspection_c__GetParameterTypes_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rcl_interfaces__srv__rosidl_typesupport_introspection_c__GetParameterTypes_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetParameterTypes_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetParameterTypes_Response)()->data;
  }

  return &rcl_interfaces__srv__rosidl_typesupport_introspection_c__GetParameterTypes_service_type_support_handle;
}

#endif  // RCL_INTERFACES__SRV__GET_PARAMETER_TYPES__TYPE_SUPPORT_H_
