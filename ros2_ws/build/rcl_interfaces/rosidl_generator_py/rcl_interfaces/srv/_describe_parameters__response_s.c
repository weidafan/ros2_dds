// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <rcl_interfaces/srv/describe_parameters__response__struct.h>
#include <rcl_interfaces/srv/describe_parameters__response__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <rcl_interfaces/msg/parameter_descriptor__functions.h>
// end nested array functions include

void * rcl_interfaces_describe_parameters__response__convert_from_py(PyObject * _pymsg)
{
  rcl_interfaces__srv__DescribeParameters_Response * ros_message = rcl_interfaces__srv__DescribeParameters_Response__create();
  (void)ros_message;
  char full_classname_dest[78];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "rcl_interfaces.srv._describe_parameters__response.DescribeParameters_Response",
      full_classname_dest, 77) == 0);

  PyObject * pydescriptors = PyObject_GetAttrString(_pymsg, "descriptors");
  PyObject * pydescriptors_msg_module = PyImport_ImportModule("rcl_interfaces.msg._parameter_descriptor");
  PyObject * pydescriptors_msg_class = PyObject_GetAttrString(pydescriptors_msg_module, "ParameterDescriptor");
  PyObject * pydescriptors_msg_metaclass = PyObject_GetAttrString(pydescriptors_msg_class, "__class__");
  PyObject * pydescriptors_convert_from_py = PyObject_GetAttrString(pydescriptors_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_descriptors = (convert_from_py_signature)PyCapsule_GetPointer(pydescriptors_convert_from_py, NULL);
  assert(PySequence_Check(pydescriptors));
  PyObject * seqdescriptors = PySequence_Fast(pydescriptors, "expected a sequence");
  rcl_interfaces__msg__ParameterDescriptor * itemdescriptors;
  size_t sizedescriptors = PySequence_Size(pydescriptors);
  if (!rcl_interfaces__msg__ParameterDescriptor__Array__init(&(ros_message->descriptors), sizedescriptors)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create rcl_interfaces__msg__ParameterDescriptor__Array ros_message");
    return NULL;
  }
  rcl_interfaces__msg__ParameterDescriptor * destdescriptors = ros_message->descriptors.data;
  size_t idxdescriptors;
  for (idxdescriptors = 0; idxdescriptors < sizedescriptors; idxdescriptors++) {
    itemdescriptors = (rcl_interfaces__msg__ParameterDescriptor *) convert_from_py_descriptors(
      PySequence_Fast_GET_ITEM(seqdescriptors, idxdescriptors));
    if (!itemdescriptors) {
      return NULL;
    }
    memcpy(&destdescriptors[idxdescriptors], itemdescriptors, sizeof(rcl_interfaces__msg__ParameterDescriptor));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void rcl_interfaces_describe_parameters__response__destroy_ros_message(void * raw_ros_message)
{
  rcl_interfaces__srv__DescribeParameters_Response * ros_message = (rcl_interfaces__srv__DescribeParameters_Response *)raw_ros_message;
  (void)ros_message;

  rcl_interfaces__srv__DescribeParameters_Response__destroy(ros_message);
}

PyObject * rcl_interfaces_describe_parameters__response__convert_to_py(void * raw_ros_message)
{
  rcl_interfaces__srv__DescribeParameters_Response * ros_message = (rcl_interfaces__srv__DescribeParameters_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("rcl_interfaces.srv._describe_parameters__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DescribeParameters_Response");

  /* NOTE(esteve): Call constructor of DescribeParameters_Response */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pydescriptors = NULL;
  PyObject * pydescriptors_msg_module = PyImport_ImportModule("rcl_interfaces.msg._parameter_descriptor");
  PyObject * pydescriptors_msg_class = PyObject_GetAttrString(pydescriptors_msg_module, "ParameterDescriptor");
  PyObject * pydescriptors_msg_metaclass = PyObject_GetAttrString(pydescriptors_msg_class, "__class__");
  PyObject * pydescriptors_convert_to_py = PyObject_GetAttrString(pydescriptors_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_descriptors = (convert_to_py_signature)PyCapsule_GetPointer(pydescriptors_convert_to_py, NULL);
  size_t sizedescriptors = ros_message->descriptors.size;
  pydescriptors = PyList_New(sizedescriptors);
  rcl_interfaces__msg__ParameterDescriptor itemdescriptors;
  size_t idxdescriptors;
  for (idxdescriptors = 0; idxdescriptors < sizedescriptors; idxdescriptors++) {
    itemdescriptors = ros_message->descriptors.data[idxdescriptors];
    PyObject * pyitemdescriptors = convert_to_py_descriptors(&itemdescriptors);
    if (!pyitemdescriptors) {
      return NULL;
    }
    PyList_SetItem(pydescriptors, idxdescriptors, pyitemdescriptors);
  }
  assert(PySequence_Check(pydescriptors));
  assert(pydescriptors != NULL);
  Py_INCREF(pydescriptors);
  PyObject_SetAttrString(_pymessage, "descriptors", pydescriptors);
  assert(_pymessage != NULL);
  return _pymessage;
}
