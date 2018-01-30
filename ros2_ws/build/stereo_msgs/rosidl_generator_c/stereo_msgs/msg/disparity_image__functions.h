// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef STEREO_MSGS__MSG__DISPARITY_IMAGE__FUNCTIONS_H_
#define STEREO_MSGS__MSG__DISPARITY_IMAGE__FUNCTIONS_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "stereo_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "stereo_msgs/msg/disparity_image__struct.h"

/// Initialize stereo_msgs/DisparityImage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(stereo_msgs__msg__DisparityImage)) before
 * or use stereo_msgs__msg__DisparityImage__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stereo_msgs
bool
stereo_msgs__msg__DisparityImage__init(stereo_msgs__msg__DisparityImage * msg);

/// Finalize stereo_msgs/DisparityImage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stereo_msgs
void
stereo_msgs__msg__DisparityImage__fini(stereo_msgs__msg__DisparityImage * msg);

/// Create stereo_msgs/DisparityImage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls stereo_msgs__msg__DisparityImage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stereo_msgs
stereo_msgs__msg__DisparityImage *
stereo_msgs__msg__DisparityImage__create();

/// Destroy stereo_msgs/DisparityImage message.
/**
 * It calls stereo_msgs__msg__DisparityImage__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stereo_msgs
void
stereo_msgs__msg__DisparityImage__destroy(stereo_msgs__msg__DisparityImage * msg);


/// Initialize array of stereo_msgs/DisparityImage messages.
/**
 * It allocates the memory for the number of elements and
 * calls stereo_msgs__msg__DisparityImage__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stereo_msgs
bool
stereo_msgs__msg__DisparityImage__Array__init(stereo_msgs__msg__DisparityImage__Array * array, size_t size);

/// Finalize array of stereo_msgs/DisparityImage messages.
/**
 * It calls stereo_msgs__msg__DisparityImage__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stereo_msgs
void
stereo_msgs__msg__DisparityImage__Array__fini(stereo_msgs__msg__DisparityImage__Array * array);

/// Create array of stereo_msgs/DisparityImage messages.
/**
 * It allocates the memory for the array and
 * calls stereo_msgs__msg__DisparityImage__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stereo_msgs
stereo_msgs__msg__DisparityImage__Array *
stereo_msgs__msg__DisparityImage__Array__create(size_t size);

/// Destroy array of stereo_msgs/DisparityImage messages.
/**
 * It calls stereo_msgs__msg__DisparityImage__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stereo_msgs
void
stereo_msgs__msg__DisparityImage__Array__destroy(stereo_msgs__msg__DisparityImage__Array * array);

#if __cplusplus
}
#endif

#endif  // STEREO_MSGS__MSG__DISPARITY_IMAGE__FUNCTIONS_H_
