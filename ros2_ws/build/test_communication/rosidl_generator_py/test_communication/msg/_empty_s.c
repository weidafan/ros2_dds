// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <test_communication/msg/empty__struct.h>
#include <test_communication/msg/empty__functions.h>


void * test_communication_empty__convert_from_py(PyObject * _pymsg)
{
  test_communication__msg__Empty * ros_message = test_communication__msg__Empty__create();
  (void)ros_message;
  char full_classname_dest[36];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "test_communication.msg._empty.Empty",
      full_classname_dest, 35) == 0);


  assert(ros_message != NULL);
  return ros_message;
}

void test_communication_empty__destroy_ros_message(void * raw_ros_message)
{
  test_communication__msg__Empty * ros_message = (test_communication__msg__Empty *)raw_ros_message;
  (void)ros_message;

  test_communication__msg__Empty__destroy(ros_message);
}

PyObject * test_communication_empty__convert_to_py(void * raw_ros_message)
{
  test_communication__msg__Empty * ros_message = (test_communication__msg__Empty *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("test_communication.msg._empty");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Empty");

  /* NOTE(esteve): Call constructor of Empty */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  assert(_pymessage != NULL);
  return _pymessage;
}
