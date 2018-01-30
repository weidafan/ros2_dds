// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <tf2_msgs/srv/frame_graph__response__struct.h>
#include <tf2_msgs/srv/frame_graph__response__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * tf2_msgs_frame_graph__response__convert_from_py(PyObject * _pymsg)
{
  tf2_msgs__srv__FrameGraph_Response * ros_message = tf2_msgs__srv__FrameGraph_Response__create();
  (void)ros_message;
  char full_classname_dest[56];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "tf2_msgs.srv._frame_graph__response.FrameGraph_Response",
      full_classname_dest, 55) == 0);

  PyObject * pyframe_yaml = PyObject_GetAttrString(_pymsg, "frame_yaml");
  assert(PyUnicode_Check(pyframe_yaml));
  rosidl_generator_c__String__assign(
    &ros_message->frame_yaml, (char *)PyUnicode_1BYTE_DATA(pyframe_yaml));

  assert(ros_message != NULL);
  return ros_message;
}

void tf2_msgs_frame_graph__response__destroy_ros_message(void * raw_ros_message)
{
  tf2_msgs__srv__FrameGraph_Response * ros_message = (tf2_msgs__srv__FrameGraph_Response *)raw_ros_message;
  (void)ros_message;

  tf2_msgs__srv__FrameGraph_Response__destroy(ros_message);
}

PyObject * tf2_msgs_frame_graph__response__convert_to_py(void * raw_ros_message)
{
  tf2_msgs__srv__FrameGraph_Response * ros_message = (tf2_msgs__srv__FrameGraph_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("tf2_msgs.srv._frame_graph__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FrameGraph_Response");

  /* NOTE(esteve): Call constructor of FrameGraph_Response */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyframe_yaml = NULL;
  pyframe_yaml = PyUnicode_FromString(ros_message->frame_yaml.data);
  assert(pyframe_yaml != NULL);
  Py_INCREF(pyframe_yaml);
  PyObject_SetAttrString(_pymessage, "frame_yaml", pyframe_yaml);
  assert(_pymessage != NULL);
  return _pymessage;
}
