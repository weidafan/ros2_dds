// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/srv/set_camera_info__response__struct.h>
#include <sensor_msgs/srv/set_camera_info__response__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * sensor_msgs_set_camera_info__response__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__srv__SetCameraInfo_Response * ros_message = sensor_msgs__srv__SetCameraInfo_Response__create();
  (void)ros_message;
  char full_classname_dest[66];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.srv._set_camera_info__response.SetCameraInfo_Response",
      full_classname_dest, 65) == 0);

  PyObject * pysuccess = PyObject_GetAttrString(_pymsg, "success");
  assert(PyBool_Check(pysuccess));
  ros_message->success = (Py_True == pysuccess);
  PyObject * pystatus_message = PyObject_GetAttrString(_pymsg, "status_message");
  assert(PyUnicode_Check(pystatus_message));
  rosidl_generator_c__String__assign(
    &ros_message->status_message, (char *)PyUnicode_1BYTE_DATA(pystatus_message));

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_set_camera_info__response__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__srv__SetCameraInfo_Response * ros_message = (sensor_msgs__srv__SetCameraInfo_Response *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__srv__SetCameraInfo_Response__destroy(ros_message);
}

PyObject * sensor_msgs_set_camera_info__response__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__srv__SetCameraInfo_Response * ros_message = (sensor_msgs__srv__SetCameraInfo_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.srv._set_camera_info__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetCameraInfo_Response");

  /* NOTE(esteve): Call constructor of SetCameraInfo_Response */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pysuccess = NULL;
  pysuccess = ros_message->success ? Py_True : Py_False;
  assert(pysuccess != NULL);
  Py_INCREF(pysuccess);
  PyObject_SetAttrString(_pymessage, "success", pysuccess);
  PyObject * pystatus_message = NULL;
  pystatus_message = PyUnicode_FromString(ros_message->status_message.data);
  assert(pystatus_message != NULL);
  Py_INCREF(pystatus_message);
  PyObject_SetAttrString(_pymessage, "status_message", pystatus_message);
  assert(_pymessage != NULL);
  return _pymessage;
}
