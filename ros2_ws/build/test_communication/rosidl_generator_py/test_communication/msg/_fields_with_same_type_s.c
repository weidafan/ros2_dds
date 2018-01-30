// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <test_communication/msg/fields_with_same_type__struct.h>
#include <test_communication/msg/fields_with_same_type__functions.h>


void * test_communication_fields_with_same_type__convert_from_py(PyObject * _pymsg)
{
  test_communication__msg__FieldsWithSameType * ros_message = test_communication__msg__FieldsWithSameType__create();
  (void)ros_message;
  char full_classname_dest[65];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "test_communication.msg._fields_with_same_type.FieldsWithSameType",
      full_classname_dest, 64) == 0);

  PyObject * pyprimitive_values1 = PyObject_GetAttrString(_pymsg, "primitive_values1");
  PyObject * pyprimitive_values1_msg_module = PyImport_ImportModule("test_communication.msg._primitives");
  PyObject * pyprimitive_values1_msg_class = PyObject_GetAttrString(pyprimitive_values1_msg_module, "Primitives");
  PyObject * pyprimitive_values1_msg_metaclass = PyObject_GetAttrString(pyprimitive_values1_msg_class, "__class__");
  PyObject * pyprimitive_values1_convert_from_py = PyObject_GetAttrString(pyprimitive_values1_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_primitive_values1 = (convert_from_py_signature)PyCapsule_GetPointer(pyprimitive_values1_convert_from_py, NULL);
  test_communication__msg__Primitives * tmpprimitive_values1 = (test_communication__msg__Primitives *) convert_from_py_primitive_values1(pyprimitive_values1);
  if (!tmpprimitive_values1) {
    return NULL;
  }
  ros_message->primitive_values1 = *tmpprimitive_values1;
  PyObject * pyprimitive_values2 = PyObject_GetAttrString(_pymsg, "primitive_values2");
  PyObject * pyprimitive_values2_msg_module = PyImport_ImportModule("test_communication.msg._primitives");
  PyObject * pyprimitive_values2_msg_class = PyObject_GetAttrString(pyprimitive_values2_msg_module, "Primitives");
  PyObject * pyprimitive_values2_msg_metaclass = PyObject_GetAttrString(pyprimitive_values2_msg_class, "__class__");
  PyObject * pyprimitive_values2_convert_from_py = PyObject_GetAttrString(pyprimitive_values2_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_primitive_values2 = (convert_from_py_signature)PyCapsule_GetPointer(pyprimitive_values2_convert_from_py, NULL);
  test_communication__msg__Primitives * tmpprimitive_values2 = (test_communication__msg__Primitives *) convert_from_py_primitive_values2(pyprimitive_values2);
  if (!tmpprimitive_values2) {
    return NULL;
  }
  ros_message->primitive_values2 = *tmpprimitive_values2;

  assert(ros_message != NULL);
  return ros_message;
}

void test_communication_fields_with_same_type__destroy_ros_message(void * raw_ros_message)
{
  test_communication__msg__FieldsWithSameType * ros_message = (test_communication__msg__FieldsWithSameType *)raw_ros_message;
  (void)ros_message;

  test_communication__msg__FieldsWithSameType__destroy(ros_message);
}

PyObject * test_communication_fields_with_same_type__convert_to_py(void * raw_ros_message)
{
  test_communication__msg__FieldsWithSameType * ros_message = (test_communication__msg__FieldsWithSameType *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("test_communication.msg._fields_with_same_type");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FieldsWithSameType");

  /* NOTE(esteve): Call constructor of FieldsWithSameType */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyprimitive_values1 = NULL;
  PyObject * pyprimitive_values1_msg_module = PyImport_ImportModule("test_communication.msg._primitives");
  PyObject * pyprimitive_values1_msg_class = PyObject_GetAttrString(pyprimitive_values1_msg_module, "Primitives");
  PyObject * pyprimitive_values1_msg_metaclass = PyObject_GetAttrString(pyprimitive_values1_msg_class, "__class__");
  PyObject * pyprimitive_values1_convert_to_py = PyObject_GetAttrString(pyprimitive_values1_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_primitive_values1 = (convert_to_py_signature)PyCapsule_GetPointer(pyprimitive_values1_convert_to_py, NULL);
  test_communication__msg__Primitives pytmpprimitive_values1 = ros_message->primitive_values1;
  pyprimitive_values1 = convert_to_py_primitive_values1(&pytmpprimitive_values1);
  if (!pyprimitive_values1) {
    return NULL;
  }
  assert(pyprimitive_values1 != NULL);
  Py_INCREF(pyprimitive_values1);
  PyObject_SetAttrString(_pymessage, "primitive_values1", pyprimitive_values1);
  PyObject * pyprimitive_values2 = NULL;
  PyObject * pyprimitive_values2_msg_module = PyImport_ImportModule("test_communication.msg._primitives");
  PyObject * pyprimitive_values2_msg_class = PyObject_GetAttrString(pyprimitive_values2_msg_module, "Primitives");
  PyObject * pyprimitive_values2_msg_metaclass = PyObject_GetAttrString(pyprimitive_values2_msg_class, "__class__");
  PyObject * pyprimitive_values2_convert_to_py = PyObject_GetAttrString(pyprimitive_values2_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_primitive_values2 = (convert_to_py_signature)PyCapsule_GetPointer(pyprimitive_values2_convert_to_py, NULL);
  test_communication__msg__Primitives pytmpprimitive_values2 = ros_message->primitive_values2;
  pyprimitive_values2 = convert_to_py_primitive_values2(&pytmpprimitive_values2);
  if (!pyprimitive_values2) {
    return NULL;
  }
  assert(pyprimitive_values2 != NULL);
  Py_INCREF(pyprimitive_values2);
  PyObject_SetAttrString(_pymessage, "primitive_values2", pyprimitive_values2);
  assert(_pymessage != NULL);
  return _pymessage;
}
