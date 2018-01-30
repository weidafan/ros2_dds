// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <shape_msgs/msg/plane__struct.h>
#include <shape_msgs/msg/plane__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>


void * shape_msgs_plane__convert_from_py(PyObject * _pymsg)
{
  shape_msgs__msg__Plane * ros_message = shape_msgs__msg__Plane__create();
  (void)ros_message;
  char full_classname_dest[28];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "shape_msgs.msg._plane.Plane",
      full_classname_dest, 27) == 0);

  PyObject * pycoef = PyObject_GetAttrString(_pymsg, "coef");
  assert(PySequence_Check(pycoef));
  PyObject * seqcoef = PySequence_Fast(pycoef, "expected a sequence");
  PyObject * itemcoef;
  size_t sizecoef = 4;
  double * destcoef = ros_message->coef;
  double tmpcoef;
  size_t idxcoef;
  for (idxcoef = 0; idxcoef < sizecoef; idxcoef++) {
    itemcoef = PySequence_Fast_GET_ITEM(seqcoef, idxcoef);
    assert(PyFloat_Check(itemcoef));
    tmpcoef = PyFloat_AS_DOUBLE(itemcoef);
    memcpy(&destcoef[idxcoef], &tmpcoef, sizeof(double));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void shape_msgs_plane__destroy_ros_message(void * raw_ros_message)
{
  shape_msgs__msg__Plane * ros_message = (shape_msgs__msg__Plane *)raw_ros_message;
  (void)ros_message;

  shape_msgs__msg__Plane__destroy(ros_message);
}

PyObject * shape_msgs_plane__convert_to_py(void * raw_ros_message)
{
  shape_msgs__msg__Plane * ros_message = (shape_msgs__msg__Plane *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("shape_msgs.msg._plane");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Plane");

  /* NOTE(esteve): Call constructor of Plane */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pycoef = NULL;
  size_t sizecoef = 4;
  double * tmpmessagedatacoef = ros_message->coef;
  pycoef = PyList_New(sizecoef);
  size_t idxcoef;
  for (idxcoef = 0; idxcoef < sizecoef; idxcoef++) {
    PyList_SetItem(pycoef, idxcoef, PyFloat_FromDouble(tmpmessagedatacoef[idxcoef]));
  }
  assert(PySequence_Check(pycoef));
  assert(pycoef != NULL);
  Py_INCREF(pycoef);
  PyObject_SetAttrString(_pymessage, "coef", pycoef);
  assert(_pymessage != NULL);
  return _pymessage;
}
