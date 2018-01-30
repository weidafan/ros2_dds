// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/point_field__struct.h>
#include <sensor_msgs/msg/point_field__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * sensor_msgs_point_field__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__PointField * ros_message = sensor_msgs__msg__PointField__create();
  (void)ros_message;
  char full_classname_dest[40];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._point_field.PointField",
      full_classname_dest, 39) == 0);

  PyObject * pyname = PyObject_GetAttrString(_pymsg, "name");
  assert(PyUnicode_Check(pyname));
  rosidl_generator_c__String__assign(
    &ros_message->name, (char *)PyUnicode_1BYTE_DATA(pyname));
  PyObject * pyoffset = PyObject_GetAttrString(_pymsg, "offset");
  assert(PyLong_Check(pyoffset));
  ros_message->offset = PyLong_AsUnsignedLong(pyoffset);
  PyObject * pydatatype = PyObject_GetAttrString(_pymsg, "datatype");
  assert(PyLong_Check(pydatatype));
  ros_message->datatype = (uint8_t)PyLong_AsUnsignedLong(pydatatype);
  PyObject * pycount = PyObject_GetAttrString(_pymsg, "count");
  assert(PyLong_Check(pycount));
  ros_message->count = PyLong_AsUnsignedLong(pycount);

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_point_field__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__PointField * ros_message = (sensor_msgs__msg__PointField *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__PointField__destroy(ros_message);
}

PyObject * sensor_msgs_point_field__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__PointField * ros_message = (sensor_msgs__msg__PointField *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._point_field");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PointField");

  /* NOTE(esteve): Call constructor of PointField */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyname = NULL;
  pyname = PyUnicode_FromString(ros_message->name.data);
  assert(pyname != NULL);
  Py_INCREF(pyname);
  PyObject_SetAttrString(_pymessage, "name", pyname);
  PyObject * pyoffset = NULL;
  pyoffset = PyLong_FromUnsignedLong(ros_message->offset);
  assert(pyoffset != NULL);
  Py_INCREF(pyoffset);
  PyObject_SetAttrString(_pymessage, "offset", pyoffset);
  PyObject * pydatatype = NULL;
  pydatatype = PyLong_FromUnsignedLong(ros_message->datatype);
  assert(pydatatype != NULL);
  Py_INCREF(pydatatype);
  PyObject_SetAttrString(_pymessage, "datatype", pydatatype);
  PyObject * pycount = NULL;
  pycount = PyLong_FromUnsignedLong(ros_message->count);
  assert(pycount != NULL);
  Py_INCREF(pycount);
  PyObject_SetAttrString(_pymessage, "count", pycount);
  assert(_pymessage != NULL);
  return _pymessage;
}
