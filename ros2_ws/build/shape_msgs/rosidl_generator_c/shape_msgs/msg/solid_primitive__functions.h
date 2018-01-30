// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__SOLID_PRIMITIVE__FUNCTIONS_H_
#define SHAPE_MSGS__MSG__SOLID_PRIMITIVE__FUNCTIONS_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "shape_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "shape_msgs/msg/solid_primitive__struct.h"

/// Initialize shape_msgs/SolidPrimitive message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(shape_msgs__msg__SolidPrimitive)) before
 * or use shape_msgs__msg__SolidPrimitive__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
bool
shape_msgs__msg__SolidPrimitive__init(shape_msgs__msg__SolidPrimitive * msg);

/// Finalize shape_msgs/SolidPrimitive message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
void
shape_msgs__msg__SolidPrimitive__fini(shape_msgs__msg__SolidPrimitive * msg);

/// Create shape_msgs/SolidPrimitive message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls shape_msgs__msg__SolidPrimitive__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
shape_msgs__msg__SolidPrimitive *
shape_msgs__msg__SolidPrimitive__create();

/// Destroy shape_msgs/SolidPrimitive message.
/**
 * It calls shape_msgs__msg__SolidPrimitive__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
void
shape_msgs__msg__SolidPrimitive__destroy(shape_msgs__msg__SolidPrimitive * msg);


/// Initialize array of shape_msgs/SolidPrimitive messages.
/**
 * It allocates the memory for the number of elements and
 * calls shape_msgs__msg__SolidPrimitive__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
bool
shape_msgs__msg__SolidPrimitive__Array__init(shape_msgs__msg__SolidPrimitive__Array * array, size_t size);

/// Finalize array of shape_msgs/SolidPrimitive messages.
/**
 * It calls shape_msgs__msg__SolidPrimitive__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
void
shape_msgs__msg__SolidPrimitive__Array__fini(shape_msgs__msg__SolidPrimitive__Array * array);

/// Create array of shape_msgs/SolidPrimitive messages.
/**
 * It allocates the memory for the array and
 * calls shape_msgs__msg__SolidPrimitive__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
shape_msgs__msg__SolidPrimitive__Array *
shape_msgs__msg__SolidPrimitive__Array__create(size_t size);

/// Destroy array of shape_msgs/SolidPrimitive messages.
/**
 * It calls shape_msgs__msg__SolidPrimitive__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
void
shape_msgs__msg__SolidPrimitive__Array__destroy(shape_msgs__msg__SolidPrimitive__Array * array);

#if __cplusplus
}
#endif

#endif  // SHAPE_MSGS__MSG__SOLID_PRIMITIVE__FUNCTIONS_H_
