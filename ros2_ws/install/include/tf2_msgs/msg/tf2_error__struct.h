// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__MSG__TF2_ERROR__STRUCT_H_
#define TF2_MSGS__MSG__TF2_ERROR__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// error_string
#include "rosidl_generator_c/string.h"

// constants defined in the message
// NO_ERROR
enum
{
  tf2_msgs__msg__TF2Error__NO_ERROR = 0u
};
// LOOKUP_ERROR
enum
{
  tf2_msgs__msg__TF2Error__LOOKUP_ERROR = 1u
};
// CONNECTIVITY_ERROR
enum
{
  tf2_msgs__msg__TF2Error__CONNECTIVITY_ERROR = 2u
};
// EXTRAPOLATION_ERROR
enum
{
  tf2_msgs__msg__TF2Error__EXTRAPOLATION_ERROR = 3u
};
// INVALID_ARGUMENT_ERROR
enum
{
  tf2_msgs__msg__TF2Error__INVALID_ARGUMENT_ERROR = 4u
};
// TIMEOUT_ERROR
enum
{
  tf2_msgs__msg__TF2Error__TIMEOUT_ERROR = 5u
};
// TRANSFORM_ERROR
enum
{
  tf2_msgs__msg__TF2Error__TRANSFORM_ERROR = 6u
};

/// Struct of message tf2_msgs/TF2Error
typedef struct tf2_msgs__msg__TF2Error
{
  uint8_t error;
  rosidl_generator_c__String error_string;
} tf2_msgs__msg__TF2Error;

/// Struct for an array of messages
typedef struct tf2_msgs__msg__TF2Error__Array
{
  tf2_msgs__msg__TF2Error * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__msg__TF2Error__Array;

#if __cplusplus
}
#endif

#endif  // TF2_MSGS__MSG__TF2_ERROR__STRUCT_H_
