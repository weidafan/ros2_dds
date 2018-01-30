// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef PENDULUM_MSGS__MSG__JOINT_COMMAND__STRUCT_H_
#define PENDULUM_MSGS__MSG__JOINT_COMMAND__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message pendulum_msgs/JointCommand
typedef struct pendulum_msgs__msg__JointCommand
{
  double position;
} pendulum_msgs__msg__JointCommand;

/// Struct for an array of messages
typedef struct pendulum_msgs__msg__JointCommand__Array
{
  pendulum_msgs__msg__JointCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pendulum_msgs__msg__JointCommand__Array;

#if __cplusplus
}
#endif

#endif  // PENDULUM_MSGS__MSG__JOINT_COMMAND__STRUCT_H_
