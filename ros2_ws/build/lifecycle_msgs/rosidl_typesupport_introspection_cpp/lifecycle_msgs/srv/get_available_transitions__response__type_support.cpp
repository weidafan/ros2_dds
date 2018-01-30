// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// providing offsetof()
#include <cstddef>
#include <vector>

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"

#include "lifecycle_msgs/srv/get_available_transitions__response__struct.hpp"
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

size_t size_function__GetAvailableTransitions_Response__available_transitions(const void * untyped_member)
{
  const std::vector<lifecycle_msgs::msg::TransitionDescription> * member =
    reinterpret_cast<const std::vector<lifecycle_msgs::msg::TransitionDescription> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetAvailableTransitions_Response__available_transitions(const void * untyped_member, size_t index)
{
  const std::vector<lifecycle_msgs::msg::TransitionDescription> & member =
    *reinterpret_cast<const std::vector<lifecycle_msgs::msg::TransitionDescription> *>(untyped_member);
  return &member[index];
}

void * get_function__GetAvailableTransitions_Response__available_transitions(void * untyped_member, size_t index)
{
  std::vector<lifecycle_msgs::msg::TransitionDescription> & member =
    *reinterpret_cast<std::vector<lifecycle_msgs::msg::TransitionDescription> *>(untyped_member);
  return &member[index];
}

void resize_function__GetAvailableTransitions_Response__available_transitions(void * untyped_member, size_t size)
{
  std::vector<lifecycle_msgs::msg::TransitionDescription> * member =
    reinterpret_cast<std::vector<lifecycle_msgs::msg::TransitionDescription> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetAvailableTransitions_Response_message_member_array[1] = {
  {
    "available_transitions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<lifecycle_msgs::msg::TransitionDescription>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lifecycle_msgs::srv::GetAvailableTransitions_Response, available_transitions),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetAvailableTransitions_Response__available_transitions,  // size() function pointer
    get_const_function__GetAvailableTransitions_Response__available_transitions,  // get_const(index) function pointer
    get_function__GetAvailableTransitions_Response__available_transitions,  // get(index) function pointer
    resize_function__GetAvailableTransitions_Response__available_transitions  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetAvailableTransitions_Response_message_members = {
  "lifecycle_msgs",  // package name
  "GetAvailableTransitions_Response",  // message name
  1,  // number of fields
  sizeof(lifecycle_msgs::srv::GetAvailableTransitions_Response),
  GetAvailableTransitions_Response_message_member_array  // message members
};

static const rosidl_message_type_support_t GetAvailableTransitions_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetAvailableTransitions_Response_message_members,
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
get_message_type_support_handle<lifecycle_msgs::srv::GetAvailableTransitions_Response>()
{
  return &::lifecycle_msgs::srv::rosidl_typesupport_introspection_cpp::GetAvailableTransitions_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lifecycle_msgs, srv, GetAvailableTransitions_Response)() {
  return &::lifecycle_msgs::srv::rosidl_typesupport_introspection_cpp::GetAvailableTransitions_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
