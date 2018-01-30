// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__NAV_SAT_FIX__STRUCT_H_
#define SENSOR_MSGS__MSG__NAV_SAT_FIX__STRUCT_H_

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
// status
#include "sensor_msgs/msg/nav_sat_status__struct.h"

// constants defined in the message
// COVARIANCE_TYPE_UNKNOWN
enum
{
  sensor_msgs__msg__NavSatFix__COVARIANCE_TYPE_UNKNOWN = 0u
};
// COVARIANCE_TYPE_APPROXIMATED
enum
{
  sensor_msgs__msg__NavSatFix__COVARIANCE_TYPE_APPROXIMATED = 1u
};
// COVARIANCE_TYPE_DIAGONAL_KNOWN
enum
{
  sensor_msgs__msg__NavSatFix__COVARIANCE_TYPE_DIAGONAL_KNOWN = 2u
};
// COVARIANCE_TYPE_KNOWN
enum
{
  sensor_msgs__msg__NavSatFix__COVARIANCE_TYPE_KNOWN = 3u
};

/// Struct of message sensor_msgs/NavSatFix
typedef struct sensor_msgs__msg__NavSatFix
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__NavSatStatus status;
  double latitude;
  double longitude;
  double altitude;
  double position_covariance[9];
  uint8_t position_covariance_type;
} sensor_msgs__msg__NavSatFix;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__NavSatFix__Array
{
  sensor_msgs__msg__NavSatFix * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__NavSatFix__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__NAV_SAT_FIX__STRUCT_H_
