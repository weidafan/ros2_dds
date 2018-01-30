// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__IMU__STRUCT_H_
#define SENSOR_MSGS__MSG__IMU__STRUCT_H_

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
// orientation
#include "geometry_msgs/msg/quaternion__struct.h"
// angular_velocity
// linear_acceleration
#include "geometry_msgs/msg/vector3__struct.h"

/// Struct of message sensor_msgs/Imu
typedef struct sensor_msgs__msg__Imu
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Quaternion orientation;
  double orientation_covariance[9];
  geometry_msgs__msg__Vector3 angular_velocity;
  double angular_velocity_covariance[9];
  geometry_msgs__msg__Vector3 linear_acceleration;
  double linear_acceleration_covariance[9];
} sensor_msgs__msg__Imu;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__Imu__Array
{
  sensor_msgs__msg__Imu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__Imu__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__IMU__STRUCT_H_
