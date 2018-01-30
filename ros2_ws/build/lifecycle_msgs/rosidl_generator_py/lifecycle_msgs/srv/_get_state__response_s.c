// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <lifecycle_msgs/srv/get_state__response__struct.h>
#include <lifecycle_msgs/srv/get_state__response__functions.h>


void * lifecycle_msgs_get_state__response__convert_from_py(PyObject * _pymsg)
{
  lifecycle_msgs__srv__GetState_Response * ros_message = lifecycle_msgs__srv__GetState_Response__create();
  (void)ros_message;
  char full_classname_dest[58];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "lifecycle_msgs.srv._get_state__response.GetState_Response",
      full_classname_dest, 57) == 0);

  PyObject * pycurrent_state = PyObject_GetAttrString(_pymsg, "current_state");
  PyObject * pycurrent_state_msg_module = PyImport_ImportModule("lifecycle_msgs.msg._state");
  PyObject * pycurrent_state_msg_class = PyObject_GetAttrString(pycurrent_state_msg_module, "State");
  PyObject * pycurrent_state_msg_metaclass = PyObject_GetAttrString(pycurrent_state_msg_class, "__class__");
  PyObject * pycurrent_state_convert_from_py = PyObject_GetAttrString(pycurrent_state_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_current_state = (convert_from_py_signature)PyCapsule_GetPointer(pycurrent_state_convert_from_py, NULL);
  lifecycle_msgs__msg__State * tmpcurrent_state = (lifecycle_msgs__msg__State *) convert_from_py_current_state(pycurrent_state);
  if (!tmpcurrent_state) {
    return NULL;
  }
  ros_message->current_state = *tmpcurrent_state;

  assert(ros_message != NULL);
  return ros_message;
}

void lifecycle_msgs_get_state__response__destroy_ros_message(void * raw_ros_message)
{
  lifecycle_msgs__srv__GetState_Response * ros_message = (lifecycle_msgs__srv__GetState_Response *)raw_ros_message;
  (void)ros_message;

  lifecycle_msgs__srv__GetState_Response__destroy(ros_message);
}

PyObject * lifecycle_msgs_get_state__response__convert_to_py(void * raw_ros_message)
{
  lifecycle_msgs__srv__GetState_Response * ros_message = (lifecycle_msgs__srv__GetState_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("lifecycle_msgs.srv._get_state__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetState_Response");

  /* NOTE(esteve): Call constructor of GetState_Response */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pycurrent_state = NULL;
  PyObject * pycurrent_state_msg_module = PyImport_ImportModule("lifecycle_msgs.msg._state");
  PyObject * pycurrent_state_msg_class = PyObject_GetAttrString(pycurrent_state_msg_module, "State");
  PyObject * pycurrent_state_msg_metaclass = PyObject_GetAttrString(pycurrent_state_msg_class, "__class__");
  PyObject * pycurrent_state_convert_to_py = PyObject_GetAttrString(pycurrent_state_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_current_state = (convert_to_py_signature)PyCapsule_GetPointer(pycurrent_state_convert_to_py, NULL);
  lifecycle_msgs__msg__State pytmpcurrent_state = ros_message->current_state;
  pycurrent_state = convert_to_py_current_state(&pytmpcurrent_state);
  if (!pycurrent_state) {
    return NULL;
  }
  assert(pycurrent_state != NULL);
  Py_INCREF(pycurrent_state);
  PyObject_SetAttrString(_pymessage, "current_state", pycurrent_state);
  assert(_pymessage != NULL);
  return _pymessage;
}
