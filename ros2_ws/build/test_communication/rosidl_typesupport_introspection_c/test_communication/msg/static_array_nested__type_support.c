// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <test_communication/msg/static_array_nested__rosidl_typesupport_introspection_c.h>
#include "test_communication/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "test_communication/msg/static_array_nested__struct.h"

// include message dependencies
// primitive_values
#include "test_communication/msg/primitives.h"
// primitive_values
#include "test_communication/msg/primitives__rosidl_typesupport_introspection_c.h"

#if __cplusplus
extern "C"
{
#endif

size_t test_communication__msg__rosidl_typesupport_introspection_c__size_function__StaticArrayNested__primitive_values(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * test_communication__msg__rosidl_typesupport_introspection_c__get_const_function__StaticArrayNested__primitive_values(
  const void * untyped_member, size_t index)
{
  const test_communication__msg__Primitives ** member =
    (const test_communication__msg__Primitives **)(untyped_member);
  return &(*member)[index];
}

void * test_communication__msg__rosidl_typesupport_introspection_c__get_function__StaticArrayNested__primitive_values(
  void * untyped_member, size_t index)
{
  test_communication__msg__Primitives ** member =
    (test_communication__msg__Primitives **)(untyped_member);
  return &(*member)[index];
}

static rosidl_typesupport_introspection_c__MessageMember test_communication__msg__rosidl_typesupport_introspection_c__StaticArrayNested_message_member_array[1] = {
  {
    "primitive_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(test_communication__msg__StaticArrayNested, primitive_values),  // bytes offset in struct
    NULL,  // default value
    test_communication__msg__rosidl_typesupport_introspection_c__size_function__StaticArrayNested__primitive_values,  // size() function pointer
    test_communication__msg__rosidl_typesupport_introspection_c__get_const_function__StaticArrayNested__primitive_values,  // get_const(index) function pointer
    test_communication__msg__rosidl_typesupport_introspection_c__get_function__StaticArrayNested__primitive_values,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers test_communication__msg__rosidl_typesupport_introspection_c__StaticArrayNested_message_members = {
  "test_communication",  // package name
  "StaticArrayNested",  // message name
  1,  // number of fields
  sizeof(test_communication__msg__StaticArrayNested),
  test_communication__msg__rosidl_typesupport_introspection_c__StaticArrayNested_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t test_communication__msg__rosidl_typesupport_introspection_c__StaticArrayNested_message_type_support_handle = {
  0,
  &test_communication__msg__rosidl_typesupport_introspection_c__StaticArrayNested_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_communication
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_communication, msg, StaticArrayNested)() {
  test_communication__msg__rosidl_typesupport_introspection_c__StaticArrayNested_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_communication, msg, Primitives)();
  if (!test_communication__msg__rosidl_typesupport_introspection_c__StaticArrayNested_message_type_support_handle.typesupport_identifier) {
    test_communication__msg__rosidl_typesupport_introspection_c__StaticArrayNested_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &test_communication__msg__rosidl_typesupport_introspection_c__StaticArrayNested_message_type_support_handle;
}

#if __cplusplus
}
#endif
