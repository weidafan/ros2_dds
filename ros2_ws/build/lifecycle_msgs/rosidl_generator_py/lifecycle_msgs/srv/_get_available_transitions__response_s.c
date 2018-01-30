// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <lifecycle_msgs/srv/get_available_transitions__response__struct.h>
#include <lifecycle_msgs/srv/get_available_transitions__response__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <lifecycle_msgs/msg/transition_description__functions.h>
// end nested array functions include

void * lifecycle_msgs_get_available_transitions__response__convert_from_py(PyObject * _pymsg)
{
  lifecycle_msgs__srv__GetAvailableTransitions_Response * ros_message = lifecycle_msgs__srv__GetAvailableTransitions_Response__create();
  (void)ros_message;
  char full_classname_dest[89];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "lifecycle_msgs.srv._get_available_transitions__response.GetAvailableTransitions_Response",
      full_classname_dest, 88) == 0);

  PyObject * pyavailable_transitions = PyObject_GetAttrString(_pymsg, "available_transitions");
  PyObject * pyavailable_transitions_msg_module = PyImport_ImportModule("lifecycle_msgs.msg._transition_description");
  PyObject * pyavailable_transitions_msg_class = PyObject_GetAttrString(pyavailable_transitions_msg_module, "TransitionDescription");
  PyObject * pyavailable_transitions_msg_metaclass = PyObject_GetAttrString(pyavailable_transitions_msg_class, "__class__");
  PyObject * pyavailable_transitions_convert_from_py = PyObject_GetAttrString(pyavailable_transitions_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_available_transitions = (convert_from_py_signature)PyCapsule_GetPointer(pyavailable_transitions_convert_from_py, NULL);
  assert(PySequence_Check(pyavailable_transitions));
  PyObject * seqavailable_transitions = PySequence_Fast(pyavailable_transitions, "expected a sequence");
  lifecycle_msgs__msg__TransitionDescription * itemavailable_transitions;
  size_t sizeavailable_transitions = PySequence_Size(pyavailable_transitions);
  if (!lifecycle_msgs__msg__TransitionDescription__Array__init(&(ros_message->available_transitions), sizeavailable_transitions)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create lifecycle_msgs__msg__TransitionDescription__Array ros_message");
    return NULL;
  }
  lifecycle_msgs__msg__TransitionDescription * destavailable_transitions = ros_message->available_transitions.data;
  size_t idxavailable_transitions;
  for (idxavailable_transitions = 0; idxavailable_transitions < sizeavailable_transitions; idxavailable_transitions++) {
    itemavailable_transitions = (lifecycle_msgs__msg__TransitionDescription *) convert_from_py_available_transitions(
      PySequence_Fast_GET_ITEM(seqavailable_transitions, idxavailable_transitions));
    if (!itemavailable_transitions) {
      return NULL;
    }
    memcpy(&destavailable_transitions[idxavailable_transitions], itemavailable_transitions, sizeof(lifecycle_msgs__msg__TransitionDescription));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void lifecycle_msgs_get_available_transitions__response__destroy_ros_message(void * raw_ros_message)
{
  lifecycle_msgs__srv__GetAvailableTransitions_Response * ros_message = (lifecycle_msgs__srv__GetAvailableTransitions_Response *)raw_ros_message;
  (void)ros_message;

  lifecycle_msgs__srv__GetAvailableTransitions_Response__destroy(ros_message);
}

PyObject * lifecycle_msgs_get_available_transitions__response__convert_to_py(void * raw_ros_message)
{
  lifecycle_msgs__srv__GetAvailableTransitions_Response * ros_message = (lifecycle_msgs__srv__GetAvailableTransitions_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("lifecycle_msgs.srv._get_available_transitions__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetAvailableTransitions_Response");

  /* NOTE(esteve): Call constructor of GetAvailableTransitions_Response */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyavailable_transitions = NULL;
  PyObject * pyavailable_transitions_msg_module = PyImport_ImportModule("lifecycle_msgs.msg._transition_description");
  PyObject * pyavailable_transitions_msg_class = PyObject_GetAttrString(pyavailable_transitions_msg_module, "TransitionDescription");
  PyObject * pyavailable_transitions_msg_metaclass = PyObject_GetAttrString(pyavailable_transitions_msg_class, "__class__");
  PyObject * pyavailable_transitions_convert_to_py = PyObject_GetAttrString(pyavailable_transitions_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_available_transitions = (convert_to_py_signature)PyCapsule_GetPointer(pyavailable_transitions_convert_to_py, NULL);
  size_t sizeavailable_transitions = ros_message->available_transitions.size;
  pyavailable_transitions = PyList_New(sizeavailable_transitions);
  lifecycle_msgs__msg__TransitionDescription itemavailable_transitions;
  size_t idxavailable_transitions;
  for (idxavailable_transitions = 0; idxavailable_transitions < sizeavailable_transitions; idxavailable_transitions++) {
    itemavailable_transitions = ros_message->available_transitions.data[idxavailable_transitions];
    PyObject * pyitemavailable_transitions = convert_to_py_available_transitions(&itemavailable_transitions);
    if (!pyitemavailable_transitions) {
      return NULL;
    }
    PyList_SetItem(pyavailable_transitions, idxavailable_transitions, pyitemavailable_transitions);
  }
  assert(PySequence_Check(pyavailable_transitions));
  assert(pyavailable_transitions != NULL);
  Py_INCREF(pyavailable_transitions);
  PyObject_SetAttrString(_pymessage, "available_transitions", pyavailable_transitions);
  assert(_pymessage != NULL);
  return _pymessage;
}
