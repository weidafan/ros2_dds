// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__JOY_FEEDBACK_ARRAY__STRUCT_H_
#define SENSOR_MSGS__MSG__JOY_FEEDBACK_ARRAY__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// array
#include "sensor_msgs/msg/joy_feedback__struct.h"

/// Struct of message sensor_msgs/JoyFeedbackArray
typedef struct sensor_msgs__msg__JoyFeedbackArray
{
  sensor_msgs__msg__JoyFeedback__Array array;
} sensor_msgs__msg__JoyFeedbackArray;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__JoyFeedbackArray__Array
{
  sensor_msgs__msg__JoyFeedbackArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__JoyFeedbackArray__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__JOY_FEEDBACK_ARRAY__STRUCT_H_
