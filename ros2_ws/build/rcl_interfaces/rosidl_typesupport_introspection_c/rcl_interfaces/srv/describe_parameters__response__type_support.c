// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <rcl_interfaces/srv/describe_parameters__response__rosidl_typesupport_introspection_c.h>
#include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "rcl_interfaces/srv/describe_parameters__response__struct.h"

// include message dependencies
// descriptors
#include "rcl_interfaces/msg/parameter_descriptor.h"
// descriptors
#include "rcl_interfaces/msg/parameter_descriptor__rosidl_typesupport_introspection_c.h"

#if __cplusplus
extern "C"
{
#endif

size_t rcl_interfaces__srv__rosidl_typesupport_introspection_c__size_function__DescribeParameters_Response__descriptors(
  const void * untyped_member)
{
  const rcl_interfaces__msg__ParameterDescriptor__Array * member =
    (const rcl_interfaces__msg__ParameterDescriptor__Array *)(untyped_member);
  return member->size;
}

const void * rcl_interfaces__srv__rosidl_typesupport_introspection_c__get_const_function__DescribeParameters_Response__descriptors(
  const void * untyped_member, size_t index)
{
  const rcl_interfaces__msg__ParameterDescriptor__Array * member =
    (const rcl_interfaces__msg__ParameterDescriptor__Array *)(untyped_member);
  return &member->data[index];
}

void * rcl_interfaces__srv__rosidl_typesupport_introspection_c__get_function__DescribeParameters_Response__descriptors(
  void * untyped_member, size_t index)
{
  rcl_interfaces__msg__ParameterDescriptor__Array * member =
    (rcl_interfaces__msg__ParameterDescriptor__Array *)(untyped_member);
  return &member->data[index];
}

bool rcl_interfaces__srv__rosidl_typesupport_introspection_c__resize_function__DescribeParameters_Response__descriptors(
  void * untyped_member, size_t size)
{
  rcl_interfaces__msg__ParameterDescriptor__Array * member =
    (rcl_interfaces__msg__ParameterDescriptor__Array *)(untyped_member);
  rcl_interfaces__msg__ParameterDescriptor__Array__fini(member);
  return rcl_interfaces__msg__ParameterDescriptor__Array__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rcl_interfaces__srv__rosidl_typesupport_introspection_c__DescribeParameters_Response_message_member_array[1] = {
  {
    "descriptors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__srv__DescribeParameters_Response, descriptors),  // bytes offset in struct
    NULL,  // default value
    rcl_interfaces__srv__rosidl_typesupport_introspection_c__size_function__DescribeParameters_Response__descriptors,  // size() function pointer
    rcl_interfaces__srv__rosidl_typesupport_introspection_c__get_const_function__DescribeParameters_Response__descriptors,  // get_const(index) function pointer
    rcl_interfaces__srv__rosidl_typesupport_introspection_c__get_function__DescribeParameters_Response__descriptors,  // get(index) function pointer
    rcl_interfaces__srv__rosidl_typesupport_introspection_c__resize_function__DescribeParameters_Response__descriptors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rcl_interfaces__srv__rosidl_typesupport_introspection_c__DescribeParameters_Response_message_members = {
  "rcl_interfaces",  // package name
  "DescribeParameters_Response",  // message name
  1,  // number of fields
  sizeof(rcl_interfaces__srv__DescribeParameters_Response),
  rcl_interfaces__srv__rosidl_typesupport_introspection_c__DescribeParameters_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rcl_interfaces__srv__rosidl_typesupport_introspection_c__DescribeParameters_Response_message_type_support_handle = {
  0,
  &rcl_interfaces__srv__rosidl_typesupport_introspection_c__DescribeParameters_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, DescribeParameters_Response)() {
  rcl_interfaces__srv__rosidl_typesupport_introspection_c__DescribeParameters_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, ParameterDescriptor)();
  if (!rcl_interfaces__srv__rosidl_typesupport_introspection_c__DescribeParameters_Response_message_type_support_handle.typesupport_identifier) {
    rcl_interfaces__srv__rosidl_typesupport_introspection_c__DescribeParameters_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rcl_interfaces__srv__rosidl_typesupport_introspection_c__DescribeParameters_Response_message_type_support_handle;
}

#if __cplusplus
}
#endif
