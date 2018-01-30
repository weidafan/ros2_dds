// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <cartographer_ros_msgs/msg/submap_list__rosidl_typesupport_introspection_c.h>
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "cartographer_ros_msgs/msg/submap_list__struct.h"

// include message dependencies
// header
#include "std_msgs/msg/header.h"
// header
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// trajectory
#include "cartographer_ros_msgs/msg/trajectory_submap_list.h"
// trajectory
#include "cartographer_ros_msgs/msg/trajectory_submap_list__rosidl_typesupport_introspection_c.h"

#if __cplusplus
extern "C"
{
#endif

size_t cartographer_ros_msgs__msg__rosidl_typesupport_introspection_c__size_function__SubmapList__trajectory(
  const void * untyped_member)
{
  const cartographer_ros_msgs__msg__TrajectorySubmapList__Array * member =
    (const cartographer_ros_msgs__msg__TrajectorySubmapList__Array *)(untyped_member);
  return member->size;
}

const void * cartographer_ros_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__SubmapList__trajectory(
  const void * untyped_member, size_t index)
{
  const cartographer_ros_msgs__msg__TrajectorySubmapList__Array * member =
    (const cartographer_ros_msgs__msg__TrajectorySubmapList__Array *)(untyped_member);
  return &member->data[index];
}

void * cartographer_ros_msgs__msg__rosidl_typesupport_introspection_c__get_function__SubmapList__trajectory(
  void * untyped_member, size_t index)
{
  cartographer_ros_msgs__msg__TrajectorySubmapList__Array * member =
    (cartographer_ros_msgs__msg__TrajectorySubmapList__Array *)(untyped_member);
  return &member->data[index];
}

bool cartographer_ros_msgs__msg__rosidl_typesupport_introspection_c__resize_function__SubmapList__trajectory(
  void * untyped_member, size_t size)
{
  cartographer_ros_msgs__msg__TrajectorySubmapList__Array * member =
    (cartographer_ros_msgs__msg__TrajectorySubmapList__Array *)(untyped_member);
  cartographer_ros_msgs__msg__TrajectorySubmapList__Array__fini(member);
  return cartographer_ros_msgs__msg__TrajectorySubmapList__Array__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cartographer_ros_msgs__msg__rosidl_typesupport_introspection_c__SubmapList_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__SubmapList, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__SubmapList, trajectory),  // bytes offset in struct
    NULL,  // default value
    cartographer_ros_msgs__msg__rosidl_typesupport_introspection_c__size_function__SubmapList__trajectory,  // size() function pointer
    cartographer_ros_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__SubmapList__trajectory,  // get_const(index) function pointer
    cartographer_ros_msgs__msg__rosidl_typesupport_introspection_c__get_function__SubmapList__trajectory,  // get(index) function pointer
    cartographer_ros_msgs__msg__rosidl_typesupport_introspection_c__resize_function__SubmapList__trajectory  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cartographer_ros_msgs__msg__rosidl_typesupport_introspection_c__SubmapList_message_members = {
  "cartographer_ros_msgs",  // package name
  "SubmapList",  // message name
  2,  // number of fields
  sizeof(cartographer_ros_msgs__msg__SubmapList),
  cartographer_ros_msgs__msg__rosidl_typesupport_introspection_c__SubmapList_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cartographer_ros_msgs__msg__rosidl_typesupport_introspection_c__SubmapList_message_type_support_handle = {
  0,
  &cartographer_ros_msgs__msg__rosidl_typesupport_introspection_c__SubmapList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, SubmapList)() {
  cartographer_ros_msgs__msg__rosidl_typesupport_introspection_c__SubmapList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  cartographer_ros_msgs__msg__rosidl_typesupport_introspection_c__SubmapList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, TrajectorySubmapList)();
  if (!cartographer_ros_msgs__msg__rosidl_typesupport_introspection_c__SubmapList_message_type_support_handle.typesupport_identifier) {
    cartographer_ros_msgs__msg__rosidl_typesupport_introspection_c__SubmapList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cartographer_ros_msgs__msg__rosidl_typesupport_introspection_c__SubmapList_message_type_support_handle;
}

#if __cplusplus
}
#endif
