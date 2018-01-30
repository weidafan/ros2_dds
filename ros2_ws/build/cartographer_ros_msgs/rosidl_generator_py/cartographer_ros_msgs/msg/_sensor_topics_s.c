// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <cartographer_ros_msgs/msg/sensor_topics__struct.h>
#include <cartographer_ros_msgs/msg/sensor_topics__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * cartographer_ros_msgs_sensor_topics__convert_from_py(PyObject * _pymsg)
{
  cartographer_ros_msgs__msg__SensorTopics * ros_message = cartographer_ros_msgs__msg__SensorTopics__create();
  (void)ros_message;
  char full_classname_dest[54];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "cartographer_ros_msgs.msg._sensor_topics.SensorTopics",
      full_classname_dest, 53) == 0);

  PyObject * pylaser_scan_topic = PyObject_GetAttrString(_pymsg, "laser_scan_topic");
  assert(PyUnicode_Check(pylaser_scan_topic));
  rosidl_generator_c__String__assign(
    &ros_message->laser_scan_topic, (char *)PyUnicode_1BYTE_DATA(pylaser_scan_topic));
  PyObject * pymulti_echo_laser_scan_topic = PyObject_GetAttrString(_pymsg, "multi_echo_laser_scan_topic");
  assert(PyUnicode_Check(pymulti_echo_laser_scan_topic));
  rosidl_generator_c__String__assign(
    &ros_message->multi_echo_laser_scan_topic, (char *)PyUnicode_1BYTE_DATA(pymulti_echo_laser_scan_topic));
  PyObject * pypoint_cloud2_topic = PyObject_GetAttrString(_pymsg, "point_cloud2_topic");
  assert(PyUnicode_Check(pypoint_cloud2_topic));
  rosidl_generator_c__String__assign(
    &ros_message->point_cloud2_topic, (char *)PyUnicode_1BYTE_DATA(pypoint_cloud2_topic));
  PyObject * pyimu_topic = PyObject_GetAttrString(_pymsg, "imu_topic");
  assert(PyUnicode_Check(pyimu_topic));
  rosidl_generator_c__String__assign(
    &ros_message->imu_topic, (char *)PyUnicode_1BYTE_DATA(pyimu_topic));
  PyObject * pyodometry_topic = PyObject_GetAttrString(_pymsg, "odometry_topic");
  assert(PyUnicode_Check(pyodometry_topic));
  rosidl_generator_c__String__assign(
    &ros_message->odometry_topic, (char *)PyUnicode_1BYTE_DATA(pyodometry_topic));

  assert(ros_message != NULL);
  return ros_message;
}

void cartographer_ros_msgs_sensor_topics__destroy_ros_message(void * raw_ros_message)
{
  cartographer_ros_msgs__msg__SensorTopics * ros_message = (cartographer_ros_msgs__msg__SensorTopics *)raw_ros_message;
  (void)ros_message;

  cartographer_ros_msgs__msg__SensorTopics__destroy(ros_message);
}

PyObject * cartographer_ros_msgs_sensor_topics__convert_to_py(void * raw_ros_message)
{
  cartographer_ros_msgs__msg__SensorTopics * ros_message = (cartographer_ros_msgs__msg__SensorTopics *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("cartographer_ros_msgs.msg._sensor_topics");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SensorTopics");

  /* NOTE(esteve): Call constructor of SensorTopics */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pylaser_scan_topic = NULL;
  pylaser_scan_topic = PyUnicode_FromString(ros_message->laser_scan_topic.data);
  assert(pylaser_scan_topic != NULL);
  Py_INCREF(pylaser_scan_topic);
  PyObject_SetAttrString(_pymessage, "laser_scan_topic", pylaser_scan_topic);
  PyObject * pymulti_echo_laser_scan_topic = NULL;
  pymulti_echo_laser_scan_topic = PyUnicode_FromString(ros_message->multi_echo_laser_scan_topic.data);
  assert(pymulti_echo_laser_scan_topic != NULL);
  Py_INCREF(pymulti_echo_laser_scan_topic);
  PyObject_SetAttrString(_pymessage, "multi_echo_laser_scan_topic", pymulti_echo_laser_scan_topic);
  PyObject * pypoint_cloud2_topic = NULL;
  pypoint_cloud2_topic = PyUnicode_FromString(ros_message->point_cloud2_topic.data);
  assert(pypoint_cloud2_topic != NULL);
  Py_INCREF(pypoint_cloud2_topic);
  PyObject_SetAttrString(_pymessage, "point_cloud2_topic", pypoint_cloud2_topic);
  PyObject * pyimu_topic = NULL;
  pyimu_topic = PyUnicode_FromString(ros_message->imu_topic.data);
  assert(pyimu_topic != NULL);
  Py_INCREF(pyimu_topic);
  PyObject_SetAttrString(_pymessage, "imu_topic", pyimu_topic);
  PyObject * pyodometry_topic = NULL;
  pyodometry_topic = PyUnicode_FromString(ros_message->odometry_topic.data);
  assert(pyodometry_topic != NULL);
  Py_INCREF(pyodometry_topic);
  PyObject_SetAttrString(_pymessage, "odometry_topic", pyodometry_topic);
  assert(_pymessage != NULL);
  return _pymessage;
}
