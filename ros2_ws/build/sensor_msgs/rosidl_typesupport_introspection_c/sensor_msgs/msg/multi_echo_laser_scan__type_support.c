// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <sensor_msgs/msg/multi_echo_laser_scan__rosidl_typesupport_introspection_c.h>
#include "sensor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "sensor_msgs/msg/multi_echo_laser_scan__struct.h"

// include message dependencies
// header
#include "std_msgs/msg/header.h"
// header
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// ranges
// intensities
#include "sensor_msgs/msg/laser_echo.h"
// ranges
// intensities
#include "sensor_msgs/msg/laser_echo__rosidl_typesupport_introspection_c.h"

#if __cplusplus
extern "C"
{
#endif

size_t sensor_msgs__msg__rosidl_typesupport_introspection_c__size_function__MultiEchoLaserScan__ranges(
  const void * untyped_member)
{
  const sensor_msgs__msg__LaserEcho__Array * member =
    (const sensor_msgs__msg__LaserEcho__Array *)(untyped_member);
  return member->size;
}

const void * sensor_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__MultiEchoLaserScan__ranges(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__LaserEcho__Array * member =
    (const sensor_msgs__msg__LaserEcho__Array *)(untyped_member);
  return &member->data[index];
}

void * sensor_msgs__msg__rosidl_typesupport_introspection_c__get_function__MultiEchoLaserScan__ranges(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__LaserEcho__Array * member =
    (sensor_msgs__msg__LaserEcho__Array *)(untyped_member);
  return &member->data[index];
}

bool sensor_msgs__msg__rosidl_typesupport_introspection_c__resize_function__MultiEchoLaserScan__ranges(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__LaserEcho__Array * member =
    (sensor_msgs__msg__LaserEcho__Array *)(untyped_member);
  sensor_msgs__msg__LaserEcho__Array__fini(member);
  return sensor_msgs__msg__LaserEcho__Array__init(member, size);
}

size_t sensor_msgs__msg__rosidl_typesupport_introspection_c__size_function__MultiEchoLaserScan__intensities(
  const void * untyped_member)
{
  const sensor_msgs__msg__LaserEcho__Array * member =
    (const sensor_msgs__msg__LaserEcho__Array *)(untyped_member);
  return member->size;
}

const void * sensor_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__MultiEchoLaserScan__intensities(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__LaserEcho__Array * member =
    (const sensor_msgs__msg__LaserEcho__Array *)(untyped_member);
  return &member->data[index];
}

void * sensor_msgs__msg__rosidl_typesupport_introspection_c__get_function__MultiEchoLaserScan__intensities(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__LaserEcho__Array * member =
    (sensor_msgs__msg__LaserEcho__Array *)(untyped_member);
  return &member->data[index];
}

bool sensor_msgs__msg__rosidl_typesupport_introspection_c__resize_function__MultiEchoLaserScan__intensities(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__LaserEcho__Array * member =
    (sensor_msgs__msg__LaserEcho__Array *)(untyped_member);
  sensor_msgs__msg__LaserEcho__Array__fini(member);
  return sensor_msgs__msg__LaserEcho__Array__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sensor_msgs__msg__rosidl_typesupport_introspection_c__MultiEchoLaserScan_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__MultiEchoLaserScan, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__MultiEchoLaserScan, angle_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__MultiEchoLaserScan, angle_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle_increment",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__MultiEchoLaserScan, angle_increment),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_increment",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__MultiEchoLaserScan, time_increment),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scan_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__MultiEchoLaserScan, scan_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "range_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__MultiEchoLaserScan, range_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "range_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__MultiEchoLaserScan, range_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ranges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__MultiEchoLaserScan, ranges),  // bytes offset in struct
    NULL,  // default value
    sensor_msgs__msg__rosidl_typesupport_introspection_c__size_function__MultiEchoLaserScan__ranges,  // size() function pointer
    sensor_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__MultiEchoLaserScan__ranges,  // get_const(index) function pointer
    sensor_msgs__msg__rosidl_typesupport_introspection_c__get_function__MultiEchoLaserScan__ranges,  // get(index) function pointer
    sensor_msgs__msg__rosidl_typesupport_introspection_c__resize_function__MultiEchoLaserScan__ranges  // resize(index) function pointer
  },
  {
    "intensities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__MultiEchoLaserScan, intensities),  // bytes offset in struct
    NULL,  // default value
    sensor_msgs__msg__rosidl_typesupport_introspection_c__size_function__MultiEchoLaserScan__intensities,  // size() function pointer
    sensor_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__MultiEchoLaserScan__intensities,  // get_const(index) function pointer
    sensor_msgs__msg__rosidl_typesupport_introspection_c__get_function__MultiEchoLaserScan__intensities,  // get(index) function pointer
    sensor_msgs__msg__rosidl_typesupport_introspection_c__resize_function__MultiEchoLaserScan__intensities  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sensor_msgs__msg__rosidl_typesupport_introspection_c__MultiEchoLaserScan_message_members = {
  "sensor_msgs",  // package name
  "MultiEchoLaserScan",  // message name
  10,  // number of fields
  sizeof(sensor_msgs__msg__MultiEchoLaserScan),
  sensor_msgs__msg__rosidl_typesupport_introspection_c__MultiEchoLaserScan_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sensor_msgs__msg__rosidl_typesupport_introspection_c__MultiEchoLaserScan_message_type_support_handle = {
  0,
  &sensor_msgs__msg__rosidl_typesupport_introspection_c__MultiEchoLaserScan_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sensor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, MultiEchoLaserScan)() {
  sensor_msgs__msg__rosidl_typesupport_introspection_c__MultiEchoLaserScan_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  sensor_msgs__msg__rosidl_typesupport_introspection_c__MultiEchoLaserScan_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, LaserEcho)();
  sensor_msgs__msg__rosidl_typesupport_introspection_c__MultiEchoLaserScan_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, LaserEcho)();
  if (!sensor_msgs__msg__rosidl_typesupport_introspection_c__MultiEchoLaserScan_message_type_support_handle.typesupport_identifier) {
    sensor_msgs__msg__rosidl_typesupport_introspection_c__MultiEchoLaserScan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sensor_msgs__msg__rosidl_typesupport_introspection_c__MultiEchoLaserScan_message_type_support_handle;
}

#if __cplusplus
}
#endif
