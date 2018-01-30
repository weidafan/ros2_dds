// generated from rosidl_typesupport_introspection_c/resource/srv__type_support.c.em
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__TYPE_SUPPORT_H_
#define EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__TYPE_SUPPORT_H_

#include <rosidl_generator_c/service_type_support.h>
#include "example_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "example_interfaces/srv/add_two_ints__rosidl_typesupport_introspection_c.h"
#include "example_interfaces/srv/add_two_ints__request__rosidl_typesupport_introspection_c.h"
#include "example_interfaces/srv/add_two_ints__response__rosidl_typesupport_introspection_c.h"

#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers example_interfaces__srv__rosidl_typesupport_introspection_c__AddTwoInts_service_members = {
  "example_interfaces",  // package name
  "AddTwoInts",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // example_interfaces__srv__rosidl_typesupport_introspection_c__AddTwoInts_Request_message_type_support_handle,
  NULL  // response message
  // example_interfaces__srv__rosidl_typesupport_introspection_c__AddTwoInts_Request_message_type_support_handle
};

static rosidl_service_type_support_t example_interfaces__srv__rosidl_typesupport_introspection_c__AddTwoInts_service_type_support_handle = {
  0,
  &example_interfaces__srv__rosidl_typesupport_introspection_c__AddTwoInts_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, AddTwoInts_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, AddTwoInts_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_example_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, AddTwoInts)() {
  if (!example_interfaces__srv__rosidl_typesupport_introspection_c__AddTwoInts_service_type_support_handle.typesupport_identifier) {
    example_interfaces__srv__rosidl_typesupport_introspection_c__AddTwoInts_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)example_interfaces__srv__rosidl_typesupport_introspection_c__AddTwoInts_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, AddTwoInts_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, AddTwoInts_Response)()->data;
  }

  return &example_interfaces__srv__rosidl_typesupport_introspection_c__AddTwoInts_service_type_support_handle;
}

#endif  // EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__TYPE_SUPPORT_H_
