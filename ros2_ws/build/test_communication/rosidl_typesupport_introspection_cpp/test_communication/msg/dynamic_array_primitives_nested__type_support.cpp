// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// providing offsetof()
#include <cstddef>
#include <vector>

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"

#include "test_communication/msg/dynamic_array_primitives_nested__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace test_communication
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__DynamicArrayPrimitivesNested__msgs(const void * untyped_member)
{
  const std::vector<test_communication::msg::DynamicArrayPrimitives> * member =
    reinterpret_cast<const std::vector<test_communication::msg::DynamicArrayPrimitives> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DynamicArrayPrimitivesNested__msgs(const void * untyped_member, size_t index)
{
  const std::vector<test_communication::msg::DynamicArrayPrimitives> & member =
    *reinterpret_cast<const std::vector<test_communication::msg::DynamicArrayPrimitives> *>(untyped_member);
  return &member[index];
}

void * get_function__DynamicArrayPrimitivesNested__msgs(void * untyped_member, size_t index)
{
  std::vector<test_communication::msg::DynamicArrayPrimitives> & member =
    *reinterpret_cast<std::vector<test_communication::msg::DynamicArrayPrimitives> *>(untyped_member);
  return &member[index];
}

void resize_function__DynamicArrayPrimitivesNested__msgs(void * untyped_member, size_t size)
{
  std::vector<test_communication::msg::DynamicArrayPrimitives> * member =
    reinterpret_cast<std::vector<test_communication::msg::DynamicArrayPrimitives> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DynamicArrayPrimitivesNested_message_member_array[1] = {
  {
    "msgs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_communication::msg::DynamicArrayPrimitives>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_communication::msg::DynamicArrayPrimitivesNested, msgs),  // bytes offset in struct
    nullptr,  // default value
    size_function__DynamicArrayPrimitivesNested__msgs,  // size() function pointer
    get_const_function__DynamicArrayPrimitivesNested__msgs,  // get_const(index) function pointer
    get_function__DynamicArrayPrimitivesNested__msgs,  // get(index) function pointer
    resize_function__DynamicArrayPrimitivesNested__msgs  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DynamicArrayPrimitivesNested_message_members = {
  "test_communication",  // package name
  "DynamicArrayPrimitivesNested",  // message name
  1,  // number of fields
  sizeof(test_communication::msg::DynamicArrayPrimitivesNested),
  DynamicArrayPrimitivesNested_message_member_array  // message members
};

static const rosidl_message_type_support_t DynamicArrayPrimitivesNested_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DynamicArrayPrimitivesNested_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace test_communication


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<test_communication::msg::DynamicArrayPrimitivesNested>()
{
  return &::test_communication::msg::rosidl_typesupport_introspection_cpp::DynamicArrayPrimitivesNested_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, test_communication, msg, DynamicArrayPrimitivesNested)() {
  return &::test_communication::msg::rosidl_typesupport_introspection_cpp::DynamicArrayPrimitivesNested_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
