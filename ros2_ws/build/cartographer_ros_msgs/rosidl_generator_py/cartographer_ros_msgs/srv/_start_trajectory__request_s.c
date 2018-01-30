// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <cartographer_ros_msgs/srv/start_trajectory__request__struct.h>
#include <cartographer_ros_msgs/srv/start_trajectory__request__functions.h>


void * cartographer_ros_msgs_start_trajectory__request__convert_from_py(PyObject * _pymsg)
{
  cartographer_ros_msgs__srv__StartTrajectory_Request * ros_message = cartographer_ros_msgs__srv__StartTrajectory_Request__create();
  (void)ros_message;
  char full_classname_dest[77];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "cartographer_ros_msgs.srv._start_trajectory__request.StartTrajectory_Request",
      full_classname_dest, 76) == 0);

  PyObject * pyoptions = PyObject_GetAttrString(_pymsg, "options");
  PyObject * pyoptions_msg_module = PyImport_ImportModule("cartographer_ros_msgs.msg._trajectory_options");
  PyObject * pyoptions_msg_class = PyObject_GetAttrString(pyoptions_msg_module, "TrajectoryOptions");
  PyObject * pyoptions_msg_metaclass = PyObject_GetAttrString(pyoptions_msg_class, "__class__");
  PyObject * pyoptions_convert_from_py = PyObject_GetAttrString(pyoptions_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_options = (convert_from_py_signature)PyCapsule_GetPointer(pyoptions_convert_from_py, NULL);
  cartographer_ros_msgs__msg__TrajectoryOptions * tmpoptions = (cartographer_ros_msgs__msg__TrajectoryOptions *) convert_from_py_options(pyoptions);
  if (!tmpoptions) {
    return NULL;
  }
  ros_message->options = *tmpoptions;
  PyObject * pytopics = PyObject_GetAttrString(_pymsg, "topics");
  PyObject * pytopics_msg_module = PyImport_ImportModule("cartographer_ros_msgs.msg._sensor_topics");
  PyObject * pytopics_msg_class = PyObject_GetAttrString(pytopics_msg_module, "SensorTopics");
  PyObject * pytopics_msg_metaclass = PyObject_GetAttrString(pytopics_msg_class, "__class__");
  PyObject * pytopics_convert_from_py = PyObject_GetAttrString(pytopics_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_topics = (convert_from_py_signature)PyCapsule_GetPointer(pytopics_convert_from_py, NULL);
  cartographer_ros_msgs__msg__SensorTopics * tmptopics = (cartographer_ros_msgs__msg__SensorTopics *) convert_from_py_topics(pytopics);
  if (!tmptopics) {
    return NULL;
  }
  ros_message->topics = *tmptopics;

  assert(ros_message != NULL);
  return ros_message;
}

void cartographer_ros_msgs_start_trajectory__request__destroy_ros_message(void * raw_ros_message)
{
  cartographer_ros_msgs__srv__StartTrajectory_Request * ros_message = (cartographer_ros_msgs__srv__StartTrajectory_Request *)raw_ros_message;
  (void)ros_message;

  cartographer_ros_msgs__srv__StartTrajectory_Request__destroy(ros_message);
}

PyObject * cartographer_ros_msgs_start_trajectory__request__convert_to_py(void * raw_ros_message)
{
  cartographer_ros_msgs__srv__StartTrajectory_Request * ros_message = (cartographer_ros_msgs__srv__StartTrajectory_Request *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("cartographer_ros_msgs.srv._start_trajectory__request");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StartTrajectory_Request");

  /* NOTE(esteve): Call constructor of StartTrajectory_Request */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyoptions = NULL;
  PyObject * pyoptions_msg_module = PyImport_ImportModule("cartographer_ros_msgs.msg._trajectory_options");
  PyObject * pyoptions_msg_class = PyObject_GetAttrString(pyoptions_msg_module, "TrajectoryOptions");
  PyObject * pyoptions_msg_metaclass = PyObject_GetAttrString(pyoptions_msg_class, "__class__");
  PyObject * pyoptions_convert_to_py = PyObject_GetAttrString(pyoptions_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_options = (convert_to_py_signature)PyCapsule_GetPointer(pyoptions_convert_to_py, NULL);
  cartographer_ros_msgs__msg__TrajectoryOptions pytmpoptions = ros_message->options;
  pyoptions = convert_to_py_options(&pytmpoptions);
  if (!pyoptions) {
    return NULL;
  }
  assert(pyoptions != NULL);
  Py_INCREF(pyoptions);
  PyObject_SetAttrString(_pymessage, "options", pyoptions);
  PyObject * pytopics = NULL;
  PyObject * pytopics_msg_module = PyImport_ImportModule("cartographer_ros_msgs.msg._sensor_topics");
  PyObject * pytopics_msg_class = PyObject_GetAttrString(pytopics_msg_module, "SensorTopics");
  PyObject * pytopics_msg_metaclass = PyObject_GetAttrString(pytopics_msg_class, "__class__");
  PyObject * pytopics_convert_to_py = PyObject_GetAttrString(pytopics_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_topics = (convert_to_py_signature)PyCapsule_GetPointer(pytopics_convert_to_py, NULL);
  cartographer_ros_msgs__msg__SensorTopics pytmptopics = ros_message->topics;
  pytopics = convert_to_py_topics(&pytmptopics);
  if (!pytopics) {
    return NULL;
  }
  assert(pytopics != NULL);
  Py_INCREF(pytopics);
  PyObject_SetAttrString(_pymessage, "topics", pytopics);
  assert(_pymessage != NULL);
  return _pymessage;
}
