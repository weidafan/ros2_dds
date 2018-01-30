// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <composition/srv/load_node__response__struct.h>
#include <composition/srv/load_node__response__functions.h>


void * composition_load_node__response__convert_from_py(PyObject * _pymsg)
{
  composition__srv__LoadNode_Response * ros_message = composition__srv__LoadNode_Response__create();
  (void)ros_message;
  char full_classname_dest[55];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "composition.srv._load_node__response.LoadNode_Response",
      full_classname_dest, 54) == 0);

  PyObject * pysuccess = PyObject_GetAttrString(_pymsg, "success");
  assert(PyBool_Check(pysuccess));
  ros_message->success = (Py_True == pysuccess);

  assert(ros_message != NULL);
  return ros_message;
}

void composition_load_node__response__destroy_ros_message(void * raw_ros_message)
{
  composition__srv__LoadNode_Response * ros_message = (composition__srv__LoadNode_Response *)raw_ros_message;
  (void)ros_message;

  composition__srv__LoadNode_Response__destroy(ros_message);
}

PyObject * composition_load_node__response__convert_to_py(void * raw_ros_message)
{
  composition__srv__LoadNode_Response * ros_message = (composition__srv__LoadNode_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("composition.srv._load_node__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LoadNode_Response");

  /* NOTE(esteve): Call constructor of LoadNode_Response */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pysuccess = NULL;
  pysuccess = ros_message->success ? Py_True : Py_False;
  assert(pysuccess != NULL);
  Py_INCREF(pysuccess);
  PyObject_SetAttrString(_pymessage, "success", pysuccess);
  assert(_pymessage != NULL);
  return _pymessage;
}
