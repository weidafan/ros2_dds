// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <lifecycle_msgs/srv/get_available_states__response__struct.h>
#include <lifecycle_msgs/srv/get_available_states__response__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <lifecycle_msgs/msg/state__functions.h>
// end nested array functions include

void * lifecycle_msgs_get_available_states__response__convert_from_py(PyObject * _pymsg)
{
  lifecycle_msgs__srv__GetAvailableStates_Response * ros_message = lifecycle_msgs__srv__GetAvailableStates_Response__create();
  (void)ros_message;
  char full_classname_dest[79];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "lifecycle_msgs.srv._get_available_states__response.GetAvailableStates_Response",
      full_classname_dest, 78) == 0);

  PyObject * pyavailable_states = PyObject_GetAttrString(_pymsg, "available_states");
  PyObject * pyavailable_states_msg_module = PyImport_ImportModule("lifecycle_msgs.msg._state");
  PyObject * pyavailable_states_msg_class = PyObject_GetAttrString(pyavailable_states_msg_module, "State");
  PyObject * pyavailable_states_msg_metaclass = PyObject_GetAttrString(pyavailable_states_msg_class, "__class__");
  PyObject * pyavailable_states_convert_from_py = PyObject_GetAttrString(pyavailable_states_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_available_states = (convert_from_py_signature)PyCapsule_GetPointer(pyavailable_states_convert_from_py, NULL);
  assert(PySequence_Check(pyavailable_states));
  PyObject * seqavailable_states = PySequence_Fast(pyavailable_states, "expected a sequence");
  lifecycle_msgs__msg__State * itemavailable_states;
  size_t sizeavailable_states = PySequence_Size(pyavailable_states);
  if (!lifecycle_msgs__msg__State__Array__init(&(ros_message->available_states), sizeavailable_states)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create lifecycle_msgs__msg__State__Array ros_message");
    return NULL;
  }
  lifecycle_msgs__msg__State * destavailable_states = ros_message->available_states.data;
  size_t idxavailable_states;
  for (idxavailable_states = 0; idxavailable_states < sizeavailable_states; idxavailable_states++) {
    itemavailable_states = (lifecycle_msgs__msg__State *) convert_from_py_available_states(
      PySequence_Fast_GET_ITEM(seqavailable_states, idxavailable_states));
    if (!itemavailable_states) {
      return NULL;
    }
    memcpy(&destavailable_states[idxavailable_states], itemavailable_states, sizeof(lifecycle_msgs__msg__State));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void lifecycle_msgs_get_available_states__response__destroy_ros_message(void * raw_ros_message)
{
  lifecycle_msgs__srv__GetAvailableStates_Response * ros_message = (lifecycle_msgs__srv__GetAvailableStates_Response *)raw_ros_message;
  (void)ros_message;

  lifecycle_msgs__srv__GetAvailableStates_Response__destroy(ros_message);
}

PyObject * lifecycle_msgs_get_available_states__response__convert_to_py(void * raw_ros_message)
{
  lifecycle_msgs__srv__GetAvailableStates_Response * ros_message = (lifecycle_msgs__srv__GetAvailableStates_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("lifecycle_msgs.srv._get_available_states__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetAvailableStates_Response");

  /* NOTE(esteve): Call constructor of GetAvailableStates_Response */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyavailable_states = NULL;
  PyObject * pyavailable_states_msg_module = PyImport_ImportModule("lifecycle_msgs.msg._state");
  PyObject * pyavailable_states_msg_class = PyObject_GetAttrString(pyavailable_states_msg_module, "State");
  PyObject * pyavailable_states_msg_metaclass = PyObject_GetAttrString(pyavailable_states_msg_class, "__class__");
  PyObject * pyavailable_states_convert_to_py = PyObject_GetAttrString(pyavailable_states_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_available_states = (convert_to_py_signature)PyCapsule_GetPointer(pyavailable_states_convert_to_py, NULL);
  size_t sizeavailable_states = ros_message->available_states.size;
  pyavailable_states = PyList_New(sizeavailable_states);
  lifecycle_msgs__msg__State itemavailable_states;
  size_t idxavailable_states;
  for (idxavailable_states = 0; idxavailable_states < sizeavailable_states; idxavailable_states++) {
    itemavailable_states = ros_message->available_states.data[idxavailable_states];
    PyObject * pyitemavailable_states = convert_to_py_available_states(&itemavailable_states);
    if (!pyitemavailable_states) {
      return NULL;
    }
    PyList_SetItem(pyavailable_states, idxavailable_states, pyitemavailable_states);
  }
  assert(PySequence_Check(pyavailable_states));
  assert(pyavailable_states != NULL);
  Py_INCREF(pyavailable_states);
  PyObject_SetAttrString(_pymessage, "available_states", pyavailable_states);
  assert(_pymessage != NULL);
  return _pymessage;
}
