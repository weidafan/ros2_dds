// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <test_communication/srv/empty__request__struct.h>
#include <test_communication/srv/empty__request__functions.h>


void * test_communication_empty__request__convert_from_py(PyObject * _pymsg)
{
  test_communication__srv__Empty_Request * ros_message = test_communication__srv__Empty_Request__create();
  (void)ros_message;
  char full_classname_dest[53];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "test_communication.srv._empty__request.Empty_Request",
      full_classname_dest, 52) == 0);


  assert(ros_message != NULL);
  return ros_message;
}

void test_communication_empty__request__destroy_ros_message(void * raw_ros_message)
{
  test_communication__srv__Empty_Request * ros_message = (test_communication__srv__Empty_Request *)raw_ros_message;
  (void)ros_message;

  test_communication__srv__Empty_Request__destroy(ros_message);
}

PyObject * test_communication_empty__request__convert_to_py(void * raw_ros_message)
{
  test_communication__srv__Empty_Request * ros_message = (test_communication__srv__Empty_Request *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("test_communication.srv._empty__request");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Empty_Request");

  /* NOTE(esteve): Call constructor of Empty_Request */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  assert(_pymessage != NULL);
  return _pymessage;
}