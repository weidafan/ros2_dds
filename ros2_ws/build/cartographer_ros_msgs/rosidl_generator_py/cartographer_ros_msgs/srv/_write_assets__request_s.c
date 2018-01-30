// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <cartographer_ros_msgs/srv/write_assets__request__struct.h>
#include <cartographer_ros_msgs/srv/write_assets__request__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * cartographer_ros_msgs_write_assets__request__convert_from_py(PyObject * _pymsg)
{
  cartographer_ros_msgs__srv__WriteAssets_Request * ros_message = cartographer_ros_msgs__srv__WriteAssets_Request__create();
  (void)ros_message;
  char full_classname_dest[69];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "cartographer_ros_msgs.srv._write_assets__request.WriteAssets_Request",
      full_classname_dest, 68) == 0);

  PyObject * pystem = PyObject_GetAttrString(_pymsg, "stem");
  assert(PyUnicode_Check(pystem));
  rosidl_generator_c__String__assign(
    &ros_message->stem, (char *)PyUnicode_1BYTE_DATA(pystem));

  assert(ros_message != NULL);
  return ros_message;
}

void cartographer_ros_msgs_write_assets__request__destroy_ros_message(void * raw_ros_message)
{
  cartographer_ros_msgs__srv__WriteAssets_Request * ros_message = (cartographer_ros_msgs__srv__WriteAssets_Request *)raw_ros_message;
  (void)ros_message;

  cartographer_ros_msgs__srv__WriteAssets_Request__destroy(ros_message);
}

PyObject * cartographer_ros_msgs_write_assets__request__convert_to_py(void * raw_ros_message)
{
  cartographer_ros_msgs__srv__WriteAssets_Request * ros_message = (cartographer_ros_msgs__srv__WriteAssets_Request *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("cartographer_ros_msgs.srv._write_assets__request");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WriteAssets_Request");

  /* NOTE(esteve): Call constructor of WriteAssets_Request */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pystem = NULL;
  pystem = PyUnicode_FromString(ros_message->stem.data);
  assert(pystem != NULL);
  Py_INCREF(pystem);
  PyObject_SetAttrString(_pymessage, "stem", pystem);
  assert(_pymessage != NULL);
  return _pymessage;
}
