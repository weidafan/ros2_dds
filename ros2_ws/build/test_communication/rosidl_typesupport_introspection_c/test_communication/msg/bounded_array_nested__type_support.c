// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <test_communication/msg/bounded_array_nested__rosidl_typesupport_introspection_c.h>
#include "test_communication/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "test_communication/msg/bounded_array_nested__struct.h"

// include message dependencies
// primitive_values
#include "test_communication/msg/primitives.h"
// primitive_values
#include "test_communication/msg/primitives__rosidl_typesupport_introspection_c.h"

#if __cplusplus
extern "C"
{
#endif

size_t test_communication__msg__rosidl_typesupport_introspection_c__size_function__BoundedArrayNested__primitive_values(
  const void * untyped_member)
{
  const test_communication__msg__Primitives__Array * member =
    (const test_communication__msg__Primitives__Array *)(untyped_member);
  return member->size;
}

const void * test_communication__msg__rosidl_typesupport_introspection_c__get_const_function__BoundedArrayNested__primitive_values(
  const void * untyped_member, size_t index)
{
  const test_communication__msg__Primitives__Array * member =
    (const test_communication__msg__Primitives__Array *)(untyped_member);
  return &member->data[index];
}

void * test_communication__msg__rosidl_typesupport_introspection_c__get_function__BoundedArrayNested__primitive_values(
  void * untyped_member, size_t index)
{
  test_communication__msg__Primitives__Array * member =
    (test_communication__msg__Primitives__Array *)(untyped_member);
  return &member->data[index];
}

bool test_communication__msg__rosidl_typesupport_introspection_c__resize_function__BoundedArrayNested__primitive_values(
  void * untyped_member, size_t size)
{
  test_communication__msg__Primitives__Array * member =
    (test_communication__msg__Primitives__Array *)(untyped_member);
  test_communication__msg__Primitives__Array__fini(member);
  return test_communication__msg__Primitives__Array__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember test_communication__msg__rosidl_typesupport_introspection_c__BoundedArrayNested_message_member_array[1] = {
  {
    "primitive_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    4,  // array size
    true,  // is upper bound
    offsetof(test_communication__msg__BoundedArrayNested, primitive_values),  // bytes offset in struct
    NULL,  // default value
    test_communication__msg__rosidl_typesupport_introspection_c__size_function__BoundedArrayNested__primitive_values,  // size() function pointer
    test_communication__msg__rosidl_typesupport_introspection_c__get_const_function__BoundedArrayNested__primitive_values,  // get_const(index) function pointer
    test_communication__msg__rosidl_typesupport_introspection_c__get_function__BoundedArrayNested__primitive_values,  // get(index) function pointer
    test_communication__msg__rosidl_typesupport_introspection_c__resize_function__BoundedArrayNested__primitive_values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers test_communication__msg__rosidl_typesupport_introspection_c__BoundedArrayNested_message_members = {
  "test_communication",  // package name
  "BoundedArrayNested",  // message name
  1,  // number of fields
  sizeof(test_communication__msg__BoundedArrayNested),
  test_communication__msg__rosidl_typesupport_introspection_c__BoundedArrayNested_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t test_communication__msg__rosidl_typesupport_introspection_c__BoundedArrayNested_message_type_support_handle = {
  0,
  &test_communication__msg__rosidl_typesupport_introspection_c__BoundedArrayNested_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_communication
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_communication, msg, BoundedArrayNested)() {
  test_communication__msg__rosidl_typesupport_introspection_c__BoundedArrayNested_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_communication, msg, Primitives)();
  if (!test_communication__msg__rosidl_typesupport_introspection_c__BoundedArrayNested_message_type_support_handle.typesupport_identifier) {
    test_communication__msg__rosidl_typesupport_introspection_c__BoundedArrayNested_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &test_communication__msg__rosidl_typesupport_introspection_c__BoundedArrayNested_message_type_support_handle;
}

#if __cplusplus
}
#endif
