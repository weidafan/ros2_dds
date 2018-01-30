// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <rcl_interfaces/srv/get_parameter_types__response__struct.h>
#include <rcl_interfaces/srv/get_parameter_types__response__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>


void * rcl_interfaces_get_parameter_types__response__convert_from_py(PyObject * _pymsg)
{
  rcl_interfaces__srv__GetParameterTypes_Response * ros_message = rcl_interfaces__srv__GetParameterTypes_Response__create();
  (void)ros_message;
  char full_classname_dest[77];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "rcl_interfaces.srv._get_parameter_types__response.GetParameterTypes_Response",
      full_classname_dest, 76) == 0);

  PyObject * pytypes = PyObject_GetAttrString(_pymsg, "types");
  assert(PySequence_Check(pytypes));
  PyObject * seqtypes = PySequence_Fast(pytypes, "expected a sequence");
  PyObject * itemtypes;
  size_t sizetypes = PySequence_Size(pytypes);
  if (!rosidl_generator_c__uint8__Array__init(&(ros_message->types), sizetypes)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Array ros_message");
    return NULL;
  }
  uint8_t * desttypes = ros_message->types.data;
  uint8_t tmptypes;
  size_t idxtypes;
  for (idxtypes = 0; idxtypes < sizetypes; idxtypes++) {
    itemtypes = PySequence_Fast_GET_ITEM(seqtypes, idxtypes);
    assert(PyLong_Check(itemtypes));
    tmptypes = (uint8_t)PyLong_AsUnsignedLong(itemtypes);

    memcpy(&desttypes[idxtypes], &tmptypes, sizeof(uint8_t));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void rcl_interfaces_get_parameter_types__response__destroy_ros_message(void * raw_ros_message)
{
  rcl_interfaces__srv__GetParameterTypes_Response * ros_message = (rcl_interfaces__srv__GetParameterTypes_Response *)raw_ros_message;
  (void)ros_message;

  rcl_interfaces__srv__GetParameterTypes_Response__destroy(ros_message);
}

PyObject * rcl_interfaces_get_parameter_types__response__convert_to_py(void * raw_ros_message)
{
  rcl_interfaces__srv__GetParameterTypes_Response * ros_message = (rcl_interfaces__srv__GetParameterTypes_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("rcl_interfaces.srv._get_parameter_types__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetParameterTypes_Response");

  /* NOTE(esteve): Call constructor of GetParameterTypes_Response */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pytypes = NULL;
  size_t sizetypes = ros_message->types.size;
  uint8_t * tmpmessagedatatypes = ros_message->types.data;
  pytypes = PyList_New(sizetypes);
  size_t idxtypes;
  for (idxtypes = 0; idxtypes < sizetypes; idxtypes++) {
    PyList_SetItem(pytypes, idxtypes, PyLong_FromUnsignedLong(tmpmessagedatatypes[idxtypes]));
  }
  assert(PySequence_Check(pytypes));
  assert(pytypes != NULL);
  Py_INCREF(pytypes);
  PyObject_SetAttrString(_pymessage, "types", pytypes);
  assert(_pymessage != NULL);
  return _pymessage;
}
