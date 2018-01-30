// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <std_msgs/msg/multi_array_dimension__struct.h>
#include <std_msgs/msg/multi_array_dimension__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * std_msgs_multi_array_dimension__convert_from_py(PyObject * _pymsg)
{
  std_msgs__msg__MultiArrayDimension * ros_message = std_msgs__msg__MultiArrayDimension__create();
  (void)ros_message;
  char full_classname_dest[56];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "std_msgs.msg._multi_array_dimension.MultiArrayDimension",
      full_classname_dest, 55) == 0);

  PyObject * pylabel = PyObject_GetAttrString(_pymsg, "label");
  assert(PyUnicode_Check(pylabel));
  rosidl_generator_c__String__assign(
    &ros_message->label, (char *)PyUnicode_1BYTE_DATA(pylabel));
  PyObject * pysize = PyObject_GetAttrString(_pymsg, "size");
  assert(PyLong_Check(pysize));
  ros_message->size = PyLong_AsUnsignedLong(pysize);
  PyObject * pystride = PyObject_GetAttrString(_pymsg, "stride");
  assert(PyLong_Check(pystride));
  ros_message->stride = PyLong_AsUnsignedLong(pystride);

  assert(ros_message != NULL);
  return ros_message;
}

void std_msgs_multi_array_dimension__destroy_ros_message(void * raw_ros_message)
{
  std_msgs__msg__MultiArrayDimension * ros_message = (std_msgs__msg__MultiArrayDimension *)raw_ros_message;
  (void)ros_message;

  std_msgs__msg__MultiArrayDimension__destroy(ros_message);
}

PyObject * std_msgs_multi_array_dimension__convert_to_py(void * raw_ros_message)
{
  std_msgs__msg__MultiArrayDimension * ros_message = (std_msgs__msg__MultiArrayDimension *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("std_msgs.msg._multi_array_dimension");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MultiArrayDimension");

  /* NOTE(esteve): Call constructor of MultiArrayDimension */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pylabel = NULL;
  pylabel = PyUnicode_FromString(ros_message->label.data);
  assert(pylabel != NULL);
  Py_INCREF(pylabel);
  PyObject_SetAttrString(_pymessage, "label", pylabel);
  PyObject * pysize = NULL;
  pysize = PyLong_FromUnsignedLong(ros_message->size);
  assert(pysize != NULL);
  Py_INCREF(pysize);
  PyObject_SetAttrString(_pymessage, "size", pysize);
  PyObject * pystride = NULL;
  pystride = PyLong_FromUnsignedLong(ros_message->stride);
  assert(pystride != NULL);
  Py_INCREF(pystride);
  PyObject_SetAttrString(_pymessage, "stride", pystride);
  assert(_pymessage != NULL);
  return _pymessage;
}
