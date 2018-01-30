// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <std_msgs/msg/header__struct.h>
#include <std_msgs/msg/header__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * std_msgs_header__convert_from_py(PyObject * _pymsg)
{
  std_msgs__msg__Header * ros_message = std_msgs__msg__Header__create();
  (void)ros_message;
  char full_classname_dest[28];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "std_msgs.msg._header.Header",
      full_classname_dest, 27) == 0);

  PyObject * pystamp = PyObject_GetAttrString(_pymsg, "stamp");
  PyObject * pystamp_msg_module = PyImport_ImportModule("builtin_interfaces.msg._time");
  PyObject * pystamp_msg_class = PyObject_GetAttrString(pystamp_msg_module, "Time");
  PyObject * pystamp_msg_metaclass = PyObject_GetAttrString(pystamp_msg_class, "__class__");
  PyObject * pystamp_convert_from_py = PyObject_GetAttrString(pystamp_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_stamp = (convert_from_py_signature)PyCapsule_GetPointer(pystamp_convert_from_py, NULL);
  builtin_interfaces__msg__Time * tmpstamp = (builtin_interfaces__msg__Time *) convert_from_py_stamp(pystamp);
  if (!tmpstamp) {
    return NULL;
  }
  ros_message->stamp = *tmpstamp;
  PyObject * pyframe_id = PyObject_GetAttrString(_pymsg, "frame_id");
  assert(PyUnicode_Check(pyframe_id));
  rosidl_generator_c__String__assign(
    &ros_message->frame_id, (char *)PyUnicode_1BYTE_DATA(pyframe_id));

  assert(ros_message != NULL);
  return ros_message;
}

void std_msgs_header__destroy_ros_message(void * raw_ros_message)
{
  std_msgs__msg__Header * ros_message = (std_msgs__msg__Header *)raw_ros_message;
  (void)ros_message;

  std_msgs__msg__Header__destroy(ros_message);
}

PyObject * std_msgs_header__convert_to_py(void * raw_ros_message)
{
  std_msgs__msg__Header * ros_message = (std_msgs__msg__Header *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("std_msgs.msg._header");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Header");

  /* NOTE(esteve): Call constructor of Header */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pystamp = NULL;
  PyObject * pystamp_msg_module = PyImport_ImportModule("builtin_interfaces.msg._time");
  PyObject * pystamp_msg_class = PyObject_GetAttrString(pystamp_msg_module, "Time");
  PyObject * pystamp_msg_metaclass = PyObject_GetAttrString(pystamp_msg_class, "__class__");
  PyObject * pystamp_convert_to_py = PyObject_GetAttrString(pystamp_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_stamp = (convert_to_py_signature)PyCapsule_GetPointer(pystamp_convert_to_py, NULL);
  builtin_interfaces__msg__Time pytmpstamp = ros_message->stamp;
  pystamp = convert_to_py_stamp(&pytmpstamp);
  if (!pystamp) {
    return NULL;
  }
  assert(pystamp != NULL);
  Py_INCREF(pystamp);
  PyObject_SetAttrString(_pymessage, "stamp", pystamp);
  PyObject * pyframe_id = NULL;
  pyframe_id = PyUnicode_FromString(ros_message->frame_id.data);
  assert(pyframe_id != NULL);
  Py_INCREF(pyframe_id);
  PyObject_SetAttrString(_pymessage, "frame_id", pyframe_id);
  assert(_pymessage != NULL);
  return _pymessage;
}
