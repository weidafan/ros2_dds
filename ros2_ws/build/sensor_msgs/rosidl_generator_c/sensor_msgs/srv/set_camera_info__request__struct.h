// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__SRV__SET_CAMERA_INFO__REQUEST__STRUCT_H_
#define SENSOR_MSGS__SRV__SET_CAMERA_INFO__REQUEST__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// camera_info
#include "sensor_msgs/msg/camera_info__struct.h"

/// Struct of message sensor_msgs/SetCameraInfo_Request
typedef struct sensor_msgs__srv__SetCameraInfo_Request
{
  sensor_msgs__msg__CameraInfo camera_info;
} sensor_msgs__srv__SetCameraInfo_Request;

/// Struct for an array of messages
typedef struct sensor_msgs__srv__SetCameraInfo_Request__Array
{
  sensor_msgs__srv__SetCameraInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__srv__SetCameraInfo_Request__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__SRV__SET_CAMERA_INFO__REQUEST__STRUCT_H_
