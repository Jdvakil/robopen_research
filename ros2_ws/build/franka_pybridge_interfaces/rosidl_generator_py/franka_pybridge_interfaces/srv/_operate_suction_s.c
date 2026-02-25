// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from franka_pybridge_interfaces:srv/OperateSuction.idl
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
#include "franka_pybridge_interfaces/srv/detail/operate_suction__struct.h"
#include "franka_pybridge_interfaces/srv/detail/operate_suction__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool franka_pybridge_interfaces__srv__operate_suction__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
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
    assert(strncmp("franka_pybridge_interfaces.srv._operate_suction.OperateSuction_Request", full_classname_dest, 70) == 0);
  }
  franka_pybridge_interfaces__srv__OperateSuction_Request * ros_message = _ros_message;
  {  // operation
    PyObject * field = PyObject_GetAttrString(_pymsg, "operation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->operation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sucction_time_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "sucction_time_ms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sucction_time_ms = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // strength
    PyObject * field = PyObject_GetAttrString(_pymsg, "strength");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->strength = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * franka_pybridge_interfaces__srv__operate_suction__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OperateSuction_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("franka_pybridge_interfaces.srv._operate_suction");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OperateSuction_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  franka_pybridge_interfaces__srv__OperateSuction_Request * ros_message = (franka_pybridge_interfaces__srv__OperateSuction_Request *)raw_ros_message;
  {  // operation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->operation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "operation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sucction_time_ms
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sucction_time_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sucction_time_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // strength
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->strength);
    {
      int rc = PyObject_SetAttrString(_pymessage, "strength", field);
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
// #include "franka_pybridge_interfaces/srv/detail/operate_suction__struct.h"
// already included above
// #include "franka_pybridge_interfaces/srv/detail/operate_suction__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool franka_pybridge_interfaces__srv__operate_suction__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("franka_pybridge_interfaces.srv._operate_suction.OperateSuction_Response", full_classname_dest, 71) == 0);
  }
  franka_pybridge_interfaces__srv__OperateSuction_Response * ros_message = _ros_message;
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
PyObject * franka_pybridge_interfaces__srv__operate_suction__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OperateSuction_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("franka_pybridge_interfaces.srv._operate_suction");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OperateSuction_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  franka_pybridge_interfaces__srv__OperateSuction_Response * ros_message = (franka_pybridge_interfaces__srv__OperateSuction_Response *)raw_ros_message;
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
