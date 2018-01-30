// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef PENDULUM_MSGS__MSG__RTTEST_RESULTS__STRUCT_H_
#define PENDULUM_MSGS__MSG__RTTEST_RESULTS__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// stamp
#include "builtin_interfaces/msg/time__struct.h"
// command
#include "pendulum_msgs/msg/joint_command__struct.h"
// state
#include "pendulum_msgs/msg/joint_state__struct.h"

/// Struct of message pendulum_msgs/RttestResults
typedef struct pendulum_msgs__msg__RttestResults
{
  builtin_interfaces__msg__Time stamp;
  pendulum_msgs__msg__JointCommand command;
  pendulum_msgs__msg__JointState state;
  uint64_t cur_latency;
  double mean_latency;
  uint64_t min_latency;
  uint64_t max_latency;
  uint64_t minor_pagefaults;
  uint64_t major_pagefaults;
} pendulum_msgs__msg__RttestResults;

/// Struct for an array of messages
typedef struct pendulum_msgs__msg__RttestResults__Array
{
  pendulum_msgs__msg__RttestResults * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pendulum_msgs__msg__RttestResults__Array;

#if __cplusplus
}
#endif

#endif  // PENDULUM_MSGS__MSG__RTTEST_RESULTS__STRUCT_H_
