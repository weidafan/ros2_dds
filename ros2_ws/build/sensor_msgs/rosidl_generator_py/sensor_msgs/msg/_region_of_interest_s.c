// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/region_of_interest__struct.h>
#include <sensor_msgs/msg/region_of_interest__functions.h>


void * sensor_msgs_region_of_interest__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__RegionOfInterest * ros_message = sensor_msgs__msg__RegionOfInterest__create();
  (void)ros_message;
  char full_classname_dest[53];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._region_of_interest.RegionOfInterest",
      full_classname_dest, 52) == 0);

  PyObject * pyx_offset = PyObject_GetAttrString(_pymsg, "x_offset");
  assert(PyLong_Check(pyx_offset));
  ros_message->x_offset = PyLong_AsUnsignedLong(pyx_offset);
  PyObject * pyy_offset = PyObject_GetAttrString(_pymsg, "y_offset");
  assert(PyLong_Check(pyy_offset));
  ros_message->y_offset = PyLong_AsUnsignedLong(pyy_offset);
  PyObject * pyheight = PyObject_GetAttrString(_pymsg, "height");
  assert(PyLong_Check(pyheight));
  ros_message->height = PyLong_AsUnsignedLong(pyheight);
  PyObject * pywidth = PyObject_GetAttrString(_pymsg, "width");
  assert(PyLong_Check(pywidth));
  ros_message->width = PyLong_AsUnsignedLong(pywidth);
  PyObject * pydo_rectify = PyObject_GetAttrString(_pymsg, "do_rectify");
  assert(PyBool_Check(pydo_rectify));
  ros_message->do_rectify = (Py_True == pydo_rectify);

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_region_of_interest__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__RegionOfInterest * ros_message = (sensor_msgs__msg__RegionOfInterest *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__RegionOfInterest__destroy(ros_message);
}

PyObject * sensor_msgs_region_of_interest__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__RegionOfInterest * ros_message = (sensor_msgs__msg__RegionOfInterest *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._region_of_interest");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RegionOfInterest");

  /* NOTE(esteve): Call constructor of RegionOfInterest */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyx_offset = NULL;
  pyx_offset = PyLong_FromUnsignedLong(ros_message->x_offset);
  assert(pyx_offset != NULL);
  Py_INCREF(pyx_offset);
  PyObject_SetAttrString(_pymessage, "x_offset", pyx_offset);
  PyObject * pyy_offset = NULL;
  pyy_offset = PyLong_FromUnsignedLong(ros_message->y_offset);
  assert(pyy_offset != NULL);
  Py_INCREF(pyy_offset);
  PyObject_SetAttrString(_pymessage, "y_offset", pyy_offset);
  PyObject * pyheight = NULL;
  pyheight = PyLong_FromUnsignedLong(ros_message->height);
  assert(pyheight != NULL);
  Py_INCREF(pyheight);
  PyObject_SetAttrString(_pymessage, "height", pyheight);
  PyObject * pywidth = NULL;
  pywidth = PyLong_FromUnsignedLong(ros_message->width);
  assert(pywidth != NULL);
  Py_INCREF(pywidth);
  PyObject_SetAttrString(_pymessage, "width", pywidth);
  PyObject * pydo_rectify = NULL;
  pydo_rectify = ros_message->do_rectify ? Py_True : Py_False;
  assert(pydo_rectify != NULL);
  Py_INCREF(pydo_rectify);
  PyObject_SetAttrString(_pymessage, "do_rectify", pydo_rectify);
  assert(_pymessage != NULL);
  return _pymessage;
}
