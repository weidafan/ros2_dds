// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <stereo_msgs/msg/disparity_image__struct.h>
#include <stereo_msgs/msg/disparity_image__functions.h>


void * stereo_msgs_disparity_image__convert_from_py(PyObject * _pymsg)
{
  stereo_msgs__msg__DisparityImage * ros_message = stereo_msgs__msg__DisparityImage__create();
  (void)ros_message;
  char full_classname_dest[48];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "stereo_msgs.msg._disparity_image.DisparityImage",
      full_classname_dest, 47) == 0);

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
  PyObject * pyimage = PyObject_GetAttrString(_pymsg, "image");
  PyObject * pyimage_msg_module = PyImport_ImportModule("sensor_msgs.msg._image");
  PyObject * pyimage_msg_class = PyObject_GetAttrString(pyimage_msg_module, "Image");
  PyObject * pyimage_msg_metaclass = PyObject_GetAttrString(pyimage_msg_class, "__class__");
  PyObject * pyimage_convert_from_py = PyObject_GetAttrString(pyimage_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_image = (convert_from_py_signature)PyCapsule_GetPointer(pyimage_convert_from_py, NULL);
  sensor_msgs__msg__Image * tmpimage = (sensor_msgs__msg__Image *) convert_from_py_image(pyimage);
  if (!tmpimage) {
    return NULL;
  }
  ros_message->image = *tmpimage;
  PyObject * pyf = PyObject_GetAttrString(_pymsg, "f");
  assert(PyFloat_Check(pyf));
  ros_message->f = (float)PyFloat_AS_DOUBLE(pyf);
  PyObject * pyt = PyObject_GetAttrString(_pymsg, "t");
  assert(PyFloat_Check(pyt));
  ros_message->t = (float)PyFloat_AS_DOUBLE(pyt);
  PyObject * pyvalid_window = PyObject_GetAttrString(_pymsg, "valid_window");
  PyObject * pyvalid_window_msg_module = PyImport_ImportModule("sensor_msgs.msg._region_of_interest");
  PyObject * pyvalid_window_msg_class = PyObject_GetAttrString(pyvalid_window_msg_module, "RegionOfInterest");
  PyObject * pyvalid_window_msg_metaclass = PyObject_GetAttrString(pyvalid_window_msg_class, "__class__");
  PyObject * pyvalid_window_convert_from_py = PyObject_GetAttrString(pyvalid_window_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_valid_window = (convert_from_py_signature)PyCapsule_GetPointer(pyvalid_window_convert_from_py, NULL);
  sensor_msgs__msg__RegionOfInterest * tmpvalid_window = (sensor_msgs__msg__RegionOfInterest *) convert_from_py_valid_window(pyvalid_window);
  if (!tmpvalid_window) {
    return NULL;
  }
  ros_message->valid_window = *tmpvalid_window;
  PyObject * pymin_disparity = PyObject_GetAttrString(_pymsg, "min_disparity");
  assert(PyFloat_Check(pymin_disparity));
  ros_message->min_disparity = (float)PyFloat_AS_DOUBLE(pymin_disparity);
  PyObject * pymax_disparity = PyObject_GetAttrString(_pymsg, "max_disparity");
  assert(PyFloat_Check(pymax_disparity));
  ros_message->max_disparity = (float)PyFloat_AS_DOUBLE(pymax_disparity);
  PyObject * pydelta_d = PyObject_GetAttrString(_pymsg, "delta_d");
  assert(PyFloat_Check(pydelta_d));
  ros_message->delta_d = (float)PyFloat_AS_DOUBLE(pydelta_d);

  assert(ros_message != NULL);
  return ros_message;
}

void stereo_msgs_disparity_image__destroy_ros_message(void * raw_ros_message)
{
  stereo_msgs__msg__DisparityImage * ros_message = (stereo_msgs__msg__DisparityImage *)raw_ros_message;
  (void)ros_message;

  stereo_msgs__msg__DisparityImage__destroy(ros_message);
}

PyObject * stereo_msgs_disparity_image__convert_to_py(void * raw_ros_message)
{
  stereo_msgs__msg__DisparityImage * ros_message = (stereo_msgs__msg__DisparityImage *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("stereo_msgs.msg._disparity_image");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DisparityImage");

  /* NOTE(esteve): Call constructor of DisparityImage */
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
  PyObject * pyimage = NULL;
  PyObject * pyimage_msg_module = PyImport_ImportModule("sensor_msgs.msg._image");
  PyObject * pyimage_msg_class = PyObject_GetAttrString(pyimage_msg_module, "Image");
  PyObject * pyimage_msg_metaclass = PyObject_GetAttrString(pyimage_msg_class, "__class__");
  PyObject * pyimage_convert_to_py = PyObject_GetAttrString(pyimage_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_image = (convert_to_py_signature)PyCapsule_GetPointer(pyimage_convert_to_py, NULL);
  sensor_msgs__msg__Image pytmpimage = ros_message->image;
  pyimage = convert_to_py_image(&pytmpimage);
  if (!pyimage) {
    return NULL;
  }
  assert(pyimage != NULL);
  Py_INCREF(pyimage);
  PyObject_SetAttrString(_pymessage, "image", pyimage);
  PyObject * pyf = NULL;
  pyf = PyFloat_FromDouble(ros_message->f);
  assert(pyf != NULL);
  Py_INCREF(pyf);
  PyObject_SetAttrString(_pymessage, "f", pyf);
  PyObject * pyt = NULL;
  pyt = PyFloat_FromDouble(ros_message->t);
  assert(pyt != NULL);
  Py_INCREF(pyt);
  PyObject_SetAttrString(_pymessage, "t", pyt);
  PyObject * pyvalid_window = NULL;
  PyObject * pyvalid_window_msg_module = PyImport_ImportModule("sensor_msgs.msg._region_of_interest");
  PyObject * pyvalid_window_msg_class = PyObject_GetAttrString(pyvalid_window_msg_module, "RegionOfInterest");
  PyObject * pyvalid_window_msg_metaclass = PyObject_GetAttrString(pyvalid_window_msg_class, "__class__");
  PyObject * pyvalid_window_convert_to_py = PyObject_GetAttrString(pyvalid_window_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_valid_window = (convert_to_py_signature)PyCapsule_GetPointer(pyvalid_window_convert_to_py, NULL);
  sensor_msgs__msg__RegionOfInterest pytmpvalid_window = ros_message->valid_window;
  pyvalid_window = convert_to_py_valid_window(&pytmpvalid_window);
  if (!pyvalid_window) {
    return NULL;
  }
  assert(pyvalid_window != NULL);
  Py_INCREF(pyvalid_window);
  PyObject_SetAttrString(_pymessage, "valid_window", pyvalid_window);
  PyObject * pymin_disparity = NULL;
  pymin_disparity = PyFloat_FromDouble(ros_message->min_disparity);
  assert(pymin_disparity != NULL);
  Py_INCREF(pymin_disparity);
  PyObject_SetAttrString(_pymessage, "min_disparity", pymin_disparity);
  PyObject * pymax_disparity = NULL;
  pymax_disparity = PyFloat_FromDouble(ros_message->max_disparity);
  assert(pymax_disparity != NULL);
  Py_INCREF(pymax_disparity);
  PyObject_SetAttrString(_pymessage, "max_disparity", pymax_disparity);
  PyObject * pydelta_d = NULL;
  pydelta_d = PyFloat_FromDouble(ros_message->delta_d);
  assert(pydelta_d != NULL);
  Py_INCREF(pydelta_d);
  PyObject_SetAttrString(_pymessage, "delta_d", pydelta_d);
  assert(_pymessage != NULL);
  return _pymessage;
}
