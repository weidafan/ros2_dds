// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <nav_msgs/srv/get_plan__request__struct.h>
#include <nav_msgs/srv/get_plan__request__functions.h>


void * nav_msgs_get_plan__request__convert_from_py(PyObject * _pymsg)
{
  nav_msgs__srv__GetPlan_Request * ros_message = nav_msgs__srv__GetPlan_Request__create();
  (void)ros_message;
  char full_classname_dest[48];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "nav_msgs.srv._get_plan__request.GetPlan_Request",
      full_classname_dest, 47) == 0);

  PyObject * pystart = PyObject_GetAttrString(_pymsg, "start");
  PyObject * pystart_msg_module = PyImport_ImportModule("geometry_msgs.msg._pose_stamped");
  PyObject * pystart_msg_class = PyObject_GetAttrString(pystart_msg_module, "PoseStamped");
  PyObject * pystart_msg_metaclass = PyObject_GetAttrString(pystart_msg_class, "__class__");
  PyObject * pystart_convert_from_py = PyObject_GetAttrString(pystart_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_start = (convert_from_py_signature)PyCapsule_GetPointer(pystart_convert_from_py, NULL);
  geometry_msgs__msg__PoseStamped * tmpstart = (geometry_msgs__msg__PoseStamped *) convert_from_py_start(pystart);
  if (!tmpstart) {
    return NULL;
  }
  ros_message->start = *tmpstart;
  PyObject * pygoal = PyObject_GetAttrString(_pymsg, "goal");
  PyObject * pygoal_msg_module = PyImport_ImportModule("geometry_msgs.msg._pose_stamped");
  PyObject * pygoal_msg_class = PyObject_GetAttrString(pygoal_msg_module, "PoseStamped");
  PyObject * pygoal_msg_metaclass = PyObject_GetAttrString(pygoal_msg_class, "__class__");
  PyObject * pygoal_convert_from_py = PyObject_GetAttrString(pygoal_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_goal = (convert_from_py_signature)PyCapsule_GetPointer(pygoal_convert_from_py, NULL);
  geometry_msgs__msg__PoseStamped * tmpgoal = (geometry_msgs__msg__PoseStamped *) convert_from_py_goal(pygoal);
  if (!tmpgoal) {
    return NULL;
  }
  ros_message->goal = *tmpgoal;
  PyObject * pytolerance = PyObject_GetAttrString(_pymsg, "tolerance");
  assert(PyFloat_Check(pytolerance));
  ros_message->tolerance = (float)PyFloat_AS_DOUBLE(pytolerance);

  assert(ros_message != NULL);
  return ros_message;
}

void nav_msgs_get_plan__request__destroy_ros_message(void * raw_ros_message)
{
  nav_msgs__srv__GetPlan_Request * ros_message = (nav_msgs__srv__GetPlan_Request *)raw_ros_message;
  (void)ros_message;

  nav_msgs__srv__GetPlan_Request__destroy(ros_message);
}

PyObject * nav_msgs_get_plan__request__convert_to_py(void * raw_ros_message)
{
  nav_msgs__srv__GetPlan_Request * ros_message = (nav_msgs__srv__GetPlan_Request *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("nav_msgs.srv._get_plan__request");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetPlan_Request");

  /* NOTE(esteve): Call constructor of GetPlan_Request */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pystart = NULL;
  PyObject * pystart_msg_module = PyImport_ImportModule("geometry_msgs.msg._pose_stamped");
  PyObject * pystart_msg_class = PyObject_GetAttrString(pystart_msg_module, "PoseStamped");
  PyObject * pystart_msg_metaclass = PyObject_GetAttrString(pystart_msg_class, "__class__");
  PyObject * pystart_convert_to_py = PyObject_GetAttrString(pystart_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_start = (convert_to_py_signature)PyCapsule_GetPointer(pystart_convert_to_py, NULL);
  geometry_msgs__msg__PoseStamped pytmpstart = ros_message->start;
  pystart = convert_to_py_start(&pytmpstart);
  if (!pystart) {
    return NULL;
  }
  assert(pystart != NULL);
  Py_INCREF(pystart);
  PyObject_SetAttrString(_pymessage, "start", pystart);
  PyObject * pygoal = NULL;
  PyObject * pygoal_msg_module = PyImport_ImportModule("geometry_msgs.msg._pose_stamped");
  PyObject * pygoal_msg_class = PyObject_GetAttrString(pygoal_msg_module, "PoseStamped");
  PyObject * pygoal_msg_metaclass = PyObject_GetAttrString(pygoal_msg_class, "__class__");
  PyObject * pygoal_convert_to_py = PyObject_GetAttrString(pygoal_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_goal = (convert_to_py_signature)PyCapsule_GetPointer(pygoal_convert_to_py, NULL);
  geometry_msgs__msg__PoseStamped pytmpgoal = ros_message->goal;
  pygoal = convert_to_py_goal(&pytmpgoal);
  if (!pygoal) {
    return NULL;
  }
  assert(pygoal != NULL);
  Py_INCREF(pygoal);
  PyObject_SetAttrString(_pymessage, "goal", pygoal);
  PyObject * pytolerance = NULL;
  pytolerance = PyFloat_FromDouble(ros_message->tolerance);
  assert(pytolerance != NULL);
  Py_INCREF(pytolerance);
  PyObject_SetAttrString(_pymessage, "tolerance", pytolerance);
  assert(_pymessage != NULL);
  return _pymessage;
}
