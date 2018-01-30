// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/time_reference__struct.h>
#include <sensor_msgs/msg/time_reference__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * sensor_msgs_time_reference__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__TimeReference * ros_message = sensor_msgs__msg__TimeReference__create();
  (void)ros_message;
  char full_classname_dest[46];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._time_reference.TimeReference",
      full_classname_dest, 45) == 0);

  PyObject * pyheader = PyObject_GetAttrString(_pymsg, "header");
  PyObject * pyheader_msg_module = PyImport_ImportModule("std_msgs.msg._header");
  PyObject * pyheader_msg_class = PyObject_GetAttrString(pyheader_msg_module, "Header");
  PyObject * pyheader_msg_metaclass = PyObject_GetAttrString(pyheader_msg_class, "__class__");
  PyObject * pyheader_convert_from_py = PyObject_GetAttrString(pyheader_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_header = (convert_from_py_signature)PyCapsule_GetPointer(pyheader_convert_from_py, NULL);
  std_msgs__msg__Header * tmpheader = (std_msgs__msg__Header *) convert_from_py_header(pyheader);
  if (!tmpheader) {
    return NULL;
  }
  ros_message->header = *tmpheader;
  PyObject * pytime_ref = PyObject_GetAttrString(_pymsg, "time_ref");
  PyObject * pytime_ref_msg_module = PyImport_ImportModule("builtin_interfaces.msg._time");
  PyObject * pytime_ref_msg_class = PyObject_GetAttrString(pytime_ref_msg_module, "Time");
  PyObject * pytime_ref_msg_metaclass = PyObject_GetAttrString(pytime_ref_msg_class, "__class__");
  PyObject * pytime_ref_convert_from_py = PyObject_GetAttrString(pytime_ref_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_time_ref = (convert_from_py_signature)PyCapsule_GetPointer(pytime_ref_convert_from_py, NULL);
  builtin_interfaces__msg__Time * tmptime_ref = (builtin_interfaces__msg__Time *) convert_from_py_time_ref(pytime_ref);
  if (!tmptime_ref) {
    return NULL;
  }
  ros_message->time_ref = *tmptime_ref;
  PyObject * pysource = PyObject_GetAttrString(_pymsg, "source");
  assert(PyUnicode_Check(pysource));
  rosidl_generator_c__String__assign(
    &ros_message->source, (char *)PyUnicode_1BYTE_DATA(pysource));

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_time_reference__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__TimeReference * ros_message = (sensor_msgs__msg__TimeReference *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__TimeReference__destroy(ros_message);
}

PyObject * sensor_msgs_time_reference__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__TimeReference * ros_message = (sensor_msgs__msg__TimeReference *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._time_reference");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TimeReference");

  /* NOTE(esteve): Call constructor of TimeReference */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyheader = NULL;
  PyObject * pyheader_msg_module = PyImport_ImportModule("std_msgs.msg._header");
  PyObject * pyheader_msg_class = PyObject_GetAttrString(pyheader_msg_module, "Header");
  PyObject * pyheader_msg_metaclass = PyObject_GetAttrString(pyheader_msg_class, "__class__");
  PyObject * pyheader_convert_to_py = PyObject_GetAttrString(pyheader_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_header = (convert_to_py_signature)PyCapsule_GetPointer(pyheader_convert_to_py, NULL);
  std_msgs__msg__Header pytmpheader = ros_message->header;
  pyheader = convert_to_py_header(&pytmpheader);
  if (!pyheader) {
    return NULL;
  }
  assert(pyheader != NULL);
  Py_INCREF(pyheader);
  PyObject_SetAttrString(_pymessage, "header", pyheader);
  PyObject * pytime_ref = NULL;
  PyObject * pytime_ref_msg_module = PyImport_ImportModule("builtin_interfaces.msg._time");
  PyObject * pytime_ref_msg_class = PyObject_GetAttrString(pytime_ref_msg_module, "Time");
  PyObject * pytime_ref_msg_metaclass = PyObject_GetAttrString(pytime_ref_msg_class, "__class__");
  PyObject * pytime_ref_convert_to_py = PyObject_GetAttrString(pytime_ref_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_time_ref = (convert_to_py_signature)PyCapsule_GetPointer(pytime_ref_convert_to_py, NULL);
  builtin_interfaces__msg__Time pytmptime_ref = ros_message->time_ref;
  pytime_ref = convert_to_py_time_ref(&pytmptime_ref);
  if (!pytime_ref) {
    return NULL;
  }
  assert(pytime_ref != NULL);
  Py_INCREF(pytime_ref);
  PyObject_SetAttrString(_pymessage, "time_ref", pytime_ref);
  PyObject * pysource = NULL;
  pysource = PyUnicode_FromString(ros_message->source.data);
  assert(pysource != NULL);
  Py_INCREF(pysource);
  PyObject_SetAttrString(_pymessage, "source", pysource);
  assert(_pymessage != NULL);
  return _pymessage;
}
