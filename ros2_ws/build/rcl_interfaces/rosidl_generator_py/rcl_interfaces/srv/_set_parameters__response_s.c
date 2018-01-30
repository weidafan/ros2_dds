// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <rcl_interfaces/srv/set_parameters__response__struct.h>
#include <rcl_interfaces/srv/set_parameters__response__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <rcl_interfaces/msg/set_parameters_result__functions.h>
// end nested array functions include

void * rcl_interfaces_set_parameters__response__convert_from_py(PyObject * _pymsg)
{
  rcl_interfaces__srv__SetParameters_Response * ros_message = rcl_interfaces__srv__SetParameters_Response__create();
  (void)ros_message;
  char full_classname_dest[68];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "rcl_interfaces.srv._set_parameters__response.SetParameters_Response",
      full_classname_dest, 67) == 0);

  PyObject * pyresults = PyObject_GetAttrString(_pymsg, "results");
  PyObject * pyresults_msg_module = PyImport_ImportModule("rcl_interfaces.msg._set_parameters_result");
  PyObject * pyresults_msg_class = PyObject_GetAttrString(pyresults_msg_module, "SetParametersResult");
  PyObject * pyresults_msg_metaclass = PyObject_GetAttrString(pyresults_msg_class, "__class__");
  PyObject * pyresults_convert_from_py = PyObject_GetAttrString(pyresults_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_results = (convert_from_py_signature)PyCapsule_GetPointer(pyresults_convert_from_py, NULL);
  assert(PySequence_Check(pyresults));
  PyObject * seqresults = PySequence_Fast(pyresults, "expected a sequence");
  rcl_interfaces__msg__SetParametersResult * itemresults;
  size_t sizeresults = PySequence_Size(pyresults);
  if (!rcl_interfaces__msg__SetParametersResult__Array__init(&(ros_message->results), sizeresults)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create rcl_interfaces__msg__SetParametersResult__Array ros_message");
    return NULL;
  }
  rcl_interfaces__msg__SetParametersResult * destresults = ros_message->results.data;
  size_t idxresults;
  for (idxresults = 0; idxresults < sizeresults; idxresults++) {
    itemresults = (rcl_interfaces__msg__SetParametersResult *) convert_from_py_results(
      PySequence_Fast_GET_ITEM(seqresults, idxresults));
    if (!itemresults) {
      return NULL;
    }
    memcpy(&destresults[idxresults], itemresults, sizeof(rcl_interfaces__msg__SetParametersResult));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void rcl_interfaces_set_parameters__response__destroy_ros_message(void * raw_ros_message)
{
  rcl_interfaces__srv__SetParameters_Response * ros_message = (rcl_interfaces__srv__SetParameters_Response *)raw_ros_message;
  (void)ros_message;

  rcl_interfaces__srv__SetParameters_Response__destroy(ros_message);
}

PyObject * rcl_interfaces_set_parameters__response__convert_to_py(void * raw_ros_message)
{
  rcl_interfaces__srv__SetParameters_Response * ros_message = (rcl_interfaces__srv__SetParameters_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("rcl_interfaces.srv._set_parameters__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetParameters_Response");

  /* NOTE(esteve): Call constructor of SetParameters_Response */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyresults = NULL;
  PyObject * pyresults_msg_module = PyImport_ImportModule("rcl_interfaces.msg._set_parameters_result");
  PyObject * pyresults_msg_class = PyObject_GetAttrString(pyresults_msg_module, "SetParametersResult");
  PyObject * pyresults_msg_metaclass = PyObject_GetAttrString(pyresults_msg_class, "__class__");
  PyObject * pyresults_convert_to_py = PyObject_GetAttrString(pyresults_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_results = (convert_to_py_signature)PyCapsule_GetPointer(pyresults_convert_to_py, NULL);
  size_t sizeresults = ros_message->results.size;
  pyresults = PyList_New(sizeresults);
  rcl_interfaces__msg__SetParametersResult itemresults;
  size_t idxresults;
  for (idxresults = 0; idxresults < sizeresults; idxresults++) {
    itemresults = ros_message->results.data[idxresults];
    PyObject * pyitemresults = convert_to_py_results(&itemresults);
    if (!pyitemresults) {
      return NULL;
    }
    PyList_SetItem(pyresults, idxresults, pyitemresults);
  }
  assert(PySequence_Check(pyresults));
  assert(pyresults != NULL);
  Py_INCREF(pyresults);
  PyObject_SetAttrString(_pymessage, "results", pyresults);
  assert(_pymessage != NULL);
  return _pymessage;
}
