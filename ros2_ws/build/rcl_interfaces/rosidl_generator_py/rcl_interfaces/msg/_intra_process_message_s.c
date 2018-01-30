// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <rcl_interfaces/msg/intra_process_message__struct.h>
#include <rcl_interfaces/msg/intra_process_message__functions.h>


void * rcl_interfaces_intra_process_message__convert_from_py(PyObject * _pymsg)
{
  rcl_interfaces__msg__IntraProcessMessage * ros_message = rcl_interfaces__msg__IntraProcessMessage__create();
  (void)ros_message;
  char full_classname_dest[62];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "rcl_interfaces.msg._intra_process_message.IntraProcessMessage",
      full_classname_dest, 61) == 0);

  PyObject * pypublisher_id = PyObject_GetAttrString(_pymsg, "publisher_id");
  assert(PyLong_Check(pypublisher_id));
  ros_message->publisher_id = PyLong_AsUnsignedLongLong(pypublisher_id);
  PyObject * pymessage_sequence = PyObject_GetAttrString(_pymsg, "message_sequence");
  assert(PyLong_Check(pymessage_sequence));
  ros_message->message_sequence = PyLong_AsUnsignedLongLong(pymessage_sequence);

  assert(ros_message != NULL);
  return ros_message;
}

void rcl_interfaces_intra_process_message__destroy_ros_message(void * raw_ros_message)
{
  rcl_interfaces__msg__IntraProcessMessage * ros_message = (rcl_interfaces__msg__IntraProcessMessage *)raw_ros_message;
  (void)ros_message;

  rcl_interfaces__msg__IntraProcessMessage__destroy(ros_message);
}

PyObject * rcl_interfaces_intra_process_message__convert_to_py(void * raw_ros_message)
{
  rcl_interfaces__msg__IntraProcessMessage * ros_message = (rcl_interfaces__msg__IntraProcessMessage *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("rcl_interfaces.msg._intra_process_message");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IntraProcessMessage");

  /* NOTE(esteve): Call constructor of IntraProcessMessage */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pypublisher_id = NULL;
  pypublisher_id = PyLong_FromUnsignedLongLong(ros_message->publisher_id);
  assert(pypublisher_id != NULL);
  Py_INCREF(pypublisher_id);
  PyObject_SetAttrString(_pymessage, "publisher_id", pypublisher_id);
  PyObject * pymessage_sequence = NULL;
  pymessage_sequence = PyLong_FromUnsignedLongLong(ros_message->message_sequence);
  assert(pymessage_sequence != NULL);
  Py_INCREF(pymessage_sequence);
  PyObject_SetAttrString(_pymessage, "message_sequence", pymessage_sequence);
  assert(_pymessage != NULL);
  return _pymessage;
}
