// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <lifecycle_msgs/srv/get_available_transitions__request__struct.h>
#include <lifecycle_msgs/srv/get_available_transitions__request__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * lifecycle_msgs_get_available_transitions__request__convert_from_py(PyObject * _pymsg)
{
  lifecycle_msgs__srv__GetAvailableTransitions_Request * ros_message = lifecycle_msgs__srv__GetAvailableTransitions_Request__create();
  (void)ros_message;
  char full_classname_dest[87];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "lifecycle_msgs.srv._get_available_transitions__request.GetAvailableTransitions_Request",
      full_classname_dest, 86) == 0);

  PyObject * pynode_name = PyObject_GetAttrString(_pymsg, "node_name");
  assert(PyUnicode_Check(pynode_name));
  rosidl_generator_c__String__assign(
    &ros_message->node_name, (char *)PyUnicode_1BYTE_DATA(pynode_name));

  assert(ros_message != NULL);
  return ros_message;
}

void lifecycle_msgs_get_available_transitions__request__destroy_ros_message(void * raw_ros_message)
{
  lifecycle_msgs__srv__GetAvailableTransitions_Request * ros_message = (lifecycle_msgs__srv__GetAvailableTransitions_Request *)raw_ros_message;
  (void)ros_message;

  lifecycle_msgs__srv__GetAvailableTransitions_Request__destroy(ros_message);
}

PyObject * lifecycle_msgs_get_available_transitions__request__convert_to_py(void * raw_ros_message)
{
  lifecycle_msgs__srv__GetAvailableTransitions_Request * ros_message = (lifecycle_msgs__srv__GetAvailableTransitions_Request *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("lifecycle_msgs.srv._get_available_transitions__request");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetAvailableTransitions_Request");

  /* NOTE(esteve): Call constructor of GetAvailableTransitions_Request */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pynode_name = NULL;
  pynode_name = PyUnicode_FromString(ros_message->node_name.data);
  assert(pynode_name != NULL);
  Py_INCREF(pynode_name);
  PyObject_SetAttrString(_pymessage, "node_name", pynode_name);
  assert(_pymessage != NULL);
  return _pymessage;
}
