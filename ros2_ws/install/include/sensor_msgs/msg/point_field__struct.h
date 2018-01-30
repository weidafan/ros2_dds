// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__POINT_FIELD__STRUCT_H_
#define SENSOR_MSGS__MSG__POINT_FIELD__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// name
#include "rosidl_generator_c/string.h"

// constants defined in the message
// INT8
enum
{
  sensor_msgs__msg__PointField__INT8 = 1u
};
// UINT8
enum
{
  sensor_msgs__msg__PointField__UINT8 = 2u
};
// INT16
enum
{
  sensor_msgs__msg__PointField__INT16 = 3u
};
// UINT16
enum
{
  sensor_msgs__msg__PointField__UINT16 = 4u
};
// INT32
enum
{
  sensor_msgs__msg__PointField__INT32 = 5u
};
// UINT32
enum
{
  sensor_msgs__msg__PointField__UINT32 = 6u
};
// FLOAT32
enum
{
  sensor_msgs__msg__PointField__FLOAT32 = 7u
};
// FLOAT64
enum
{
  sensor_msgs__msg__PointField__FLOAT64 = 8u
};

/// Struct of message sensor_msgs/PointField
typedef struct sensor_msgs__msg__PointField
{
  rosidl_generator_c__String name;
  uint32_t offset;
  uint8_t datatype;
  uint32_t count;
} sensor_msgs__msg__PointField;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__PointField__Array
{
  sensor_msgs__msg__PointField * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__PointField__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__POINT_FIELD__STRUCT_H_
