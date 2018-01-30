// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <nav_msgs/srv/get_map__request__struct.h>
#include <nav_msgs/srv/get_map__request__functions.h>


void * nav_msgs_get_map__request__convert_from_py(PyObject * _pymsg)
{
  nav_msgs__srv__GetMap_Request * ros_message = nav_msgs__srv__GetMap_Request__create();
  (void)ros_message;
  char full_classname_dest[46];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "nav_msgs.srv._get_map__request.GetMap_Request",
      full_classname_dest, 45) == 0);


  assert(ros_message != NULL);
  return ros_message;
}

void nav_msgs_get_map__request__destroy_ros_message(void * raw_ros_message)
{
  nav_msgs__srv__GetMap_Request * ros_message = (nav_msgs__srv__GetMap_Request *)raw_ros_message;
  (void)ros_message;

  nav_msgs__srv__GetMap_Request__destroy(ros_message);
}

PyObject * nav_msgs_get_map__request__convert_to_py(void * raw_ros_message)
{
  nav_msgs__srv__GetMap_Request * ros_message = (nav_msgs__srv__GetMap_Request *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("nav_msgs.srv._get_map__request");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetMap_Request");

  /* NOTE(esteve): Call constructor of GetMap_Request */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  assert(_pymessage != NULL);
  return _pymessage;
}
