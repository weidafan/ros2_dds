// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef PENDULUM_MSGS__MSG__JOINT_STATE__STRUCT_H_
#define PENDULUM_MSGS__MSG__JOINT_STATE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message pendulum_msgs/JointState
typedef struct pendulum_msgs__msg__JointState
{
  double position;
  double velocity;
  double effort;
} pendulum_msgs__msg__JointState;

/// Struct for an array of messages
typedef struct pendulum_msgs__msg__JointState__Array
{
  pendulum_msgs__msg__JointState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pendulum_msgs__msg__JointState__Array;

#if __cplusplus
}
#endif

#endif  // PENDULUM_MSGS__MSG__JOINT_STATE__STRUCT_H_
