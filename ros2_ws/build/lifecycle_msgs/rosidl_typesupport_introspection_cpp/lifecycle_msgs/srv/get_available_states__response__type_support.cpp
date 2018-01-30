// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// providing offsetof()
#include <cstddef>
#include <vector>

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"

#include "lifecycle_msgs/srv/get_available_states__response__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace lifecycle_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__GetAvailableStates_Response__available_states(const void * untyped_member)
{
  const std::vector<lifecycle_msgs::msg::State> * member =
    reinterpret_cast<const std::vector<lifecycle_msgs::msg::State> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetAvailableStates_Response__available_states(const void * untyped_member, size_t index)
{
  const std::vector<lifecycle_msgs::msg::State> & member =
    *reinterpret_cast<const std::vector<lifecycle_msgs::msg::State> *>(untyped_member);
  return &member[index];
}

void * get_function__GetAvailableStates_Response__available_states(void * untyped_member, size_t index)
{
  std::vector<lifecycle_msgs::msg::State> & member =
    *reinterpret_cast<std::vector<lifecycle_msgs::msg::State> *>(untyped_member);
  return &member[index];
}

void resize_function__GetAvailableStates_Response__available_states(void * untyped_member, size_t size)
{
  std::vector<lifecycle_msgs::msg::State> * member =
    reinterpret_cast<std::vector<lifecycle_msgs::msg::State> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetAvailableStates_Response_message_member_array[1] = {
  {
    "available_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<lifecycle_msgs::msg::State>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lifecycle_msgs::srv::GetAvailableStates_Response, available_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetAvailableStates_Response__available_states,  // size() function pointer
    get_const_function__GetAvailableStates_Response__available_states,  // get_const(index) function pointer
    get_function__GetAvailableStates_Response__available_states,  // get(index) function pointer
    resize_function__GetAvailableStates_Response__available_states  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetAvailableStates_Response_message_members = {
  "lifecycle_msgs",  // package name
  "GetAvailableStates_Response",  // message name
  1,  // number of fields
  sizeof(lifecycle_msgs::srv::GetAvailableStates_Response),
  GetAvailableStates_Response_message_member_array  // message members
};

static const rosidl_message_type_support_t GetAvailableStates_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetAvailableStates_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace lifecycle_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lifecycle_msgs::srv::GetAvailableStates_Response>()
{
  return &::lifecycle_msgs::srv::rosidl_typesupport_introspection_cpp::GetAvailableStates_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lifecycle_msgs, srv, GetAvailableStates_Response)() {
  return &::lifecycle_msgs::srv::rosidl_typesupport_introspection_cpp::GetAvailableStates_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
