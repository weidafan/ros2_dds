// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <rcl_interfaces/srv/list_parameters__request__struct.h>
#include <rcl_interfaces/srv/list_parameters__request__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * rcl_interfaces_list_parameters__request__convert_from_py(PyObject * _pymsg)
{
  rcl_interfaces__srv__ListParameters_Request * ros_message = rcl_interfaces__srv__ListParameters_Request__create();
  (void)ros_message;
  char full_classname_dest[68];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "rcl_interfaces.srv._list_parameters__request.ListParameters_Request",
      full_classname_dest, 67) == 0);

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
  PyObject * pydepth = PyObject_GetAttrString(_pymsg, "depth");
  assert(PyLong_Check(pydepth));
  ros_message->depth = PyLong_AsUnsignedLongLong(pydepth);

  assert(ros_message != NULL);
  return ros_message;
}

void rcl_interfaces_list_parameters__request__destroy_ros_message(void * raw_ros_message)
{
  rcl_interfaces__srv__ListParameters_Request * ros_message = (rcl_interfaces__srv__ListParameters_Request *)raw_ros_message;
  (void)ros_message;

  rcl_interfaces__srv__ListParameters_Request__destroy(ros_message);
}

PyObject * rcl_interfaces_list_parameters__request__convert_to_py(void * raw_ros_message)
{
  rcl_interfaces__srv__ListParameters_Request * ros_message = (rcl_interfaces__srv__ListParameters_Request *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("rcl_interfaces.srv._list_parameters__request");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ListParameters_Request");

  /* NOTE(esteve): Call constructor of ListParameters_Request */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

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
  PyObject * pydepth = NULL;
  pydepth = PyLong_FromUnsignedLongLong(ros_message->depth);
  assert(pydepth != NULL);
  Py_INCREF(pydepth);
  PyObject_SetAttrString(_pymessage, "depth", pydepth);
  assert(_pymessage != NULL);
  return _pymessage;
}
