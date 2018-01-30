// generated from rosidl_typesupport_introspection_c/resource/srv__type_support.c.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__SRV__SET_CAMERA_INFO__TYPE_SUPPORT_H_
#define SENSOR_MSGS__SRV__SET_CAMERA_INFO__TYPE_SUPPORT_H_

#include <rosidl_generator_c/service_type_support.h>
#include "sensor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "sensor_msgs/srv/set_camera_info__rosidl_typesupport_introspection_c.h"
#include "sensor_msgs/srv/set_camera_info__request__rosidl_typesupport_introspection_c.h"
#include "sensor_msgs/srv/set_camera_info__response__rosidl_typesupport_introspection_c.h"

#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers sensor_msgs__srv__rosidl_typesupport_introspection_c__SetCameraInfo_service_members = {
  "sensor_msgs",  // package name
  "SetCameraInfo",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // sensor_msgs__srv__rosidl_typesupport_introspection_c__SetCameraInfo_Request_message_type_support_handle,
  NULL  // response message
  // sensor_msgs__srv__rosidl_typesupport_introspection_c__SetCameraInfo_Request_message_type_support_handle
};

static rosidl_service_type_support_t sensor_msgs__srv__rosidl_typesupport_introspection_c__SetCameraInfo_service_type_support_handle = {
  0,
  &sensor_msgs__srv__rosidl_typesupport_introspection_c__SetCameraInfo_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, srv, SetCameraInfo_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, srv, SetCameraInfo_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sensor_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, SetCameraInfo)() {
  if (!sensor_msgs__srv__rosidl_typesupport_introspection_c__SetCameraInfo_service_type_support_handle.typesupport_identifier) {
    sensor_msgs__srv__rosidl_typesupport_introspection_c__SetCameraInfo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)sensor_msgs__srv__rosidl_typesupport_introspection_c__SetCameraInfo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, srv, SetCameraInfo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, srv, SetCameraInfo_Response)()->data;
  }

  return &sensor_msgs__srv__rosidl_typesupport_introspection_c__SetCameraInfo_service_type_support_handle;
}

#endif  // SENSOR_MSGS__SRV__SET_CAMERA_INFO__TYPE_SUPPORT_H_
