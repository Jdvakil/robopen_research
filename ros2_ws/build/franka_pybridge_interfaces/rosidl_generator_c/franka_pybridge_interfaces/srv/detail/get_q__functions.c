// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from franka_pybridge_interfaces:srv/GetQ.idl
// generated code does not contain a copyright notice
#include "franka_pybridge_interfaces/srv/detail/get_q__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
franka_pybridge_interfaces__srv__GetQ_Request__init(franka_pybridge_interfaces__srv__GetQ_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
franka_pybridge_interfaces__srv__GetQ_Request__fini(franka_pybridge_interfaces__srv__GetQ_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
franka_pybridge_interfaces__srv__GetQ_Request__are_equal(const franka_pybridge_interfaces__srv__GetQ_Request * lhs, const franka_pybridge_interfaces__srv__GetQ_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
franka_pybridge_interfaces__srv__GetQ_Request__copy(
  const franka_pybridge_interfaces__srv__GetQ_Request * input,
  franka_pybridge_interfaces__srv__GetQ_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

franka_pybridge_interfaces__srv__GetQ_Request *
franka_pybridge_interfaces__srv__GetQ_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_pybridge_interfaces__srv__GetQ_Request * msg = (franka_pybridge_interfaces__srv__GetQ_Request *)allocator.allocate(sizeof(franka_pybridge_interfaces__srv__GetQ_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_pybridge_interfaces__srv__GetQ_Request));
  bool success = franka_pybridge_interfaces__srv__GetQ_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_pybridge_interfaces__srv__GetQ_Request__destroy(franka_pybridge_interfaces__srv__GetQ_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_pybridge_interfaces__srv__GetQ_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_pybridge_interfaces__srv__GetQ_Request__Sequence__init(franka_pybridge_interfaces__srv__GetQ_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_pybridge_interfaces__srv__GetQ_Request * data = NULL;

  if (size) {
    data = (franka_pybridge_interfaces__srv__GetQ_Request *)allocator.zero_allocate(size, sizeof(franka_pybridge_interfaces__srv__GetQ_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_pybridge_interfaces__srv__GetQ_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_pybridge_interfaces__srv__GetQ_Request__fini(&data[i - 1]);
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
franka_pybridge_interfaces__srv__GetQ_Request__Sequence__fini(franka_pybridge_interfaces__srv__GetQ_Request__Sequence * array)
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
      franka_pybridge_interfaces__srv__GetQ_Request__fini(&array->data[i]);
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

franka_pybridge_interfaces__srv__GetQ_Request__Sequence *
franka_pybridge_interfaces__srv__GetQ_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_pybridge_interfaces__srv__GetQ_Request__Sequence * array = (franka_pybridge_interfaces__srv__GetQ_Request__Sequence *)allocator.allocate(sizeof(franka_pybridge_interfaces__srv__GetQ_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_pybridge_interfaces__srv__GetQ_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_pybridge_interfaces__srv__GetQ_Request__Sequence__destroy(franka_pybridge_interfaces__srv__GetQ_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_pybridge_interfaces__srv__GetQ_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_pybridge_interfaces__srv__GetQ_Request__Sequence__are_equal(const franka_pybridge_interfaces__srv__GetQ_Request__Sequence * lhs, const franka_pybridge_interfaces__srv__GetQ_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_pybridge_interfaces__srv__GetQ_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_pybridge_interfaces__srv__GetQ_Request__Sequence__copy(
  const franka_pybridge_interfaces__srv__GetQ_Request__Sequence * input,
  franka_pybridge_interfaces__srv__GetQ_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_pybridge_interfaces__srv__GetQ_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_pybridge_interfaces__srv__GetQ_Request * data =
      (franka_pybridge_interfaces__srv__GetQ_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_pybridge_interfaces__srv__GetQ_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_pybridge_interfaces__srv__GetQ_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_pybridge_interfaces__srv__GetQ_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `joint_config`
#include "franka_pybridge_interfaces/msg/detail/joint_data_array__functions.h"

bool
franka_pybridge_interfaces__srv__GetQ_Response__init(franka_pybridge_interfaces__srv__GetQ_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // joint_config
  if (!franka_pybridge_interfaces__msg__JointDataArray__init(&msg->joint_config)) {
    franka_pybridge_interfaces__srv__GetQ_Response__fini(msg);
    return false;
  }
  return true;
}

void
franka_pybridge_interfaces__srv__GetQ_Response__fini(franka_pybridge_interfaces__srv__GetQ_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // joint_config
  franka_pybridge_interfaces__msg__JointDataArray__fini(&msg->joint_config);
}

bool
franka_pybridge_interfaces__srv__GetQ_Response__are_equal(const franka_pybridge_interfaces__srv__GetQ_Response * lhs, const franka_pybridge_interfaces__srv__GetQ_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // joint_config
  if (!franka_pybridge_interfaces__msg__JointDataArray__are_equal(
      &(lhs->joint_config), &(rhs->joint_config)))
  {
    return false;
  }
  return true;
}

bool
franka_pybridge_interfaces__srv__GetQ_Response__copy(
  const franka_pybridge_interfaces__srv__GetQ_Response * input,
  franka_pybridge_interfaces__srv__GetQ_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // joint_config
  if (!franka_pybridge_interfaces__msg__JointDataArray__copy(
      &(input->joint_config), &(output->joint_config)))
  {
    return false;
  }
  return true;
}

franka_pybridge_interfaces__srv__GetQ_Response *
franka_pybridge_interfaces__srv__GetQ_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_pybridge_interfaces__srv__GetQ_Response * msg = (franka_pybridge_interfaces__srv__GetQ_Response *)allocator.allocate(sizeof(franka_pybridge_interfaces__srv__GetQ_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_pybridge_interfaces__srv__GetQ_Response));
  bool success = franka_pybridge_interfaces__srv__GetQ_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_pybridge_interfaces__srv__GetQ_Response__destroy(franka_pybridge_interfaces__srv__GetQ_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_pybridge_interfaces__srv__GetQ_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_pybridge_interfaces__srv__GetQ_Response__Sequence__init(franka_pybridge_interfaces__srv__GetQ_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_pybridge_interfaces__srv__GetQ_Response * data = NULL;

  if (size) {
    data = (franka_pybridge_interfaces__srv__GetQ_Response *)allocator.zero_allocate(size, sizeof(franka_pybridge_interfaces__srv__GetQ_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_pybridge_interfaces__srv__GetQ_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_pybridge_interfaces__srv__GetQ_Response__fini(&data[i - 1]);
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
franka_pybridge_interfaces__srv__GetQ_Response__Sequence__fini(franka_pybridge_interfaces__srv__GetQ_Response__Sequence * array)
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
      franka_pybridge_interfaces__srv__GetQ_Response__fini(&array->data[i]);
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

franka_pybridge_interfaces__srv__GetQ_Response__Sequence *
franka_pybridge_interfaces__srv__GetQ_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_pybridge_interfaces__srv__GetQ_Response__Sequence * array = (franka_pybridge_interfaces__srv__GetQ_Response__Sequence *)allocator.allocate(sizeof(franka_pybridge_interfaces__srv__GetQ_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_pybridge_interfaces__srv__GetQ_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_pybridge_interfaces__srv__GetQ_Response__Sequence__destroy(franka_pybridge_interfaces__srv__GetQ_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_pybridge_interfaces__srv__GetQ_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_pybridge_interfaces__srv__GetQ_Response__Sequence__are_equal(const franka_pybridge_interfaces__srv__GetQ_Response__Sequence * lhs, const franka_pybridge_interfaces__srv__GetQ_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_pybridge_interfaces__srv__GetQ_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_pybridge_interfaces__srv__GetQ_Response__Sequence__copy(
  const franka_pybridge_interfaces__srv__GetQ_Response__Sequence * input,
  franka_pybridge_interfaces__srv__GetQ_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_pybridge_interfaces__srv__GetQ_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_pybridge_interfaces__srv__GetQ_Response * data =
      (franka_pybridge_interfaces__srv__GetQ_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_pybridge_interfaces__srv__GetQ_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_pybridge_interfaces__srv__GetQ_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_pybridge_interfaces__srv__GetQ_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
