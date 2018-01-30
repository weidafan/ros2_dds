// generated from rosidl_typesupport_introspection_c/resource/srv__type_support.c.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__FINISH_TRAJECTORY__TYPE_SUPPORT_H_
#define CARTOGRAPHER_ROS_MSGS__SRV__FINISH_TRAJECTORY__TYPE_SUPPORT_H_

#include <rosidl_generator_c/service_type_support.h>
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "cartographer_ros_msgs/srv/finish_trajectory__rosidl_typesupport_introspection_c.h"
#include "cartographer_ros_msgs/srv/finish_trajectory__request__rosidl_typesupport_introspection_c.h"
#include "cartographer_ros_msgs/srv/finish_trajectory__response__rosidl_typesupport_introspection_c.h"

#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__FinishTrajectory_service_members = {
  "cartographer_ros_msgs",  // package name
  "FinishTrajectory",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__FinishTrajectory_Request_message_type_support_handle,
  NULL  // response message
  // cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__FinishTrajectory_Request_message_type_support_handle
};

static rosidl_service_type_support_t cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__FinishTrajectory_service_type_support_handle = {
  0,
  &cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__FinishTrajectory_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, FinishTrajectory_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, FinishTrajectory_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, FinishTrajectory)() {
  if (!cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__FinishTrajectory_service_type_support_handle.typesupport_identifier) {
    cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__FinishTrajectory_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__FinishTrajectory_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, FinishTrajectory_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, FinishTrajectory_Response)()->data;
  }

  return &cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__FinishTrajectory_service_type_support_handle;
}

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__FINISH_TRAJECTORY__TYPE_SUPPORT_H_
