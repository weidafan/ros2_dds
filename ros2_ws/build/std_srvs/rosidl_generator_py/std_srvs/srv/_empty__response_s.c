// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <std_srvs/srv/empty__response__struct.h>
#include <std_srvs/srv/empty__response__functions.h>


void * std_srvs_empty__response__convert_from_py(PyObject * _pymsg)
{
  std_srvs__srv__Empty_Response * ros_message = std_srvs__srv__Empty_Response__create();
  (void)ros_message;
  char full_classname_dest[45];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "std_srvs.srv._empty__response.Empty_Response",
      full_classname_dest, 44) == 0);


  assert(ros_message != NULL);
  return ros_message;
}

void std_srvs_empty__response__destroy_ros_message(void * raw_ros_message)
{
  std_srvs__srv__Empty_Response * ros_message = (std_srvs__srv__Empty_Response *)raw_ros_message;
  (void)ros_message;

  std_srvs__srv__Empty_Response__destroy(ros_message);
}

PyObject * std_srvs_empty__response__convert_to_py(void * raw_ros_message)
{
  std_srvs__srv__Empty_Response * ros_message = (std_srvs__srv__Empty_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("std_srvs.srv._empty__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Empty_Response");

  /* NOTE(esteve): Call constructor of Empty_Response */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  assert(_pymessage != NULL);
  return _pymessage;
}
