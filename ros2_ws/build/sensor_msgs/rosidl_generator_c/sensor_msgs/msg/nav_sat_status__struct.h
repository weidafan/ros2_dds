// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__NAV_SAT_STATUS__STRUCT_H_
#define SENSOR_MSGS__MSG__NAV_SAT_STATUS__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// constants defined in the message
// STATUS_NO_FIX
enum
{
  sensor_msgs__msg__NavSatStatus__STATUS_NO_FIX = -1
};
// STATUS_FIX
enum
{
  sensor_msgs__msg__NavSatStatus__STATUS_FIX = 0
};
// STATUS_SBAS_FIX
enum
{
  sensor_msgs__msg__NavSatStatus__STATUS_SBAS_FIX = 1
};
// STATUS_GBAS_FIX
enum
{
  sensor_msgs__msg__NavSatStatus__STATUS_GBAS_FIX = 2
};
// SERVICE_GPS
enum
{
  sensor_msgs__msg__NavSatStatus__SERVICE_GPS = 1u
};
// SERVICE_GLONASS
enum
{
  sensor_msgs__msg__NavSatStatus__SERVICE_GLONASS = 2u
};
// SERVICE_COMPASS
enum
{
  sensor_msgs__msg__NavSatStatus__SERVICE_COMPASS = 4u
};
// SERVICE_GALILEO
enum
{
  sensor_msgs__msg__NavSatStatus__SERVICE_GALILEO = 8u
};

/// Struct of message sensor_msgs/NavSatStatus
typedef struct sensor_msgs__msg__NavSatStatus
{
  int8_t status;
  uint16_t service;
} sensor_msgs__msg__NavSatStatus;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__NavSatStatus__Array
{
  sensor_msgs__msg__NavSatStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__NavSatStatus__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__NAV_SAT_STATUS__STRUCT_H_
