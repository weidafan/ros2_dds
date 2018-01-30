// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <lifecycle_msgs/srv/change_state__request__struct.h>
#include <lifecycle_msgs/srv/change_state__request__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * lifecycle_msgs_change_state__request__convert_from_py(PyObject * _pymsg)
{
  lifecycle_msgs__srv__ChangeState_Request * ros_message = lifecycle_msgs__srv__ChangeState_Request__create();
  (void)ros_message;
  char full_classname_dest[62];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "lifecycle_msgs.srv._change_state__request.ChangeState_Request",
      full_classname_dest, 61) == 0);

  PyObject * pynode_name = PyObject_GetAttrString(_pymsg, "node_name");
  assert(PyUnicode_Check(pynode_name));
  rosidl_generator_c__String__assign(
    &ros_message->node_name, (char *)PyUnicode_1BYTE_DATA(pynode_name));
  PyObject * pytransition = PyObject_GetAttrString(_pymsg, "transition");
  PyObject * pytransition_msg_module = PyImport_ImportModule("lifecycle_msgs.msg._transition");
  PyObject * pytransition_msg_class = PyObject_GetAttrString(pytransition_msg_module, "Transition");
  PyObject * pytransition_msg_metaclass = PyObject_GetAttrString(pytransition_msg_class, "__class__");
  PyObject * pytransition_convert_from_py = PyObject_GetAttrString(pytransition_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_transition = (convert_from_py_signature)PyCapsule_GetPointer(pytransition_convert_from_py, NULL);
  lifecycle_msgs__msg__Transition * tmptransition = (lifecycle_msgs__msg__Transition *) convert_from_py_transition(pytransition);
  if (!tmptransition) {
    return NULL;
  }
  ros_message->transition = *tmptransition;

  assert(ros_message != NULL);
  return ros_message;
}

void lifecycle_msgs_change_state__request__destroy_ros_message(void * raw_ros_message)
{
  lifecycle_msgs__srv__ChangeState_Request * ros_message = (lifecycle_msgs__srv__ChangeState_Request *)raw_ros_message;
  (void)ros_message;

  lifecycle_msgs__srv__ChangeState_Request__destroy(ros_message);
}

PyObject * lifecycle_msgs_change_state__request__convert_to_py(void * raw_ros_message)
{
  lifecycle_msgs__srv__ChangeState_Request * ros_message = (lifecycle_msgs__srv__ChangeState_Request *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("lifecycle_msgs.srv._change_state__request");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChangeState_Request");

  /* NOTE(esteve): Call constructor of ChangeState_Request */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pynode_name = NULL;
  pynode_name = PyUnicode_FromString(ros_message->node_name.data);
  assert(pynode_name != NULL);
  Py_INCREF(pynode_name);
  PyObject_SetAttrString(_pymessage, "node_name", pynode_name);
  PyObject * pytransition = NULL;
  PyObject * pytransition_msg_module = PyImport_ImportModule("lifecycle_msgs.msg._transition");
  PyObject * pytransition_msg_class = PyObject_GetAttrString(pytransition_msg_module, "Transition");
  PyObject * pytransition_msg_metaclass = PyObject_GetAttrString(pytransition_msg_class, "__class__");
  PyObject * pytransition_convert_to_py = PyObject_GetAttrString(pytransition_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_transition = (convert_to_py_signature)PyCapsule_GetPointer(pytransition_convert_to_py, NULL);
  lifecycle_msgs__msg__Transition pytmptransition = ros_message->transition;
  pytransition = convert_to_py_transition(&pytmptransition);
  if (!pytransition) {
    return NULL;
  }
  assert(pytransition != NULL);
  Py_INCREF(pytransition);
  PyObject_SetAttrString(_pymessage, "transition", pytransition);
  assert(_pymessage != NULL);
  return _pymessage;
}
