// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <rcl_interfaces/srv/get_parameters__response__struct.h>
#include <rcl_interfaces/srv/get_parameters__response__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <rcl_interfaces/msg/parameter_value__functions.h>
// end nested array functions include

void * rcl_interfaces_get_parameters__response__convert_from_py(PyObject * _pymsg)
{
  rcl_interfaces__srv__GetParameters_Response * ros_message = rcl_interfaces__srv__GetParameters_Response__create();
  (void)ros_message;
  char full_classname_dest[68];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "rcl_interfaces.srv._get_parameters__response.GetParameters_Response",
      full_classname_dest, 67) == 0);

  PyObject * pyvalues = PyObject_GetAttrString(_pymsg, "values");
  PyObject * pyvalues_msg_module = PyImport_ImportModule("rcl_interfaces.msg._parameter_value");
  PyObject * pyvalues_msg_class = PyObject_GetAttrString(pyvalues_msg_module, "ParameterValue");
  PyObject * pyvalues_msg_metaclass = PyObject_GetAttrString(pyvalues_msg_class, "__class__");
  PyObject * pyvalues_convert_from_py = PyObject_GetAttrString(pyvalues_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_values = (convert_from_py_signature)PyCapsule_GetPointer(pyvalues_convert_from_py, NULL);
  assert(PySequence_Check(pyvalues));
  PyObject * seqvalues = PySequence_Fast(pyvalues, "expected a sequence");
  rcl_interfaces__msg__ParameterValue * itemvalues;
  size_t sizevalues = PySequence_Size(pyvalues);
  if (!rcl_interfaces__msg__ParameterValue__Array__init(&(ros_message->values), sizevalues)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create rcl_interfaces__msg__ParameterValue__Array ros_message");
    return NULL;
  }
  rcl_interfaces__msg__ParameterValue * destvalues = ros_message->values.data;
  size_t idxvalues;
  for (idxvalues = 0; idxvalues < sizevalues; idxvalues++) {
    itemvalues = (rcl_interfaces__msg__ParameterValue *) convert_from_py_values(
      PySequence_Fast_GET_ITEM(seqvalues, idxvalues));
    if (!itemvalues) {
      return NULL;
    }
    memcpy(&destvalues[idxvalues], itemvalues, sizeof(rcl_interfaces__msg__ParameterValue));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void rcl_interfaces_get_parameters__response__destroy_ros_message(void * raw_ros_message)
{
  rcl_interfaces__srv__GetParameters_Response * ros_message = (rcl_interfaces__srv__GetParameters_Response *)raw_ros_message;
  (void)ros_message;

  rcl_interfaces__srv__GetParameters_Response__destroy(ros_message);
}

PyObject * rcl_interfaces_get_parameters__response__convert_to_py(void * raw_ros_message)
{
  rcl_interfaces__srv__GetParameters_Response * ros_message = (rcl_interfaces__srv__GetParameters_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("rcl_interfaces.srv._get_parameters__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetParameters_Response");

  /* NOTE(esteve): Call constructor of GetParameters_Response */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyvalues = NULL;
  PyObject * pyvalues_msg_module = PyImport_ImportModule("rcl_interfaces.msg._parameter_value");
  PyObject * pyvalues_msg_class = PyObject_GetAttrString(pyvalues_msg_module, "ParameterValue");
  PyObject * pyvalues_msg_metaclass = PyObject_GetAttrString(pyvalues_msg_class, "__class__");
  PyObject * pyvalues_convert_to_py = PyObject_GetAttrString(pyvalues_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_values = (convert_to_py_signature)PyCapsule_GetPointer(pyvalues_convert_to_py, NULL);
  size_t sizevalues = ros_message->values.size;
  pyvalues = PyList_New(sizevalues);
  rcl_interfaces__msg__ParameterValue itemvalues;
  size_t idxvalues;
  for (idxvalues = 0; idxvalues < sizevalues; idxvalues++) {
    itemvalues = ros_message->values.data[idxvalues];
    PyObject * pyitemvalues = convert_to_py_values(&itemvalues);
    if (!pyitemvalues) {
      return NULL;
    }
    PyList_SetItem(pyvalues, idxvalues, pyitemvalues);
  }
  assert(PySequence_Check(pyvalues));
  assert(pyvalues != NULL);
  Py_INCREF(pyvalues);
  PyObject_SetAttrString(_pymessage, "values", pyvalues);
  assert(_pymessage != NULL);
  return _pymessage;
}
