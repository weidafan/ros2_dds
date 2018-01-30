// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__MAGNETIC_FIELD__STRUCT_H_
#define SENSOR_MSGS__MSG__MAGNETIC_FIELD__STRUCT_H_

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
// magnetic_field
#include "geometry_msgs/msg/vector3__struct.h"

/// Struct of message sensor_msgs/MagneticField
typedef struct sensor_msgs__msg__MagneticField
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 magnetic_field;
  double magnetic_field_covariance[9];
} sensor_msgs__msg__MagneticField;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__MagneticField__Array
{
  sensor_msgs__msg__MagneticField * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__MagneticField__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__MAGNETIC_FIELD__STRUCT_H_
