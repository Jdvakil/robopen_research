# generated from rosidl_generator_py/resource/_idl.py.em
# with input from franka_pybridge_interfaces:srv/ExecutePlanLog.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ExecutePlanLog_Request(type):
    """Metaclass of message 'ExecutePlanLog_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('franka_pybridge_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'franka_pybridge_interfaces.srv.ExecutePlanLog_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__execute_plan_log__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__execute_plan_log__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__execute_plan_log__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__execute_plan_log__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__execute_plan_log__request

            from franka_pybridge_interfaces.msg import JointDataArray
            if JointDataArray.__class__._TYPE_SUPPORT is None:
                JointDataArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExecutePlanLog_Request(metaclass=Metaclass_ExecutePlanLog_Request):
    """Message class 'ExecutePlanLog_Request'."""

    __slots__ = [
        '_vel_traj',
        '_initial_pos',
    ]

    _fields_and_field_types = {
        'vel_traj': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'initial_pos': 'franka_pybridge_interfaces/JointDataArray',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vel_traj = kwargs.get('vel_traj', [])
        from franka_pybridge_interfaces.msg import JointDataArray
        self.initial_pos = kwargs.get('initial_pos', JointDataArray())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.vel_traj != other.vel_traj:
            return False
        if self.initial_pos != other.initial_pos:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def vel_traj(self):
        """Message field 'vel_traj'."""
        return self._vel_traj

    @vel_traj.setter
    def vel_traj(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'vel_traj' field must be a set or sequence and each value of type 'JointDataArray'"
        self._vel_traj = value

    @builtins.property
    def initial_pos(self):
        """Message field 'initial_pos'."""
        return self._initial_pos

    @initial_pos.setter
    def initial_pos(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            assert \
                isinstance(value, JointDataArray), \
                "The 'initial_pos' field must be a sub message of type 'JointDataArray'"
        self._initial_pos = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ExecutePlanLog_Response(type):
    """Metaclass of message 'ExecutePlanLog_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('franka_pybridge_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'franka_pybridge_interfaces.srv.ExecutePlanLog_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__execute_plan_log__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__execute_plan_log__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__execute_plan_log__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__execute_plan_log__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__execute_plan_log__response

            from franka_pybridge_interfaces.msg import JointDataArray
            if JointDataArray.__class__._TYPE_SUPPORT is None:
                JointDataArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExecutePlanLog_Response(metaclass=Metaclass_ExecutePlanLog_Response):
    """Message class 'ExecutePlanLog_Response'."""

    __slots__ = [
        '_success',
        '_o_t_ee',
        '_o_t_ee_d',
        '_f_t_ee',
        '_f_t_ne',
        '_ne_t_ee',
        '_ee_t_k',
        '_m_ee',
        '_i_ee',
        '_f_x_cee',
        '_m_load',
        '_i_load',
        '_f_x_cload',
        '_m_total',
        '_i_total',
        '_f_x_ctotal',
        '_elbow',
        '_elbow_d',
        '_elbow_c',
        '_delbow_c',
        '_ddelbow_c',
        '_tau_j',
        '_tau_j_d',
        '_dtau_j',
        '_q',
        '_q_d',
        '_dq',
        '_dq_d',
        '_ddq_d',
        '_joint_contact',
        '_cartesian_contact',
        '_joint_collision',
        '_cartesian_collision',
        '_tau_ext_hat_filtered',
        '_o_f_ext_hat_k',
        '_k_f_ext_hat_k',
        '_o_dp_ee_d',
        '_o_t_ee_c',
        '_o_dp_ee_c',
        '_o_ddp_ee_c',
        '_theta',
        '_dtheta',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'o_t_ee': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'o_t_ee_d': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'f_t_ee': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'f_t_ne': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'ne_t_ee': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'ee_t_k': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'm_ee': 'franka_pybridge_interfaces/JointDataArray',
        'i_ee': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'f_x_cee': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'm_load': 'franka_pybridge_interfaces/JointDataArray',
        'i_load': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'f_x_cload': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'm_total': 'franka_pybridge_interfaces/JointDataArray',
        'i_total': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'f_x_ctotal': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'elbow': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'elbow_d': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'elbow_c': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'delbow_c': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'ddelbow_c': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'tau_j': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'tau_j_d': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'dtau_j': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'q': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'q_d': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'dq': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'dq_d': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'ddq_d': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'joint_contact': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'cartesian_contact': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'joint_collision': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'cartesian_collision': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'tau_ext_hat_filtered': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'o_f_ext_hat_k': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'k_f_ext_hat_k': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'o_dp_ee_d': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'o_t_ee_c': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'o_dp_ee_c': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'o_ddp_ee_c': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'theta': 'sequence<franka_pybridge_interfaces/JointDataArray>',
        'dtheta': 'sequence<franka_pybridge_interfaces/JointDataArray>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['franka_pybridge_interfaces', 'msg'], 'JointDataArray')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.o_t_ee = kwargs.get('o_t_ee', [])
        self.o_t_ee_d = kwargs.get('o_t_ee_d', [])
        self.f_t_ee = kwargs.get('f_t_ee', [])
        self.f_t_ne = kwargs.get('f_t_ne', [])
        self.ne_t_ee = kwargs.get('ne_t_ee', [])
        self.ee_t_k = kwargs.get('ee_t_k', [])
        from franka_pybridge_interfaces.msg import JointDataArray
        self.m_ee = kwargs.get('m_ee', JointDataArray())
        self.i_ee = kwargs.get('i_ee', [])
        self.f_x_cee = kwargs.get('f_x_cee', [])
        from franka_pybridge_interfaces.msg import JointDataArray
        self.m_load = kwargs.get('m_load', JointDataArray())
        self.i_load = kwargs.get('i_load', [])
        self.f_x_cload = kwargs.get('f_x_cload', [])
        from franka_pybridge_interfaces.msg import JointDataArray
        self.m_total = kwargs.get('m_total', JointDataArray())
        self.i_total = kwargs.get('i_total', [])
        self.f_x_ctotal = kwargs.get('f_x_ctotal', [])
        self.elbow = kwargs.get('elbow', [])
        self.elbow_d = kwargs.get('elbow_d', [])
        self.elbow_c = kwargs.get('elbow_c', [])
        self.delbow_c = kwargs.get('delbow_c', [])
        self.ddelbow_c = kwargs.get('ddelbow_c', [])
        self.tau_j = kwargs.get('tau_j', [])
        self.tau_j_d = kwargs.get('tau_j_d', [])
        self.dtau_j = kwargs.get('dtau_j', [])
        self.q = kwargs.get('q', [])
        self.q_d = kwargs.get('q_d', [])
        self.dq = kwargs.get('dq', [])
        self.dq_d = kwargs.get('dq_d', [])
        self.ddq_d = kwargs.get('ddq_d', [])
        self.joint_contact = kwargs.get('joint_contact', [])
        self.cartesian_contact = kwargs.get('cartesian_contact', [])
        self.joint_collision = kwargs.get('joint_collision', [])
        self.cartesian_collision = kwargs.get('cartesian_collision', [])
        self.tau_ext_hat_filtered = kwargs.get('tau_ext_hat_filtered', [])
        self.o_f_ext_hat_k = kwargs.get('o_f_ext_hat_k', [])
        self.k_f_ext_hat_k = kwargs.get('k_f_ext_hat_k', [])
        self.o_dp_ee_d = kwargs.get('o_dp_ee_d', [])
        self.o_t_ee_c = kwargs.get('o_t_ee_c', [])
        self.o_dp_ee_c = kwargs.get('o_dp_ee_c', [])
        self.o_ddp_ee_c = kwargs.get('o_ddp_ee_c', [])
        self.theta = kwargs.get('theta', [])
        self.dtheta = kwargs.get('dtheta', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.o_t_ee != other.o_t_ee:
            return False
        if self.o_t_ee_d != other.o_t_ee_d:
            return False
        if self.f_t_ee != other.f_t_ee:
            return False
        if self.f_t_ne != other.f_t_ne:
            return False
        if self.ne_t_ee != other.ne_t_ee:
            return False
        if self.ee_t_k != other.ee_t_k:
            return False
        if self.m_ee != other.m_ee:
            return False
        if self.i_ee != other.i_ee:
            return False
        if self.f_x_cee != other.f_x_cee:
            return False
        if self.m_load != other.m_load:
            return False
        if self.i_load != other.i_load:
            return False
        if self.f_x_cload != other.f_x_cload:
            return False
        if self.m_total != other.m_total:
            return False
        if self.i_total != other.i_total:
            return False
        if self.f_x_ctotal != other.f_x_ctotal:
            return False
        if self.elbow != other.elbow:
            return False
        if self.elbow_d != other.elbow_d:
            return False
        if self.elbow_c != other.elbow_c:
            return False
        if self.delbow_c != other.delbow_c:
            return False
        if self.ddelbow_c != other.ddelbow_c:
            return False
        if self.tau_j != other.tau_j:
            return False
        if self.tau_j_d != other.tau_j_d:
            return False
        if self.dtau_j != other.dtau_j:
            return False
        if self.q != other.q:
            return False
        if self.q_d != other.q_d:
            return False
        if self.dq != other.dq:
            return False
        if self.dq_d != other.dq_d:
            return False
        if self.ddq_d != other.ddq_d:
            return False
        if self.joint_contact != other.joint_contact:
            return False
        if self.cartesian_contact != other.cartesian_contact:
            return False
        if self.joint_collision != other.joint_collision:
            return False
        if self.cartesian_collision != other.cartesian_collision:
            return False
        if self.tau_ext_hat_filtered != other.tau_ext_hat_filtered:
            return False
        if self.o_f_ext_hat_k != other.o_f_ext_hat_k:
            return False
        if self.k_f_ext_hat_k != other.k_f_ext_hat_k:
            return False
        if self.o_dp_ee_d != other.o_dp_ee_d:
            return False
        if self.o_t_ee_c != other.o_t_ee_c:
            return False
        if self.o_dp_ee_c != other.o_dp_ee_c:
            return False
        if self.o_ddp_ee_c != other.o_ddp_ee_c:
            return False
        if self.theta != other.theta:
            return False
        if self.dtheta != other.dtheta:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def o_t_ee(self):
        """Message field 'o_t_ee'."""
        return self._o_t_ee

    @o_t_ee.setter
    def o_t_ee(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'o_t_ee' field must be a set or sequence and each value of type 'JointDataArray'"
        self._o_t_ee = value

    @builtins.property
    def o_t_ee_d(self):
        """Message field 'o_t_ee_d'."""
        return self._o_t_ee_d

    @o_t_ee_d.setter
    def o_t_ee_d(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'o_t_ee_d' field must be a set or sequence and each value of type 'JointDataArray'"
        self._o_t_ee_d = value

    @builtins.property
    def f_t_ee(self):
        """Message field 'f_t_ee'."""
        return self._f_t_ee

    @f_t_ee.setter
    def f_t_ee(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'f_t_ee' field must be a set or sequence and each value of type 'JointDataArray'"
        self._f_t_ee = value

    @builtins.property
    def f_t_ne(self):
        """Message field 'f_t_ne'."""
        return self._f_t_ne

    @f_t_ne.setter
    def f_t_ne(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'f_t_ne' field must be a set or sequence and each value of type 'JointDataArray'"
        self._f_t_ne = value

    @builtins.property
    def ne_t_ee(self):
        """Message field 'ne_t_ee'."""
        return self._ne_t_ee

    @ne_t_ee.setter
    def ne_t_ee(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'ne_t_ee' field must be a set or sequence and each value of type 'JointDataArray'"
        self._ne_t_ee = value

    @builtins.property
    def ee_t_k(self):
        """Message field 'ee_t_k'."""
        return self._ee_t_k

    @ee_t_k.setter
    def ee_t_k(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'ee_t_k' field must be a set or sequence and each value of type 'JointDataArray'"
        self._ee_t_k = value

    @builtins.property
    def m_ee(self):
        """Message field 'm_ee'."""
        return self._m_ee

    @m_ee.setter
    def m_ee(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            assert \
                isinstance(value, JointDataArray), \
                "The 'm_ee' field must be a sub message of type 'JointDataArray'"
        self._m_ee = value

    @builtins.property
    def i_ee(self):
        """Message field 'i_ee'."""
        return self._i_ee

    @i_ee.setter
    def i_ee(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'i_ee' field must be a set or sequence and each value of type 'JointDataArray'"
        self._i_ee = value

    @builtins.property
    def f_x_cee(self):
        """Message field 'f_x_cee'."""
        return self._f_x_cee

    @f_x_cee.setter
    def f_x_cee(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'f_x_cee' field must be a set or sequence and each value of type 'JointDataArray'"
        self._f_x_cee = value

    @builtins.property
    def m_load(self):
        """Message field 'm_load'."""
        return self._m_load

    @m_load.setter
    def m_load(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            assert \
                isinstance(value, JointDataArray), \
                "The 'm_load' field must be a sub message of type 'JointDataArray'"
        self._m_load = value

    @builtins.property
    def i_load(self):
        """Message field 'i_load'."""
        return self._i_load

    @i_load.setter
    def i_load(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'i_load' field must be a set or sequence and each value of type 'JointDataArray'"
        self._i_load = value

    @builtins.property
    def f_x_cload(self):
        """Message field 'f_x_cload'."""
        return self._f_x_cload

    @f_x_cload.setter
    def f_x_cload(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'f_x_cload' field must be a set or sequence and each value of type 'JointDataArray'"
        self._f_x_cload = value

    @builtins.property
    def m_total(self):
        """Message field 'm_total'."""
        return self._m_total

    @m_total.setter
    def m_total(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            assert \
                isinstance(value, JointDataArray), \
                "The 'm_total' field must be a sub message of type 'JointDataArray'"
        self._m_total = value

    @builtins.property
    def i_total(self):
        """Message field 'i_total'."""
        return self._i_total

    @i_total.setter
    def i_total(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'i_total' field must be a set or sequence and each value of type 'JointDataArray'"
        self._i_total = value

    @builtins.property
    def f_x_ctotal(self):
        """Message field 'f_x_ctotal'."""
        return self._f_x_ctotal

    @f_x_ctotal.setter
    def f_x_ctotal(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'f_x_ctotal' field must be a set or sequence and each value of type 'JointDataArray'"
        self._f_x_ctotal = value

    @builtins.property
    def elbow(self):
        """Message field 'elbow'."""
        return self._elbow

    @elbow.setter
    def elbow(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'elbow' field must be a set or sequence and each value of type 'JointDataArray'"
        self._elbow = value

    @builtins.property
    def elbow_d(self):
        """Message field 'elbow_d'."""
        return self._elbow_d

    @elbow_d.setter
    def elbow_d(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'elbow_d' field must be a set or sequence and each value of type 'JointDataArray'"
        self._elbow_d = value

    @builtins.property
    def elbow_c(self):
        """Message field 'elbow_c'."""
        return self._elbow_c

    @elbow_c.setter
    def elbow_c(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'elbow_c' field must be a set or sequence and each value of type 'JointDataArray'"
        self._elbow_c = value

    @builtins.property
    def delbow_c(self):
        """Message field 'delbow_c'."""
        return self._delbow_c

    @delbow_c.setter
    def delbow_c(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'delbow_c' field must be a set or sequence and each value of type 'JointDataArray'"
        self._delbow_c = value

    @builtins.property
    def ddelbow_c(self):
        """Message field 'ddelbow_c'."""
        return self._ddelbow_c

    @ddelbow_c.setter
    def ddelbow_c(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'ddelbow_c' field must be a set or sequence and each value of type 'JointDataArray'"
        self._ddelbow_c = value

    @builtins.property
    def tau_j(self):
        """Message field 'tau_j'."""
        return self._tau_j

    @tau_j.setter
    def tau_j(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'tau_j' field must be a set or sequence and each value of type 'JointDataArray'"
        self._tau_j = value

    @builtins.property
    def tau_j_d(self):
        """Message field 'tau_j_d'."""
        return self._tau_j_d

    @tau_j_d.setter
    def tau_j_d(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'tau_j_d' field must be a set or sequence and each value of type 'JointDataArray'"
        self._tau_j_d = value

    @builtins.property
    def dtau_j(self):
        """Message field 'dtau_j'."""
        return self._dtau_j

    @dtau_j.setter
    def dtau_j(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'dtau_j' field must be a set or sequence and each value of type 'JointDataArray'"
        self._dtau_j = value

    @builtins.property
    def q(self):
        """Message field 'q'."""
        return self._q

    @q.setter
    def q(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'q' field must be a set or sequence and each value of type 'JointDataArray'"
        self._q = value

    @builtins.property
    def q_d(self):
        """Message field 'q_d'."""
        return self._q_d

    @q_d.setter
    def q_d(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'q_d' field must be a set or sequence and each value of type 'JointDataArray'"
        self._q_d = value

    @builtins.property
    def dq(self):
        """Message field 'dq'."""
        return self._dq

    @dq.setter
    def dq(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'dq' field must be a set or sequence and each value of type 'JointDataArray'"
        self._dq = value

    @builtins.property
    def dq_d(self):
        """Message field 'dq_d'."""
        return self._dq_d

    @dq_d.setter
    def dq_d(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'dq_d' field must be a set or sequence and each value of type 'JointDataArray'"
        self._dq_d = value

    @builtins.property
    def ddq_d(self):
        """Message field 'ddq_d'."""
        return self._ddq_d

    @ddq_d.setter
    def ddq_d(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'ddq_d' field must be a set or sequence and each value of type 'JointDataArray'"
        self._ddq_d = value

    @builtins.property
    def joint_contact(self):
        """Message field 'joint_contact'."""
        return self._joint_contact

    @joint_contact.setter
    def joint_contact(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'joint_contact' field must be a set or sequence and each value of type 'JointDataArray'"
        self._joint_contact = value

    @builtins.property
    def cartesian_contact(self):
        """Message field 'cartesian_contact'."""
        return self._cartesian_contact

    @cartesian_contact.setter
    def cartesian_contact(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'cartesian_contact' field must be a set or sequence and each value of type 'JointDataArray'"
        self._cartesian_contact = value

    @builtins.property
    def joint_collision(self):
        """Message field 'joint_collision'."""
        return self._joint_collision

    @joint_collision.setter
    def joint_collision(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'joint_collision' field must be a set or sequence and each value of type 'JointDataArray'"
        self._joint_collision = value

    @builtins.property
    def cartesian_collision(self):
        """Message field 'cartesian_collision'."""
        return self._cartesian_collision

    @cartesian_collision.setter
    def cartesian_collision(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'cartesian_collision' field must be a set or sequence and each value of type 'JointDataArray'"
        self._cartesian_collision = value

    @builtins.property
    def tau_ext_hat_filtered(self):
        """Message field 'tau_ext_hat_filtered'."""
        return self._tau_ext_hat_filtered

    @tau_ext_hat_filtered.setter
    def tau_ext_hat_filtered(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'tau_ext_hat_filtered' field must be a set or sequence and each value of type 'JointDataArray'"
        self._tau_ext_hat_filtered = value

    @builtins.property
    def o_f_ext_hat_k(self):
        """Message field 'o_f_ext_hat_k'."""
        return self._o_f_ext_hat_k

    @o_f_ext_hat_k.setter
    def o_f_ext_hat_k(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'o_f_ext_hat_k' field must be a set or sequence and each value of type 'JointDataArray'"
        self._o_f_ext_hat_k = value

    @builtins.property
    def k_f_ext_hat_k(self):
        """Message field 'k_f_ext_hat_k'."""
        return self._k_f_ext_hat_k

    @k_f_ext_hat_k.setter
    def k_f_ext_hat_k(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'k_f_ext_hat_k' field must be a set or sequence and each value of type 'JointDataArray'"
        self._k_f_ext_hat_k = value

    @builtins.property
    def o_dp_ee_d(self):
        """Message field 'o_dp_ee_d'."""
        return self._o_dp_ee_d

    @o_dp_ee_d.setter
    def o_dp_ee_d(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'o_dp_ee_d' field must be a set or sequence and each value of type 'JointDataArray'"
        self._o_dp_ee_d = value

    @builtins.property
    def o_t_ee_c(self):
        """Message field 'o_t_ee_c'."""
        return self._o_t_ee_c

    @o_t_ee_c.setter
    def o_t_ee_c(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'o_t_ee_c' field must be a set or sequence and each value of type 'JointDataArray'"
        self._o_t_ee_c = value

    @builtins.property
    def o_dp_ee_c(self):
        """Message field 'o_dp_ee_c'."""
        return self._o_dp_ee_c

    @o_dp_ee_c.setter
    def o_dp_ee_c(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'o_dp_ee_c' field must be a set or sequence and each value of type 'JointDataArray'"
        self._o_dp_ee_c = value

    @builtins.property
    def o_ddp_ee_c(self):
        """Message field 'o_ddp_ee_c'."""
        return self._o_ddp_ee_c

    @o_ddp_ee_c.setter
    def o_ddp_ee_c(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'o_ddp_ee_c' field must be a set or sequence and each value of type 'JointDataArray'"
        self._o_ddp_ee_c = value

    @builtins.property
    def theta(self):
        """Message field 'theta'."""
        return self._theta

    @theta.setter
    def theta(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'theta' field must be a set or sequence and each value of type 'JointDataArray'"
        self._theta = value

    @builtins.property
    def dtheta(self):
        """Message field 'dtheta'."""
        return self._dtheta

    @dtheta.setter
    def dtheta(self, value):
        if __debug__:
            from franka_pybridge_interfaces.msg import JointDataArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, JointDataArray) for v in value) and
                 True), \
                "The 'dtheta' field must be a set or sequence and each value of type 'JointDataArray'"
        self._dtheta = value


class Metaclass_ExecutePlanLog(type):
    """Metaclass of service 'ExecutePlanLog'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('franka_pybridge_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'franka_pybridge_interfaces.srv.ExecutePlanLog')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__execute_plan_log

            from franka_pybridge_interfaces.srv import _execute_plan_log
            if _execute_plan_log.Metaclass_ExecutePlanLog_Request._TYPE_SUPPORT is None:
                _execute_plan_log.Metaclass_ExecutePlanLog_Request.__import_type_support__()
            if _execute_plan_log.Metaclass_ExecutePlanLog_Response._TYPE_SUPPORT is None:
                _execute_plan_log.Metaclass_ExecutePlanLog_Response.__import_type_support__()


class ExecutePlanLog(metaclass=Metaclass_ExecutePlanLog):
    from franka_pybridge_interfaces.srv._execute_plan_log import ExecutePlanLog_Request as Request
    from franka_pybridge_interfaces.srv._execute_plan_log import ExecutePlanLog_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
