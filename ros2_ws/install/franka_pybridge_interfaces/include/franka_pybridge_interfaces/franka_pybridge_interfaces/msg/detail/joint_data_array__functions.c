// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from franka_pybridge_interfaces:msg/JointDataArray.idl
// generated code does not contain a copyright notice
#include "franka_pybridge_interfaces/msg/detail/joint_data_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
franka_pybridge_interfaces__msg__JointDataArray__init(franka_pybridge_interfaces__msg__JointDataArray * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__init(&msg->data, 0)) {
    franka_pybridge_interfaces__msg__JointDataArray__fini(msg);
    return false;
  }
  return true;
}

void
franka_pybridge_interfaces__msg__JointDataArray__fini(franka_pybridge_interfaces__msg__JointDataArray * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__double__Sequence__fini(&msg->data);
}

bool
franka_pybridge_interfaces__msg__JointDataArray__are_equal(const franka_pybridge_interfaces__msg__JointDataArray * lhs, const franka_pybridge_interfaces__msg__JointDataArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
franka_pybridge_interfaces__msg__JointDataArray__copy(
  const franka_pybridge_interfaces__msg__JointDataArray * input,
  franka_pybridge_interfaces__msg__JointDataArray * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

franka_pybridge_interfaces__msg__JointDataArray *
franka_pybridge_interfaces__msg__JointDataArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_pybridge_interfaces__msg__JointDataArray * msg = (franka_pybridge_interfaces__msg__JointDataArray *)allocator.allocate(sizeof(franka_pybridge_interfaces__msg__JointDataArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_pybridge_interfaces__msg__JointDataArray));
  bool success = franka_pybridge_interfaces__msg__JointDataArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_pybridge_interfaces__msg__JointDataArray__destroy(franka_pybridge_interfaces__msg__JointDataArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_pybridge_interfaces__msg__JointDataArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(franka_pybridge_interfaces__msg__JointDataArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_pybridge_interfaces__msg__JointDataArray * data = NULL;

  if (size) {
    data = (franka_pybridge_interfaces__msg__JointDataArray *)allocator.zero_allocate(size, sizeof(franka_pybridge_interfaces__msg__JointDataArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_pybridge_interfaces__msg__JointDataArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_pybridge_interfaces__msg__JointDataArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(franka_pybridge_interfaces__msg__JointDataArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      franka_pybridge_interfaces__msg__JointDataArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

franka_pybridge_interfaces__msg__JointDataArray__Sequence *
franka_pybridge_interfaces__msg__JointDataArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * array = (franka_pybridge_interfaces__msg__JointDataArray__Sequence *)allocator.allocate(sizeof(franka_pybridge_interfaces__msg__JointDataArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_pybridge_interfaces__msg__JointDataArray__Sequence__destroy(franka_pybridge_interfaces__msg__JointDataArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(const franka_pybridge_interfaces__msg__JointDataArray__Sequence * lhs, const franka_pybridge_interfaces__msg__JointDataArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_pybridge_interfaces__msg__JointDataArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
  const franka_pybridge_interfaces__msg__JointDataArray__Sequence * input,
  franka_pybridge_interfaces__msg__JointDataArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_pybridge_interfaces__msg__JointDataArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_pybridge_interfaces__msg__JointDataArray * data =
      (franka_pybridge_interfaces__msg__JointDataArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_pybridge_interfaces__msg__JointDataArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_pybridge_interfaces__msg__JointDataArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_pybridge_interfaces__msg__JointDataArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
