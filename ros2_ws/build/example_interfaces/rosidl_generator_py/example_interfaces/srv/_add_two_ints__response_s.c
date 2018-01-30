// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <example_interfaces/srv/add_two_ints__response__struct.h>
#include <example_interfaces/srv/add_two_ints__response__functions.h>


void * example_interfaces_add_two_ints__response__convert_from_py(PyObject * _pymsg)
{
  example_interfaces__srv__AddTwoInts_Response * ros_message = example_interfaces__srv__AddTwoInts_Response__create();
  (void)ros_message;
  char full_classname_dest[67];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "example_interfaces.srv._add_two_ints__response.AddTwoInts_Response",
      full_classname_dest, 66) == 0);

  PyObject * pysum = PyObject_GetAttrString(_pymsg, "sum");
  assert(PyLong_Check(pysum));
  ros_message->sum = PyLong_AsLongLong(pysum);

  assert(ros_message != NULL);
  return ros_message;
}

void example_interfaces_add_two_ints__response__destroy_ros_message(void * raw_ros_message)
{
  example_interfaces__srv__AddTwoInts_Response * ros_message = (example_interfaces__srv__AddTwoInts_Response *)raw_ros_message;
  (void)ros_message;

  example_interfaces__srv__AddTwoInts_Response__destroy(ros_message);
}

PyObject * example_interfaces_add_two_ints__response__convert_to_py(void * raw_ros_message)
{
  example_interfaces__srv__AddTwoInts_Response * ros_message = (example_interfaces__srv__AddTwoInts_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("example_interfaces.srv._add_two_ints__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AddTwoInts_Response");

  /* NOTE(esteve): Call constructor of AddTwoInts_Response */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pysum = NULL;
  pysum = PyLong_FromLongLong(ros_message->sum);
  assert(pysum != NULL);
  Py_INCREF(pysum);
  PyObject_SetAttrString(_pymessage, "sum", pysum);
  assert(_pymessage != NULL);
  return _pymessage;
}
