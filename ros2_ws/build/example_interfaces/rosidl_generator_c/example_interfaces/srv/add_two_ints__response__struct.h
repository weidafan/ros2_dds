// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__RESPONSE__STRUCT_H_
#define EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__RESPONSE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message example_interfaces/AddTwoInts_Response
typedef struct example_interfaces__srv__AddTwoInts_Response
{
  int64_t sum;
} example_interfaces__srv__AddTwoInts_Response;

/// Struct for an array of messages
typedef struct example_interfaces__srv__AddTwoInts_Response__Array
{
  example_interfaces__srv__AddTwoInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__srv__AddTwoInts_Response__Array;

#if __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__RESPONSE__STRUCT_H_
