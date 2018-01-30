// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <test_communication/msg/u_int32__struct.h>
#include <test_communication/msg/u_int32__functions.h>


void * test_communication_u_int32__convert_from_py(PyObject * _pymsg)
{
  test_communication__msg__UInt32 * ros_message = test_communication__msg__UInt32__create();
  (void)ros_message;
  char full_classname_dest[39];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "test_communication.msg._u_int32.UInt32",
      full_classname_dest, 38) == 0);

  PyObject * pydata = PyObject_GetAttrString(_pymsg, "data");
  assert(PyLong_Check(pydata));
  ros_message->data = PyLong_AsUnsignedLong(pydata);

  assert(ros_message != NULL);
  return ros_message;
}

void test_communication_u_int32__destroy_ros_message(void * raw_ros_message)
{
  test_communication__msg__UInt32 * ros_message = (test_communication__msg__UInt32 *)raw_ros_message;
  (void)ros_message;

  test_communication__msg__UInt32__destroy(ros_message);
}

PyObject * test_communication_u_int32__convert_to_py(void * raw_ros_message)
{
  test_communication__msg__UInt32 * ros_message = (test_communication__msg__UInt32 *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("test_communication.msg._u_int32");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UInt32");

  /* NOTE(esteve): Call constructor of UInt32 */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pydata = NULL;
  pydata = PyLong_FromUnsignedLong(ros_message->data);
  assert(pydata != NULL);
  Py_INCREF(pydata);
  PyObject_SetAttrString(_pymessage, "data", pydata);
  assert(_pymessage != NULL);
  return _pymessage;
}
