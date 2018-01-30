// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// providing offsetof()
#include <cstddef>
#include <vector>

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"

#include "cartographer_ros_msgs/msg/trajectory_submap_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cartographer_ros_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__TrajectorySubmapList__submap(const void * untyped_member)
{
  const std::vector<cartographer_ros_msgs::msg::SubmapEntry> * member =
    reinterpret_cast<const std::vector<cartographer_ros_msgs::msg::SubmapEntry> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectorySubmapList__submap(const void * untyped_member, size_t index)
{
  const std::vector<cartographer_ros_msgs::msg::SubmapEntry> & member =
    *reinterpret_cast<const std::vector<cartographer_ros_msgs::msg::SubmapEntry> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectorySubmapList__submap(void * untyped_member, size_t index)
{
  std::vector<cartographer_ros_msgs::msg::SubmapEntry> & member =
    *reinterpret_cast<std::vector<cartographer_ros_msgs::msg::SubmapEntry> *>(untyped_member);
  return &member[index];
}

void resize_function__TrajectorySubmapList__submap(void * untyped_member, size_t size)
{
  std::vector<cartographer_ros_msgs::msg::SubmapEntry> * member =
    reinterpret_cast<std::vector<cartographer_ros_msgs::msg::SubmapEntry> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectorySubmapList_message_member_array[1] = {
  {
    "submap",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cartographer_ros_msgs::msg::SubmapEntry>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs::msg::TrajectorySubmapList, submap),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectorySubmapList__submap,  // size() function pointer
    get_const_function__TrajectorySubmapList__submap,  // get_const(index) function pointer
    get_function__TrajectorySubmapList__submap,  // get(index) function pointer
    resize_function__TrajectorySubmapList__submap  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectorySubmapList_message_members = {
  "cartographer_ros_msgs",  // package name
  "TrajectorySubmapList",  // message name
  1,  // number of fields
  sizeof(cartographer_ros_msgs::msg::TrajectorySubmapList),
  TrajectorySubmapList_message_member_array  // message members
};

static const rosidl_message_type_support_t TrajectorySubmapList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectorySubmapList_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cartographer_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartographer_ros_msgs::msg::TrajectorySubmapList>()
{
  return &::cartographer_ros_msgs::msg::rosidl_typesupport_introspection_cpp::TrajectorySubmapList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartographer_ros_msgs, msg, TrajectorySubmapList)() {
  return &::cartographer_ros_msgs::msg::rosidl_typesupport_introspection_cpp::TrajectorySubmapList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
