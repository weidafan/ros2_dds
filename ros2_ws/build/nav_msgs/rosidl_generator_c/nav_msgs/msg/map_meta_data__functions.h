// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__MAP_META_DATA__FUNCTIONS_H_
#define NAV_MSGS__MSG__MAP_META_DATA__FUNCTIONS_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "nav_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "nav_msgs/msg/map_meta_data__struct.h"

/// Initialize nav_msgs/MapMetaData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(nav_msgs__msg__MapMetaData)) before
 * or use nav_msgs__msg__MapMetaData__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__msg__MapMetaData__init(nav_msgs__msg__MapMetaData * msg);

/// Finalize nav_msgs/MapMetaData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
void
nav_msgs__msg__MapMetaData__fini(nav_msgs__msg__MapMetaData * msg);

/// Create nav_msgs/MapMetaData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls nav_msgs__msg__MapMetaData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
nav_msgs__msg__MapMetaData *
nav_msgs__msg__MapMetaData__create();

/// Destroy nav_msgs/MapMetaData message.
/**
 * It calls nav_msgs__msg__MapMetaData__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
void
nav_msgs__msg__MapMetaData__destroy(nav_msgs__msg__MapMetaData * msg);


/// Initialize array of nav_msgs/MapMetaData messages.
/**
 * It allocates the memory for the number of elements and
 * calls nav_msgs__msg__MapMetaData__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__msg__MapMetaData__Array__init(nav_msgs__msg__MapMetaData__Array * array, size_t size);

/// Finalize array of nav_msgs/MapMetaData messages.
/**
 * It calls nav_msgs__msg__MapMetaData__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
void
nav_msgs__msg__MapMetaData__Array__fini(nav_msgs__msg__MapMetaData__Array * array);

/// Create array of nav_msgs/MapMetaData messages.
/**
 * It allocates the memory for the array and
 * calls nav_msgs__msg__MapMetaData__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
nav_msgs__msg__MapMetaData__Array *
nav_msgs__msg__MapMetaData__Array__create(size_t size);

/// Destroy array of nav_msgs/MapMetaData messages.
/**
 * It calls nav_msgs__msg__MapMetaData__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
void
nav_msgs__msg__MapMetaData__Array__destroy(nav_msgs__msg__MapMetaData__Array * array);

#if __cplusplus
}
#endif

#endif  // NAV_MSGS__MSG__MAP_META_DATA__FUNCTIONS_H_
