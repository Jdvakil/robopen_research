// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from franka_pybridge_interfaces:srv/ExecutePlan.idl
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
#include "franka_pybridge_interfaces/srv/detail/execute_plan__struct.h"
#include "franka_pybridge_interfaces/srv/detail/execute_plan__functions.h"

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
bool franka_pybridge_interfaces__srv__execute_plan__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("franka_pybridge_interfaces.srv._execute_plan.ExecutePlan_Request", full_classname_dest, 64) == 0);
  }
  franka_pybridge_interfaces__srv__ExecutePlan_Request * ros_message = _ros_message;
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
PyObject * franka_pybridge_interfaces__srv__execute_plan__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ExecutePlan_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("franka_pybridge_interfaces.srv._execute_plan");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ExecutePlan_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  franka_pybridge_interfaces__srv__ExecutePlan_Request * ros_message = (franka_pybridge_interfaces__srv__ExecutePlan_Request *)raw_ros_message;
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
// #include "franka_pybridge_interfaces/srv/detail/execute_plan__struct.h"
// already included above
// #include "franka_pybridge_interfaces/srv/detail/execute_plan__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool franka_pybridge_interfaces__srv__execute_plan__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
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
    assert(strncmp("franka_pybridge_interfaces.srv._execute_plan.ExecutePlan_Response", full_classname_dest, 65) == 0);
  }
  franka_pybridge_interfaces__srv__ExecutePlan_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * franka_pybridge_interfaces__srv__execute_plan__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ExecutePlan_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("franka_pybridge_interfaces.srv._execute_plan");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ExecutePlan_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  franka_pybridge_interfaces__srv__ExecutePlan_Response * ros_message = (franka_pybridge_interfaces__srv__ExecutePlan_Response *)raw_ros_message;
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
