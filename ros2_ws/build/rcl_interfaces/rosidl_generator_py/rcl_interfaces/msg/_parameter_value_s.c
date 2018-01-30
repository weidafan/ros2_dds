// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <rcl_interfaces/msg/parameter_value__struct.h>
#include <rcl_interfaces/msg/parameter_value__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>


void * rcl_interfaces_parameter_value__convert_from_py(PyObject * _pymsg)
{
  rcl_interfaces__msg__ParameterValue * ros_message = rcl_interfaces__msg__ParameterValue__create();
  (void)ros_message;
  char full_classname_dest[51];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "rcl_interfaces.msg._parameter_value.ParameterValue",
      full_classname_dest, 50) == 0);

  PyObject * pytype = PyObject_GetAttrString(_pymsg, "type");
  assert(PyLong_Check(pytype));
  ros_message->type = (uint8_t)PyLong_AsUnsignedLong(pytype);
  PyObject * pybool_value = PyObject_GetAttrString(_pymsg, "bool_value");
  assert(PyBool_Check(pybool_value));
  ros_message->bool_value = (Py_True == pybool_value);
  PyObject * pyinteger_value = PyObject_GetAttrString(_pymsg, "integer_value");
  assert(PyLong_Check(pyinteger_value));
  ros_message->integer_value = PyLong_AsLongLong(pyinteger_value);
  PyObject * pydouble_value = PyObject_GetAttrString(_pymsg, "double_value");
  assert(PyFloat_Check(pydouble_value));
  ros_message->double_value = PyFloat_AS_DOUBLE(pydouble_value);
  PyObject * pystring_value = PyObject_GetAttrString(_pymsg, "string_value");
  assert(PyUnicode_Check(pystring_value));
  rosidl_generator_c__String__assign(
    &ros_message->string_value, (char *)PyUnicode_1BYTE_DATA(pystring_value));
  PyObject * pybytes_value = PyObject_GetAttrString(_pymsg, "bytes_value");
  assert(PySequence_Check(pybytes_value));
  PyObject * seqbytes_value = PySequence_Fast(pybytes_value, "expected a sequence");
  PyObject * itembytes_value;
  size_t sizebytes_value = PySequence_Size(pybytes_value);
  if (!rosidl_generator_c__byte__Array__init(&(ros_message->bytes_value), sizebytes_value)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create byte__Array ros_message");
    return NULL;
  }
  uint8_t * destbytes_value = ros_message->bytes_value.data;
  uint8_t tmpbytes_value;
  size_t idxbytes_value;
  for (idxbytes_value = 0; idxbytes_value < sizebytes_value; idxbytes_value++) {
    itembytes_value = PySequence_Fast_GET_ITEM(seqbytes_value, idxbytes_value);
    assert(PyBytes_Check(itembytes_value));
    tmpbytes_value = PyBytes_AS_STRING(itembytes_value)[0];
    memcpy(&destbytes_value[idxbytes_value], &tmpbytes_value, sizeof(uint8_t));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void rcl_interfaces_parameter_value__destroy_ros_message(void * raw_ros_message)
{
  rcl_interfaces__msg__ParameterValue * ros_message = (rcl_interfaces__msg__ParameterValue *)raw_ros_message;
  (void)ros_message;

  rcl_interfaces__msg__ParameterValue__destroy(ros_message);
}

PyObject * rcl_interfaces_parameter_value__convert_to_py(void * raw_ros_message)
{
  rcl_interfaces__msg__ParameterValue * ros_message = (rcl_interfaces__msg__ParameterValue *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("rcl_interfaces.msg._parameter_value");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ParameterValue");

  /* NOTE(esteve): Call constructor of ParameterValue */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pytype = NULL;
  pytype = PyLong_FromUnsignedLong(ros_message->type);
  assert(pytype != NULL);
  Py_INCREF(pytype);
  PyObject_SetAttrString(_pymessage, "type", pytype);
  PyObject * pybool_value = NULL;
  pybool_value = ros_message->bool_value ? Py_True : Py_False;
  assert(pybool_value != NULL);
  Py_INCREF(pybool_value);
  PyObject_SetAttrString(_pymessage, "bool_value", pybool_value);
  PyObject * pyinteger_value = NULL;
  pyinteger_value = PyLong_FromLongLong(ros_message->integer_value);
  assert(pyinteger_value != NULL);
  Py_INCREF(pyinteger_value);
  PyObject_SetAttrString(_pymessage, "integer_value", pyinteger_value);
  PyObject * pydouble_value = NULL;
  pydouble_value = PyFloat_FromDouble(ros_message->double_value);
  assert(pydouble_value != NULL);
  Py_INCREF(pydouble_value);
  PyObject_SetAttrString(_pymessage, "double_value", pydouble_value);
  PyObject * pystring_value = NULL;
  pystring_value = PyUnicode_FromString(ros_message->string_value.data);
  assert(pystring_value != NULL);
  Py_INCREF(pystring_value);
  PyObject_SetAttrString(_pymessage, "string_value", pystring_value);
  PyObject * pybytes_value = NULL;
  size_t sizebytes_value = ros_message->bytes_value.size;
  uint8_t * tmpmessagedatabytes_value = ros_message->bytes_value.data;
  pybytes_value = PyList_New(sizebytes_value);
  size_t idxbytes_value;
  for (idxbytes_value = 0; idxbytes_value < sizebytes_value; idxbytes_value++) {
    PyList_SetItem(pybytes_value, idxbytes_value,
      PyBytes_FromStringAndSize((const char *)&tmpmessagedatabytes_value[idxbytes_value], 1));
  }
  assert(PySequence_Check(pybytes_value));
  assert(pybytes_value != NULL);
  Py_INCREF(pybytes_value);
  PyObject_SetAttrString(_pymessage, "bytes_value", pybytes_value);
  assert(_pymessage != NULL);
  return _pymessage;
}
