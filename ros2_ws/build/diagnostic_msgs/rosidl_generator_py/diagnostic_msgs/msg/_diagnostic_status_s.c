// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <diagnostic_msgs/msg/diagnostic_status__struct.h>
#include <diagnostic_msgs/msg/diagnostic_status__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <diagnostic_msgs/msg/key_value__functions.h>
// end nested array functions include

void * diagnostic_msgs_diagnostic_status__convert_from_py(PyObject * _pymsg)
{
  diagnostic_msgs__msg__DiagnosticStatus * ros_message = diagnostic_msgs__msg__DiagnosticStatus__create();
  (void)ros_message;
  char full_classname_dest[56];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "diagnostic_msgs.msg._diagnostic_status.DiagnosticStatus",
      full_classname_dest, 55) == 0);

  PyObject * pylevel = PyObject_GetAttrString(_pymsg, "level");
  assert(PyBytes_Check(pylevel));
  ros_message->level = PyBytes_AS_STRING(pylevel)[0];
  PyObject * pyname = PyObject_GetAttrString(_pymsg, "name");
  assert(PyUnicode_Check(pyname));
  rosidl_generator_c__String__assign(
    &ros_message->name, (char *)PyUnicode_1BYTE_DATA(pyname));
  PyObject * pymessage = PyObject_GetAttrString(_pymsg, "message");
  assert(PyUnicode_Check(pymessage));
  rosidl_generator_c__String__assign(
    &ros_message->message, (char *)PyUnicode_1BYTE_DATA(pymessage));
  PyObject * pyhardware_id = PyObject_GetAttrString(_pymsg, "hardware_id");
  assert(PyUnicode_Check(pyhardware_id));
  rosidl_generator_c__String__assign(
    &ros_message->hardware_id, (char *)PyUnicode_1BYTE_DATA(pyhardware_id));
  PyObject * pyvalues = PyObject_GetAttrString(_pymsg, "values");
  PyObject * pyvalues_msg_module = PyImport_ImportModule("diagnostic_msgs.msg._key_value");
  PyObject * pyvalues_msg_class = PyObject_GetAttrString(pyvalues_msg_module, "KeyValue");
  PyObject * pyvalues_msg_metaclass = PyObject_GetAttrString(pyvalues_msg_class, "__class__");
  PyObject * pyvalues_convert_from_py = PyObject_GetAttrString(pyvalues_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_values = (convert_from_py_signature)PyCapsule_GetPointer(pyvalues_convert_from_py, NULL);
  assert(PySequence_Check(pyvalues));
  PyObject * seqvalues = PySequence_Fast(pyvalues, "expected a sequence");
  diagnostic_msgs__msg__KeyValue * itemvalues;
  size_t sizevalues = PySequence_Size(pyvalues);
  if (!diagnostic_msgs__msg__KeyValue__Array__init(&(ros_message->values), sizevalues)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create diagnostic_msgs__msg__KeyValue__Array ros_message");
    return NULL;
  }
  diagnostic_msgs__msg__KeyValue * destvalues = ros_message->values.data;
  size_t idxvalues;
  for (idxvalues = 0; idxvalues < sizevalues; idxvalues++) {
    itemvalues = (diagnostic_msgs__msg__KeyValue *) convert_from_py_values(
      PySequence_Fast_GET_ITEM(seqvalues, idxvalues));
    if (!itemvalues) {
      return NULL;
    }
    memcpy(&destvalues[idxvalues], itemvalues, sizeof(diagnostic_msgs__msg__KeyValue));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void diagnostic_msgs_diagnostic_status__destroy_ros_message(void * raw_ros_message)
{
  diagnostic_msgs__msg__DiagnosticStatus * ros_message = (diagnostic_msgs__msg__DiagnosticStatus *)raw_ros_message;
  (void)ros_message;

  diagnostic_msgs__msg__DiagnosticStatus__destroy(ros_message);
}

PyObject * diagnostic_msgs_diagnostic_status__convert_to_py(void * raw_ros_message)
{
  diagnostic_msgs__msg__DiagnosticStatus * ros_message = (diagnostic_msgs__msg__DiagnosticStatus *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("diagnostic_msgs.msg._diagnostic_status");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DiagnosticStatus");

  /* NOTE(esteve): Call constructor of DiagnosticStatus */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pylevel = NULL;
  pylevel = PyBytes_FromStringAndSize((const char *)&ros_message->level, 1);
  assert(pylevel != NULL);
  Py_INCREF(pylevel);
  PyObject_SetAttrString(_pymessage, "level", pylevel);
  PyObject * pyname = NULL;
  pyname = PyUnicode_FromString(ros_message->name.data);
  assert(pyname != NULL);
  Py_INCREF(pyname);
  PyObject_SetAttrString(_pymessage, "name", pyname);
  PyObject * pymessage = NULL;
  pymessage = PyUnicode_FromString(ros_message->message.data);
  assert(pymessage != NULL);
  Py_INCREF(pymessage);
  PyObject_SetAttrString(_pymessage, "message", pymessage);
  PyObject * pyhardware_id = NULL;
  pyhardware_id = PyUnicode_FromString(ros_message->hardware_id.data);
  assert(pyhardware_id != NULL);
  Py_INCREF(pyhardware_id);
  PyObject_SetAttrString(_pymessage, "hardware_id", pyhardware_id);
  PyObject * pyvalues = NULL;
  PyObject * pyvalues_msg_module = PyImport_ImportModule("diagnostic_msgs.msg._key_value");
  PyObject * pyvalues_msg_class = PyObject_GetAttrString(pyvalues_msg_module, "KeyValue");
  PyObject * pyvalues_msg_metaclass = PyObject_GetAttrString(pyvalues_msg_class, "__class__");
  PyObject * pyvalues_convert_to_py = PyObject_GetAttrString(pyvalues_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_values = (convert_to_py_signature)PyCapsule_GetPointer(pyvalues_convert_to_py, NULL);
  size_t sizevalues = ros_message->values.size;
  pyvalues = PyList_New(sizevalues);
  diagnostic_msgs__msg__KeyValue itemvalues;
  size_t idxvalues;
  for (idxvalues = 0; idxvalues < sizevalues; idxvalues++) {
    itemvalues = ros_message->values.data[idxvalues];
    PyObject * pyitemvalues = convert_to_py_values(&itemvalues);
    if (!pyitemvalues) {
      return NULL;
    }
    PyList_SetItem(pyvalues, idxvalues, pyitemvalues);
  }
  assert(PySequence_Check(pyvalues));
  assert(pyvalues != NULL);
  Py_INCREF(pyvalues);
  PyObject_SetAttrString(_pymessage, "values", pyvalues);
  assert(_pymessage != NULL);
  return _pymessage;
}
