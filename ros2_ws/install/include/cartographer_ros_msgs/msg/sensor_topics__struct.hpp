// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__SENSOR_TOPICS__STRUCT_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__SENSOR_TOPICS__STRUCT_HPP_

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32) && defined(ERROR)
  #undef ERROR
#endif

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies

#ifndef _WIN32
# define DEPRECATED_cartographer_ros_msgs_msg_SensorTopics __attribute__((deprecated))
#else
# define DEPRECATED_cartographer_ros_msgs_msg_SensorTopics __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorTopics_
{
  using Type = SensorTopics_<ContainerAllocator>;

  SensorTopics_()
  {
  }
  explicit SensorTopics_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _laser_scan_topic_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _laser_scan_topic_type laser_scan_topic;
  using _multi_echo_laser_scan_topic_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _multi_echo_laser_scan_topic_type multi_echo_laser_scan_topic;
  using _point_cloud2_topic_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _point_cloud2_topic_type point_cloud2_topic;
  using _imu_topic_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _imu_topic_type imu_topic;
  using _odometry_topic_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _odometry_topic_type odometry_topic;

  // setters for named parameter idiom
  Type * set__laser_scan_topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->laser_scan_topic = _arg;
    return this;
  }
  Type * set__multi_echo_laser_scan_topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->multi_echo_laser_scan_topic = _arg;
    return this;
  }
  Type * set__point_cloud2_topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->point_cloud2_topic = _arg;
    return this;
  }
  Type * set__imu_topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->imu_topic = _arg;
    return this;
  }
  Type * set__odometry_topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->odometry_topic = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      cartographer_ros_msgs::msg::SensorTopics_<ContainerAllocator> *;
  using ConstRawPtr =
      const cartographer_ros_msgs::msg::SensorTopics_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<cartographer_ros_msgs::msg::SensorTopics_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<cartographer_ros_msgs::msg::SensorTopics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    cartographer_ros_msgs::msg::SensorTopics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<cartographer_ros_msgs::msg::SensorTopics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    cartographer_ros_msgs::msg::SensorTopics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<cartographer_ros_msgs::msg::SensorTopics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<cartographer_ros_msgs::msg::SensorTopics_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<cartographer_ros_msgs::msg::SensorTopics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_cartographer_ros_msgs_msg_SensorTopics
    std::shared_ptr<cartographer_ros_msgs::msg::SensorTopics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_cartographer_ros_msgs_msg_SensorTopics
    std::shared_ptr<cartographer_ros_msgs::msg::SensorTopics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorTopics_ & other) const
  {
    if (this->laser_scan_topic != other.laser_scan_topic) {
      return false;
    }
    if (this->multi_echo_laser_scan_topic != other.multi_echo_laser_scan_topic) {
      return false;
    }
    if (this->point_cloud2_topic != other.point_cloud2_topic) {
      return false;
    }
    if (this->imu_topic != other.imu_topic) {
      return false;
    }
    if (this->odometry_topic != other.odometry_topic) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorTopics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorTopics_

// alias to use template instance with default allocator
using SensorTopics =
    cartographer_ros_msgs::msg::SensorTopics_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__SENSOR_TOPICS__STRUCT_HPP_
