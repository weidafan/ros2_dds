// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <tf2_msgs/msg/tf2_error__struct.h>
#include <tf2_msgs/msg/tf2_error__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * tf2_msgs_tf2_error__convert_from_py(PyObject * _pymsg)
{
  tf2_msgs__msg__TF2Error * ros_message = tf2_msgs__msg__TF2Error__create();
  (void)ros_message;
  char full_classname_dest[33];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "tf2_msgs.msg._tf2_error.TF2Error",
      full_classname_dest, 32) == 0);

  PyObject * pyerror = PyObject_GetAttrString(_pymsg, "error");
  assert(PyLong_Check(pyerror));
  ros_message->error = (uint8_t)PyLong_AsUnsignedLong(pyerror);
  PyObject * pyerror_string = PyObject_GetAttrString(_pymsg, "error_string");
  assert(PyUnicode_Check(pyerror_string));
  rosidl_generator_c__String__assign(
    &ros_message->error_string, (char *)PyUnicode_1BYTE_DATA(pyerror_string));

  assert(ros_message != NULL);
  return ros_message;
}

void tf2_msgs_tf2_error__destroy_ros_message(void * raw_ros_message)
{
  tf2_msgs__msg__TF2Error * ros_message = (tf2_msgs__msg__TF2Error *)raw_ros_message;
  (void)ros_message;

  tf2_msgs__msg__TF2Error__destroy(ros_message);
}

PyObject * tf2_msgs_tf2_error__convert_to_py(void * raw_ros_message)
{
  tf2_msgs__msg__TF2Error * ros_message = (tf2_msgs__msg__TF2Error *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("tf2_msgs.msg._tf2_error");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TF2Error");

  /* NOTE(esteve): Call constructor of TF2Error */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyerror = NULL;
  pyerror = PyLong_FromUnsignedLong(ros_message->error);
  assert(pyerror != NULL);
  Py_INCREF(pyerror);
  PyObject_SetAttrString(_pymessage, "error", pyerror);
  PyObject * pyerror_string = NULL;
  pyerror_string = PyUnicode_FromString(ros_message->error_string.data);
  assert(pyerror_string != NULL);
  Py_INCREF(pyerror_string);
  PyObject_SetAttrString(_pymessage, "error_string", pyerror_string);
  assert(_pymessage != NULL);
  return _pymessage;
}
