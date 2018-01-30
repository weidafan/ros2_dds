// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__JOINT_STATE__STRUCT_H_
#define SENSOR_MSGS__MSG__JOINT_STATE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// header
#include "std_msgs/msg/header__struct.h"
// name
#include "rosidl_generator_c/string.h"
// position
// velocity
// effort
#include "rosidl_generator_c/primitives_array.h"

/// Struct of message sensor_msgs/JointState
typedef struct sensor_msgs__msg__JointState
{
  std_msgs__msg__Header header;
  rosidl_generator_c__String__Array name;
  rosidl_generator_c__float64__Array position;
  rosidl_generator_c__float64__Array velocity;
  rosidl_generator_c__float64__Array effort;
} sensor_msgs__msg__JointState;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__JointState__Array
{
  sensor_msgs__msg__JointState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__JointState__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__JOINT_STATE__STRUCT_H_
