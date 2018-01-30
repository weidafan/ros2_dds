// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <test_communication/msg/static_array_primitives__struct.h>
#include <test_communication/msg/static_array_primitives__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * test_communication_static_array_primitives__convert_from_py(PyObject * _pymsg)
{
  test_communication__msg__StaticArrayPrimitives * ros_message = test_communication__msg__StaticArrayPrimitives__create();
  (void)ros_message;
  char full_classname_dest[70];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "test_communication.msg._static_array_primitives.StaticArrayPrimitives",
      full_classname_dest, 69) == 0);

  PyObject * pybool_values = PyObject_GetAttrString(_pymsg, "bool_values");
  assert(PySequence_Check(pybool_values));
  PyObject * seqbool_values = PySequence_Fast(pybool_values, "expected a sequence");
  PyObject * itembool_values;
  size_t sizebool_values = 3;
  bool * destbool_values = ros_message->bool_values;
  bool tmpbool_values;
  size_t idxbool_values;
  for (idxbool_values = 0; idxbool_values < sizebool_values; idxbool_values++) {
    itembool_values = PySequence_Fast_GET_ITEM(seqbool_values, idxbool_values);
    assert(PyBool_Check(itembool_values));
    tmpbool_values = (itembool_values == Py_True);
    memcpy(&destbool_values[idxbool_values], &tmpbool_values, sizeof(bool));
  }
  PyObject * pybyte_values = PyObject_GetAttrString(_pymsg, "byte_values");
  assert(PySequence_Check(pybyte_values));
  PyObject * seqbyte_values = PySequence_Fast(pybyte_values, "expected a sequence");
  PyObject * itembyte_values;
  size_t sizebyte_values = 3;
  uint8_t * destbyte_values = ros_message->byte_values;
  uint8_t tmpbyte_values;
  size_t idxbyte_values;
  for (idxbyte_values = 0; idxbyte_values < sizebyte_values; idxbyte_values++) {
    itembyte_values = PySequence_Fast_GET_ITEM(seqbyte_values, idxbyte_values);
    assert(PyBytes_Check(itembyte_values));
    tmpbyte_values = PyBytes_AS_STRING(itembyte_values)[0];
    memcpy(&destbyte_values[idxbyte_values], &tmpbyte_values, sizeof(uint8_t));
  }
  PyObject * pychar_values = PyObject_GetAttrString(_pymsg, "char_values");
  assert(PySequence_Check(pychar_values));
  PyObject * seqchar_values = PySequence_Fast(pychar_values, "expected a sequence");
  PyObject * itemchar_values;
  size_t sizechar_values = 3;
  signed char * destchar_values = ros_message->char_values;
  signed char tmpchar_values;
  size_t idxchar_values;
  for (idxchar_values = 0; idxchar_values < sizechar_values; idxchar_values++) {
    itemchar_values = PySequence_Fast_GET_ITEM(seqchar_values, idxchar_values);
    assert(PyUnicode_Check(itemchar_values));
    tmpchar_values = PyUnicode_1BYTE_DATA(itemchar_values)[0];
    memcpy(&destchar_values[idxchar_values], &tmpchar_values, sizeof(signed char));
  }
  PyObject * pyfloat32_values = PyObject_GetAttrString(_pymsg, "float32_values");
  assert(PySequence_Check(pyfloat32_values));
  PyObject * seqfloat32_values = PySequence_Fast(pyfloat32_values, "expected a sequence");
  PyObject * itemfloat32_values;
  size_t sizefloat32_values = 3;
  float * destfloat32_values = ros_message->float32_values;
  float tmpfloat32_values;
  size_t idxfloat32_values;
  for (idxfloat32_values = 0; idxfloat32_values < sizefloat32_values; idxfloat32_values++) {
    itemfloat32_values = PySequence_Fast_GET_ITEM(seqfloat32_values, idxfloat32_values);
    assert(PyFloat_Check(itemfloat32_values));
    tmpfloat32_values = (float)PyFloat_AS_DOUBLE(itemfloat32_values);
    memcpy(&destfloat32_values[idxfloat32_values], &tmpfloat32_values, sizeof(float));
  }
  PyObject * pyfloat64_values = PyObject_GetAttrString(_pymsg, "float64_values");
  assert(PySequence_Check(pyfloat64_values));
  PyObject * seqfloat64_values = PySequence_Fast(pyfloat64_values, "expected a sequence");
  PyObject * itemfloat64_values;
  size_t sizefloat64_values = 3;
  double * destfloat64_values = ros_message->float64_values;
  double tmpfloat64_values;
  size_t idxfloat64_values;
  for (idxfloat64_values = 0; idxfloat64_values < sizefloat64_values; idxfloat64_values++) {
    itemfloat64_values = PySequence_Fast_GET_ITEM(seqfloat64_values, idxfloat64_values);
    assert(PyFloat_Check(itemfloat64_values));
    tmpfloat64_values = PyFloat_AS_DOUBLE(itemfloat64_values);
    memcpy(&destfloat64_values[idxfloat64_values], &tmpfloat64_values, sizeof(double));
  }
  PyObject * pyint8_values = PyObject_GetAttrString(_pymsg, "int8_values");
  assert(PySequence_Check(pyint8_values));
  PyObject * seqint8_values = PySequence_Fast(pyint8_values, "expected a sequence");
  PyObject * itemint8_values;
  size_t sizeint8_values = 3;
  int8_t * destint8_values = ros_message->int8_values;
  int8_t tmpint8_values;
  size_t idxint8_values;
  for (idxint8_values = 0; idxint8_values < sizeint8_values; idxint8_values++) {
    itemint8_values = PySequence_Fast_GET_ITEM(seqint8_values, idxint8_values);
    assert(PyLong_Check(itemint8_values));
    tmpint8_values = (int8_t)PyLong_AsLong(itemint8_values);
    memcpy(&destint8_values[idxint8_values], &tmpint8_values, sizeof(int8_t));
  }
  PyObject * pyuint8_values = PyObject_GetAttrString(_pymsg, "uint8_values");
  assert(PySequence_Check(pyuint8_values));
  PyObject * sequint8_values = PySequence_Fast(pyuint8_values, "expected a sequence");
  PyObject * itemuint8_values;
  size_t sizeuint8_values = 3;
  uint8_t * destuint8_values = ros_message->uint8_values;
  uint8_t tmpuint8_values;
  size_t idxuint8_values;
  for (idxuint8_values = 0; idxuint8_values < sizeuint8_values; idxuint8_values++) {
    itemuint8_values = PySequence_Fast_GET_ITEM(sequint8_values, idxuint8_values);
    assert(PyLong_Check(itemuint8_values));
    tmpuint8_values = (uint8_t)PyLong_AsUnsignedLong(itemuint8_values);

    memcpy(&destuint8_values[idxuint8_values], &tmpuint8_values, sizeof(uint8_t));
  }
  PyObject * pyint16_values = PyObject_GetAttrString(_pymsg, "int16_values");
  assert(PySequence_Check(pyint16_values));
  PyObject * seqint16_values = PySequence_Fast(pyint16_values, "expected a sequence");
  PyObject * itemint16_values;
  size_t sizeint16_values = 3;
  int16_t * destint16_values = ros_message->int16_values;
  int16_t tmpint16_values;
  size_t idxint16_values;
  for (idxint16_values = 0; idxint16_values < sizeint16_values; idxint16_values++) {
    itemint16_values = PySequence_Fast_GET_ITEM(seqint16_values, idxint16_values);
    assert(PyLong_Check(itemint16_values));
    tmpint16_values = (int16_t)PyLong_AsLong(itemint16_values);
    memcpy(&destint16_values[idxint16_values], &tmpint16_values, sizeof(int16_t));
  }
  PyObject * pyuint16_values = PyObject_GetAttrString(_pymsg, "uint16_values");
  assert(PySequence_Check(pyuint16_values));
  PyObject * sequint16_values = PySequence_Fast(pyuint16_values, "expected a sequence");
  PyObject * itemuint16_values;
  size_t sizeuint16_values = 3;
  uint16_t * destuint16_values = ros_message->uint16_values;
  uint16_t tmpuint16_values;
  size_t idxuint16_values;
  for (idxuint16_values = 0; idxuint16_values < sizeuint16_values; idxuint16_values++) {
    itemuint16_values = PySequence_Fast_GET_ITEM(sequint16_values, idxuint16_values);
    assert(PyLong_Check(itemuint16_values));
    tmpuint16_values = (uint16_t)PyLong_AsUnsignedLong(itemuint16_values);

    memcpy(&destuint16_values[idxuint16_values], &tmpuint16_values, sizeof(uint16_t));
  }
  PyObject * pyint32_values = PyObject_GetAttrString(_pymsg, "int32_values");
  assert(PySequence_Check(pyint32_values));
  PyObject * seqint32_values = PySequence_Fast(pyint32_values, "expected a sequence");
  PyObject * itemint32_values;
  size_t sizeint32_values = 3;
  int32_t * destint32_values = ros_message->int32_values;
  int32_t tmpint32_values;
  size_t idxint32_values;
  for (idxint32_values = 0; idxint32_values < sizeint32_values; idxint32_values++) {
    itemint32_values = PySequence_Fast_GET_ITEM(seqint32_values, idxint32_values);
    assert(PyLong_Check(itemint32_values));
    tmpint32_values = (int32_t)PyLong_AsLong(itemint32_values);
    memcpy(&destint32_values[idxint32_values], &tmpint32_values, sizeof(int32_t));
  }
  PyObject * pyuint32_values = PyObject_GetAttrString(_pymsg, "uint32_values");
  assert(PySequence_Check(pyuint32_values));
  PyObject * sequint32_values = PySequence_Fast(pyuint32_values, "expected a sequence");
  PyObject * itemuint32_values;
  size_t sizeuint32_values = 3;
  uint32_t * destuint32_values = ros_message->uint32_values;
  uint32_t tmpuint32_values;
  size_t idxuint32_values;
  for (idxuint32_values = 0; idxuint32_values < sizeuint32_values; idxuint32_values++) {
    itemuint32_values = PySequence_Fast_GET_ITEM(sequint32_values, idxuint32_values);
    assert(PyLong_Check(itemuint32_values));
    tmpuint32_values = PyLong_AsUnsignedLong(itemuint32_values);

    memcpy(&destuint32_values[idxuint32_values], &tmpuint32_values, sizeof(uint32_t));
  }
  PyObject * pyint64_values = PyObject_GetAttrString(_pymsg, "int64_values");
  assert(PySequence_Check(pyint64_values));
  PyObject * seqint64_values = PySequence_Fast(pyint64_values, "expected a sequence");
  PyObject * itemint64_values;
  size_t sizeint64_values = 3;
  int64_t * destint64_values = ros_message->int64_values;
  int64_t tmpint64_values;
  size_t idxint64_values;
  for (idxint64_values = 0; idxint64_values < sizeint64_values; idxint64_values++) {
    itemint64_values = PySequence_Fast_GET_ITEM(seqint64_values, idxint64_values);
    assert(PyLong_Check(itemint64_values));
    tmpint64_values = PyLong_AsLongLong(itemint64_values);
    memcpy(&destint64_values[idxint64_values], &tmpint64_values, sizeof(int64_t));
  }
  PyObject * pyuint64_values = PyObject_GetAttrString(_pymsg, "uint64_values");
  assert(PySequence_Check(pyuint64_values));
  PyObject * sequint64_values = PySequence_Fast(pyuint64_values, "expected a sequence");
  PyObject * itemuint64_values;
  size_t sizeuint64_values = 3;
  uint64_t * destuint64_values = ros_message->uint64_values;
  uint64_t tmpuint64_values;
  size_t idxuint64_values;
  for (idxuint64_values = 0; idxuint64_values < sizeuint64_values; idxuint64_values++) {
    itemuint64_values = PySequence_Fast_GET_ITEM(sequint64_values, idxuint64_values);
    assert(PyLong_Check(itemuint64_values));
    tmpuint64_values = PyLong_AsUnsignedLongLong(itemuint64_values);
    memcpy(&destuint64_values[idxuint64_values], &tmpuint64_values, sizeof(uint64_t));
  }
  PyObject * pystring_values = PyObject_GetAttrString(_pymsg, "string_values");
  assert(PySequence_Check(pystring_values));
  PyObject * seqstring_values = PySequence_Fast(pystring_values, "expected a sequence");
  PyObject * itemstring_values;
  size_t sizestring_values = 3;
  rosidl_generator_c__String * deststring_values = ros_message->string_values;
  size_t idxstring_values;
  for (idxstring_values = 0; idxstring_values < sizestring_values; idxstring_values++) {
    itemstring_values = PySequence_Fast_GET_ITEM(seqstring_values, idxstring_values);
    assert(PyUnicode_Check(itemstring_values));
    rosidl_generator_c__String__assign(
      &deststring_values[idxstring_values], (char *)PyUnicode_1BYTE_DATA(itemstring_values));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void test_communication_static_array_primitives__destroy_ros_message(void * raw_ros_message)
{
  test_communication__msg__StaticArrayPrimitives * ros_message = (test_communication__msg__StaticArrayPrimitives *)raw_ros_message;
  (void)ros_message;

  test_communication__msg__StaticArrayPrimitives__destroy(ros_message);
}

PyObject * test_communication_static_array_primitives__convert_to_py(void * raw_ros_message)
{
  test_communication__msg__StaticArrayPrimitives * ros_message = (test_communication__msg__StaticArrayPrimitives *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("test_communication.msg._static_array_primitives");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StaticArrayPrimitives");

  /* NOTE(esteve): Call constructor of StaticArrayPrimitives */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pybool_values = NULL;
  size_t sizebool_values = 3;
  bool * tmpmessagedatabool_values = ros_message->bool_values;
  pybool_values = PyList_New(sizebool_values);
  size_t idxbool_values;
  for (idxbool_values = 0; idxbool_values < sizebool_values; idxbool_values++) {
    PyList_SetItem(pybool_values, idxbool_values, tmpmessagedatabool_values[idxbool_values] ? Py_True : Py_False);
  }
  assert(PySequence_Check(pybool_values));
  assert(pybool_values != NULL);
  Py_INCREF(pybool_values);
  PyObject_SetAttrString(_pymessage, "bool_values", pybool_values);
  PyObject * pybyte_values = NULL;
  size_t sizebyte_values = 3;
  uint8_t * tmpmessagedatabyte_values = ros_message->byte_values;
  pybyte_values = PyList_New(sizebyte_values);
  size_t idxbyte_values;
  for (idxbyte_values = 0; idxbyte_values < sizebyte_values; idxbyte_values++) {
    PyList_SetItem(pybyte_values, idxbyte_values,
      PyBytes_FromStringAndSize((const char *)&tmpmessagedatabyte_values[idxbyte_values], 1));
  }
  assert(PySequence_Check(pybyte_values));
  assert(pybyte_values != NULL);
  Py_INCREF(pybyte_values);
  PyObject_SetAttrString(_pymessage, "byte_values", pybyte_values);
  PyObject * pychar_values = NULL;
  size_t sizechar_values = 3;
  signed char * tmpmessagedatachar_values = ros_message->char_values;
  pychar_values = PyList_New(sizechar_values);
  size_t idxchar_values;
  for (idxchar_values = 0; idxchar_values < sizechar_values; idxchar_values++) {
    PyList_SetItem(pychar_values, idxchar_values,
      Py_BuildValue("C", tmpmessagedatachar_values[idxchar_values]));
  }
  assert(PySequence_Check(pychar_values));
  assert(pychar_values != NULL);
  Py_INCREF(pychar_values);
  PyObject_SetAttrString(_pymessage, "char_values", pychar_values);
  PyObject * pyfloat32_values = NULL;
  size_t sizefloat32_values = 3;
  float * tmpmessagedatafloat32_values = ros_message->float32_values;
  pyfloat32_values = PyList_New(sizefloat32_values);
  size_t idxfloat32_values;
  for (idxfloat32_values = 0; idxfloat32_values < sizefloat32_values; idxfloat32_values++) {
    PyList_SetItem(pyfloat32_values, idxfloat32_values, PyFloat_FromDouble(tmpmessagedatafloat32_values[idxfloat32_values]));
  }
  assert(PySequence_Check(pyfloat32_values));
  assert(pyfloat32_values != NULL);
  Py_INCREF(pyfloat32_values);
  PyObject_SetAttrString(_pymessage, "float32_values", pyfloat32_values);
  PyObject * pyfloat64_values = NULL;
  size_t sizefloat64_values = 3;
  double * tmpmessagedatafloat64_values = ros_message->float64_values;
  pyfloat64_values = PyList_New(sizefloat64_values);
  size_t idxfloat64_values;
  for (idxfloat64_values = 0; idxfloat64_values < sizefloat64_values; idxfloat64_values++) {
    PyList_SetItem(pyfloat64_values, idxfloat64_values, PyFloat_FromDouble(tmpmessagedatafloat64_values[idxfloat64_values]));
  }
  assert(PySequence_Check(pyfloat64_values));
  assert(pyfloat64_values != NULL);
  Py_INCREF(pyfloat64_values);
  PyObject_SetAttrString(_pymessage, "float64_values", pyfloat64_values);
  PyObject * pyint8_values = NULL;
  size_t sizeint8_values = 3;
  int8_t * tmpmessagedataint8_values = ros_message->int8_values;
  pyint8_values = PyList_New(sizeint8_values);
  size_t idxint8_values;
  for (idxint8_values = 0; idxint8_values < sizeint8_values; idxint8_values++) {
    PyList_SetItem(pyint8_values, idxint8_values, PyLong_FromLong(tmpmessagedataint8_values[idxint8_values]));
  }
  assert(PySequence_Check(pyint8_values));
  assert(pyint8_values != NULL);
  Py_INCREF(pyint8_values);
  PyObject_SetAttrString(_pymessage, "int8_values", pyint8_values);
  PyObject * pyuint8_values = NULL;
  size_t sizeuint8_values = 3;
  uint8_t * tmpmessagedatauint8_values = ros_message->uint8_values;
  pyuint8_values = PyList_New(sizeuint8_values);
  size_t idxuint8_values;
  for (idxuint8_values = 0; idxuint8_values < sizeuint8_values; idxuint8_values++) {
    PyList_SetItem(pyuint8_values, idxuint8_values, PyLong_FromUnsignedLong(tmpmessagedatauint8_values[idxuint8_values]));
  }
  assert(PySequence_Check(pyuint8_values));
  assert(pyuint8_values != NULL);
  Py_INCREF(pyuint8_values);
  PyObject_SetAttrString(_pymessage, "uint8_values", pyuint8_values);
  PyObject * pyint16_values = NULL;
  size_t sizeint16_values = 3;
  int16_t * tmpmessagedataint16_values = ros_message->int16_values;
  pyint16_values = PyList_New(sizeint16_values);
  size_t idxint16_values;
  for (idxint16_values = 0; idxint16_values < sizeint16_values; idxint16_values++) {
    PyList_SetItem(pyint16_values, idxint16_values, PyLong_FromLong(tmpmessagedataint16_values[idxint16_values]));
  }
  assert(PySequence_Check(pyint16_values));
  assert(pyint16_values != NULL);
  Py_INCREF(pyint16_values);
  PyObject_SetAttrString(_pymessage, "int16_values", pyint16_values);
  PyObject * pyuint16_values = NULL;
  size_t sizeuint16_values = 3;
  uint16_t * tmpmessagedatauint16_values = ros_message->uint16_values;
  pyuint16_values = PyList_New(sizeuint16_values);
  size_t idxuint16_values;
  for (idxuint16_values = 0; idxuint16_values < sizeuint16_values; idxuint16_values++) {
    PyList_SetItem(pyuint16_values, idxuint16_values, PyLong_FromUnsignedLong(tmpmessagedatauint16_values[idxuint16_values]));
  }
  assert(PySequence_Check(pyuint16_values));
  assert(pyuint16_values != NULL);
  Py_INCREF(pyuint16_values);
  PyObject_SetAttrString(_pymessage, "uint16_values", pyuint16_values);
  PyObject * pyint32_values = NULL;
  size_t sizeint32_values = 3;
  int32_t * tmpmessagedataint32_values = ros_message->int32_values;
  pyint32_values = PyList_New(sizeint32_values);
  size_t idxint32_values;
  for (idxint32_values = 0; idxint32_values < sizeint32_values; idxint32_values++) {
    PyList_SetItem(pyint32_values, idxint32_values, PyLong_FromLong(tmpmessagedataint32_values[idxint32_values]));
  }
  assert(PySequence_Check(pyint32_values));
  assert(pyint32_values != NULL);
  Py_INCREF(pyint32_values);
  PyObject_SetAttrString(_pymessage, "int32_values", pyint32_values);
  PyObject * pyuint32_values = NULL;
  size_t sizeuint32_values = 3;
  uint32_t * tmpmessagedatauint32_values = ros_message->uint32_values;
  pyuint32_values = PyList_New(sizeuint32_values);
  size_t idxuint32_values;
  for (idxuint32_values = 0; idxuint32_values < sizeuint32_values; idxuint32_values++) {
    PyList_SetItem(pyuint32_values, idxuint32_values, PyLong_FromUnsignedLong(tmpmessagedatauint32_values[idxuint32_values]));
  }
  assert(PySequence_Check(pyuint32_values));
  assert(pyuint32_values != NULL);
  Py_INCREF(pyuint32_values);
  PyObject_SetAttrString(_pymessage, "uint32_values", pyuint32_values);
  PyObject * pyint64_values = NULL;
  size_t sizeint64_values = 3;
  int64_t * tmpmessagedataint64_values = ros_message->int64_values;
  pyint64_values = PyList_New(sizeint64_values);
  size_t idxint64_values;
  for (idxint64_values = 0; idxint64_values < sizeint64_values; idxint64_values++) {
    PyList_SetItem(pyint64_values, idxint64_values, PyLong_FromLongLong(tmpmessagedataint64_values[idxint64_values]));
  }
  assert(PySequence_Check(pyint64_values));
  assert(pyint64_values != NULL);
  Py_INCREF(pyint64_values);
  PyObject_SetAttrString(_pymessage, "int64_values", pyint64_values);
  PyObject * pyuint64_values = NULL;
  size_t sizeuint64_values = 3;
  uint64_t * tmpmessagedatauint64_values = ros_message->uint64_values;
  pyuint64_values = PyList_New(sizeuint64_values);
  size_t idxuint64_values;
  for (idxuint64_values = 0; idxuint64_values < sizeuint64_values; idxuint64_values++) {
    PyList_SetItem(pyuint64_values, idxuint64_values, PyLong_FromUnsignedLongLong(tmpmessagedatauint64_values[idxuint64_values]));
  }
  assert(PySequence_Check(pyuint64_values));
  assert(pyuint64_values != NULL);
  Py_INCREF(pyuint64_values);
  PyObject_SetAttrString(_pymessage, "uint64_values", pyuint64_values);
  PyObject * pystring_values = NULL;
  size_t sizestring_values = 3;
  rosidl_generator_c__String * tmpmessagedatastring_values = ros_message->string_values;
  pystring_values = PyList_New(sizestring_values);
  size_t idxstring_values;
  for (idxstring_values = 0; idxstring_values < sizestring_values; idxstring_values++) {
    PyList_SetItem(pystring_values, idxstring_values, PyUnicode_FromString(tmpmessagedatastring_values[idxstring_values].data));
  }
  assert(PySequence_Check(pystring_values));
  assert(pystring_values != NULL);
  Py_INCREF(pystring_values);
  PyObject_SetAttrString(_pymessage, "string_values", pystring_values);
  assert(_pymessage != NULL);
  return _pymessage;
}
