// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__JOY_FEEDBACK__STRUCT_H_
#define SENSOR_MSGS__MSG__JOY_FEEDBACK__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// constants defined in the message
// TYPE_LED
enum
{
  sensor_msgs__msg__JoyFeedback__TYPE_LED = 0u
};
// TYPE_RUMBLE
enum
{
  sensor_msgs__msg__JoyFeedback__TYPE_RUMBLE = 1u
};
// TYPE_BUZZER
enum
{
  sensor_msgs__msg__JoyFeedback__TYPE_BUZZER = 2u
};

/// Struct of message sensor_msgs/JoyFeedback
typedef struct sensor_msgs__msg__JoyFeedback
{
  uint8_t type;
  uint8_t id;
  float intensity;
} sensor_msgs__msg__JoyFeedback;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__JoyFeedback__Array
{
  sensor_msgs__msg__JoyFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__JoyFeedback__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__JOY_FEEDBACK__STRUCT_H_
