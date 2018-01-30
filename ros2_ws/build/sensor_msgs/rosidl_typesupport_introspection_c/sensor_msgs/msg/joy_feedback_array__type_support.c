// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <sensor_msgs/msg/joy_feedback_array__rosidl_typesupport_introspection_c.h>
#include "sensor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "sensor_msgs/msg/joy_feedback_array__struct.h"

// include message dependencies
// array
#include "sensor_msgs/msg/joy_feedback.h"
// array
#include "sensor_msgs/msg/joy_feedback__rosidl_typesupport_introspection_c.h"

#if __cplusplus
extern "C"
{
#endif

size_t sensor_msgs__msg__rosidl_typesupport_introspection_c__size_function__JoyFeedbackArray__array(
  const void * untyped_member)
{
  const sensor_msgs__msg__JoyFeedback__Array * member =
    (const sensor_msgs__msg__JoyFeedback__Array *)(untyped_member);
  return member->size;
}

const void * sensor_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__JoyFeedbackArray__array(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__JoyFeedback__Array * member =
    (const sensor_msgs__msg__JoyFeedback__Array *)(untyped_member);
  return &member->data[index];
}

void * sensor_msgs__msg__rosidl_typesupport_introspection_c__get_function__JoyFeedbackArray__array(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__JoyFeedback__Array * member =
    (sensor_msgs__msg__JoyFeedback__Array *)(untyped_member);
  return &member->data[index];
}

bool sensor_msgs__msg__rosidl_typesupport_introspection_c__resize_function__JoyFeedbackArray__array(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__JoyFeedback__Array * member =
    (sensor_msgs__msg__JoyFeedback__Array *)(untyped_member);
  sensor_msgs__msg__JoyFeedback__Array__fini(member);
  return sensor_msgs__msg__JoyFeedback__Array__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sensor_msgs__msg__rosidl_typesupport_introspection_c__JoyFeedbackArray_message_member_array[1] = {
  {
    "array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__JoyFeedbackArray, array),  // bytes offset in struct
    NULL,  // default value
    sensor_msgs__msg__rosidl_typesupport_introspection_c__size_function__JoyFeedbackArray__array,  // size() function pointer
    sensor_msgs__msg__rosidl_typesupport_introspection_c__get_const_function__JoyFeedbackArray__array,  // get_const(index) function pointer
    sensor_msgs__msg__rosidl_typesupport_introspection_c__get_function__JoyFeedbackArray__array,  // get(index) function pointer
    sensor_msgs__msg__rosidl_typesupport_introspection_c__resize_function__JoyFeedbackArray__array  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sensor_msgs__msg__rosidl_typesupport_introspection_c__JoyFeedbackArray_message_members = {
  "sensor_msgs",  // package name
  "JoyFeedbackArray",  // message name
  1,  // number of fields
  sizeof(sensor_msgs__msg__JoyFeedbackArray),
  sensor_msgs__msg__rosidl_typesupport_introspection_c__JoyFeedbackArray_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sensor_msgs__msg__rosidl_typesupport_introspection_c__JoyFeedbackArray_message_type_support_handle = {
  0,
  &sensor_msgs__msg__rosidl_typesupport_introspection_c__JoyFeedbackArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sensor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JoyFeedbackArray)() {
  sensor_msgs__msg__rosidl_typesupport_introspection_c__JoyFeedbackArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JoyFeedback)();
  if (!sensor_msgs__msg__rosidl_typesupport_introspection_c__JoyFeedbackArray_message_type_support_handle.typesupport_identifier) {
    sensor_msgs__msg__rosidl_typesupport_introspection_c__JoyFeedbackArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sensor_msgs__msg__rosidl_typesupport_introspection_c__JoyFeedbackArray_message_type_support_handle;
}

#if __cplusplus
}
#endif
