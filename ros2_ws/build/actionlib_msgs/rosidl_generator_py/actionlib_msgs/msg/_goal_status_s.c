// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <actionlib_msgs/msg/goal_status__struct.h>
#include <actionlib_msgs/msg/goal_status__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * actionlib_msgs_goal_status__convert_from_py(PyObject * _pymsg)
{
  actionlib_msgs__msg__GoalStatus * ros_message = actionlib_msgs__msg__GoalStatus__create();
  (void)ros_message;
  char full_classname_dest[43];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "actionlib_msgs.msg._goal_status.GoalStatus",
      full_classname_dest, 42) == 0);

  PyObject * pygoal_id = PyObject_GetAttrString(_pymsg, "goal_id");
  PyObject * pygoal_id_msg_module = PyImport_ImportModule("actionlib_msgs.msg._goal_id");
  PyObject * pygoal_id_msg_class = PyObject_GetAttrString(pygoal_id_msg_module, "GoalID");
  PyObject * pygoal_id_msg_metaclass = PyObject_GetAttrString(pygoal_id_msg_class, "__class__");
  PyObject * pygoal_id_convert_from_py = PyObject_GetAttrString(pygoal_id_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_goal_id = (convert_from_py_signature)PyCapsule_GetPointer(pygoal_id_convert_from_py, NULL);
  actionlib_msgs__msg__GoalID * tmpgoal_id = (actionlib_msgs__msg__GoalID *) convert_from_py_goal_id(pygoal_id);
  if (!tmpgoal_id) {
    return NULL;
  }
  ros_message->goal_id = *tmpgoal_id;
  PyObject * pystatus = PyObject_GetAttrString(_pymsg, "status");
  assert(PyLong_Check(pystatus));
  ros_message->status = (uint8_t)PyLong_AsUnsignedLong(pystatus);
  PyObject * pytext = PyObject_GetAttrString(_pymsg, "text");
  assert(PyUnicode_Check(pytext));
  rosidl_generator_c__String__assign(
    &ros_message->text, (char *)PyUnicode_1BYTE_DATA(pytext));

  assert(ros_message != NULL);
  return ros_message;
}

void actionlib_msgs_goal_status__destroy_ros_message(void * raw_ros_message)
{
  actionlib_msgs__msg__GoalStatus * ros_message = (actionlib_msgs__msg__GoalStatus *)raw_ros_message;
  (void)ros_message;

  actionlib_msgs__msg__GoalStatus__destroy(ros_message);
}

PyObject * actionlib_msgs_goal_status__convert_to_py(void * raw_ros_message)
{
  actionlib_msgs__msg__GoalStatus * ros_message = (actionlib_msgs__msg__GoalStatus *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("actionlib_msgs.msg._goal_status");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GoalStatus");

  /* NOTE(esteve): Call constructor of GoalStatus */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pygoal_id = NULL;
  PyObject * pygoal_id_msg_module = PyImport_ImportModule("actionlib_msgs.msg._goal_id");
  PyObject * pygoal_id_msg_class = PyObject_GetAttrString(pygoal_id_msg_module, "GoalID");
  PyObject * pygoal_id_msg_metaclass = PyObject_GetAttrString(pygoal_id_msg_class, "__class__");
  PyObject * pygoal_id_convert_to_py = PyObject_GetAttrString(pygoal_id_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_goal_id = (convert_to_py_signature)PyCapsule_GetPointer(pygoal_id_convert_to_py, NULL);
  actionlib_msgs__msg__GoalID pytmpgoal_id = ros_message->goal_id;
  pygoal_id = convert_to_py_goal_id(&pytmpgoal_id);
  if (!pygoal_id) {
    return NULL;
  }
  assert(pygoal_id != NULL);
  Py_INCREF(pygoal_id);
  PyObject_SetAttrString(_pymessage, "goal_id", pygoal_id);
  PyObject * pystatus = NULL;
  pystatus = PyLong_FromUnsignedLong(ros_message->status);
  assert(pystatus != NULL);
  Py_INCREF(pystatus);
  PyObject_SetAttrString(_pymessage, "status", pystatus);
  PyObject * pytext = NULL;
  pytext = PyUnicode_FromString(ros_message->text.data);
  assert(pytext != NULL);
  Py_INCREF(pytext);
  PyObject_SetAttrString(_pymessage, "text", pytext);
  assert(_pymessage != NULL);
  return _pymessage;
}
