// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <nav_msgs/srv/get_plan__response__struct.h>
#include <nav_msgs/srv/get_plan__response__functions.h>


void * nav_msgs_get_plan__response__convert_from_py(PyObject * _pymsg)
{
  nav_msgs__srv__GetPlan_Response * ros_message = nav_msgs__srv__GetPlan_Response__create();
  (void)ros_message;
  char full_classname_dest[50];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "nav_msgs.srv._get_plan__response.GetPlan_Response",
      full_classname_dest, 49) == 0);

  PyObject * pyplan = PyObject_GetAttrString(_pymsg, "plan");
  PyObject * pyplan_msg_module = PyImport_ImportModule("nav_msgs.msg._path");
  PyObject * pyplan_msg_class = PyObject_GetAttrString(pyplan_msg_module, "Path");
  PyObject * pyplan_msg_metaclass = PyObject_GetAttrString(pyplan_msg_class, "__class__");
  PyObject * pyplan_convert_from_py = PyObject_GetAttrString(pyplan_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_plan = (convert_from_py_signature)PyCapsule_GetPointer(pyplan_convert_from_py, NULL);
  nav_msgs__msg__Path * tmpplan = (nav_msgs__msg__Path *) convert_from_py_plan(pyplan);
  if (!tmpplan) {
    return NULL;
  }
  ros_message->plan = *tmpplan;

  assert(ros_message != NULL);
  return ros_message;
}

void nav_msgs_get_plan__response__destroy_ros_message(void * raw_ros_message)
{
  nav_msgs__srv__GetPlan_Response * ros_message = (nav_msgs__srv__GetPlan_Response *)raw_ros_message;
  (void)ros_message;

  nav_msgs__srv__GetPlan_Response__destroy(ros_message);
}

PyObject * nav_msgs_get_plan__response__convert_to_py(void * raw_ros_message)
{
  nav_msgs__srv__GetPlan_Response * ros_message = (nav_msgs__srv__GetPlan_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("nav_msgs.srv._get_plan__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetPlan_Response");

  /* NOTE(esteve): Call constructor of GetPlan_Response */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyplan = NULL;
  PyObject * pyplan_msg_module = PyImport_ImportModule("nav_msgs.msg._path");
  PyObject * pyplan_msg_class = PyObject_GetAttrString(pyplan_msg_module, "Path");
  PyObject * pyplan_msg_metaclass = PyObject_GetAttrString(pyplan_msg_class, "__class__");
  PyObject * pyplan_convert_to_py = PyObject_GetAttrString(pyplan_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_plan = (convert_to_py_signature)PyCapsule_GetPointer(pyplan_convert_to_py, NULL);
  nav_msgs__msg__Path pytmpplan = ros_message->plan;
  pyplan = convert_to_py_plan(&pytmpplan);
  if (!pyplan) {
    return NULL;
  }
  assert(pyplan != NULL);
  Py_INCREF(pyplan);
  PyObject_SetAttrString(_pymessage, "plan", pyplan);
  assert(_pymessage != NULL);
  return _pymessage;
}
