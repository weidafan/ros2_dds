// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__SENSOR_TOPICS__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__SENSOR_TOPICS__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// laser_scan_topic
// multi_echo_laser_scan_topic
// point_cloud2_topic
// imu_topic
// odometry_topic
#include "rosidl_generator_c/string.h"

/// Struct of message cartographer_ros_msgs/SensorTopics
typedef struct cartographer_ros_msgs__msg__SensorTopics
{
  rosidl_generator_c__String laser_scan_topic;
  rosidl_generator_c__String multi_echo_laser_scan_topic;
  rosidl_generator_c__String point_cloud2_topic;
  rosidl_generator_c__String imu_topic;
  rosidl_generator_c__String odometry_topic;
} cartographer_ros_msgs__msg__SensorTopics;

/// Struct for an array of messages
typedef struct cartographer_ros_msgs__msg__SensorTopics__Array
{
  cartographer_ros_msgs__msg__SensorTopics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__msg__SensorTopics__Array;

#if __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__SENSOR_TOPICS__STRUCT_H_
