// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <tf2_msgs/msg/tf_message__struct.h>
#include <tf2_msgs/msg/tf_message__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <geometry_msgs/msg/transform_stamped__functions.h>
// end nested array functions include

void * tf2_msgs_tf_message__convert_from_py(PyObject * _pymsg)
{
  tf2_msgs__msg__TFMessage * ros_message = tf2_msgs__msg__TFMessage__create();
  (void)ros_message;
  char full_classname_dest[35];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "tf2_msgs.msg._tf_message.TFMessage",
      full_classname_dest, 34) == 0);

  PyObject * pytransforms = PyObject_GetAttrString(_pymsg, "transforms");
  PyObject * pytransforms_msg_module = PyImport_ImportModule("geometry_msgs.msg._transform_stamped");
  PyObject * pytransforms_msg_class = PyObject_GetAttrString(pytransforms_msg_module, "TransformStamped");
  PyObject * pytransforms_msg_metaclass = PyObject_GetAttrString(pytransforms_msg_class, "__class__");
  PyObject * pytransforms_convert_from_py = PyObject_GetAttrString(pytransforms_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_transforms = (convert_from_py_signature)PyCapsule_GetPointer(pytransforms_convert_from_py, NULL);
  assert(PySequence_Check(pytransforms));
  PyObject * seqtransforms = PySequence_Fast(pytransforms, "expected a sequence");
  geometry_msgs__msg__TransformStamped * itemtransforms;
  size_t sizetransforms = PySequence_Size(pytransforms);
  if (!geometry_msgs__msg__TransformStamped__Array__init(&(ros_message->transforms), sizetransforms)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__TransformStamped__Array ros_message");
    return NULL;
  }
  geometry_msgs__msg__TransformStamped * desttransforms = ros_message->transforms.data;
  size_t idxtransforms;
  for (idxtransforms = 0; idxtransforms < sizetransforms; idxtransforms++) {
    itemtransforms = (geometry_msgs__msg__TransformStamped *) convert_from_py_transforms(
      PySequence_Fast_GET_ITEM(seqtransforms, idxtransforms));
    if (!itemtransforms) {
      return NULL;
    }
    memcpy(&desttransforms[idxtransforms], itemtransforms, sizeof(geometry_msgs__msg__TransformStamped));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void tf2_msgs_tf_message__destroy_ros_message(void * raw_ros_message)
{
  tf2_msgs__msg__TFMessage * ros_message = (tf2_msgs__msg__TFMessage *)raw_ros_message;
  (void)ros_message;

  tf2_msgs__msg__TFMessage__destroy(ros_message);
}

PyObject * tf2_msgs_tf_message__convert_to_py(void * raw_ros_message)
{
  tf2_msgs__msg__TFMessage * ros_message = (tf2_msgs__msg__TFMessage *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("tf2_msgs.msg._tf_message");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TFMessage");

  /* NOTE(esteve): Call constructor of TFMessage */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pytransforms = NULL;
  PyObject * pytransforms_msg_module = PyImport_ImportModule("geometry_msgs.msg._transform_stamped");
  PyObject * pytransforms_msg_class = PyObject_GetAttrString(pytransforms_msg_module, "TransformStamped");
  PyObject * pytransforms_msg_metaclass = PyObject_GetAttrString(pytransforms_msg_class, "__class__");
  PyObject * pytransforms_convert_to_py = PyObject_GetAttrString(pytransforms_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_transforms = (convert_to_py_signature)PyCapsule_GetPointer(pytransforms_convert_to_py, NULL);
  size_t sizetransforms = ros_message->transforms.size;
  pytransforms = PyList_New(sizetransforms);
  geometry_msgs__msg__TransformStamped itemtransforms;
  size_t idxtransforms;
  for (idxtransforms = 0; idxtransforms < sizetransforms; idxtransforms++) {
    itemtransforms = ros_message->transforms.data[idxtransforms];
    PyObject * pyitemtransforms = convert_to_py_transforms(&itemtransforms);
    if (!pyitemtransforms) {
      return NULL;
    }
    PyList_SetItem(pytransforms, idxtransforms, pyitemtransforms);
  }
  assert(PySequence_Check(pytransforms));
  assert(pytransforms != NULL);
  Py_INCREF(pytransforms);
  PyObject_SetAttrString(_pymessage, "transforms", pytransforms);
  assert(_pymessage != NULL);
  return _pymessage;
}
