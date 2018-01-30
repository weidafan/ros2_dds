// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <rcl_interfaces/srv/set_parameters_atomically__request__struct.h>
#include <rcl_interfaces/srv/set_parameters_atomically__request__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <rcl_interfaces/msg/parameter__functions.h>
// end nested array functions include

void * rcl_interfaces_set_parameters_atomically__request__convert_from_py(PyObject * _pymsg)
{
  rcl_interfaces__srv__SetParametersAtomically_Request * ros_message = rcl_interfaces__srv__SetParametersAtomically_Request__create();
  (void)ros_message;
  char full_classname_dest[87];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "rcl_interfaces.srv._set_parameters_atomically__request.SetParametersAtomically_Request",
      full_classname_dest, 86) == 0);

  PyObject * pyparameters = PyObject_GetAttrString(_pymsg, "parameters");
  PyObject * pyparameters_msg_module = PyImport_ImportModule("rcl_interfaces.msg._parameter");
  PyObject * pyparameters_msg_class = PyObject_GetAttrString(pyparameters_msg_module, "Parameter");
  PyObject * pyparameters_msg_metaclass = PyObject_GetAttrString(pyparameters_msg_class, "__class__");
  PyObject * pyparameters_convert_from_py = PyObject_GetAttrString(pyparameters_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_parameters = (convert_from_py_signature)PyCapsule_GetPointer(pyparameters_convert_from_py, NULL);
  assert(PySequence_Check(pyparameters));
  PyObject * seqparameters = PySequence_Fast(pyparameters, "expected a sequence");
  rcl_interfaces__msg__Parameter * itemparameters;
  size_t sizeparameters = PySequence_Size(pyparameters);
  if (!rcl_interfaces__msg__Parameter__Array__init(&(ros_message->parameters), sizeparameters)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create rcl_interfaces__msg__Parameter__Array ros_message");
    return NULL;
  }
  rcl_interfaces__msg__Parameter * destparameters = ros_message->parameters.data;
  size_t idxparameters;
  for (idxparameters = 0; idxparameters < sizeparameters; idxparameters++) {
    itemparameters = (rcl_interfaces__msg__Parameter *) convert_from_py_parameters(
      PySequence_Fast_GET_ITEM(seqparameters, idxparameters));
    if (!itemparameters) {
      return NULL;
    }
    memcpy(&destparameters[idxparameters], itemparameters, sizeof(rcl_interfaces__msg__Parameter));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void rcl_interfaces_set_parameters_atomically__request__destroy_ros_message(void * raw_ros_message)
{
  rcl_interfaces__srv__SetParametersAtomically_Request * ros_message = (rcl_interfaces__srv__SetParametersAtomically_Request *)raw_ros_message;
  (void)ros_message;

  rcl_interfaces__srv__SetParametersAtomically_Request__destroy(ros_message);
}

PyObject * rcl_interfaces_set_parameters_atomically__request__convert_to_py(void * raw_ros_message)
{
  rcl_interfaces__srv__SetParametersAtomically_Request * ros_message = (rcl_interfaces__srv__SetParametersAtomically_Request *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("rcl_interfaces.srv._set_parameters_atomically__request");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetParametersAtomically_Request");

  /* NOTE(esteve): Call constructor of SetParametersAtomically_Request */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyparameters = NULL;
  PyObject * pyparameters_msg_module = PyImport_ImportModule("rcl_interfaces.msg._parameter");
  PyObject * pyparameters_msg_class = PyObject_GetAttrString(pyparameters_msg_module, "Parameter");
  PyObject * pyparameters_msg_metaclass = PyObject_GetAttrString(pyparameters_msg_class, "__class__");
  PyObject * pyparameters_convert_to_py = PyObject_GetAttrString(pyparameters_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_parameters = (convert_to_py_signature)PyCapsule_GetPointer(pyparameters_convert_to_py, NULL);
  size_t sizeparameters = ros_message->parameters.size;
  pyparameters = PyList_New(sizeparameters);
  rcl_interfaces__msg__Parameter itemparameters;
  size_t idxparameters;
  for (idxparameters = 0; idxparameters < sizeparameters; idxparameters++) {
    itemparameters = ros_message->parameters.data[idxparameters];
    PyObject * pyitemparameters = convert_to_py_parameters(&itemparameters);
    if (!pyitemparameters) {
      return NULL;
    }
    PyList_SetItem(pyparameters, idxparameters, pyitemparameters);
  }
  assert(PySequence_Check(pyparameters));
  assert(pyparameters != NULL);
  Py_INCREF(pyparameters);
  PyObject_SetAttrString(_pymessage, "parameters", pyparameters);
  assert(_pymessage != NULL);
  return _pymessage;
}
