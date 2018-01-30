// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <example_interfaces/srv/add_two_ints__request__struct.h>
#include <example_interfaces/srv/add_two_ints__request__functions.h>


void * example_interfaces_add_two_ints__request__convert_from_py(PyObject * _pymsg)
{
  example_interfaces__srv__AddTwoInts_Request * ros_message = example_interfaces__srv__AddTwoInts_Request__create();
  (void)ros_message;
  char full_classname_dest[65];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "example_interfaces.srv._add_two_ints__request.AddTwoInts_Request",
      full_classname_dest, 64) == 0);

  PyObject * pya = PyObject_GetAttrString(_pymsg, "a");
  assert(PyLong_Check(pya));
  ros_message->a = PyLong_AsLongLong(pya);
  PyObject * pyb = PyObject_GetAttrString(_pymsg, "b");
  assert(PyLong_Check(pyb));
  ros_message->b = PyLong_AsLongLong(pyb);

  assert(ros_message != NULL);
  return ros_message;
}

void example_interfaces_add_two_ints__request__destroy_ros_message(void * raw_ros_message)
{
  example_interfaces__srv__AddTwoInts_Request * ros_message = (example_interfaces__srv__AddTwoInts_Request *)raw_ros_message;
  (void)ros_message;

  example_interfaces__srv__AddTwoInts_Request__destroy(ros_message);
}

PyObject * example_interfaces_add_two_ints__request__convert_to_py(void * raw_ros_message)
{
  example_interfaces__srv__AddTwoInts_Request * ros_message = (example_interfaces__srv__AddTwoInts_Request *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("example_interfaces.srv._add_two_ints__request");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AddTwoInts_Request");

  /* NOTE(esteve): Call constructor of AddTwoInts_Request */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pya = NULL;
  pya = PyLong_FromLongLong(ros_message->a);
  assert(pya != NULL);
  Py_INCREF(pya);
  PyObject_SetAttrString(_pymessage, "a", pya);
  PyObject * pyb = NULL;
  pyb = PyLong_FromLongLong(ros_message->b);
  assert(pyb != NULL);
  Py_INCREF(pyb);
  PyObject_SetAttrString(_pymessage, "b", pyb);
  assert(_pymessage != NULL);
  return _pymessage;
}
