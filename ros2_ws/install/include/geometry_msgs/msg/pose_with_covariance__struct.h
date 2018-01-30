// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__POSE_WITH_COVARIANCE__STRUCT_H_
#define GEOMETRY_MSGS__MSG__POSE_WITH_COVARIANCE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// pose
#include "geometry_msgs/msg/pose__struct.h"

/// Struct of message geometry_msgs/PoseWithCovariance
typedef struct geometry_msgs__msg__PoseWithCovariance
{
  geometry_msgs__msg__Pose pose;
  double covariance[36];
} geometry_msgs__msg__PoseWithCovariance;

/// Struct for an array of messages
typedef struct geometry_msgs__msg__PoseWithCovariance__Array
{
  geometry_msgs__msg__PoseWithCovariance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__PoseWithCovariance__Array;

#if __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__POSE_WITH_COVARIANCE__STRUCT_H_
