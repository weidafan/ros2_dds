// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <test_communication/srv/primitives__response__struct.h>
#include <test_communication/srv/primitives__response__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * test_communication_primitives__response__convert_from_py(PyObject * _pymsg)
{
  test_communication__srv__Primitives_Response * ros_message = test_communication__srv__Primitives_Response__create();
  (void)ros_message;
  char full_classname_dest[65];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "test_communication.srv._primitives__response.Primitives_Response",
      full_classname_dest, 64) == 0);

  PyObject * pybool_value = PyObject_GetAttrString(_pymsg, "bool_value");
  assert(PyBool_Check(pybool_value));
  ros_message->bool_value = (Py_True == pybool_value);
  PyObject * pybyte_value = PyObject_GetAttrString(_pymsg, "byte_value");
  assert(PyBytes_Check(pybyte_value));
  ros_message->byte_value = PyBytes_AS_STRING(pybyte_value)[0];
  PyObject * pychar_value = PyObject_GetAttrString(_pymsg, "char_value");
  assert(PyUnicode_Check(pychar_value));
  ros_message->char_value = PyUnicode_1BYTE_DATA(pychar_value)[0];
  PyObject * pyfloat32_value = PyObject_GetAttrString(_pymsg, "float32_value");
  assert(PyFloat_Check(pyfloat32_value));
  ros_message->float32_value = (float)PyFloat_AS_DOUBLE(pyfloat32_value);
  PyObject * pyfloat64_value = PyObject_GetAttrString(_pymsg, "float64_value");
  assert(PyFloat_Check(pyfloat64_value));
  ros_message->float64_value = PyFloat_AS_DOUBLE(pyfloat64_value);
  PyObject * pyint8_value = PyObject_GetAttrString(_pymsg, "int8_value");
  assert(PyLong_Check(pyint8_value));
  ros_message->int8_value = (int8_t)PyLong_AsLong(pyint8_value);
  PyObject * pyuint8_value = PyObject_GetAttrString(_pymsg, "uint8_value");
  assert(PyLong_Check(pyuint8_value));
  ros_message->uint8_value = (uint8_t)PyLong_AsUnsignedLong(pyuint8_value);
  PyObject * pyint16_value = PyObject_GetAttrString(_pymsg, "int16_value");
  assert(PyLong_Check(pyint16_value));
  ros_message->int16_value = (int16_t)PyLong_AsLong(pyint16_value);
  PyObject * pyuint16_value = PyObject_GetAttrString(_pymsg, "uint16_value");
  assert(PyLong_Check(pyuint16_value));
  ros_message->uint16_value = (uint16_t)PyLong_AsUnsignedLong(pyuint16_value);
  PyObject * pyint32_value = PyObject_GetAttrString(_pymsg, "int32_value");
  assert(PyLong_Check(pyint32_value));
  ros_message->int32_value = (int32_t)PyLong_AsLong(pyint32_value);
  PyObject * pyuint32_value = PyObject_GetAttrString(_pymsg, "uint32_value");
  assert(PyLong_Check(pyuint32_value));
  ros_message->uint32_value = PyLong_AsUnsignedLong(pyuint32_value);
  PyObject * pyint64_value = PyObject_GetAttrString(_pymsg, "int64_value");
  assert(PyLong_Check(pyint64_value));
  ros_message->int64_value = PyLong_AsLongLong(pyint64_value);
  PyObject * pyuint64_value = PyObject_GetAttrString(_pymsg, "uint64_value");
  assert(PyLong_Check(pyuint64_value));
  ros_message->uint64_value = PyLong_AsUnsignedLongLong(pyuint64_value);
  PyObject * pystring_value = PyObject_GetAttrString(_pymsg, "string_value");
  assert(PyUnicode_Check(pystring_value));
  rosidl_generator_c__String__assign(
    &ros_message->string_value, (char *)PyUnicode_1BYTE_DATA(pystring_value));

  assert(ros_message != NULL);
  return ros_message;
}

void test_communication_primitives__response__destroy_ros_message(void * raw_ros_message)
{
  test_communication__srv__Primitives_Response * ros_message = (test_communication__srv__Primitives_Response *)raw_ros_message;
  (void)ros_message;

  test_communication__srv__Primitives_Response__destroy(ros_message);
}

PyObject * test_communication_primitives__response__convert_to_py(void * raw_ros_message)
{
  test_communication__srv__Primitives_Response * ros_message = (test_communication__srv__Primitives_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("test_communication.srv._primitives__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Primitives_Response");

  /* NOTE(esteve): Call constructor of Primitives_Response */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pybool_value = NULL;
  pybool_value = ros_message->bool_value ? Py_True : Py_False;
  assert(pybool_value != NULL);
  Py_INCREF(pybool_value);
  PyObject_SetAttrString(_pymessage, "bool_value", pybool_value);
  PyObject * pybyte_value = NULL;
  pybyte_value = PyBytes_FromStringAndSize((const char *)&ros_message->byte_value, 1);
  assert(pybyte_value != NULL);
  Py_INCREF(pybyte_value);
  PyObject_SetAttrString(_pymessage, "byte_value", pybyte_value);
  PyObject * pychar_value = NULL;
  pychar_value = Py_BuildValue("C", ros_message->char_value);
  assert(pychar_value != NULL);
  Py_INCREF(pychar_value);
  PyObject_SetAttrString(_pymessage, "char_value", pychar_value);
  PyObject * pyfloat32_value = NULL;
  pyfloat32_value = PyFloat_FromDouble(ros_message->float32_value);
  assert(pyfloat32_value != NULL);
  Py_INCREF(pyfloat32_value);
  PyObject_SetAttrString(_pymessage, "float32_value", pyfloat32_value);
  PyObject * pyfloat64_value = NULL;
  pyfloat64_value = PyFloat_FromDouble(ros_message->float64_value);
  assert(pyfloat64_value != NULL);
  Py_INCREF(pyfloat64_value);
  PyObject_SetAttrString(_pymessage, "float64_value", pyfloat64_value);
  PyObject * pyint8_value = NULL;
  pyint8_value = PyLong_FromLong(ros_message->int8_value);
  assert(pyint8_value != NULL);
  Py_INCREF(pyint8_value);
  PyObject_SetAttrString(_pymessage, "int8_value", pyint8_value);
  PyObject * pyuint8_value = NULL;
  pyuint8_value = PyLong_FromUnsignedLong(ros_message->uint8_value);
  assert(pyuint8_value != NULL);
  Py_INCREF(pyuint8_value);
  PyObject_SetAttrString(_pymessage, "uint8_value", pyuint8_value);
  PyObject * pyint16_value = NULL;
  pyint16_value = PyLong_FromLong(ros_message->int16_value);
  assert(pyint16_value != NULL);
  Py_INCREF(pyint16_value);
  PyObject_SetAttrString(_pymessage, "int16_value", pyint16_value);
  PyObject * pyuint16_value = NULL;
  pyuint16_value = PyLong_FromUnsignedLong(ros_message->uint16_value);
  assert(pyuint16_value != NULL);
  Py_INCREF(pyuint16_value);
  PyObject_SetAttrString(_pymessage, "uint16_value", pyuint16_value);
  PyObject * pyint32_value = NULL;
  pyint32_value = PyLong_FromLong(ros_message->int32_value);
  assert(pyint32_value != NULL);
  Py_INCREF(pyint32_value);
  PyObject_SetAttrString(_pymessage, "int32_value", pyint32_value);
  PyObject * pyuint32_value = NULL;
  pyuint32_value = PyLong_FromUnsignedLong(ros_message->uint32_value);
  assert(pyuint32_value != NULL);
  Py_INCREF(pyuint32_value);
  PyObject_SetAttrString(_pymessage, "uint32_value", pyuint32_value);
  PyObject * pyint64_value = NULL;
  pyint64_value = PyLong_FromLongLong(ros_message->int64_value);
  assert(pyint64_value != NULL);
  Py_INCREF(pyint64_value);
  PyObject_SetAttrString(_pymessage, "int64_value", pyint64_value);
  PyObject * pyuint64_value = NULL;
  pyuint64_value = PyLong_FromUnsignedLongLong(ros_message->uint64_value);
  assert(pyuint64_value != NULL);
  Py_INCREF(pyuint64_value);
  PyObject_SetAttrString(_pymessage, "uint64_value", pyuint64_value);
  PyObject * pystring_value = NULL;
  pystring_value = PyUnicode_FromString(ros_message->string_value.data);
  assert(pystring_value != NULL);
  Py_INCREF(pystring_value);
  PyObject_SetAttrString(_pymessage, "string_value", pystring_value);
  assert(_pymessage != NULL);
  return _pymessage;
}
