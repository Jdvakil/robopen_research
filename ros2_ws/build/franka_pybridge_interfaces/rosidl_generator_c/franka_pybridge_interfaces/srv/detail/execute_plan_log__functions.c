// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from franka_pybridge_interfaces:srv/ExecutePlanLog.idl
// generated code does not contain a copyright notice
#include "franka_pybridge_interfaces/srv/detail/execute_plan_log__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `vel_traj`
// Member `initial_pos`
#include "franka_pybridge_interfaces/msg/detail/joint_data_array__functions.h"

bool
franka_pybridge_interfaces__srv__ExecutePlanLog_Request__init(franka_pybridge_interfaces__srv__ExecutePlanLog_Request * msg)
{
  if (!msg) {
    return false;
  }
  // vel_traj
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->vel_traj, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Request__fini(msg);
    return false;
  }
  // initial_pos
  if (!franka_pybridge_interfaces__msg__JointDataArray__init(&msg->initial_pos)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Request__fini(msg);
    return false;
  }
  return true;
}

void
franka_pybridge_interfaces__srv__ExecutePlanLog_Request__fini(franka_pybridge_interfaces__srv__ExecutePlanLog_Request * msg)
{
  if (!msg) {
    return;
  }
  // vel_traj
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->vel_traj);
  // initial_pos
  franka_pybridge_interfaces__msg__JointDataArray__fini(&msg->initial_pos);
}

bool
franka_pybridge_interfaces__srv__ExecutePlanLog_Request__are_equal(const franka_pybridge_interfaces__srv__ExecutePlanLog_Request * lhs, const franka_pybridge_interfaces__srv__ExecutePlanLog_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vel_traj
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->vel_traj), &(rhs->vel_traj)))
  {
    return false;
  }
  // initial_pos
  if (!franka_pybridge_interfaces__msg__JointDataArray__are_equal(
      &(lhs->initial_pos), &(rhs->initial_pos)))
  {
    return false;
  }
  return true;
}

bool
franka_pybridge_interfaces__srv__ExecutePlanLog_Request__copy(
  const franka_pybridge_interfaces__srv__ExecutePlanLog_Request * input,
  franka_pybridge_interfaces__srv__ExecutePlanLog_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // vel_traj
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->vel_traj), &(output->vel_traj)))
  {
    return false;
  }
  // initial_pos
  if (!franka_pybridge_interfaces__msg__JointDataArray__copy(
      &(input->initial_pos), &(output->initial_pos)))
  {
    return false;
  }
  return true;
}

franka_pybridge_interfaces__srv__ExecutePlanLog_Request *
franka_pybridge_interfaces__srv__ExecutePlanLog_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Request * msg = (franka_pybridge_interfaces__srv__ExecutePlanLog_Request *)allocator.allocate(sizeof(franka_pybridge_interfaces__srv__ExecutePlanLog_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_pybridge_interfaces__srv__ExecutePlanLog_Request));
  bool success = franka_pybridge_interfaces__srv__ExecutePlanLog_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_pybridge_interfaces__srv__ExecutePlanLog_Request__destroy(franka_pybridge_interfaces__srv__ExecutePlanLog_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence__init(franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Request * data = NULL;

  if (size) {
    data = (franka_pybridge_interfaces__srv__ExecutePlanLog_Request *)allocator.zero_allocate(size, sizeof(franka_pybridge_interfaces__srv__ExecutePlanLog_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_pybridge_interfaces__srv__ExecutePlanLog_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_pybridge_interfaces__srv__ExecutePlanLog_Request__fini(&data[i - 1]);
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
franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence__fini(franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence * array)
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
      franka_pybridge_interfaces__srv__ExecutePlanLog_Request__fini(&array->data[i]);
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

franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence *
franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence * array = (franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence *)allocator.allocate(sizeof(franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence__destroy(franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence__are_equal(const franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence * lhs, const franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_pybridge_interfaces__srv__ExecutePlanLog_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence__copy(
  const franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence * input,
  franka_pybridge_interfaces__srv__ExecutePlanLog_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_pybridge_interfaces__srv__ExecutePlanLog_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_pybridge_interfaces__srv__ExecutePlanLog_Request * data =
      (franka_pybridge_interfaces__srv__ExecutePlanLog_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_pybridge_interfaces__srv__ExecutePlanLog_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_pybridge_interfaces__srv__ExecutePlanLog_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_pybridge_interfaces__srv__ExecutePlanLog_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `o_t_ee`
// Member `o_t_ee_d`
// Member `f_t_ee`
// Member `f_t_ne`
// Member `ne_t_ee`
// Member `ee_t_k`
// Member `m_ee`
// Member `i_ee`
// Member `f_x_cee`
// Member `m_load`
// Member `i_load`
// Member `f_x_cload`
// Member `m_total`
// Member `i_total`
// Member `f_x_ctotal`
// Member `elbow`
// Member `elbow_d`
// Member `elbow_c`
// Member `delbow_c`
// Member `ddelbow_c`
// Member `tau_j`
// Member `tau_j_d`
// Member `dtau_j`
// Member `q`
// Member `q_d`
// Member `dq`
// Member `dq_d`
// Member `ddq_d`
// Member `joint_contact`
// Member `cartesian_contact`
// Member `joint_collision`
// Member `cartesian_collision`
// Member `tau_ext_hat_filtered`
// Member `o_f_ext_hat_k`
// Member `k_f_ext_hat_k`
// Member `o_dp_ee_d`
// Member `o_t_ee_c`
// Member `o_dp_ee_c`
// Member `o_ddp_ee_c`
// Member `theta`
// Member `dtheta`
// already included above
// #include "franka_pybridge_interfaces/msg/detail/joint_data_array__functions.h"

bool
franka_pybridge_interfaces__srv__ExecutePlanLog_Response__init(franka_pybridge_interfaces__srv__ExecutePlanLog_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // o_t_ee
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->o_t_ee, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // o_t_ee_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->o_t_ee_d, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // f_t_ee
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->f_t_ee, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // f_t_ne
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->f_t_ne, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // ne_t_ee
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->ne_t_ee, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // ee_t_k
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->ee_t_k, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // m_ee
  if (!franka_pybridge_interfaces__msg__JointDataArray__init(&msg->m_ee)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // i_ee
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->i_ee, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // f_x_cee
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->f_x_cee, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // m_load
  if (!franka_pybridge_interfaces__msg__JointDataArray__init(&msg->m_load)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // i_load
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->i_load, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // f_x_cload
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->f_x_cload, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // m_total
  if (!franka_pybridge_interfaces__msg__JointDataArray__init(&msg->m_total)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // i_total
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->i_total, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // f_x_ctotal
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->f_x_ctotal, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // elbow
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->elbow, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // elbow_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->elbow_d, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // elbow_c
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->elbow_c, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // delbow_c
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->delbow_c, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // ddelbow_c
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->ddelbow_c, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // tau_j
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->tau_j, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // tau_j_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->tau_j_d, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // dtau_j
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->dtau_j, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // q
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->q, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // q_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->q_d, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // dq
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->dq, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // dq_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->dq_d, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // ddq_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->ddq_d, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // joint_contact
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->joint_contact, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // cartesian_contact
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->cartesian_contact, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // joint_collision
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->joint_collision, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // cartesian_collision
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->cartesian_collision, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // tau_ext_hat_filtered
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->tau_ext_hat_filtered, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // o_f_ext_hat_k
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->o_f_ext_hat_k, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // k_f_ext_hat_k
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->k_f_ext_hat_k, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // o_dp_ee_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->o_dp_ee_d, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // o_t_ee_c
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->o_t_ee_c, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // o_dp_ee_c
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->o_dp_ee_c, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // o_ddp_ee_c
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->o_ddp_ee_c, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // theta
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->theta, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  // dtheta
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__init(&msg->dtheta, 0)) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
    return false;
  }
  return true;
}

void
franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(franka_pybridge_interfaces__srv__ExecutePlanLog_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // o_t_ee
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->o_t_ee);
  // o_t_ee_d
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->o_t_ee_d);
  // f_t_ee
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->f_t_ee);
  // f_t_ne
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->f_t_ne);
  // ne_t_ee
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->ne_t_ee);
  // ee_t_k
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->ee_t_k);
  // m_ee
  franka_pybridge_interfaces__msg__JointDataArray__fini(&msg->m_ee);
  // i_ee
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->i_ee);
  // f_x_cee
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->f_x_cee);
  // m_load
  franka_pybridge_interfaces__msg__JointDataArray__fini(&msg->m_load);
  // i_load
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->i_load);
  // f_x_cload
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->f_x_cload);
  // m_total
  franka_pybridge_interfaces__msg__JointDataArray__fini(&msg->m_total);
  // i_total
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->i_total);
  // f_x_ctotal
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->f_x_ctotal);
  // elbow
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->elbow);
  // elbow_d
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->elbow_d);
  // elbow_c
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->elbow_c);
  // delbow_c
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->delbow_c);
  // ddelbow_c
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->ddelbow_c);
  // tau_j
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->tau_j);
  // tau_j_d
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->tau_j_d);
  // dtau_j
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->dtau_j);
  // q
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->q);
  // q_d
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->q_d);
  // dq
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->dq);
  // dq_d
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->dq_d);
  // ddq_d
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->ddq_d);
  // joint_contact
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->joint_contact);
  // cartesian_contact
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->cartesian_contact);
  // joint_collision
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->joint_collision);
  // cartesian_collision
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->cartesian_collision);
  // tau_ext_hat_filtered
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->tau_ext_hat_filtered);
  // o_f_ext_hat_k
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->o_f_ext_hat_k);
  // k_f_ext_hat_k
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->k_f_ext_hat_k);
  // o_dp_ee_d
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->o_dp_ee_d);
  // o_t_ee_c
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->o_t_ee_c);
  // o_dp_ee_c
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->o_dp_ee_c);
  // o_ddp_ee_c
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->o_ddp_ee_c);
  // theta
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->theta);
  // dtheta
  franka_pybridge_interfaces__msg__JointDataArray__Sequence__fini(&msg->dtheta);
}

bool
franka_pybridge_interfaces__srv__ExecutePlanLog_Response__are_equal(const franka_pybridge_interfaces__srv__ExecutePlanLog_Response * lhs, const franka_pybridge_interfaces__srv__ExecutePlanLog_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // o_t_ee
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->o_t_ee), &(rhs->o_t_ee)))
  {
    return false;
  }
  // o_t_ee_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->o_t_ee_d), &(rhs->o_t_ee_d)))
  {
    return false;
  }
  // f_t_ee
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->f_t_ee), &(rhs->f_t_ee)))
  {
    return false;
  }
  // f_t_ne
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->f_t_ne), &(rhs->f_t_ne)))
  {
    return false;
  }
  // ne_t_ee
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->ne_t_ee), &(rhs->ne_t_ee)))
  {
    return false;
  }
  // ee_t_k
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->ee_t_k), &(rhs->ee_t_k)))
  {
    return false;
  }
  // m_ee
  if (!franka_pybridge_interfaces__msg__JointDataArray__are_equal(
      &(lhs->m_ee), &(rhs->m_ee)))
  {
    return false;
  }
  // i_ee
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->i_ee), &(rhs->i_ee)))
  {
    return false;
  }
  // f_x_cee
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->f_x_cee), &(rhs->f_x_cee)))
  {
    return false;
  }
  // m_load
  if (!franka_pybridge_interfaces__msg__JointDataArray__are_equal(
      &(lhs->m_load), &(rhs->m_load)))
  {
    return false;
  }
  // i_load
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->i_load), &(rhs->i_load)))
  {
    return false;
  }
  // f_x_cload
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->f_x_cload), &(rhs->f_x_cload)))
  {
    return false;
  }
  // m_total
  if (!franka_pybridge_interfaces__msg__JointDataArray__are_equal(
      &(lhs->m_total), &(rhs->m_total)))
  {
    return false;
  }
  // i_total
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->i_total), &(rhs->i_total)))
  {
    return false;
  }
  // f_x_ctotal
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->f_x_ctotal), &(rhs->f_x_ctotal)))
  {
    return false;
  }
  // elbow
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->elbow), &(rhs->elbow)))
  {
    return false;
  }
  // elbow_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->elbow_d), &(rhs->elbow_d)))
  {
    return false;
  }
  // elbow_c
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->elbow_c), &(rhs->elbow_c)))
  {
    return false;
  }
  // delbow_c
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->delbow_c), &(rhs->delbow_c)))
  {
    return false;
  }
  // ddelbow_c
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->ddelbow_c), &(rhs->ddelbow_c)))
  {
    return false;
  }
  // tau_j
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->tau_j), &(rhs->tau_j)))
  {
    return false;
  }
  // tau_j_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->tau_j_d), &(rhs->tau_j_d)))
  {
    return false;
  }
  // dtau_j
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->dtau_j), &(rhs->dtau_j)))
  {
    return false;
  }
  // q
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->q), &(rhs->q)))
  {
    return false;
  }
  // q_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->q_d), &(rhs->q_d)))
  {
    return false;
  }
  // dq
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->dq), &(rhs->dq)))
  {
    return false;
  }
  // dq_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->dq_d), &(rhs->dq_d)))
  {
    return false;
  }
  // ddq_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->ddq_d), &(rhs->ddq_d)))
  {
    return false;
  }
  // joint_contact
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->joint_contact), &(rhs->joint_contact)))
  {
    return false;
  }
  // cartesian_contact
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->cartesian_contact), &(rhs->cartesian_contact)))
  {
    return false;
  }
  // joint_collision
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->joint_collision), &(rhs->joint_collision)))
  {
    return false;
  }
  // cartesian_collision
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->cartesian_collision), &(rhs->cartesian_collision)))
  {
    return false;
  }
  // tau_ext_hat_filtered
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->tau_ext_hat_filtered), &(rhs->tau_ext_hat_filtered)))
  {
    return false;
  }
  // o_f_ext_hat_k
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->o_f_ext_hat_k), &(rhs->o_f_ext_hat_k)))
  {
    return false;
  }
  // k_f_ext_hat_k
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->k_f_ext_hat_k), &(rhs->k_f_ext_hat_k)))
  {
    return false;
  }
  // o_dp_ee_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->o_dp_ee_d), &(rhs->o_dp_ee_d)))
  {
    return false;
  }
  // o_t_ee_c
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->o_t_ee_c), &(rhs->o_t_ee_c)))
  {
    return false;
  }
  // o_dp_ee_c
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->o_dp_ee_c), &(rhs->o_dp_ee_c)))
  {
    return false;
  }
  // o_ddp_ee_c
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->o_ddp_ee_c), &(rhs->o_ddp_ee_c)))
  {
    return false;
  }
  // theta
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->theta), &(rhs->theta)))
  {
    return false;
  }
  // dtheta
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__are_equal(
      &(lhs->dtheta), &(rhs->dtheta)))
  {
    return false;
  }
  return true;
}

bool
franka_pybridge_interfaces__srv__ExecutePlanLog_Response__copy(
  const franka_pybridge_interfaces__srv__ExecutePlanLog_Response * input,
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // o_t_ee
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->o_t_ee), &(output->o_t_ee)))
  {
    return false;
  }
  // o_t_ee_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->o_t_ee_d), &(output->o_t_ee_d)))
  {
    return false;
  }
  // f_t_ee
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->f_t_ee), &(output->f_t_ee)))
  {
    return false;
  }
  // f_t_ne
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->f_t_ne), &(output->f_t_ne)))
  {
    return false;
  }
  // ne_t_ee
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->ne_t_ee), &(output->ne_t_ee)))
  {
    return false;
  }
  // ee_t_k
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->ee_t_k), &(output->ee_t_k)))
  {
    return false;
  }
  // m_ee
  if (!franka_pybridge_interfaces__msg__JointDataArray__copy(
      &(input->m_ee), &(output->m_ee)))
  {
    return false;
  }
  // i_ee
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->i_ee), &(output->i_ee)))
  {
    return false;
  }
  // f_x_cee
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->f_x_cee), &(output->f_x_cee)))
  {
    return false;
  }
  // m_load
  if (!franka_pybridge_interfaces__msg__JointDataArray__copy(
      &(input->m_load), &(output->m_load)))
  {
    return false;
  }
  // i_load
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->i_load), &(output->i_load)))
  {
    return false;
  }
  // f_x_cload
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->f_x_cload), &(output->f_x_cload)))
  {
    return false;
  }
  // m_total
  if (!franka_pybridge_interfaces__msg__JointDataArray__copy(
      &(input->m_total), &(output->m_total)))
  {
    return false;
  }
  // i_total
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->i_total), &(output->i_total)))
  {
    return false;
  }
  // f_x_ctotal
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->f_x_ctotal), &(output->f_x_ctotal)))
  {
    return false;
  }
  // elbow
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->elbow), &(output->elbow)))
  {
    return false;
  }
  // elbow_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->elbow_d), &(output->elbow_d)))
  {
    return false;
  }
  // elbow_c
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->elbow_c), &(output->elbow_c)))
  {
    return false;
  }
  // delbow_c
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->delbow_c), &(output->delbow_c)))
  {
    return false;
  }
  // ddelbow_c
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->ddelbow_c), &(output->ddelbow_c)))
  {
    return false;
  }
  // tau_j
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->tau_j), &(output->tau_j)))
  {
    return false;
  }
  // tau_j_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->tau_j_d), &(output->tau_j_d)))
  {
    return false;
  }
  // dtau_j
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->dtau_j), &(output->dtau_j)))
  {
    return false;
  }
  // q
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->q), &(output->q)))
  {
    return false;
  }
  // q_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->q_d), &(output->q_d)))
  {
    return false;
  }
  // dq
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->dq), &(output->dq)))
  {
    return false;
  }
  // dq_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->dq_d), &(output->dq_d)))
  {
    return false;
  }
  // ddq_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->ddq_d), &(output->ddq_d)))
  {
    return false;
  }
  // joint_contact
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->joint_contact), &(output->joint_contact)))
  {
    return false;
  }
  // cartesian_contact
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->cartesian_contact), &(output->cartesian_contact)))
  {
    return false;
  }
  // joint_collision
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->joint_collision), &(output->joint_collision)))
  {
    return false;
  }
  // cartesian_collision
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->cartesian_collision), &(output->cartesian_collision)))
  {
    return false;
  }
  // tau_ext_hat_filtered
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->tau_ext_hat_filtered), &(output->tau_ext_hat_filtered)))
  {
    return false;
  }
  // o_f_ext_hat_k
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->o_f_ext_hat_k), &(output->o_f_ext_hat_k)))
  {
    return false;
  }
  // k_f_ext_hat_k
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->k_f_ext_hat_k), &(output->k_f_ext_hat_k)))
  {
    return false;
  }
  // o_dp_ee_d
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->o_dp_ee_d), &(output->o_dp_ee_d)))
  {
    return false;
  }
  // o_t_ee_c
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->o_t_ee_c), &(output->o_t_ee_c)))
  {
    return false;
  }
  // o_dp_ee_c
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->o_dp_ee_c), &(output->o_dp_ee_c)))
  {
    return false;
  }
  // o_ddp_ee_c
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->o_ddp_ee_c), &(output->o_ddp_ee_c)))
  {
    return false;
  }
  // theta
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->theta), &(output->theta)))
  {
    return false;
  }
  // dtheta
  if (!franka_pybridge_interfaces__msg__JointDataArray__Sequence__copy(
      &(input->dtheta), &(output->dtheta)))
  {
    return false;
  }
  return true;
}

franka_pybridge_interfaces__srv__ExecutePlanLog_Response *
franka_pybridge_interfaces__srv__ExecutePlanLog_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response * msg = (franka_pybridge_interfaces__srv__ExecutePlanLog_Response *)allocator.allocate(sizeof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response));
  bool success = franka_pybridge_interfaces__srv__ExecutePlanLog_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_pybridge_interfaces__srv__ExecutePlanLog_Response__destroy(franka_pybridge_interfaces__srv__ExecutePlanLog_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence__init(franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response * data = NULL;

  if (size) {
    data = (franka_pybridge_interfaces__srv__ExecutePlanLog_Response *)allocator.zero_allocate(size, sizeof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_pybridge_interfaces__srv__ExecutePlanLog_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(&data[i - 1]);
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
franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence__fini(franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence * array)
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
      franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(&array->data[i]);
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

franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence *
franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence * array = (franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence *)allocator.allocate(sizeof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence__destroy(franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence__are_equal(const franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence * lhs, const franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_pybridge_interfaces__srv__ExecutePlanLog_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence__copy(
  const franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence * input,
  franka_pybridge_interfaces__srv__ExecutePlanLog_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_pybridge_interfaces__srv__ExecutePlanLog_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_pybridge_interfaces__srv__ExecutePlanLog_Response * data =
      (franka_pybridge_interfaces__srv__ExecutePlanLog_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_pybridge_interfaces__srv__ExecutePlanLog_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_pybridge_interfaces__srv__ExecutePlanLog_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_pybridge_interfaces__srv__ExecutePlanLog_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
