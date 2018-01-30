// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <test_communication/msg/nested__struct.h>
#include <test_communication/msg/nested__functions.h>


void * test_communication_nested__convert_from_py(PyObject * _pymsg)
{
  test_communication__msg__Nested * ros_message = test_communication__msg__Nested__create();
  (void)ros_message;
  char full_classname_dest[38];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "test_communication.msg._nested.Nested",
      full_classname_dest, 37) == 0);

  PyObject * pyprimitive_values = PyObject_GetAttrString(_pymsg, "primitive_values");
  PyObject * pyprimitive_values_msg_module = PyImport_ImportModule("test_communication.msg._primitives");
  PyObject * pyprimitive_values_msg_class = PyObject_GetAttrString(pyprimitive_values_msg_module, "Primitives");
  PyObject * pyprimitive_values_msg_metaclass = PyObject_GetAttrString(pyprimitive_values_msg_class, "__class__");
  PyObject * pyprimitive_values_convert_from_py = PyObject_GetAttrString(pyprimitive_values_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_primitive_values = (convert_from_py_signature)PyCapsule_GetPointer(pyprimitive_values_convert_from_py, NULL);
  test_communication__msg__Primitives * tmpprimitive_values = (test_communication__msg__Primitives *) convert_from_py_primitive_values(pyprimitive_values);
  if (!tmpprimitive_values) {
    return NULL;
  }
  ros_message->primitive_values = *tmpprimitive_values;

  assert(ros_message != NULL);
  return ros_message;
}

void test_communication_nested__destroy_ros_message(void * raw_ros_message)
{
  test_communication__msg__Nested * ros_message = (test_communication__msg__Nested *)raw_ros_message;
  (void)ros_message;

  test_communication__msg__Nested__destroy(ros_message);
}

PyObject * test_communication_nested__convert_to_py(void * raw_ros_message)
{
  test_communication__msg__Nested * ros_message = (test_communication__msg__Nested *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("test_communication.msg._nested");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Nested");

  /* NOTE(esteve): Call constructor of Nested */
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
  test_communication__msg__Primitives pytmpprimitive_values = ros_message->primitive_values;
  pyprimitive_values = convert_to_py_primitive_values(&pytmpprimitive_values);
  if (!pyprimitive_values) {
    return NULL;
  }
  assert(pyprimitive_values != NULL);
  Py_INCREF(pyprimitive_values);
  PyObject_SetAttrString(_pymessage, "primitive_values", pyprimitive_values);
  assert(_pymessage != NULL);
  return _pymessage;
}
