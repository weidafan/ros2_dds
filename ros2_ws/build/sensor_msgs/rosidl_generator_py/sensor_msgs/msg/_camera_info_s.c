// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/camera_info__struct.h>
#include <sensor_msgs/msg/camera_info__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>


void * sensor_msgs_camera_info__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__CameraInfo * ros_message = sensor_msgs__msg__CameraInfo__create();
  (void)ros_message;
  char full_classname_dest[40];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._camera_info.CameraInfo",
      full_classname_dest, 39) == 0);

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
  PyObject * pyheight = PyObject_GetAttrString(_pymsg, "height");
  assert(PyLong_Check(pyheight));
  ros_message->height = PyLong_AsUnsignedLong(pyheight);
  PyObject * pywidth = PyObject_GetAttrString(_pymsg, "width");
  assert(PyLong_Check(pywidth));
  ros_message->width = PyLong_AsUnsignedLong(pywidth);
  PyObject * pydistortion_model = PyObject_GetAttrString(_pymsg, "distortion_model");
  assert(PyUnicode_Check(pydistortion_model));
  rosidl_generator_c__String__assign(
    &ros_message->distortion_model, (char *)PyUnicode_1BYTE_DATA(pydistortion_model));
  PyObject * pyd = PyObject_GetAttrString(_pymsg, "d");
  assert(PySequence_Check(pyd));
  PyObject * seqd = PySequence_Fast(pyd, "expected a sequence");
  PyObject * itemd;
  size_t sized = PySequence_Size(pyd);
  if (!rosidl_generator_c__float64__Array__init(&(ros_message->d), sized)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create float64__Array ros_message");
    return NULL;
  }
  double * destd = ros_message->d.data;
  double tmpd;
  size_t idxd;
  for (idxd = 0; idxd < sized; idxd++) {
    itemd = PySequence_Fast_GET_ITEM(seqd, idxd);
    assert(PyFloat_Check(itemd));
    tmpd = PyFloat_AS_DOUBLE(itemd);
    memcpy(&destd[idxd], &tmpd, sizeof(double));
  }
  PyObject * pyk = PyObject_GetAttrString(_pymsg, "k");
  assert(PySequence_Check(pyk));
  PyObject * seqk = PySequence_Fast(pyk, "expected a sequence");
  PyObject * itemk;
  size_t sizek = 9;
  double * destk = ros_message->k;
  double tmpk;
  size_t idxk;
  for (idxk = 0; idxk < sizek; idxk++) {
    itemk = PySequence_Fast_GET_ITEM(seqk, idxk);
    assert(PyFloat_Check(itemk));
    tmpk = PyFloat_AS_DOUBLE(itemk);
    memcpy(&destk[idxk], &tmpk, sizeof(double));
  }
  PyObject * pyr = PyObject_GetAttrString(_pymsg, "r");
  assert(PySequence_Check(pyr));
  PyObject * seqr = PySequence_Fast(pyr, "expected a sequence");
  PyObject * itemr;
  size_t sizer = 9;
  double * destr = ros_message->r;
  double tmpr;
  size_t idxr;
  for (idxr = 0; idxr < sizer; idxr++) {
    itemr = PySequence_Fast_GET_ITEM(seqr, idxr);
    assert(PyFloat_Check(itemr));
    tmpr = PyFloat_AS_DOUBLE(itemr);
    memcpy(&destr[idxr], &tmpr, sizeof(double));
  }
  PyObject * pyp = PyObject_GetAttrString(_pymsg, "p");
  assert(PySequence_Check(pyp));
  PyObject * seqp = PySequence_Fast(pyp, "expected a sequence");
  PyObject * itemp;
  size_t sizep = 12;
  double * destp = ros_message->p;
  double tmpp;
  size_t idxp;
  for (idxp = 0; idxp < sizep; idxp++) {
    itemp = PySequence_Fast_GET_ITEM(seqp, idxp);
    assert(PyFloat_Check(itemp));
    tmpp = PyFloat_AS_DOUBLE(itemp);
    memcpy(&destp[idxp], &tmpp, sizeof(double));
  }
  PyObject * pybinning_x = PyObject_GetAttrString(_pymsg, "binning_x");
  assert(PyLong_Check(pybinning_x));
  ros_message->binning_x = PyLong_AsUnsignedLong(pybinning_x);
  PyObject * pybinning_y = PyObject_GetAttrString(_pymsg, "binning_y");
  assert(PyLong_Check(pybinning_y));
  ros_message->binning_y = PyLong_AsUnsignedLong(pybinning_y);
  PyObject * pyroi = PyObject_GetAttrString(_pymsg, "roi");
  PyObject * pyroi_msg_module = PyImport_ImportModule("sensor_msgs.msg._region_of_interest");
  PyObject * pyroi_msg_class = PyObject_GetAttrString(pyroi_msg_module, "RegionOfInterest");
  PyObject * pyroi_msg_metaclass = PyObject_GetAttrString(pyroi_msg_class, "__class__");
  PyObject * pyroi_convert_from_py = PyObject_GetAttrString(pyroi_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_roi = (convert_from_py_signature)PyCapsule_GetPointer(pyroi_convert_from_py, NULL);
  sensor_msgs__msg__RegionOfInterest * tmproi = (sensor_msgs__msg__RegionOfInterest *) convert_from_py_roi(pyroi);
  if (!tmproi) {
    return NULL;
  }
  ros_message->roi = *tmproi;

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_camera_info__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__CameraInfo * ros_message = (sensor_msgs__msg__CameraInfo *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__CameraInfo__destroy(ros_message);
}

PyObject * sensor_msgs_camera_info__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__CameraInfo * ros_message = (sensor_msgs__msg__CameraInfo *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._camera_info");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CameraInfo");

  /* NOTE(esteve): Call constructor of CameraInfo */
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
  PyObject * pyheight = NULL;
  pyheight = PyLong_FromUnsignedLong(ros_message->height);
  assert(pyheight != NULL);
  Py_INCREF(pyheight);
  PyObject_SetAttrString(_pymessage, "height", pyheight);
  PyObject * pywidth = NULL;
  pywidth = PyLong_FromUnsignedLong(ros_message->width);
  assert(pywidth != NULL);
  Py_INCREF(pywidth);
  PyObject_SetAttrString(_pymessage, "width", pywidth);
  PyObject * pydistortion_model = NULL;
  pydistortion_model = PyUnicode_FromString(ros_message->distortion_model.data);
  assert(pydistortion_model != NULL);
  Py_INCREF(pydistortion_model);
  PyObject_SetAttrString(_pymessage, "distortion_model", pydistortion_model);
  PyObject * pyd = NULL;
  size_t sized = ros_message->d.size;
  double * tmpmessagedatad = ros_message->d.data;
  pyd = PyList_New(sized);
  size_t idxd;
  for (idxd = 0; idxd < sized; idxd++) {
    PyList_SetItem(pyd, idxd, PyFloat_FromDouble(tmpmessagedatad[idxd]));
  }
  assert(PySequence_Check(pyd));
  assert(pyd != NULL);
  Py_INCREF(pyd);
  PyObject_SetAttrString(_pymessage, "d", pyd);
  PyObject * pyk = NULL;
  size_t sizek = 9;
  double * tmpmessagedatak = ros_message->k;
  pyk = PyList_New(sizek);
  size_t idxk;
  for (idxk = 0; idxk < sizek; idxk++) {
    PyList_SetItem(pyk, idxk, PyFloat_FromDouble(tmpmessagedatak[idxk]));
  }
  assert(PySequence_Check(pyk));
  assert(pyk != NULL);
  Py_INCREF(pyk);
  PyObject_SetAttrString(_pymessage, "k", pyk);
  PyObject * pyr = NULL;
  size_t sizer = 9;
  double * tmpmessagedatar = ros_message->r;
  pyr = PyList_New(sizer);
  size_t idxr;
  for (idxr = 0; idxr < sizer; idxr++) {
    PyList_SetItem(pyr, idxr, PyFloat_FromDouble(tmpmessagedatar[idxr]));
  }
  assert(PySequence_Check(pyr));
  assert(pyr != NULL);
  Py_INCREF(pyr);
  PyObject_SetAttrString(_pymessage, "r", pyr);
  PyObject * pyp = NULL;
  size_t sizep = 12;
  double * tmpmessagedatap = ros_message->p;
  pyp = PyList_New(sizep);
  size_t idxp;
  for (idxp = 0; idxp < sizep; idxp++) {
    PyList_SetItem(pyp, idxp, PyFloat_FromDouble(tmpmessagedatap[idxp]));
  }
  assert(PySequence_Check(pyp));
  assert(pyp != NULL);
  Py_INCREF(pyp);
  PyObject_SetAttrString(_pymessage, "p", pyp);
  PyObject * pybinning_x = NULL;
  pybinning_x = PyLong_FromUnsignedLong(ros_message->binning_x);
  assert(pybinning_x != NULL);
  Py_INCREF(pybinning_x);
  PyObject_SetAttrString(_pymessage, "binning_x", pybinning_x);
  PyObject * pybinning_y = NULL;
  pybinning_y = PyLong_FromUnsignedLong(ros_message->binning_y);
  assert(pybinning_y != NULL);
  Py_INCREF(pybinning_y);
  PyObject_SetAttrString(_pymessage, "binning_y", pybinning_y);
  PyObject * pyroi = NULL;
  PyObject * pyroi_msg_module = PyImport_ImportModule("sensor_msgs.msg._region_of_interest");
  PyObject * pyroi_msg_class = PyObject_GetAttrString(pyroi_msg_module, "RegionOfInterest");
  PyObject * pyroi_msg_metaclass = PyObject_GetAttrString(pyroi_msg_class, "__class__");
  PyObject * pyroi_convert_to_py = PyObject_GetAttrString(pyroi_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_roi = (convert_to_py_signature)PyCapsule_GetPointer(pyroi_convert_to_py, NULL);
  sensor_msgs__msg__RegionOfInterest pytmproi = ros_message->roi;
  pyroi = convert_to_py_roi(&pytmproi);
  if (!pyroi) {
    return NULL;
  }
  assert(pyroi != NULL);
  Py_INCREF(pyroi);
  PyObject_SetAttrString(_pymessage, "roi", pyroi);
  assert(_pymessage != NULL);
  return _pymessage;
}
