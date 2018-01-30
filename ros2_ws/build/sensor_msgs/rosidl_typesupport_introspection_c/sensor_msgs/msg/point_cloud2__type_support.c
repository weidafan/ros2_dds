// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <sensor_msgs/msg/point_cloud2__rosidl_typesupport_introspection_c.h>
#include "sensor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "sensor_msgs/msg/point_cloud2__struct.h"

// include message dependencies
// header
#include "std_msgs/msg/header.h"
// header
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// fields
#include "sensor_msgs/msg/point_field.h"
// fields
#include "sensor_msgs/msg/point_field__rosidl_typesupport_introspection_c.h"
// data
#include "rosidl_generator_c/primitives_array_functions.h"

#if __cplusplus
extern "C"
{
#endif

size_t sensor_msgs__msg__rosidl_typesupport_introspection_c__size_function__PointCloud2__fields(
  const void * untyped_member)
{
  const sensor_msgs__msg__PointField__Array * member =
    (const sensor_msgs__msg__PointField__Array *)(untyped_member);
  return member->size;
}

const void * sensor_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__PointCloud2__fields(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__PointField__Array * member =
    (const sensor_msgs__msg__PointField__Array *)(untyped_member);
  return &member->data[index];
}

void * sensor_msgs__msg__rosidl_typesupport_introspection_c__get_function__PointCloud2__fields(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__PointField__Array * member =
    (sensor_msgs__msg__PointField__Array *)(untyped_member);
  return &member->data[index];
}

bool sensor_msgs__msg__rosidl_typesupport_introspection_c__resize_function__PointCloud2__fields(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__PointField__Array * member =
    (sensor_msgs__msg__PointField__Array *)(untyped_member);
  sensor_msgs__msg__PointField__Array__fini(member);
  return sensor_msgs__msg__PointField__Array__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sensor_msgs__msg__rosidl_typesupport_introspection_c__PointCloud2_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__PointCloud2, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__PointCloud2, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__PointCloud2, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fields",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__PointCloud2, fields),  // bytes offset in struct
    NULL,  // default value
    sensor_msgs__msg__rosidl_typesupport_introspection_c__size_function__PointCloud2__fields,  // size() function pointer
    sensor_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__PointCloud2__fields,  // get_const(index) function pointer
    sensor_msgs__msg__rosidl_typesupport_introspection_c__get_function__PointCloud2__fields,  // get(index) function pointer
    sensor_msgs__msg__rosidl_typesupport_introspection_c__resize_function__PointCloud2__fields  // resize(index) function pointer
  },
  {
    "is_bigendian",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOL,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__PointCloud2, is_bigendian),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "point_step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__PointCloud2, point_step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "row_step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__PointCloud2, row_step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__PointCloud2, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_dense",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOL,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__PointCloud2, is_dense),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sensor_msgs__msg__rosidl_typesupport_introspection_c__PointCloud2_message_members = {
  "sensor_msgs",  // package name
  "PointCloud2",  // message name
  9,  // number of fields
  sizeof(sensor_msgs__msg__PointCloud2),
  sensor_msgs__msg__rosidl_typesupport_introspection_c__PointCloud2_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sensor_msgs__msg__rosidl_typesupport_introspection_c__PointCloud2_message_type_support_handle = {
  0,
  &sensor_msgs__msg__rosidl_typesupport_introspection_c__PointCloud2_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sensor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)() {
  sensor_msgs__msg__rosidl_typesupport_introspection_c__PointCloud2_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  sensor_msgs__msg__rosidl_typesupport_introspection_c__PointCloud2_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointField)();
  if (!sensor_msgs__msg__rosidl_typesupport_introspection_c__PointCloud2_message_type_support_handle.typesupport_identifier) {
    sensor_msgs__msg__rosidl_typesupport_introspection_c__PointCloud2_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sensor_msgs__msg__rosidl_typesupport_introspection_c__PointCloud2_message_type_support_handle;
}

#if __cplusplus
}
#endif
