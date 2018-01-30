// generated from rosidl_typesupport_introspection_c/resource/srv__type_support.c.em
// generated code does not contain a copyright notice

#ifndef TEST_COMMUNICATION__SRV__PRIMITIVES__TYPE_SUPPORT_H_
#define TEST_COMMUNICATION__SRV__PRIMITIVES__TYPE_SUPPORT_H_

#include <rosidl_generator_c/service_type_support.h>
#include "test_communication/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "test_communication/srv/primitives__rosidl_typesupport_introspection_c.h"
#include "test_communication/srv/primitives__request__rosidl_typesupport_introspection_c.h"
#include "test_communication/srv/primitives__response__rosidl_typesupport_introspection_c.h"

#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers test_communication__srv__rosidl_typesupport_introspection_c__Primitives_service_members = {
  "test_communication",  // package name
  "Primitives",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // test_communication__srv__rosidl_typesupport_introspection_c__Primitives_Request_message_type_support_handle,
  NULL  // response message
  // test_communication__srv__rosidl_typesupport_introspection_c__Primitives_Request_message_type_support_handle
};

static rosidl_service_type_support_t test_communication__srv__rosidl_typesupport_introspection_c__Primitives_service_type_support_handle = {
  0,
  &test_communication__srv__rosidl_typesupport_introspection_c__Primitives_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_communication, srv, Primitives_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_communication, srv, Primitives_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_communication
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_communication, Primitives)() {
  if (!test_communication__srv__rosidl_typesupport_introspection_c__Primitives_service_type_support_handle.typesupport_identifier) {
    test_communication__srv__rosidl_typesupport_introspection_c__Primitives_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)test_communication__srv__rosidl_typesupport_introspection_c__Primitives_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_communication, srv, Primitives_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_communication, srv, Primitives_Response)()->data;
  }

  return &test_communication__srv__rosidl_typesupport_introspection_c__Primitives_service_type_support_handle;
}

#endif  // TEST_COMMUNICATION__SRV__PRIMITIVES__TYPE_SUPPORT_H_
