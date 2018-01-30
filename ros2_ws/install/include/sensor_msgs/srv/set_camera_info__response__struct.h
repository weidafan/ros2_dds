// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__SRV__SET_CAMERA_INFO__RESPONSE__STRUCT_H_
#define SENSOR_MSGS__SRV__SET_CAMERA_INFO__RESPONSE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// status_message
#include "rosidl_generator_c/string.h"

/// Struct of message sensor_msgs/SetCameraInfo_Response
typedef struct sensor_msgs__srv__SetCameraInfo_Response
{
  bool success;
  rosidl_generator_c__String status_message;
} sensor_msgs__srv__SetCameraInfo_Response;

/// Struct for an array of messages
typedef struct sensor_msgs__srv__SetCameraInfo_Response__Array
{
  sensor_msgs__srv__SetCameraInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__srv__SetCameraInfo_Response__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__SRV__SET_CAMERA_INFO__RESPONSE__STRUCT_H_
