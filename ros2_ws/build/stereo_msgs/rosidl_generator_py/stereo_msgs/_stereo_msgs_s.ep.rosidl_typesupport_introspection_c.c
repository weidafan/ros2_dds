// generated from rosidl_generator_py/resource/_msg_support.entry_point.c.em
// generated code does not contain a copyright notice

#include <Python.h>
#include <stdint.h>

#include <rosidl_generator_c/message_type_support_struct.h>
#include <rosidl_generator_c/visibility_control.h>

#include <stereo_msgs/msg/disparity_image__type_support.h>
void * stereo_msgs_disparity_image__convert_from_py(PyObject * _pymsg);
void stereo_msgs_disparity_image__destroy_ros_message(void * raw_ros_message);
PyObject * stereo_msgs_disparity_image__convert_to_py(void * raw_ros_message);

static PyMethodDef stereo_msgs__methods[] = {
  {NULL, NULL, 0, NULL}  /* sentinel */
};

static struct PyModuleDef stereo_msgs__module = {
  PyModuleDef_HEAD_INIT,
  "_stereo_msgs_support",
  "_stereo_msgs_doc",
  -1,  /* -1 means that the module keeps state in global variables */
  stereo_msgs__methods,
  NULL,
  NULL,
  NULL,
  NULL,
};

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(stereo_msgs, msg, DisparityImage);

int8_t
_register_msg_type__disparity_image(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&stereo_msgs_disparity_image__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg_disparity_image",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&stereo_msgs_disparity_image__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg_disparity_image",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&stereo_msgs_disparity_image__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg_disparity_image",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(stereo_msgs, msg, DisparityImage),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg_disparity_image",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

PyMODINIT_FUNC
PyInit_stereo_msgs_s__rosidl_typesupport_introspection_c(void)
{
  PyObject * pymodule = NULL;
  pymodule = PyModule_Create(&stereo_msgs__module);
  if (!pymodule) {
    return NULL;
  }
  int8_t err;
  err = _register_msg_type__disparity_image(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  return pymodule;
}