// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__MESH_TRIANGLE__STRUCT_H_
#define SHAPE_MSGS__MSG__MESH_TRIANGLE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message shape_msgs/MeshTriangle
typedef struct shape_msgs__msg__MeshTriangle
{
  uint32_t vertex_indices[3];
} shape_msgs__msg__MeshTriangle;

/// Struct for an array of messages
typedef struct shape_msgs__msg__MeshTriangle__Array
{
  shape_msgs__msg__MeshTriangle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shape_msgs__msg__MeshTriangle__Array;

#if __cplusplus
}
#endif

#endif  // SHAPE_MSGS__MSG__MESH_TRIANGLE__STRUCT_H_
