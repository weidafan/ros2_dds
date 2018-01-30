// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__WRITE_ASSETS__RESPONSE__FUNCTIONS_H_
#define CARTOGRAPHER_ROS_MSGS__SRV__WRITE_ASSETS__RESPONSE__FUNCTIONS_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "cartographer_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "cartographer_ros_msgs/srv/write_assets__response__struct.h"

/// Initialize cartographer_ros_msgs/WriteAssets_Response message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(cartographer_ros_msgs__srv__WriteAssets_Response)) before
 * or use cartographer_ros_msgs__srv__WriteAssets_Response__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
bool
cartographer_ros_msgs__srv__WriteAssets_Response__init(cartographer_ros_msgs__srv__WriteAssets_Response * msg);

/// Finalize cartographer_ros_msgs/WriteAssets_Response message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__srv__WriteAssets_Response__fini(cartographer_ros_msgs__srv__WriteAssets_Response * msg);

/// Create cartographer_ros_msgs/WriteAssets_Response message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls cartographer_ros_msgs__srv__WriteAssets_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
cartographer_ros_msgs__srv__WriteAssets_Response *
cartographer_ros_msgs__srv__WriteAssets_Response__create();

/// Destroy cartographer_ros_msgs/WriteAssets_Response message.
/**
 * It calls cartographer_ros_msgs__srv__WriteAssets_Response__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__srv__WriteAssets_Response__destroy(cartographer_ros_msgs__srv__WriteAssets_Response * msg);


/// Initialize array of cartographer_ros_msgs/WriteAssets_Response messages.
/**
 * It allocates the memory for the number of elements and
 * calls cartographer_ros_msgs__srv__WriteAssets_Response__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
bool
cartographer_ros_msgs__srv__WriteAssets_Response__Array__init(cartographer_ros_msgs__srv__WriteAssets_Response__Array * array, size_t size);

/// Finalize array of cartographer_ros_msgs/WriteAssets_Response messages.
/**
 * It calls cartographer_ros_msgs__srv__WriteAssets_Response__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__srv__WriteAssets_Response__Array__fini(cartographer_ros_msgs__srv__WriteAssets_Response__Array * array);

/// Create array of cartographer_ros_msgs/WriteAssets_Response messages.
/**
 * It allocates the memory for the array and
 * calls cartographer_ros_msgs__srv__WriteAssets_Response__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
cartographer_ros_msgs__srv__WriteAssets_Response__Array *
cartographer_ros_msgs__srv__WriteAssets_Response__Array__create(size_t size);

/// Destroy array of cartographer_ros_msgs/WriteAssets_Response messages.
/**
 * It calls cartographer_ros_msgs__srv__WriteAssets_Response__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__srv__WriteAssets_Response__Array__destroy(cartographer_ros_msgs__srv__WriteAssets_Response__Array * array);

#if __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__WRITE_ASSETS__RESPONSE__FUNCTIONS_H_
