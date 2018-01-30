// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <tf2_msgs/srv/frame_graph__request__struct.h>
#include <tf2_msgs/srv/frame_graph__request__functions.h>


void * tf2_msgs_frame_graph__request__convert_from_py(PyObject * _pymsg)
{
  tf2_msgs__srv__FrameGraph_Request * ros_message = tf2_msgs__srv__FrameGraph_Request__create();
  (void)ros_message;
  char full_classname_dest[54];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "tf2_msgs.srv._frame_graph__request.FrameGraph_Request",
      full_classname_dest, 53) == 0);


  assert(ros_message != NULL);
  return ros_message;
}

void tf2_msgs_frame_graph__request__destroy_ros_message(void * raw_ros_message)
{
  tf2_msgs__srv__FrameGraph_Request * ros_message = (tf2_msgs__srv__FrameGraph_Request *)raw_ros_message;
  (void)ros_message;

  tf2_msgs__srv__FrameGraph_Request__destroy(ros_message);
}

PyObject * tf2_msgs_frame_graph__request__convert_to_py(void * raw_ros_message)
{
  tf2_msgs__srv__FrameGraph_Request * ros_message = (tf2_msgs__srv__FrameGraph_Request *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("tf2_msgs.srv._frame_graph__request");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FrameGraph_Request");

  /* NOTE(esteve): Call constructor of FrameGraph_Request */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  assert(_pymessage != NULL);
  return _pymessage;
}
