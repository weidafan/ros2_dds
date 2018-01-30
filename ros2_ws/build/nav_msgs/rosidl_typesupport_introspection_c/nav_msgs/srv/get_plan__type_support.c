// generated from rosidl_typesupport_introspection_c/resource/srv__type_support.c.em
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__GET_PLAN__TYPE_SUPPORT_H_
#define NAV_MSGS__SRV__GET_PLAN__TYPE_SUPPORT_H_

#include <rosidl_generator_c/service_type_support.h>
#include "nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "nav_msgs/srv/get_plan__rosidl_typesupport_introspection_c.h"
#include "nav_msgs/srv/get_plan__request__rosidl_typesupport_introspection_c.h"
#include "nav_msgs/srv/get_plan__response__rosidl_typesupport_introspection_c.h"

#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nav_msgs__srv__rosidl_typesupport_introspection_c__GetPlan_service_members = {
  "nav_msgs",  // package name
  "GetPlan",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nav_msgs__srv__rosidl_typesupport_introspection_c__GetPlan_Request_message_type_support_handle,
  NULL  // response message
  // nav_msgs__srv__rosidl_typesupport_introspection_c__GetPlan_Request_message_type_support_handle
};

static rosidl_service_type_support_t nav_msgs__srv__rosidl_typesupport_introspection_c__GetPlan_service_type_support_handle = {
  0,
  &nav_msgs__srv__rosidl_typesupport_introspection_c__GetPlan_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, srv, GetPlan_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, srv, GetPlan_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, GetPlan)() {
  if (!nav_msgs__srv__rosidl_typesupport_introspection_c__GetPlan_service_type_support_handle.typesupport_identifier) {
    nav_msgs__srv__rosidl_typesupport_introspection_c__GetPlan_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nav_msgs__srv__rosidl_typesupport_introspection_c__GetPlan_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, srv, GetPlan_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, srv, GetPlan_Response)()->data;
  }

  return &nav_msgs__srv__rosidl_typesupport_introspection_c__GetPlan_service_type_support_handle;
}

#endif  // NAV_MSGS__SRV__GET_PLAN__TYPE_SUPPORT_H_
