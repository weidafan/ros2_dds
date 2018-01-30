// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <test_communication/msg/dynamic_array_primitives_nested__rosidl_typesupport_introspection_c.h>
#include "test_communication/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "test_communication/msg/dynamic_array_primitives_nested__struct.h"

// include message dependencies
// msgs
#include "test_communication/msg/dynamic_array_primitives.h"
// msgs
#include "test_communication/msg/dynamic_array_primitives__rosidl_typesupport_introspection_c.h"

#if __cplusplus
extern "C"
{
#endif

size_t test_communication__msg__rosidl_typesupport_introspection_c__size_function__DynamicArrayPrimitivesNested__msgs(
  const void * untyped_member)
{
  const test_communication__msg__DynamicArrayPrimitives__Array * member =
    (const test_communication__msg__DynamicArrayPrimitives__Array *)(untyped_member);
  return member->size;
}

const void * test_communication__msg__rosidl_typesupport_introspection_c__get_const_function__DynamicArrayPrimitivesNested__msgs(
  const void * untyped_member, size_t index)
{
  const test_communication__msg__DynamicArrayPrimitives__Array * member =
    (const test_communication__msg__DynamicArrayPrimitives__Array *)(untyped_member);
  return &member->data[index];
}

void * test_communication__msg__rosidl_typesupport_introspection_c__get_function__DynamicArrayPrimitivesNested__msgs(
  void * untyped_member, size_t index)
{
  test_communication__msg__DynamicArrayPrimitives__Array * member =
    (test_communication__msg__DynamicArrayPrimitives__Array *)(untyped_member);
  return &member->data[index];
}

bool test_communication__msg__rosidl_typesupport_introspection_c__resize_function__DynamicArrayPrimitivesNested__msgs(
  void * untyped_member, size_t size)
{
  test_communication__msg__DynamicArrayPrimitives__Array * member =
    (test_communication__msg__DynamicArrayPrimitives__Array *)(untyped_member);
  test_communication__msg__DynamicArrayPrimitives__Array__fini(member);
  return test_communication__msg__DynamicArrayPrimitives__Array__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember test_communication__msg__rosidl_typesupport_introspection_c__DynamicArrayPrimitivesNested_message_member_array[1] = {
  {
    "msgs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_communication__msg__DynamicArrayPrimitivesNested, msgs),  // bytes offset in struct
    NULL,  // default value
    test_communication__msg__rosidl_typesupport_introspection_c__size_function__DynamicArrayPrimitivesNested__msgs,  // size() function pointer
    test_communication__msg__rosidl_typesupport_introspection_c__get_const_function__DynamicArrayPrimitivesNested__msgs,  // get_const(index) function pointer
    test_communication__msg__rosidl_typesupport_introspection_c__get_function__DynamicArrayPrimitivesNested__msgs,  // get(index) function pointer
    test_communication__msg__rosidl_typesupport_introspection_c__resize_function__DynamicArrayPrimitivesNested__msgs  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers test_communication__msg__rosidl_typesupport_introspection_c__DynamicArrayPrimitivesNested_message_members = {
  "test_communication",  // package name
  "DynamicArrayPrimitivesNested",  // message name
  1,  // number of fields
  sizeof(test_communication__msg__DynamicArrayPrimitivesNested),
  test_communication__msg__rosidl_typesupport_introspection_c__DynamicArrayPrimitivesNested_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t test_communication__msg__rosidl_typesupport_introspection_c__DynamicArrayPrimitivesNested_message_type_support_handle = {
  0,
  &test_communication__msg__rosidl_typesupport_introspection_c__DynamicArrayPrimitivesNested_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_communication
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_communication, msg, DynamicArrayPrimitivesNested)() {
  test_communication__msg__rosidl_typesupport_introspection_c__DynamicArrayPrimitivesNested_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_communication, msg, DynamicArrayPrimitives)();
  if (!test_communication__msg__rosidl_typesupport_introspection_c__DynamicArrayPrimitivesNested_message_type_support_handle.typesupport_identifier) {
    test_communication__msg__rosidl_typesupport_introspection_c__DynamicArrayPrimitivesNested_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &test_communication__msg__rosidl_typesupport_introspection_c__DynamicArrayPrimitivesNested_message_type_support_handle;
}

#if __cplusplus
}
#endif
