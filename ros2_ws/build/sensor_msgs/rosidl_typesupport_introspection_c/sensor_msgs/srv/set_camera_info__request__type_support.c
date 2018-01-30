// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <sensor_msgs/srv/set_camera_info__request__rosidl_typesupport_introspection_c.h>
#include "sensor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "sensor_msgs/srv/set_camera_info__request__struct.h"

// include message dependencies
// camera_info
#include "sensor_msgs/msg/camera_info.h"
// camera_info
#include "sensor_msgs/msg/camera_info__rosidl_typesupport_introspection_c.h"

#if __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember sensor_msgs__srv__rosidl_typesupport_introspection_c__SetCameraInfo_Request_message_member_array[1] = {
  {
    "camera_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__srv__SetCameraInfo_Request, camera_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sensor_msgs__srv__rosidl_typesupport_introspection_c__SetCameraInfo_Request_message_members = {
  "sensor_msgs",  // package name
  "SetCameraInfo_Request",  // message name
  1,  // number of fields
  sizeof(sensor_msgs__srv__SetCameraInfo_Request),
  sensor_msgs__srv__rosidl_typesupport_introspection_c__SetCameraInfo_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sensor_msgs__srv__rosidl_typesupport_introspection_c__SetCameraInfo_Request_message_type_support_handle = {
  0,
  &sensor_msgs__srv__rosidl_typesupport_introspection_c__SetCameraInfo_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sensor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, srv, SetCameraInfo_Request)() {
  sensor_msgs__srv__rosidl_typesupport_introspection_c__SetCameraInfo_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, CameraInfo)();
  if (!sensor_msgs__srv__rosidl_typesupport_introspection_c__SetCameraInfo_Request_message_type_support_handle.typesupport_identifier) {
    sensor_msgs__srv__rosidl_typesupport_introspection_c__SetCameraInfo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sensor_msgs__srv__rosidl_typesupport_introspection_c__SetCameraInfo_Request_message_type_support_handle;
}

#if __cplusplus
}
#endif
