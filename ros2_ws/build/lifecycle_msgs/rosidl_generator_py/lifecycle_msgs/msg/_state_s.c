// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <lifecycle_msgs/msg/state__struct.h>
#include <lifecycle_msgs/msg/state__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * lifecycle_msgs_state__convert_from_py(PyObject * _pymsg)
{
  lifecycle_msgs__msg__State * ros_message = lifecycle_msgs__msg__State__create();
  (void)ros_message;
  char full_classname_dest[32];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "lifecycle_msgs.msg._state.State",
      full_classname_dest, 31) == 0);

  PyObject * pyid = PyObject_GetAttrString(_pymsg, "id");
  assert(PyLong_Check(pyid));
  ros_message->id = (uint8_t)PyLong_AsUnsignedLong(pyid);
  PyObject * pylabel = PyObject_GetAttrString(_pymsg, "label");
  assert(PyUnicode_Check(pylabel));
  rosidl_generator_c__String__assign(
    &ros_message->label, (char *)PyUnicode_1BYTE_DATA(pylabel));

  assert(ros_message != NULL);
  return ros_message;
}

void lifecycle_msgs_state__destroy_ros_message(void * raw_ros_message)
{
  lifecycle_msgs__msg__State * ros_message = (lifecycle_msgs__msg__State *)raw_ros_message;
  (void)ros_message;

  lifecycle_msgs__msg__State__destroy(ros_message);
}

PyObject * lifecycle_msgs_state__convert_to_py(void * raw_ros_message)
{
  lifecycle_msgs__msg__State * ros_message = (lifecycle_msgs__msg__State *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("lifecycle_msgs.msg._state");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "State");

  /* NOTE(esteve): Call constructor of State */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyid = NULL;
  pyid = PyLong_FromUnsignedLong(ros_message->id);
  assert(pyid != NULL);
  Py_INCREF(pyid);
  PyObject_SetAttrString(_pymessage, "id", pyid);
  PyObject * pylabel = NULL;
  pylabel = PyUnicode_FromString(ros_message->label.data);
  assert(pylabel != NULL);
  Py_INCREF(pylabel);
  PyObject_SetAttrString(_pymessage, "label", pylabel);
  assert(_pymessage != NULL);
  return _pymessage;
}
