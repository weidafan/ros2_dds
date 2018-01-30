// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <cartographer_ros_msgs/srv/write_assets__request__rosidl_typesupport_introspection_c.h>
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "cartographer_ros_msgs/srv/write_assets__request__struct.h"

#if __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__WriteAssets_Request_message_member_array[1] = {
  {
    "stem",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__WriteAssets_Request, stem),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__WriteAssets_Request_message_members = {
  "cartographer_ros_msgs",  // package name
  "WriteAssets_Request",  // message name
  1,  // number of fields
  sizeof(cartographer_ros_msgs__srv__WriteAssets_Request),
  cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__WriteAssets_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__WriteAssets_Request_message_type_support_handle = {
  0,
  &cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__WriteAssets_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, WriteAssets_Request)() {
  if (!cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__WriteAssets_Request_message_type_support_handle.typesupport_identifier) {
    cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__WriteAssets_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cartographer_ros_msgs__srv__rosidl_typesupport_introspection_c__WriteAssets_Request_message_type_support_handle;
}

#if __cplusplus
}
#endif
