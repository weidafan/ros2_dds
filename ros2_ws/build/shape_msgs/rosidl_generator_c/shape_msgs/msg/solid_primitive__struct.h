// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__SOLID_PRIMITIVE__STRUCT_H_
#define SHAPE_MSGS__MSG__SOLID_PRIMITIVE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// dimensions
#include "rosidl_generator_c/primitives_array.h"

// constants defined in the message
// BOX
enum
{
  shape_msgs__msg__SolidPrimitive__BOX = 1u
};
// SPHERE
enum
{
  shape_msgs__msg__SolidPrimitive__SPHERE = 2u
};
// CYLINDER
enum
{
  shape_msgs__msg__SolidPrimitive__CYLINDER = 3u
};
// CONE
enum
{
  shape_msgs__msg__SolidPrimitive__CONE = 4u
};
// BOX_X
enum
{
  shape_msgs__msg__SolidPrimitive__BOX_X = 0u
};
// BOX_Y
enum
{
  shape_msgs__msg__SolidPrimitive__BOX_Y = 1u
};
// BOX_Z
enum
{
  shape_msgs__msg__SolidPrimitive__BOX_Z = 2u
};
// SPHERE_RADIUS
enum
{
  shape_msgs__msg__SolidPrimitive__SPHERE_RADIUS = 0u
};
// CYLINDER_HEIGHT
enum
{
  shape_msgs__msg__SolidPrimitive__CYLINDER_HEIGHT = 0u
};
// CYLINDER_RADIUS
enum
{
  shape_msgs__msg__SolidPrimitive__CYLINDER_RADIUS = 1u
};
// CONE_HEIGHT
enum
{
  shape_msgs__msg__SolidPrimitive__CONE_HEIGHT = 0u
};
// CONE_RADIUS
enum
{
  shape_msgs__msg__SolidPrimitive__CONE_RADIUS = 1u
};

// constants for array fields with an upper bound
// dimensions
enum
{
  shape_msgs__msg__SolidPrimitive__dimensions__MAX_SIZE = 3
};

/// Struct of message shape_msgs/SolidPrimitive
typedef struct shape_msgs__msg__SolidPrimitive
{
  uint8_t type;
  rosidl_generator_c__float64__Array dimensions;
} shape_msgs__msg__SolidPrimitive;

/// Struct for an array of messages
typedef struct shape_msgs__msg__SolidPrimitive__Array
{
  shape_msgs__msg__SolidPrimitive * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shape_msgs__msg__SolidPrimitive__Array;

#if __cplusplus
}
#endif

#endif  // SHAPE_MSGS__MSG__SOLID_PRIMITIVE__STRUCT_H_
