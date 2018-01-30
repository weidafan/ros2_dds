// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <rcl_interfaces/srv/describe_parameters__request__struct.h>
#include <rcl_interfaces/srv/describe_parameters__request__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * rcl_interfaces_describe_parameters__request__convert_from_py(PyObject * _pymsg)
{
  rcl_interfaces__srv__DescribeParameters_Request * ros_message = rcl_interfaces__srv__DescribeParameters_Request__create();
  (void)ros_message;
  char full_classname_dest[76];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "rcl_interfaces.srv._describe_parameters__request.DescribeParameters_Request",
      full_classname_dest, 75) == 0);

  PyObject * pynames = PyObject_GetAttrString(_pymsg, "names");
  assert(PySequence_Check(pynames));
  PyObject * seqnames = PySequence_Fast(pynames, "expected a sequence");
  PyObject * itemnames;
  size_t sizenames = PySequence_Size(pynames);
  if (!rosidl_generator_c__String__Array__init(&(ros_message->names), sizenames)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create String__Array ros_message");
    return NULL;
  }
  rosidl_generator_c__String * destnames = ros_message->names.data;
  size_t idxnames;
  for (idxnames = 0; idxnames < sizenames; idxnames++) {
    itemnames = PySequence_Fast_GET_ITEM(seqnames, idxnames);
    assert(PyUnicode_Check(itemnames));
    rosidl_generator_c__String__assign(
      &destnames[idxnames], (char *)PyUnicode_1BYTE_DATA(itemnames));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void rcl_interfaces_describe_parameters__request__destroy_ros_message(void * raw_ros_message)
{
  rcl_interfaces__srv__DescribeParameters_Request * ros_message = (rcl_interfaces__srv__DescribeParameters_Request *)raw_ros_message;
  (void)ros_message;

  rcl_interfaces__srv__DescribeParameters_Request__destroy(ros_message);
}

PyObject * rcl_interfaces_describe_parameters__request__convert_to_py(void * raw_ros_message)
{
  rcl_interfaces__srv__DescribeParameters_Request * ros_message = (rcl_interfaces__srv__DescribeParameters_Request *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("rcl_interfaces.srv._describe_parameters__request");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DescribeParameters_Request");

  /* NOTE(esteve): Call constructor of DescribeParameters_Request */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pynames = NULL;
  size_t sizenames = ros_message->names.size;
  rosidl_generator_c__String * tmpmessagedatanames = ros_message->names.data;
  pynames = PyList_New(sizenames);
  size_t idxnames;
  for (idxnames = 0; idxnames < sizenames; idxnames++) {
    PyList_SetItem(pynames, idxnames, PyUnicode_FromString(tmpmessagedatanames[idxnames].data));
  }
  assert(PySequence_Check(pynames));
  assert(pynames != NULL);
  Py_INCREF(pynames);
  PyObject_SetAttrString(_pymessage, "names", pynames);
  assert(_pymessage != NULL);
  return _pymessage;
}
