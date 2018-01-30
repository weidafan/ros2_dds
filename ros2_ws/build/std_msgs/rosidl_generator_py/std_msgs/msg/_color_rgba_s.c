// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <std_msgs/msg/color_rgba__struct.h>
#include <std_msgs/msg/color_rgba__functions.h>


void * std_msgs_color_rgba__convert_from_py(PyObject * _pymsg)
{
  std_msgs__msg__ColorRGBA * ros_message = std_msgs__msg__ColorRGBA__create();
  (void)ros_message;
  char full_classname_dest[35];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "std_msgs.msg._color_rgba.ColorRGBA",
      full_classname_dest, 34) == 0);

  PyObject * pyr = PyObject_GetAttrString(_pymsg, "r");
  assert(PyFloat_Check(pyr));
  ros_message->r = (float)PyFloat_AS_DOUBLE(pyr);
  PyObject * pyg = PyObject_GetAttrString(_pymsg, "g");
  assert(PyFloat_Check(pyg));
  ros_message->g = (float)PyFloat_AS_DOUBLE(pyg);
  PyObject * pyb = PyObject_GetAttrString(_pymsg, "b");
  assert(PyFloat_Check(pyb));
  ros_message->b = (float)PyFloat_AS_DOUBLE(pyb);
  PyObject * pya = PyObject_GetAttrString(_pymsg, "a");
  assert(PyFloat_Check(pya));
  ros_message->a = (float)PyFloat_AS_DOUBLE(pya);

  assert(ros_message != NULL);
  return ros_message;
}

void std_msgs_color_rgba__destroy_ros_message(void * raw_ros_message)
{
  std_msgs__msg__ColorRGBA * ros_message = (std_msgs__msg__ColorRGBA *)raw_ros_message;
  (void)ros_message;

  std_msgs__msg__ColorRGBA__destroy(ros_message);
}

PyObject * std_msgs_color_rgba__convert_to_py(void * raw_ros_message)
{
  std_msgs__msg__ColorRGBA * ros_message = (std_msgs__msg__ColorRGBA *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("std_msgs.msg._color_rgba");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ColorRGBA");

  /* NOTE(esteve): Call constructor of ColorRGBA */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyr = NULL;
  pyr = PyFloat_FromDouble(ros_message->r);
  assert(pyr != NULL);
  Py_INCREF(pyr);
  PyObject_SetAttrString(_pymessage, "r", pyr);
  PyObject * pyg = NULL;
  pyg = PyFloat_FromDouble(ros_message->g);
  assert(pyg != NULL);
  Py_INCREF(pyg);
  PyObject_SetAttrString(_pymessage, "g", pyg);
  PyObject * pyb = NULL;
  pyb = PyFloat_FromDouble(ros_message->b);
  assert(pyb != NULL);
  Py_INCREF(pyb);
  PyObject_SetAttrString(_pymessage, "b", pyb);
  PyObject * pya = NULL;
  pya = PyFloat_FromDouble(ros_message->a);
  assert(pya != NULL);
  Py_INCREF(pya);
  PyObject_SetAttrString(_pymessage, "a", pya);
  assert(_pymessage != NULL);
  return _pymessage;
}
