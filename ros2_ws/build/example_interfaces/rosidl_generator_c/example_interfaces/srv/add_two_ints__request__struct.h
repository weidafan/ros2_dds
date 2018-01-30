// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__REQUEST__STRUCT_H_
#define EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__REQUEST__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message example_interfaces/AddTwoInts_Request
typedef struct example_interfaces__srv__AddTwoInts_Request
{
  int64_t a;
  int64_t b;
} example_interfaces__srv__AddTwoInts_Request;

/// Struct for an array of messages
typedef struct example_interfaces__srv__AddTwoInts_Request__Array
{
  example_interfaces__srv__AddTwoInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__srv__AddTwoInts_Request__Array;

#if __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__REQUEST__STRUCT_H_
