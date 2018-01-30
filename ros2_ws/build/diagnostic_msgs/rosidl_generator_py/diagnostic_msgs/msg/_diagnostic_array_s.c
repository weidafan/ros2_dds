// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <diagnostic_msgs/msg/diagnostic_array__struct.h>
#include <diagnostic_msgs/msg/diagnostic_array__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <diagnostic_msgs/msg/diagnostic_status__functions.h>
// end nested array functions include

void * diagnostic_msgs_diagnostic_array__convert_from_py(PyObject * _pymsg)
{
  diagnostic_msgs__msg__DiagnosticArray * ros_message = diagnostic_msgs__msg__DiagnosticArray__create();
  (void)ros_message;
  char full_classname_dest[54];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "diagnostic_msgs.msg._diagnostic_array.DiagnosticArray",
      full_classname_dest, 53) == 0);

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
  PyObject * pystatus = PyObject_GetAttrString(_pymsg, "status");
  PyObject * pystatus_msg_module = PyImport_ImportModule("diagnostic_msgs.msg._diagnostic_status");
  PyObject * pystatus_msg_class = PyObject_GetAttrString(pystatus_msg_module, "DiagnosticStatus");
  PyObject * pystatus_msg_metaclass = PyObject_GetAttrString(pystatus_msg_class, "__class__");
  PyObject * pystatus_convert_from_py = PyObject_GetAttrString(pystatus_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_status = (convert_from_py_signature)PyCapsule_GetPointer(pystatus_convert_from_py, NULL);
  assert(PySequence_Check(pystatus));
  PyObject * seqstatus = PySequence_Fast(pystatus, "expected a sequence");
  diagnostic_msgs__msg__DiagnosticStatus * itemstatus;
  size_t sizestatus = PySequence_Size(pystatus);
  if (!diagnostic_msgs__msg__DiagnosticStatus__Array__init(&(ros_message->status), sizestatus)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create diagnostic_msgs__msg__DiagnosticStatus__Array ros_message");
    return NULL;
  }
  diagnostic_msgs__msg__DiagnosticStatus * deststatus = ros_message->status.data;
  size_t idxstatus;
  for (idxstatus = 0; idxstatus < sizestatus; idxstatus++) {
    itemstatus = (diagnostic_msgs__msg__DiagnosticStatus *) convert_from_py_status(
      PySequence_Fast_GET_ITEM(seqstatus, idxstatus));
    if (!itemstatus) {
      return NULL;
    }
    memcpy(&deststatus[idxstatus], itemstatus, sizeof(diagnostic_msgs__msg__DiagnosticStatus));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void diagnostic_msgs_diagnostic_array__destroy_ros_message(void * raw_ros_message)
{
  diagnostic_msgs__msg__DiagnosticArray * ros_message = (diagnostic_msgs__msg__DiagnosticArray *)raw_ros_message;
  (void)ros_message;

  diagnostic_msgs__msg__DiagnosticArray__destroy(ros_message);
}

PyObject * diagnostic_msgs_diagnostic_array__convert_to_py(void * raw_ros_message)
{
  diagnostic_msgs__msg__DiagnosticArray * ros_message = (diagnostic_msgs__msg__DiagnosticArray *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("diagnostic_msgs.msg._diagnostic_array");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DiagnosticArray");

  /* NOTE(esteve): Call constructor of DiagnosticArray */
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
  PyObject * pystatus = NULL;
  PyObject * pystatus_msg_module = PyImport_ImportModule("diagnostic_msgs.msg._diagnostic_status");
  PyObject * pystatus_msg_class = PyObject_GetAttrString(pystatus_msg_module, "DiagnosticStatus");
  PyObject * pystatus_msg_metaclass = PyObject_GetAttrString(pystatus_msg_class, "__class__");
  PyObject * pystatus_convert_to_py = PyObject_GetAttrString(pystatus_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_status = (convert_to_py_signature)PyCapsule_GetPointer(pystatus_convert_to_py, NULL);
  size_t sizestatus = ros_message->status.size;
  pystatus = PyList_New(sizestatus);
  diagnostic_msgs__msg__DiagnosticStatus itemstatus;
  size_t idxstatus;
  for (idxstatus = 0; idxstatus < sizestatus; idxstatus++) {
    itemstatus = ros_message->status.data[idxstatus];
    PyObject * pyitemstatus = convert_to_py_status(&itemstatus);
    if (!pyitemstatus) {
      return NULL;
    }
    PyList_SetItem(pystatus, idxstatus, pyitemstatus);
  }
  assert(PySequence_Check(pystatus));
  assert(pystatus != NULL);
  Py_INCREF(pystatus);
  PyObject_SetAttrString(_pymessage, "status", pystatus);
  assert(_pymessage != NULL);
  return _pymessage;
}
