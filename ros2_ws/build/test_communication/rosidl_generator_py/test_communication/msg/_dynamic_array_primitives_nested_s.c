// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <test_communication/msg/dynamic_array_primitives_nested__struct.h>
#include <test_communication/msg/dynamic_array_primitives_nested__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <test_communication/msg/dynamic_array_primitives__functions.h>
// end nested array functions include

void * test_communication_dynamic_array_primitives_nested__convert_from_py(PyObject * _pymsg)
{
  test_communication__msg__DynamicArrayPrimitivesNested * ros_message = test_communication__msg__DynamicArrayPrimitivesNested__create();
  (void)ros_message;
  char full_classname_dest[85];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "test_communication.msg._dynamic_array_primitives_nested.DynamicArrayPrimitivesNested",
      full_classname_dest, 84) == 0);

  PyObject * pymsgs = PyObject_GetAttrString(_pymsg, "msgs");
  PyObject * pymsgs_msg_module = PyImport_ImportModule("test_communication.msg._dynamic_array_primitives");
  PyObject * pymsgs_msg_class = PyObject_GetAttrString(pymsgs_msg_module, "DynamicArrayPrimitives");
  PyObject * pymsgs_msg_metaclass = PyObject_GetAttrString(pymsgs_msg_class, "__class__");
  PyObject * pymsgs_convert_from_py = PyObject_GetAttrString(pymsgs_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_msgs = (convert_from_py_signature)PyCapsule_GetPointer(pymsgs_convert_from_py, NULL);
  assert(PySequence_Check(pymsgs));
  PyObject * seqmsgs = PySequence_Fast(pymsgs, "expected a sequence");
  test_communication__msg__DynamicArrayPrimitives * itemmsgs;
  size_t sizemsgs = PySequence_Size(pymsgs);
  if (!test_communication__msg__DynamicArrayPrimitives__Array__init(&(ros_message->msgs), sizemsgs)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create test_communication__msg__DynamicArrayPrimitives__Array ros_message");
    return NULL;
  }
  test_communication__msg__DynamicArrayPrimitives * destmsgs = ros_message->msgs.data;
  size_t idxmsgs;
  for (idxmsgs = 0; idxmsgs < sizemsgs; idxmsgs++) {
    itemmsgs = (test_communication__msg__DynamicArrayPrimitives *) convert_from_py_msgs(
      PySequence_Fast_GET_ITEM(seqmsgs, idxmsgs));
    if (!itemmsgs) {
      return NULL;
    }
    memcpy(&destmsgs[idxmsgs], itemmsgs, sizeof(test_communication__msg__DynamicArrayPrimitives));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void test_communication_dynamic_array_primitives_nested__destroy_ros_message(void * raw_ros_message)
{
  test_communication__msg__DynamicArrayPrimitivesNested * ros_message = (test_communication__msg__DynamicArrayPrimitivesNested *)raw_ros_message;
  (void)ros_message;

  test_communication__msg__DynamicArrayPrimitivesNested__destroy(ros_message);
}

PyObject * test_communication_dynamic_array_primitives_nested__convert_to_py(void * raw_ros_message)
{
  test_communication__msg__DynamicArrayPrimitivesNested * ros_message = (test_communication__msg__DynamicArrayPrimitivesNested *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("test_communication.msg._dynamic_array_primitives_nested");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DynamicArrayPrimitivesNested");

  /* NOTE(esteve): Call constructor of DynamicArrayPrimitivesNested */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pymsgs = NULL;
  PyObject * pymsgs_msg_module = PyImport_ImportModule("test_communication.msg._dynamic_array_primitives");
  PyObject * pymsgs_msg_class = PyObject_GetAttrString(pymsgs_msg_module, "DynamicArrayPrimitives");
  PyObject * pymsgs_msg_metaclass = PyObject_GetAttrString(pymsgs_msg_class, "__class__");
  PyObject * pymsgs_convert_to_py = PyObject_GetAttrString(pymsgs_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_msgs = (convert_to_py_signature)PyCapsule_GetPointer(pymsgs_convert_to_py, NULL);
  size_t sizemsgs = ros_message->msgs.size;
  pymsgs = PyList_New(sizemsgs);
  test_communication__msg__DynamicArrayPrimitives itemmsgs;
  size_t idxmsgs;
  for (idxmsgs = 0; idxmsgs < sizemsgs; idxmsgs++) {
    itemmsgs = ros_message->msgs.data[idxmsgs];
    PyObject * pyitemmsgs = convert_to_py_msgs(&itemmsgs);
    if (!pyitemmsgs) {
      return NULL;
    }
    PyList_SetItem(pymsgs, idxmsgs, pyitemmsgs);
  }
  assert(PySequence_Check(pymsgs));
  assert(pymsgs != NULL);
  Py_INCREF(pymsgs);
  PyObject_SetAttrString(_pymessage, "msgs", pymsgs);
  assert(_pymessage != NULL);
  return _pymessage;
}
