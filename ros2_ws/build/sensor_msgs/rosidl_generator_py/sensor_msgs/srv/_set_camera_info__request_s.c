// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/srv/set_camera_info__request__struct.h>
#include <sensor_msgs/srv/set_camera_info__request__functions.h>


void * sensor_msgs_set_camera_info__request__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__srv__SetCameraInfo_Request * ros_message = sensor_msgs__srv__SetCameraInfo_Request__create();
  (void)ros_message;
  char full_classname_dest[64];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.srv._set_camera_info__request.SetCameraInfo_Request",
      full_classname_dest, 63) == 0);

  PyObject * pycamera_info = PyObject_GetAttrString(_pymsg, "camera_info");
  PyObject * pycamera_info_msg_module = PyImport_ImportModule("sensor_msgs.msg._camera_info");
  PyObject * pycamera_info_msg_class = PyObject_GetAttrString(pycamera_info_msg_module, "CameraInfo");
  PyObject * pycamera_info_msg_metaclass = PyObject_GetAttrString(pycamera_info_msg_class, "__class__");
  PyObject * pycamera_info_convert_from_py = PyObject_GetAttrString(pycamera_info_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_camera_info = (convert_from_py_signature)PyCapsule_GetPointer(pycamera_info_convert_from_py, NULL);
  sensor_msgs__msg__CameraInfo * tmpcamera_info = (sensor_msgs__msg__CameraInfo *) convert_from_py_camera_info(pycamera_info);
  if (!tmpcamera_info) {
    return NULL;
  }
  ros_message->camera_info = *tmpcamera_info;

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_set_camera_info__request__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__srv__SetCameraInfo_Request * ros_message = (sensor_msgs__srv__SetCameraInfo_Request *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__srv__SetCameraInfo_Request__destroy(ros_message);
}

PyObject * sensor_msgs_set_camera_info__request__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__srv__SetCameraInfo_Request * ros_message = (sensor_msgs__srv__SetCameraInfo_Request *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.srv._set_camera_info__request");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetCameraInfo_Request");

  /* NOTE(esteve): Call constructor of SetCameraInfo_Request */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pycamera_info = NULL;
  PyObject * pycamera_info_msg_module = PyImport_ImportModule("sensor_msgs.msg._camera_info");
  PyObject * pycamera_info_msg_class = PyObject_GetAttrString(pycamera_info_msg_module, "CameraInfo");
  PyObject * pycamera_info_msg_metaclass = PyObject_GetAttrString(pycamera_info_msg_class, "__class__");
  PyObject * pycamera_info_convert_to_py = PyObject_GetAttrString(pycamera_info_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_camera_info = (convert_to_py_signature)PyCapsule_GetPointer(pycamera_info_convert_to_py, NULL);
  sensor_msgs__msg__CameraInfo pytmpcamera_info = ros_message->camera_info;
  pycamera_info = convert_to_py_camera_info(&pytmpcamera_info);
  if (!pycamera_info) {
    return NULL;
  }
  assert(pycamera_info != NULL);
  Py_INCREF(pycamera_info);
  PyObject_SetAttrString(_pymessage, "camera_info", pycamera_info);
  assert(_pymessage != NULL);
  return _pymessage;
}
