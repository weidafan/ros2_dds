// generated from rosidl_typesupport_introspection_c/resource/srv__type_support.c.em
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__SRV__CHANGE_STATE__TYPE_SUPPORT_H_
#define LIFECYCLE_MSGS__SRV__CHANGE_STATE__TYPE_SUPPORT_H_

#include <rosidl_generator_c/service_type_support.h>
#include "lifecycle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "lifecycle_msgs/srv/change_state__rosidl_typesupport_introspection_c.h"
#include "lifecycle_msgs/srv/change_state__request__rosidl_typesupport_introspection_c.h"
#include "lifecycle_msgs/srv/change_state__response__rosidl_typesupport_introspection_c.h"

#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers lifecycle_msgs__srv__rosidl_typesupport_introspection_c__ChangeState_service_members = {
  "lifecycle_msgs",  // package name
  "ChangeState",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // lifecycle_msgs__srv__rosidl_typesupport_introspection_c__ChangeState_Request_message_type_support_handle,
  NULL  // response message
  // lifecycle_msgs__srv__rosidl_typesupport_introspection_c__ChangeState_Request_message_type_support_handle
};

static rosidl_service_type_support_t lifecycle_msgs__srv__rosidl_typesupport_introspection_c__ChangeState_service_type_support_handle = {
  0,
  &lifecycle_msgs__srv__rosidl_typesupport_introspection_c__ChangeState_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, ChangeState_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, ChangeState_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lifecycle_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, ChangeState)() {
  if (!lifecycle_msgs__srv__rosidl_typesupport_introspection_c__ChangeState_service_type_support_handle.typesupport_identifier) {
    lifecycle_msgs__srv__rosidl_typesupport_introspection_c__ChangeState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)lifecycle_msgs__srv__rosidl_typesupport_introspection_c__ChangeState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, ChangeState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, ChangeState_Response)()->data;
  }

  return &lifecycle_msgs__srv__rosidl_typesupport_introspection_c__ChangeState_service_type_support_handle;
}

#endif  // LIFECYCLE_MSGS__SRV__CHANGE_STATE__TYPE_SUPPORT_H_
