// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <geometry_msgs/msg/transform_stamped__struct.h>
#include <geometry_msgs/msg/transform_stamped__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * geometry_msgs_transform_stamped__convert_from_py(PyObject * _pymsg)
{
  geometry_msgs__msg__TransformStamped * ros_message = geometry_msgs__msg__TransformStamped__create();
  (void)ros_message;
  char full_classname_dest[54];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "geometry_msgs.msg._transform_stamped.TransformStamped",
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
  PyObject * pychild_frame_id = PyObject_GetAttrString(_pymsg, "child_frame_id");
  assert(PyUnicode_Check(pychild_frame_id));
  rosidl_generator_c__String__assign(
    &ros_message->child_frame_id, (char *)PyUnicode_1BYTE_DATA(pychild_frame_id));
  PyObject * pytransform = PyObject_GetAttrString(_pymsg, "transform");
  PyObject * pytransform_msg_module = PyImport_ImportModule("geometry_msgs.msg._transform");
  PyObject * pytransform_msg_class = PyObject_GetAttrString(pytransform_msg_module, "Transform");
  PyObject * pytransform_msg_metaclass = PyObject_GetAttrString(pytransform_msg_class, "__class__");
  PyObject * pytransform_convert_from_py = PyObject_GetAttrString(pytransform_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_transform = (convert_from_py_signature)PyCapsule_GetPointer(pytransform_convert_from_py, NULL);
  geometry_msgs__msg__Transform * tmptransform = (geometry_msgs__msg__Transform *) convert_from_py_transform(pytransform);
  if (!tmptransform) {
    return NULL;
  }
  ros_message->transform = *tmptransform;

  assert(ros_message != NULL);
  return ros_message;
}

void geometry_msgs_transform_stamped__destroy_ros_message(void * raw_ros_message)
{
  geometry_msgs__msg__TransformStamped * ros_message = (geometry_msgs__msg__TransformStamped *)raw_ros_message;
  (void)ros_message;

  geometry_msgs__msg__TransformStamped__destroy(ros_message);
}

PyObject * geometry_msgs_transform_stamped__convert_to_py(void * raw_ros_message)
{
  geometry_msgs__msg__TransformStamped * ros_message = (geometry_msgs__msg__TransformStamped *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("geometry_msgs.msg._transform_stamped");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TransformStamped");

  /* NOTE(esteve): Call constructor of TransformStamped */
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
  PyObject * pychild_frame_id = NULL;
  pychild_frame_id = PyUnicode_FromString(ros_message->child_frame_id.data);
  assert(pychild_frame_id != NULL);
  Py_INCREF(pychild_frame_id);
  PyObject_SetAttrString(_pymessage, "child_frame_id", pychild_frame_id);
  PyObject * pytransform = NULL;
  PyObject * pytransform_msg_module = PyImport_ImportModule("geometry_msgs.msg._transform");
  PyObject * pytransform_msg_class = PyObject_GetAttrString(pytransform_msg_module, "Transform");
  PyObject * pytransform_msg_metaclass = PyObject_GetAttrString(pytransform_msg_class, "__class__");
  PyObject * pytransform_convert_to_py = PyObject_GetAttrString(pytransform_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_transform = (convert_to_py_signature)PyCapsule_GetPointer(pytransform_convert_to_py, NULL);
  geometry_msgs__msg__Transform pytmptransform = ros_message->transform;
  pytransform = convert_to_py_transform(&pytmptransform);
  if (!pytransform) {
    return NULL;
  }
  assert(pytransform != NULL);
  Py_INCREF(pytransform);
  PyObject_SetAttrString(_pymessage, "transform", pytransform);
  assert(_pymessage != NULL);
  return _pymessage;
}
