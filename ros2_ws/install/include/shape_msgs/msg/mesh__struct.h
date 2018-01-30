// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__MESH__STRUCT_H_
#define SHAPE_MSGS__MSG__MESH__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// triangles
#include "shape_msgs/msg/mesh_triangle__struct.h"
// vertices
#include "geometry_msgs/msg/point__struct.h"

/// Struct of message shape_msgs/Mesh
typedef struct shape_msgs__msg__Mesh
{
  shape_msgs__msg__MeshTriangle__Array triangles;
  geometry_msgs__msg__Point__Array vertices;
} shape_msgs__msg__Mesh;

/// Struct for an array of messages
typedef struct shape_msgs__msg__Mesh__Array
{
  shape_msgs__msg__Mesh * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shape_msgs__msg__Mesh__Array;

#if __cplusplus
}
#endif

#endif  // SHAPE_MSGS__MSG__MESH__STRUCT_H_
