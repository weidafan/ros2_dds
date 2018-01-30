// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <cartographer_ros_msgs/srv/finish_trajectory__response__rosidl_typesupport_introspection_c.h>
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "cartographer_ros_msgs/srv/finish_trajectory__response__struct.h"

#if __cplusplus
extern "C"
{
#endif

static const rosidl_typesupport_introspection_c__MessageMembers cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__FinishTrajectory_Response_message_members = {
  "cartographer_ros_msgs",  // package name
  "FinishTrajectory_Response",  // message name
  0,  // number of fields
  sizeof(cartographer_ros_msgs__srv__FinishTrajectory_Response),
  0  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__FinishTrajectory_Response_message_type_support_handle = {
  0,
  &cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__FinishTrajectory_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, FinishTrajectory_Response)() {
  if (!cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__FinishTrajectory_Response_message_type_support_handle.typesupport_identifier) {
    cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__FinishTrajectory_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__FinishTrajectory_Response_message_type_support_handle;
}

#if __cplusplus
}
#endif
