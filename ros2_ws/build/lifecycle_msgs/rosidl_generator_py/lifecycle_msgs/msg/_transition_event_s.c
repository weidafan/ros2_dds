// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <lifecycle_msgs/msg/transition_event__struct.h>
#include <lifecycle_msgs/msg/transition_event__functions.h>


void * lifecycle_msgs_transition_event__convert_from_py(PyObject * _pymsg)
{
  lifecycle_msgs__msg__TransitionEvent * ros_message = lifecycle_msgs__msg__TransitionEvent__create();
  (void)ros_message;
  char full_classname_dest[53];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "lifecycle_msgs.msg._transition_event.TransitionEvent",
      full_classname_dest, 52) == 0);

  PyObject * pytimestamp = PyObject_GetAttrString(_pymsg, "timestamp");
  assert(PyLong_Check(pytimestamp));
  ros_message->timestamp = PyLong_AsUnsignedLongLong(pytimestamp);
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
  PyObject * pystart_state = PyObject_GetAttrString(_pymsg, "start_state");
  PyObject * pystart_state_msg_module = PyImport_ImportModule("lifecycle_msgs.msg._state");
  PyObject * pystart_state_msg_class = PyObject_GetAttrString(pystart_state_msg_module, "State");
  PyObject * pystart_state_msg_metaclass = PyObject_GetAttrString(pystart_state_msg_class, "__class__");
  PyObject * pystart_state_convert_from_py = PyObject_GetAttrString(pystart_state_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_start_state = (convert_from_py_signature)PyCapsule_GetPointer(pystart_state_convert_from_py, NULL);
  lifecycle_msgs__msg__State * tmpstart_state = (lifecycle_msgs__msg__State *) convert_from_py_start_state(pystart_state);
  if (!tmpstart_state) {
    return NULL;
  }
  ros_message->start_state = *tmpstart_state;
  PyObject * pygoal_state = PyObject_GetAttrString(_pymsg, "goal_state");
  PyObject * pygoal_state_msg_module = PyImport_ImportModule("lifecycle_msgs.msg._state");
  PyObject * pygoal_state_msg_class = PyObject_GetAttrString(pygoal_state_msg_module, "State");
  PyObject * pygoal_state_msg_metaclass = PyObject_GetAttrString(pygoal_state_msg_class, "__class__");
  PyObject * pygoal_state_convert_from_py = PyObject_GetAttrString(pygoal_state_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_goal_state = (convert_from_py_signature)PyCapsule_GetPointer(pygoal_state_convert_from_py, NULL);
  lifecycle_msgs__msg__State * tmpgoal_state = (lifecycle_msgs__msg__State *) convert_from_py_goal_state(pygoal_state);
  if (!tmpgoal_state) {
    return NULL;
  }
  ros_message->goal_state = *tmpgoal_state;

  assert(ros_message != NULL);
  return ros_message;
}

void lifecycle_msgs_transition_event__destroy_ros_message(void * raw_ros_message)
{
  lifecycle_msgs__msg__TransitionEvent * ros_message = (lifecycle_msgs__msg__TransitionEvent *)raw_ros_message;
  (void)ros_message;

  lifecycle_msgs__msg__TransitionEvent__destroy(ros_message);
}

PyObject * lifecycle_msgs_transition_event__convert_to_py(void * raw_ros_message)
{
  lifecycle_msgs__msg__TransitionEvent * ros_message = (lifecycle_msgs__msg__TransitionEvent *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("lifecycle_msgs.msg._transition_event");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TransitionEvent");

  /* NOTE(esteve): Call constructor of TransitionEvent */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pytimestamp = NULL;
  pytimestamp = PyLong_FromUnsignedLongLong(ros_message->timestamp);
  assert(pytimestamp != NULL);
  Py_INCREF(pytimestamp);
  PyObject_SetAttrString(_pymessage, "timestamp", pytimestamp);
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
  PyObject * pystart_state = NULL;
  PyObject * pystart_state_msg_module = PyImport_ImportModule("lifecycle_msgs.msg._state");
  PyObject * pystart_state_msg_class = PyObject_GetAttrString(pystart_state_msg_module, "State");
  PyObject * pystart_state_msg_metaclass = PyObject_GetAttrString(pystart_state_msg_class, "__class__");
  PyObject * pystart_state_convert_to_py = PyObject_GetAttrString(pystart_state_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_start_state = (convert_to_py_signature)PyCapsule_GetPointer(pystart_state_convert_to_py, NULL);
  lifecycle_msgs__msg__State pytmpstart_state = ros_message->start_state;
  pystart_state = convert_to_py_start_state(&pytmpstart_state);
  if (!pystart_state) {
    return NULL;
  }
  assert(pystart_state != NULL);
  Py_INCREF(pystart_state);
  PyObject_SetAttrString(_pymessage, "start_state", pystart_state);
  PyObject * pygoal_state = NULL;
  PyObject * pygoal_state_msg_module = PyImport_ImportModule("lifecycle_msgs.msg._state");
  PyObject * pygoal_state_msg_class = PyObject_GetAttrString(pygoal_state_msg_module, "State");
  PyObject * pygoal_state_msg_metaclass = PyObject_GetAttrString(pygoal_state_msg_class, "__class__");
  PyObject * pygoal_state_convert_to_py = PyObject_GetAttrString(pygoal_state_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_goal_state = (convert_to_py_signature)PyCapsule_GetPointer(pygoal_state_convert_to_py, NULL);
  lifecycle_msgs__msg__State pytmpgoal_state = ros_message->goal_state;
  pygoal_state = convert_to_py_goal_state(&pytmpgoal_state);
  if (!pygoal_state) {
    return NULL;
  }
  assert(pygoal_state != NULL);
  Py_INCREF(pygoal_state);
  PyObject_SetAttrString(_pymessage, "goal_state", pygoal_state);
  assert(_pymessage != NULL);
  return _pymessage;
}
