// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__TWIST__FUNCTIONS_H_
#define GEOMETRY_MSGS__MSG__TWIST__FUNCTIONS_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "geometry_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "geometry_msgs/msg/twist__struct.h"

/// Initialize geometry_msgs/Twist message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(geometry_msgs__msg__Twist)) before
 * or use geometry_msgs__msg__Twist__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
bool
geometry_msgs__msg__Twist__init(geometry_msgs__msg__Twist * msg);

/// Finalize geometry_msgs/Twist message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
void
geometry_msgs__msg__Twist__fini(geometry_msgs__msg__Twist * msg);

/// Create geometry_msgs/Twist message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls geometry_msgs__msg__Twist__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
geometry_msgs__msg__Twist *
geometry_msgs__msg__Twist__create();

/// Destroy geometry_msgs/Twist message.
/**
 * It calls geometry_msgs__msg__Twist__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
void
geometry_msgs__msg__Twist__destroy(geometry_msgs__msg__Twist * msg);


/// Initialize array of geometry_msgs/Twist messages.
/**
 * It allocates the memory for the number of elements and
 * calls geometry_msgs__msg__Twist__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
bool
geometry_msgs__msg__Twist__Array__init(geometry_msgs__msg__Twist__Array * array, size_t size);

/// Finalize array of geometry_msgs/Twist messages.
/**
 * It calls geometry_msgs__msg__Twist__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
void
geometry_msgs__msg__Twist__Array__fini(geometry_msgs__msg__Twist__Array * array);

/// Create array of geometry_msgs/Twist messages.
/**
 * It allocates the memory for the array and
 * calls geometry_msgs__msg__Twist__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
geometry_msgs__msg__Twist__Array *
geometry_msgs__msg__Twist__Array__create(size_t size);

/// Destroy array of geometry_msgs/Twist messages.
/**
 * It calls geometry_msgs__msg__Twist__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
void
geometry_msgs__msg__Twist__Array__destroy(geometry_msgs__msg__Twist__Array * array);

#if __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__TWIST__FUNCTIONS_H_
