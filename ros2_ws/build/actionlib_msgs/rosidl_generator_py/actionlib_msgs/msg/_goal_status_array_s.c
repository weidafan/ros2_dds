// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <actionlib_msgs/msg/goal_status_array__struct.h>
#include <actionlib_msgs/msg/goal_status_array__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <actionlib_msgs/msg/goal_status__functions.h>
// end nested array functions include

void * actionlib_msgs_goal_status_array__convert_from_py(PyObject * _pymsg)
{
  actionlib_msgs__msg__GoalStatusArray * ros_message = actionlib_msgs__msg__GoalStatusArray__create();
  (void)ros_message;
  char full_classname_dest[54];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "actionlib_msgs.msg._goal_status_array.GoalStatusArray",
      full_classname_dest, 53) == 0);

  PyObject * pyheader = PyObject_GetAttrString(_pymsg, "header");
  PyObject * pyheader_msg_module = PyImport_ImportModule("std_msgs.msg._header");
  PyObject * pyheader_msg_class = PyObject_GetAttrString(pyheader_msg_module, "Header");
  PyObject * pyheader_msg_metaclass = PyObject_GetAttrString(pyheader_msg_class, "__class__");
  PyObject * pyheader_convert_from_py = PyObject_GetAttrString(pyheader_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_header = (convert_from_py_signature)PyCapsule_GetPointer(pyheader_convert_from_py, NULL);
  std_msgs__msg__Header * tmpheader = (std_msgs__msg__Header *) convert_from_py_header(pyheader);
  if (!tmpheader) {
    return NULL;
  }
  ros_message->header = *tmpheader;
  PyObject * pystatus_list = PyObject_GetAttrString(_pymsg, "status_list");
  PyObject * pystatus_list_msg_module = PyImport_ImportModule("actionlib_msgs.msg._goal_status");
  PyObject * pystatus_list_msg_class = PyObject_GetAttrString(pystatus_list_msg_module, "GoalStatus");
  PyObject * pystatus_list_msg_metaclass = PyObject_GetAttrString(pystatus_list_msg_class, "__class__");
  PyObject * pystatus_list_convert_from_py = PyObject_GetAttrString(pystatus_list_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_status_list = (convert_from_py_signature)PyCapsule_GetPointer(pystatus_list_convert_from_py, NULL);
  assert(PySequence_Check(pystatus_list));
  PyObject * seqstatus_list = PySequence_Fast(pystatus_list, "expected a sequence");
  actionlib_msgs__msg__GoalStatus * itemstatus_list;
  size_t sizestatus_list = PySequence_Size(pystatus_list);
  if (!actionlib_msgs__msg__GoalStatus__Array__init(&(ros_message->status_list), sizestatus_list)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create actionlib_msgs__msg__GoalStatus__Array ros_message");
    return NULL;
  }
  actionlib_msgs__msg__GoalStatus * deststatus_list = ros_message->status_list.data;
  size_t idxstatus_list;
  for (idxstatus_list = 0; idxstatus_list < sizestatus_list; idxstatus_list++) {
    itemstatus_list = (actionlib_msgs__msg__GoalStatus *) convert_from_py_status_list(
      PySequence_Fast_GET_ITEM(seqstatus_list, idxstatus_list));
    if (!itemstatus_list) {
      return NULL;
    }
    memcpy(&deststatus_list[idxstatus_list], itemstatus_list, sizeof(actionlib_msgs__msg__GoalStatus));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void actionlib_msgs_goal_status_array__destroy_ros_message(void * raw_ros_message)
{
  actionlib_msgs__msg__GoalStatusArray * ros_message = (actionlib_msgs__msg__GoalStatusArray *)raw_ros_message;
  (void)ros_message;

  actionlib_msgs__msg__GoalStatusArray__destroy(ros_message);
}

PyObject * actionlib_msgs_goal_status_array__convert_to_py(void * raw_ros_message)
{
  actionlib_msgs__msg__GoalStatusArray * ros_message = (actionlib_msgs__msg__GoalStatusArray *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("actionlib_msgs.msg._goal_status_array");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GoalStatusArray");

  /* NOTE(esteve): Call constructor of GoalStatusArray */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyheader = NULL;
  PyObject * pyheader_msg_module = PyImport_ImportModule("std_msgs.msg._header");
  PyObject * pyheader_msg_class = PyObject_GetAttrString(pyheader_msg_module, "Header");
  PyObject * pyheader_msg_metaclass = PyObject_GetAttrString(pyheader_msg_class, "__class__");
  PyObject * pyheader_convert_to_py = PyObject_GetAttrString(pyheader_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_header = (convert_to_py_signature)PyCapsule_GetPointer(pyheader_convert_to_py, NULL);
  std_msgs__msg__Header pytmpheader = ros_message->header;
  pyheader = convert_to_py_header(&pytmpheader);
  if (!pyheader) {
    return NULL;
  }
  assert(pyheader != NULL);
  Py_INCREF(pyheader);
  PyObject_SetAttrString(_pymessage, "header", pyheader);
  PyObject * pystatus_list = NULL;
  PyObject * pystatus_list_msg_module = PyImport_ImportModule("actionlib_msgs.msg._goal_status");
  PyObject * pystatus_list_msg_class = PyObject_GetAttrString(pystatus_list_msg_module, "GoalStatus");
  PyObject * pystatus_list_msg_metaclass = PyObject_GetAttrString(pystatus_list_msg_class, "__class__");
  PyObject * pystatus_list_convert_to_py = PyObject_GetAttrString(pystatus_list_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_status_list = (convert_to_py_signature)PyCapsule_GetPointer(pystatus_list_convert_to_py, NULL);
  size_t sizestatus_list = ros_message->status_list.size;
  pystatus_list = PyList_New(sizestatus_list);
  actionlib_msgs__msg__GoalStatus itemstatus_list;
  size_t idxstatus_list;
  for (idxstatus_list = 0; idxstatus_list < sizestatus_list; idxstatus_list++) {
    itemstatus_list = ros_message->status_list.data[idxstatus_list];
    PyObject * pyitemstatus_list = convert_to_py_status_list(&itemstatus_list);
    if (!pyitemstatus_list) {
      return NULL;
    }
    PyList_SetItem(pystatus_list, idxstatus_list, pyitemstatus_list);
  }
  assert(PySequence_Check(pystatus_list));
  assert(pystatus_list != NULL);
  Py_INCREF(pystatus_list);
  PyObject_SetAttrString(_pymessage, "status_list", pystatus_list);
  assert(_pymessage != NULL);
  return _pymessage;
}
