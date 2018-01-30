// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <composition/srv/load_node__request__struct.h>
#include <composition/srv/load_node__request__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * composition_load_node__request__convert_from_py(PyObject * _pymsg)
{
  composition__srv__LoadNode_Request * ros_message = composition__srv__LoadNode_Request__create();
  (void)ros_message;
  char full_classname_dest[53];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "composition.srv._load_node__request.LoadNode_Request",
      full_classname_dest, 52) == 0);

  PyObject * pypackage_name = PyObject_GetAttrString(_pymsg, "package_name");
  assert(PyUnicode_Check(pypackage_name));
  rosidl_generator_c__String__assign(
    &ros_message->package_name, (char *)PyUnicode_1BYTE_DATA(pypackage_name));
  PyObject * pyplugin_name = PyObject_GetAttrString(_pymsg, "plugin_name");
  assert(PyUnicode_Check(pyplugin_name));
  rosidl_generator_c__String__assign(
    &ros_message->plugin_name, (char *)PyUnicode_1BYTE_DATA(pyplugin_name));

  assert(ros_message != NULL);
  return ros_message;
}

void composition_load_node__request__destroy_ros_message(void * raw_ros_message)
{
  composition__srv__LoadNode_Request * ros_message = (composition__srv__LoadNode_Request *)raw_ros_message;
  (void)ros_message;

  composition__srv__LoadNode_Request__destroy(ros_message);
}

PyObject * composition_load_node__request__convert_to_py(void * raw_ros_message)
{
  composition__srv__LoadNode_Request * ros_message = (composition__srv__LoadNode_Request *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("composition.srv._load_node__request");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LoadNode_Request");

  /* NOTE(esteve): Call constructor of LoadNode_Request */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pypackage_name = NULL;
  pypackage_name = PyUnicode_FromString(ros_message->package_name.data);
  assert(pypackage_name != NULL);
  Py_INCREF(pypackage_name);
  PyObject_SetAttrString(_pymessage, "package_name", pypackage_name);
  PyObject * pyplugin_name = NULL;
  pyplugin_name = PyUnicode_FromString(ros_message->plugin_name.data);
  assert(pyplugin_name != NULL);
  Py_INCREF(pyplugin_name);
  PyObject_SetAttrString(_pymessage, "plugin_name", pyplugin_name);
  assert(_pymessage != NULL);
  return _pymessage;
}
