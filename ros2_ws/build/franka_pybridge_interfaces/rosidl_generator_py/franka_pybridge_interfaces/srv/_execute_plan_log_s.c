// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from franka_pybridge_interfaces:srv/ExecutePlanLog.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "franka_pybridge_interfaces/srv/detail/execute_plan_log__struct.h"
#include "franka_pybridge_interfaces/srv/detail/execute_plan_log__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "franka_pybridge_interfaces/msg/detail/joint_data_array__functions.h"
// end nested array functions include
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool franka_pybridge_interfaces__srv__execute_plan_log__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[72];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("franka_pybridge_interfaces.srv._execute_plan_log.ExecutePlanLog_Request", full_classname_dest, 71) == 0);
  }
  franka_pybridge_interfaces__srv__ExecutePlanLog_Request * ros_message = _ros_message;
  {  // vel_traj
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_traj");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'vel_traj'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->vel_traj), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->vel_traj.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // initial_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "initial_pos");
    if (!field) {
      return false;
    }
    if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(field, &ros_message->initial_pos)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * franka_pybridge_interfaces__srv__execute_plan_log__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ExecutePlanLog_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("franka_pybridge_interfaces.srv._execute_plan_log");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ExecutePlanLog_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  franka_pybridge_interfaces__srv__ExecutePlanLog_Request * ros_message = (franka_pybridge_interfaces__srv__ExecutePlanLog_Request *)raw_ros_message;
  {  // vel_traj
    PyObject * field = NULL;
    size_t size = ros_message->vel_traj.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->vel_traj.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_traj", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initial_pos
    PyObject * field = NULL;
    field = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(&ros_message->initial_pos);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "initial_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "franka_pybridge_interfaces/srv/detail/execute_plan_log__struct.h"
// already included above
// #include "franka_pybridge_interfaces/srv/detail/execute_plan_log__functions.h"

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
// already included above
// #include "franka_pybridge_interfaces/msg/detail/joint_data_array__functions.h"
// end nested array functions include
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);
bool franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool franka_pybridge_interfaces__srv__execute_plan_log__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[73];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("franka_pybridge_interfaces.srv._execute_plan_log.ExecutePlanLog_Response", full_classname_dest, 72) == 0);
  }
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // o_t_ee
    PyObject * field = PyObject_GetAttrString(_pymsg, "o_t_ee");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'o_t_ee'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->o_t_ee), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->o_t_ee.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // o_t_ee_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "o_t_ee_d");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'o_t_ee_d'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->o_t_ee_d), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->o_t_ee_d.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // f_t_ee
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_t_ee");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'f_t_ee'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->f_t_ee), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->f_t_ee.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // f_t_ne
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_t_ne");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'f_t_ne'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->f_t_ne), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->f_t_ne.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // ne_t_ee
    PyObject * field = PyObject_GetAttrString(_pymsg, "ne_t_ee");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ne_t_ee'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->ne_t_ee), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->ne_t_ee.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // ee_t_k
    PyObject * field = PyObject_GetAttrString(_pymsg, "ee_t_k");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ee_t_k'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->ee_t_k), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->ee_t_k.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // m_ee
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_ee");
    if (!field) {
      return false;
    }
    if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(field, &ros_message->m_ee)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // i_ee
    PyObject * field = PyObject_GetAttrString(_pymsg, "i_ee");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'i_ee'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->i_ee), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->i_ee.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // f_x_cee
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_x_cee");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'f_x_cee'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->f_x_cee), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->f_x_cee.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // m_load
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_load");
    if (!field) {
      return false;
    }
    if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(field, &ros_message->m_load)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // i_load
    PyObject * field = PyObject_GetAttrString(_pymsg, "i_load");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'i_load'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->i_load), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->i_load.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // f_x_cload
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_x_cload");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'f_x_cload'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->f_x_cload), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->f_x_cload.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // m_total
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_total");
    if (!field) {
      return false;
    }
    if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(field, &ros_message->m_total)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // i_total
    PyObject * field = PyObject_GetAttrString(_pymsg, "i_total");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'i_total'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->i_total), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->i_total.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // f_x_ctotal
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_x_ctotal");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'f_x_ctotal'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->f_x_ctotal), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->f_x_ctotal.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // elbow
    PyObject * field = PyObject_GetAttrString(_pymsg, "elbow");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'elbow'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->elbow), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->elbow.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // elbow_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "elbow_d");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'elbow_d'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->elbow_d), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->elbow_d.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // elbow_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "elbow_c");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'elbow_c'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->elbow_c), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->elbow_c.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // delbow_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "delbow_c");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'delbow_c'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->delbow_c), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->delbow_c.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // ddelbow_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "ddelbow_c");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ddelbow_c'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->ddelbow_c), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->ddelbow_c.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // tau_j
    PyObject * field = PyObject_GetAttrString(_pymsg, "tau_j");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tau_j'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->tau_j), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->tau_j.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // tau_j_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "tau_j_d");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tau_j_d'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->tau_j_d), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->tau_j_d.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // dtau_j
    PyObject * field = PyObject_GetAttrString(_pymsg, "dtau_j");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'dtau_j'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->dtau_j), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->dtau_j.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // q
    PyObject * field = PyObject_GetAttrString(_pymsg, "q");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'q'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->q), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->q.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // q_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "q_d");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'q_d'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->q_d), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->q_d.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // dq
    PyObject * field = PyObject_GetAttrString(_pymsg, "dq");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'dq'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->dq), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->dq.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // dq_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "dq_d");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'dq_d'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->dq_d), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->dq_d.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // ddq_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "ddq_d");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ddq_d'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->ddq_d), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->ddq_d.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // joint_contact
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_contact");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'joint_contact'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->joint_contact), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->joint_contact.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // cartesian_contact
    PyObject * field = PyObject_GetAttrString(_pymsg, "cartesian_contact");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'cartesian_contact'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->cartesian_contact), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->cartesian_contact.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // joint_collision
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_collision");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'joint_collision'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->joint_collision), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->joint_collision.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // cartesian_collision
    PyObject * field = PyObject_GetAttrString(_pymsg, "cartesian_collision");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'cartesian_collision'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->cartesian_collision), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->cartesian_collision.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // tau_ext_hat_filtered
    PyObject * field = PyObject_GetAttrString(_pymsg, "tau_ext_hat_filtered");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tau_ext_hat_filtered'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->tau_ext_hat_filtered), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->tau_ext_hat_filtered.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // o_f_ext_hat_k
    PyObject * field = PyObject_GetAttrString(_pymsg, "o_f_ext_hat_k");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'o_f_ext_hat_k'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->o_f_ext_hat_k), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->o_f_ext_hat_k.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // k_f_ext_hat_k
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_f_ext_hat_k");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'k_f_ext_hat_k'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->k_f_ext_hat_k), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->k_f_ext_hat_k.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // o_dp_ee_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "o_dp_ee_d");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'o_dp_ee_d'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->o_dp_ee_d), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->o_dp_ee_d.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // o_t_ee_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "o_t_ee_c");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'o_t_ee_c'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->o_t_ee_c), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->o_t_ee_c.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // o_dp_ee_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "o_dp_ee_c");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'o_dp_ee_c'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->o_dp_ee_c), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->o_dp_ee_c.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // o_ddp_ee_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "o_ddp_ee_c");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'o_ddp_ee_c'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->o_ddp_ee_c), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->o_ddp_ee_c.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // theta
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'theta'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->theta), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->theta.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // dtheta
    PyObject * field = PyObject_GetAttrString(_pymsg, "dtheta");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'dtheta'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&(ros_message->dtheta), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create franka_pybridge_interfaces__msg__JointDataArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    franka_pybridge_interfaces__msg__JointDataArray * dest = ros_message->dtheta.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!franka_pybridge_interfaces__msg__joint_data_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * franka_pybridge_interfaces__srv__execute_plan_log__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ExecutePlanLog_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("franka_pybridge_interfaces.srv._execute_plan_log");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ExecutePlanLog_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response * ros_message = (franka_pybridge_interfaces__srv__ExecutePlanLog_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // o_t_ee
    PyObject * field = NULL;
    size_t size = ros_message->o_t_ee.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->o_t_ee.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "o_t_ee", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // o_t_ee_d
    PyObject * field = NULL;
    size_t size = ros_message->o_t_ee_d.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->o_t_ee_d.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "o_t_ee_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_t_ee
    PyObject * field = NULL;
    size_t size = ros_message->f_t_ee.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->f_t_ee.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_t_ee", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_t_ne
    PyObject * field = NULL;
    size_t size = ros_message->f_t_ne.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->f_t_ne.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_t_ne", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ne_t_ee
    PyObject * field = NULL;
    size_t size = ros_message->ne_t_ee.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->ne_t_ee.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "ne_t_ee", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ee_t_k
    PyObject * field = NULL;
    size_t size = ros_message->ee_t_k.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->ee_t_k.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "ee_t_k", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m_ee
    PyObject * field = NULL;
    field = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(&ros_message->m_ee);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_ee", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // i_ee
    PyObject * field = NULL;
    size_t size = ros_message->i_ee.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->i_ee.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "i_ee", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_x_cee
    PyObject * field = NULL;
    size_t size = ros_message->f_x_cee.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->f_x_cee.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_x_cee", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m_load
    PyObject * field = NULL;
    field = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(&ros_message->m_load);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_load", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // i_load
    PyObject * field = NULL;
    size_t size = ros_message->i_load.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->i_load.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "i_load", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_x_cload
    PyObject * field = NULL;
    size_t size = ros_message->f_x_cload.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->f_x_cload.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_x_cload", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m_total
    PyObject * field = NULL;
    field = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(&ros_message->m_total);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_total", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // i_total
    PyObject * field = NULL;
    size_t size = ros_message->i_total.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->i_total.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "i_total", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_x_ctotal
    PyObject * field = NULL;
    size_t size = ros_message->f_x_ctotal.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->f_x_ctotal.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_x_ctotal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elbow
    PyObject * field = NULL;
    size_t size = ros_message->elbow.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->elbow.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "elbow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elbow_d
    PyObject * field = NULL;
    size_t size = ros_message->elbow_d.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->elbow_d.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "elbow_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elbow_c
    PyObject * field = NULL;
    size_t size = ros_message->elbow_c.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->elbow_c.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "elbow_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delbow_c
    PyObject * field = NULL;
    size_t size = ros_message->delbow_c.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->delbow_c.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "delbow_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ddelbow_c
    PyObject * field = NULL;
    size_t size = ros_message->ddelbow_c.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->ddelbow_c.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "ddelbow_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tau_j
    PyObject * field = NULL;
    size_t size = ros_message->tau_j.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->tau_j.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "tau_j", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tau_j_d
    PyObject * field = NULL;
    size_t size = ros_message->tau_j_d.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->tau_j_d.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "tau_j_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dtau_j
    PyObject * field = NULL;
    size_t size = ros_message->dtau_j.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->dtau_j.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "dtau_j", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // q
    PyObject * field = NULL;
    size_t size = ros_message->q.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->q.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "q", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // q_d
    PyObject * field = NULL;
    size_t size = ros_message->q_d.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->q_d.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "q_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dq
    PyObject * field = NULL;
    size_t size = ros_message->dq.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->dq.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "dq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dq_d
    PyObject * field = NULL;
    size_t size = ros_message->dq_d.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->dq_d.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "dq_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ddq_d
    PyObject * field = NULL;
    size_t size = ros_message->ddq_d.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->ddq_d.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "ddq_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_contact
    PyObject * field = NULL;
    size_t size = ros_message->joint_contact.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->joint_contact.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_contact", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cartesian_contact
    PyObject * field = NULL;
    size_t size = ros_message->cartesian_contact.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->cartesian_contact.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "cartesian_contact", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_collision
    PyObject * field = NULL;
    size_t size = ros_message->joint_collision.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->joint_collision.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_collision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cartesian_collision
    PyObject * field = NULL;
    size_t size = ros_message->cartesian_collision.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->cartesian_collision.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "cartesian_collision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tau_ext_hat_filtered
    PyObject * field = NULL;
    size_t size = ros_message->tau_ext_hat_filtered.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->tau_ext_hat_filtered.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "tau_ext_hat_filtered", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // o_f_ext_hat_k
    PyObject * field = NULL;
    size_t size = ros_message->o_f_ext_hat_k.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->o_f_ext_hat_k.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "o_f_ext_hat_k", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_f_ext_hat_k
    PyObject * field = NULL;
    size_t size = ros_message->k_f_ext_hat_k.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->k_f_ext_hat_k.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_f_ext_hat_k", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // o_dp_ee_d
    PyObject * field = NULL;
    size_t size = ros_message->o_dp_ee_d.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->o_dp_ee_d.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "o_dp_ee_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // o_t_ee_c
    PyObject * field = NULL;
    size_t size = ros_message->o_t_ee_c.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->o_t_ee_c.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "o_t_ee_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // o_dp_ee_c
    PyObject * field = NULL;
    size_t size = ros_message->o_dp_ee_c.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->o_dp_ee_c.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "o_dp_ee_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // o_ddp_ee_c
    PyObject * field = NULL;
    size_t size = ros_message->o_ddp_ee_c.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->o_ddp_ee_c.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "o_ddp_ee_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta
    PyObject * field = NULL;
    size_t size = ros_message->theta.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->theta.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dtheta
    PyObject * field = NULL;
    size_t size = ros_message->dtheta.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    franka_pybridge_interfaces__msg__JointDataArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->dtheta.data[i]);
      PyObject * pyitem = franka_pybridge_interfaces__msg__joint_data_array__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "dtheta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
