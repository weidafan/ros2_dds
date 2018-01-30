// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <test_communication/msg/bounded_array_nested__struct.h>
#include <test_communication/msg/bounded_array_nested__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <test_communication/msg/primitives__functions.h>
// end nested array functions include

void * test_communication_bounded_array_nested__convert_from_py(PyObject * _pymsg)
{
  test_communication__msg__BoundedArrayNested * ros_message = test_communication__msg__BoundedArrayNested__create();
  (void)ros_message;
  char full_classname_dest[64];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "test_communication.msg._bounded_array_nested.BoundedArrayNested",
      full_classname_dest, 63) == 0);

  PyObject * pyprimitive_values = PyObject_GetAttrString(_pymsg, "primitive_values");
  PyObject * pyprimitive_values_msg_module = PyImport_ImportModule("test_communication.msg._primitives");
  PyObject * pyprimitive_values_msg_class = PyObject_GetAttrString(pyprimitive_values_msg_module, "Primitives");
  PyObject * pyprimitive_values_msg_metaclass = PyObject_GetAttrString(pyprimitive_values_msg_class, "__class__");
  PyObject * pyprimitive_values_convert_from_py = PyObject_GetAttrString(pyprimitive_values_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_primitive_values = (convert_from_py_signature)PyCapsule_GetPointer(pyprimitive_values_convert_from_py, NULL);
  assert(PySequence_Check(pyprimitive_values));
  PyObject * seqprimitive_values = PySequence_Fast(pyprimitive_values, "expected a sequence");
  test_communication__msg__Primitives * itemprimitive_values;
  size_t sizeprimitive_values = PySequence_Size(pyprimitive_values);
  if (!test_communication__msg__Primitives__Array__init(&(ros_message->primitive_values), sizeprimitive_values)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create test_communication__msg__Primitives__Array ros_message");
    return NULL;
  }
  test_communication__msg__Primitives * destprimitive_values = ros_message->primitive_values.data;
  size_t idxprimitive_values;
  for (idxprimitive_values = 0; idxprimitive_values < sizeprimitive_values; idxprimitive_values++) {
    itemprimitive_values = (test_communication__msg__Primitives *) convert_from_py_primitive_values(
      PySequence_Fast_GET_ITEM(seqprimitive_values, idxprimitive_values));
    if (!itemprimitive_values) {
      return NULL;
    }
    memcpy(&destprimitive_values[idxprimitive_values], itemprimitive_values, sizeof(test_communication__msg__Primitives));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void test_communication_bounded_array_nested__destroy_ros_message(void * raw_ros_message)
{
  test_communication__msg__BoundedArrayNested * ros_message = (test_communication__msg__BoundedArrayNested *)raw_ros_message;
  (void)ros_message;

  test_communication__msg__BoundedArrayNested__destroy(ros_message);
}

PyObject * test_communication_bounded_array_nested__convert_to_py(void * raw_ros_message)
{
  test_communication__msg__BoundedArrayNested * ros_message = (test_communication__msg__BoundedArrayNested *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("test_communication.msg._bounded_array_nested");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BoundedArrayNested");

  /* NOTE(esteve): Call constructor of BoundedArrayNested */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyprimitive_values = NULL;
  PyObject * pyprimitive_values_msg_module = PyImport_ImportModule("test_communication.msg._primitives");
  PyObject * pyprimitive_values_msg_class = PyObject_GetAttrString(pyprimitive_values_msg_module, "Primitives");
  PyObject * pyprimitive_values_msg_metaclass = PyObject_GetAttrString(pyprimitive_values_msg_class, "__class__");
  PyObject * pyprimitive_values_convert_to_py = PyObject_GetAttrString(pyprimitive_values_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_primitive_values = (convert_to_py_signature)PyCapsule_GetPointer(pyprimitive_values_convert_to_py, NULL);
  size_t sizeprimitive_values = ros_message->primitive_values.size;
  pyprimitive_values = PyList_New(sizeprimitive_values);
  test_communication__msg__Primitives itemprimitive_values;
  size_t idxprimitive_values;
  for (idxprimitive_values = 0; idxprimitive_values < sizeprimitive_values; idxprimitive_values++) {
    itemprimitive_values = ros_message->primitive_values.data[idxprimitive_values];
    PyObject * pyitemprimitive_values = convert_to_py_primitive_values(&itemprimitive_values);
    if (!pyitemprimitive_values) {
      return NULL;
    }
    PyList_SetItem(pyprimitive_values, idxprimitive_values, pyitemprimitive_values);
  }
  assert(PySequence_Check(pyprimitive_values));
  assert(pyprimitive_values != NULL);
  Py_INCREF(pyprimitive_values);
  PyObject_SetAttrString(_pymessage, "primitive_values", pyprimitive_values);
  assert(_pymessage != NULL);
  return _pymessage;
}
