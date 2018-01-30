// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <builtin_interfaces/msg/duration__struct.h>
#include <builtin_interfaces/msg/duration__functions.h>


void * builtin_interfaces_duration__convert_from_py(PyObject * _pymsg)
{
  builtin_interfaces__msg__Duration * ros_message = builtin_interfaces__msg__Duration__create();
  (void)ros_message;
  char full_classname_dest[42];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "builtin_interfaces.msg._duration.Duration",
      full_classname_dest, 41) == 0);

  PyObject * pysec = PyObject_GetAttrString(_pymsg, "sec");
  assert(PyLong_Check(pysec));
  ros_message->sec = (int32_t)PyLong_AsLong(pysec);
  PyObject * pynanosec = PyObject_GetAttrString(_pymsg, "nanosec");
  assert(PyLong_Check(pynanosec));
  ros_message->nanosec = PyLong_AsUnsignedLong(pynanosec);

  assert(ros_message != NULL);
  return ros_message;
}

void builtin_interfaces_duration__destroy_ros_message(void * raw_ros_message)
{
  builtin_interfaces__msg__Duration * ros_message = (builtin_interfaces__msg__Duration *)raw_ros_message;
  (void)ros_message;

  builtin_interfaces__msg__Duration__destroy(ros_message);
}

PyObject * builtin_interfaces_duration__convert_to_py(void * raw_ros_message)
{
  builtin_interfaces__msg__Duration * ros_message = (builtin_interfaces__msg__Duration *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("builtin_interfaces.msg._duration");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Duration");

  /* NOTE(esteve): Call constructor of Duration */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pysec = NULL;
  pysec = PyLong_FromLong(ros_message->sec);
  assert(pysec != NULL);
  Py_INCREF(pysec);
  PyObject_SetAttrString(_pymessage, "sec", pysec);
  PyObject * pynanosec = NULL;
  pynanosec = PyLong_FromUnsignedLong(ros_message->nanosec);
  assert(pynanosec != NULL);
  Py_INCREF(pynanosec);
  PyObject_SetAttrString(_pymessage, "nanosec", pynanosec);
  assert(_pymessage != NULL);
  return _pymessage;
}
