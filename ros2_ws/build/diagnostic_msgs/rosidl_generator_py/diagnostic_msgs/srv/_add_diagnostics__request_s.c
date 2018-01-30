// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <diagnostic_msgs/srv/add_diagnostics__request__struct.h>
#include <diagnostic_msgs/srv/add_diagnostics__request__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * diagnostic_msgs_add_diagnostics__request__convert_from_py(PyObject * _pymsg)
{
  diagnostic_msgs__srv__AddDiagnostics_Request * ros_message = diagnostic_msgs__srv__AddDiagnostics_Request__create();
  (void)ros_message;
  char full_classname_dest[69];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "diagnostic_msgs.srv._add_diagnostics__request.AddDiagnostics_Request",
      full_classname_dest, 68) == 0);

  PyObject * pyload_namespace = PyObject_GetAttrString(_pymsg, "load_namespace");
  assert(PyUnicode_Check(pyload_namespace));
  rosidl_generator_c__String__assign(
    &ros_message->load_namespace, (char *)PyUnicode_1BYTE_DATA(pyload_namespace));

  assert(ros_message != NULL);
  return ros_message;
}

void diagnostic_msgs_add_diagnostics__request__destroy_ros_message(void * raw_ros_message)
{
  diagnostic_msgs__srv__AddDiagnostics_Request * ros_message = (diagnostic_msgs__srv__AddDiagnostics_Request *)raw_ros_message;
  (void)ros_message;

  diagnostic_msgs__srv__AddDiagnostics_Request__destroy(ros_message);
}

PyObject * diagnostic_msgs_add_diagnostics__request__convert_to_py(void * raw_ros_message)
{
  diagnostic_msgs__srv__AddDiagnostics_Request * ros_message = (diagnostic_msgs__srv__AddDiagnostics_Request *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("diagnostic_msgs.srv._add_diagnostics__request");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AddDiagnostics_Request");

  /* NOTE(esteve): Call constructor of AddDiagnostics_Request */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyload_namespace = NULL;
  pyload_namespace = PyUnicode_FromString(ros_message->load_namespace.data);
  assert(pyload_namespace != NULL);
  Py_INCREF(pyload_namespace);
  PyObject_SetAttrString(_pymessage, "load_namespace", pyload_namespace);
  assert(_pymessage != NULL);
  return _pymessage;
}
