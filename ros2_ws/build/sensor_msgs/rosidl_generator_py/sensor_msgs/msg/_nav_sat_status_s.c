// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/nav_sat_status__struct.h>
#include <sensor_msgs/msg/nav_sat_status__functions.h>


void * sensor_msgs_nav_sat_status__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__NavSatStatus * ros_message = sensor_msgs__msg__NavSatStatus__create();
  (void)ros_message;
  char full_classname_dest[45];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._nav_sat_status.NavSatStatus",
      full_classname_dest, 44) == 0);

  PyObject * pystatus = PyObject_GetAttrString(_pymsg, "status");
  assert(PyLong_Check(pystatus));
  ros_message->status = (int8_t)PyLong_AsLong(pystatus);
  PyObject * pyservice = PyObject_GetAttrString(_pymsg, "service");
  assert(PyLong_Check(pyservice));
  ros_message->service = (uint16_t)PyLong_AsUnsignedLong(pyservice);

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_nav_sat_status__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__NavSatStatus * ros_message = (sensor_msgs__msg__NavSatStatus *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__NavSatStatus__destroy(ros_message);
}

PyObject * sensor_msgs_nav_sat_status__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__NavSatStatus * ros_message = (sensor_msgs__msg__NavSatStatus *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._nav_sat_status");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NavSatStatus");

  /* NOTE(esteve): Call constructor of NavSatStatus */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pystatus = NULL;
  pystatus = PyLong_FromLong(ros_message->status);
  assert(pystatus != NULL);
  Py_INCREF(pystatus);
  PyObject_SetAttrString(_pymessage, "status", pystatus);
  PyObject * pyservice = NULL;
  pyservice = PyLong_FromUnsignedLong(ros_message->service);
  assert(pyservice != NULL);
  Py_INCREF(pyservice);
  PyObject_SetAttrString(_pymessage, "service", pyservice);
  assert(_pymessage != NULL);
  return _pymessage;
}
