// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <rcl_interfaces/msg/list_parameters_result__struct.h>
#include <rcl_interfaces/msg/list_parameters_result__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * rcl_interfaces_list_parameters_result__convert_from_py(PyObject * _pymsg)
{
  rcl_interfaces__msg__ListParametersResult * ros_message = rcl_interfaces__msg__ListParametersResult__create();
  (void)ros_message;
  char full_classname_dest[64];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "rcl_interfaces.msg._list_parameters_result.ListParametersResult",
      full_classname_dest, 63) == 0);

  PyObject * pynames = PyObject_GetAttrString(_pymsg, "names");
  assert(PySequence_Check(pynames));
  PyObject * seqnames = PySequence_Fast(pynames, "expected a sequence");
  PyObject * itemnames;
  size_t sizenames = PySequence_Size(pynames);
  if (!rosidl_generator_c__String__Array__init(&(ros_message->names), sizenames)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create String__Array ros_message");
    return NULL;
  }
  rosidl_generator_c__String * destnames = ros_message->names.data;
  size_t idxnames;
  for (idxnames = 0; idxnames < sizenames; idxnames++) {
    itemnames = PySequence_Fast_GET_ITEM(seqnames, idxnames);
    assert(PyUnicode_Check(itemnames));
    rosidl_generator_c__String__assign(
      &destnames[idxnames], (char *)PyUnicode_1BYTE_DATA(itemnames));
  }
  PyObject * pyprefixes = PyObject_GetAttrString(_pymsg, "prefixes");
  assert(PySequence_Check(pyprefixes));
  PyObject * seqprefixes = PySequence_Fast(pyprefixes, "expected a sequence");
  PyObject * itemprefixes;
  size_t sizeprefixes = PySequence_Size(pyprefixes);
  if (!rosidl_generator_c__String__Array__init(&(ros_message->prefixes), sizeprefixes)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create String__Array ros_message");
    return NULL;
  }
  rosidl_generator_c__String * destprefixes = ros_message->prefixes.data;
  size_t idxprefixes;
  for (idxprefixes = 0; idxprefixes < sizeprefixes; idxprefixes++) {
    itemprefixes = PySequence_Fast_GET_ITEM(seqprefixes, idxprefixes);
    assert(PyUnicode_Check(itemprefixes));
    rosidl_generator_c__String__assign(
      &destprefixes[idxprefixes], (char *)PyUnicode_1BYTE_DATA(itemprefixes));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void rcl_interfaces_list_parameters_result__destroy_ros_message(void * raw_ros_message)
{
  rcl_interfaces__msg__ListParametersResult * ros_message = (rcl_interfaces__msg__ListParametersResult *)raw_ros_message;
  (void)ros_message;

  rcl_interfaces__msg__ListParametersResult__destroy(ros_message);
}

PyObject * rcl_interfaces_list_parameters_result__convert_to_py(void * raw_ros_message)
{
  rcl_interfaces__msg__ListParametersResult * ros_message = (rcl_interfaces__msg__ListParametersResult *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("rcl_interfaces.msg._list_parameters_result");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ListParametersResult");

  /* NOTE(esteve): Call constructor of ListParametersResult */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pynames = NULL;
  size_t sizenames = ros_message->names.size;
  rosidl_generator_c__String * tmpmessagedatanames = ros_message->names.data;
  pynames = PyList_New(sizenames);
  size_t idxnames;
  for (idxnames = 0; idxnames < sizenames; idxnames++) {
    PyList_SetItem(pynames, idxnames, PyUnicode_FromString(tmpmessagedatanames[idxnames].data));
  }
  assert(PySequence_Check(pynames));
  assert(pynames != NULL);
  Py_INCREF(pynames);
  PyObject_SetAttrString(_pymessage, "names", pynames);
  PyObject * pyprefixes = NULL;
  size_t sizeprefixes = ros_message->prefixes.size;
  rosidl_generator_c__String * tmpmessagedataprefixes = ros_message->prefixes.data;
  pyprefixes = PyList_New(sizeprefixes);
  size_t idxprefixes;
  for (idxprefixes = 0; idxprefixes < sizeprefixes; idxprefixes++) {
    PyList_SetItem(pyprefixes, idxprefixes, PyUnicode_FromString(tmpmessagedataprefixes[idxprefixes].data));
  }
  assert(PySequence_Check(pyprefixes));
  assert(pyprefixes != NULL);
  Py_INCREF(pyprefixes);
  PyObject_SetAttrString(_pymessage, "prefixes", pyprefixes);
  assert(_pymessage != NULL);
  return _pymessage;
}
