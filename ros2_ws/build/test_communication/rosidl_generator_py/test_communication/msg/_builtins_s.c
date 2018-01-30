// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <test_communication/msg/builtins__struct.h>
#include <test_communication/msg/builtins__functions.h>


void * test_communication_builtins__convert_from_py(PyObject * _pymsg)
{
  test_communication__msg__Builtins * ros_message = test_communication__msg__Builtins__create();
  (void)ros_message;
  char full_classname_dest[42];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "test_communication.msg._builtins.Builtins",
      full_classname_dest, 41) == 0);

  PyObject * pyduration_value = PyObject_GetAttrString(_pymsg, "duration_value");
  PyObject * pyduration_value_msg_module = PyImport_ImportModule("builtin_interfaces.msg._duration");
  PyObject * pyduration_value_msg_class = PyObject_GetAttrString(pyduration_value_msg_module, "Duration");
  PyObject * pyduration_value_msg_metaclass = PyObject_GetAttrString(pyduration_value_msg_class, "__class__");
  PyObject * pyduration_value_convert_from_py = PyObject_GetAttrString(pyduration_value_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_duration_value = (convert_from_py_signature)PyCapsule_GetPointer(pyduration_value_convert_from_py, NULL);
  builtin_interfaces__msg__Duration * tmpduration_value = (builtin_interfaces__msg__Duration *) convert_from_py_duration_value(pyduration_value);
  if (!tmpduration_value) {
    return NULL;
  }
  ros_message->duration_value = *tmpduration_value;
  PyObject * pytime_value = PyObject_GetAttrString(_pymsg, "time_value");
  PyObject * pytime_value_msg_module = PyImport_ImportModule("builtin_interfaces.msg._time");
  PyObject * pytime_value_msg_class = PyObject_GetAttrString(pytime_value_msg_module, "Time");
  PyObject * pytime_value_msg_metaclass = PyObject_GetAttrString(pytime_value_msg_class, "__class__");
  PyObject * pytime_value_convert_from_py = PyObject_GetAttrString(pytime_value_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_time_value = (convert_from_py_signature)PyCapsule_GetPointer(pytime_value_convert_from_py, NULL);
  builtin_interfaces__msg__Time * tmptime_value = (builtin_interfaces__msg__Time *) convert_from_py_time_value(pytime_value);
  if (!tmptime_value) {
    return NULL;
  }
  ros_message->time_value = *tmptime_value;

  assert(ros_message != NULL);
  return ros_message;
}

void test_communication_builtins__destroy_ros_message(void * raw_ros_message)
{
  test_communication__msg__Builtins * ros_message = (test_communication__msg__Builtins *)raw_ros_message;
  (void)ros_message;

  test_communication__msg__Builtins__destroy(ros_message);
}

PyObject * test_communication_builtins__convert_to_py(void * raw_ros_message)
{
  test_communication__msg__Builtins * ros_message = (test_communication__msg__Builtins *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("test_communication.msg._builtins");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Builtins");

  /* NOTE(esteve): Call constructor of Builtins */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyduration_value = NULL;
  PyObject * pyduration_value_msg_module = PyImport_ImportModule("builtin_interfaces.msg._duration");
  PyObject * pyduration_value_msg_class = PyObject_GetAttrString(pyduration_value_msg_module, "Duration");
  PyObject * pyduration_value_msg_metaclass = PyObject_GetAttrString(pyduration_value_msg_class, "__class__");
  PyObject * pyduration_value_convert_to_py = PyObject_GetAttrString(pyduration_value_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_duration_value = (convert_to_py_signature)PyCapsule_GetPointer(pyduration_value_convert_to_py, NULL);
  builtin_interfaces__msg__Duration pytmpduration_value = ros_message->duration_value;
  pyduration_value = convert_to_py_duration_value(&pytmpduration_value);
  if (!pyduration_value) {
    return NULL;
  }
  assert(pyduration_value != NULL);
  Py_INCREF(pyduration_value);
  PyObject_SetAttrString(_pymessage, "duration_value", pyduration_value);
  PyObject * pytime_value = NULL;
  PyObject * pytime_value_msg_module = PyImport_ImportModule("builtin_interfaces.msg._time");
  PyObject * pytime_value_msg_class = PyObject_GetAttrString(pytime_value_msg_module, "Time");
  PyObject * pytime_value_msg_metaclass = PyObject_GetAttrString(pytime_value_msg_class, "__class__");
  PyObject * pytime_value_convert_to_py = PyObject_GetAttrString(pytime_value_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_time_value = (convert_to_py_signature)PyCapsule_GetPointer(pytime_value_convert_to_py, NULL);
  builtin_interfaces__msg__Time pytmptime_value = ros_message->time_value;
  pytime_value = convert_to_py_time_value(&pytmptime_value);
  if (!pytime_value) {
    return NULL;
  }
  assert(pytime_value != NULL);
  Py_INCREF(pytime_value);
  PyObject_SetAttrString(_pymessage, "time_value", pytime_value);
  assert(_pymessage != NULL);
  return _pymessage;
}
