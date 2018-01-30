// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <shape_msgs/msg/solid_primitive__struct.h>
#include <shape_msgs/msg/solid_primitive__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>


void * shape_msgs_solid_primitive__convert_from_py(PyObject * _pymsg)
{
  shape_msgs__msg__SolidPrimitive * ros_message = shape_msgs__msg__SolidPrimitive__create();
  (void)ros_message;
  char full_classname_dest[47];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "shape_msgs.msg._solid_primitive.SolidPrimitive",
      full_classname_dest, 46) == 0);

  PyObject * pytype = PyObject_GetAttrString(_pymsg, "type");
  assert(PyLong_Check(pytype));
  ros_message->type = (uint8_t)PyLong_AsUnsignedLong(pytype);
  PyObject * pydimensions = PyObject_GetAttrString(_pymsg, "dimensions");
  assert(PySequence_Check(pydimensions));
  PyObject * seqdimensions = PySequence_Fast(pydimensions, "expected a sequence");
  PyObject * itemdimensions;
  size_t sizedimensions = PySequence_Size(pydimensions);
  if (!rosidl_generator_c__float64__Array__init(&(ros_message->dimensions), sizedimensions)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create float64__Array ros_message");
    return NULL;
  }
  double * destdimensions = ros_message->dimensions.data;
  double tmpdimensions;
  size_t idxdimensions;
  for (idxdimensions = 0; idxdimensions < sizedimensions; idxdimensions++) {
    itemdimensions = PySequence_Fast_GET_ITEM(seqdimensions, idxdimensions);
    assert(PyFloat_Check(itemdimensions));
    tmpdimensions = PyFloat_AS_DOUBLE(itemdimensions);
    memcpy(&destdimensions[idxdimensions], &tmpdimensions, sizeof(double));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void shape_msgs_solid_primitive__destroy_ros_message(void * raw_ros_message)
{
  shape_msgs__msg__SolidPrimitive * ros_message = (shape_msgs__msg__SolidPrimitive *)raw_ros_message;
  (void)ros_message;

  shape_msgs__msg__SolidPrimitive__destroy(ros_message);
}

PyObject * shape_msgs_solid_primitive__convert_to_py(void * raw_ros_message)
{
  shape_msgs__msg__SolidPrimitive * ros_message = (shape_msgs__msg__SolidPrimitive *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("shape_msgs.msg._solid_primitive");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SolidPrimitive");

  /* NOTE(esteve): Call constructor of SolidPrimitive */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pytype = NULL;
  pytype = PyLong_FromUnsignedLong(ros_message->type);
  assert(pytype != NULL);
  Py_INCREF(pytype);
  PyObject_SetAttrString(_pymessage, "type", pytype);
  PyObject * pydimensions = NULL;
  size_t sizedimensions = ros_message->dimensions.size;
  double * tmpmessagedatadimensions = ros_message->dimensions.data;
  pydimensions = PyList_New(sizedimensions);
  size_t idxdimensions;
  for (idxdimensions = 0; idxdimensions < sizedimensions; idxdimensions++) {
    PyList_SetItem(pydimensions, idxdimensions, PyFloat_FromDouble(tmpmessagedatadimensions[idxdimensions]));
  }
  assert(PySequence_Check(pydimensions));
  assert(pydimensions != NULL);
  Py_INCREF(pydimensions);
  PyObject_SetAttrString(_pymessage, "dimensions", pydimensions);
  assert(_pymessage != NULL);
  return _pymessage;
}
