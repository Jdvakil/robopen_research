# generated from rosidl_generator_py/resource/_idl.py.em
# with input from franka_pybridge_interfaces:srv/OperateSuction.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OperateSuction_Request(type):
    """Metaclass of message 'OperateSuction_Request'."""

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
                'franka_pybridge_interfaces.srv.OperateSuction_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__operate_suction__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__operate_suction__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__operate_suction__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__operate_suction__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__operate_suction__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OperateSuction_Request(metaclass=Metaclass_OperateSuction_Request):
    """Message class 'OperateSuction_Request'."""

    __slots__ = [
        '_operation',
        '_sucction_time_ms',
        '_strength',
    ]

    _fields_and_field_types = {
        'operation': 'boolean',
        'sucction_time_ms': 'int32',
        'strength': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.operation = kwargs.get('operation', bool())
        self.sucction_time_ms = kwargs.get('sucction_time_ms', int())
        self.strength = kwargs.get('strength', int())

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
        if self.operation != other.operation:
            return False
        if self.sucction_time_ms != other.sucction_time_ms:
            return False
        if self.strength != other.strength:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def operation(self):
        """Message field 'operation'."""
        return self._operation

    @operation.setter
    def operation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'operation' field must be of type 'bool'"
        self._operation = value

    @builtins.property
    def sucction_time_ms(self):
        """Message field 'sucction_time_ms'."""
        return self._sucction_time_ms

    @sucction_time_ms.setter
    def sucction_time_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sucction_time_ms' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sucction_time_ms' field must be an integer in [-2147483648, 2147483647]"
        self._sucction_time_ms = value

    @builtins.property
    def strength(self):
        """Message field 'strength'."""
        return self._strength

    @strength.setter
    def strength(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'strength' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'strength' field must be an integer in [-2147483648, 2147483647]"
        self._strength = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_OperateSuction_Response(type):
    """Metaclass of message 'OperateSuction_Response'."""

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
                'franka_pybridge_interfaces.srv.OperateSuction_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__operate_suction__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__operate_suction__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__operate_suction__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__operate_suction__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__operate_suction__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OperateSuction_Response(metaclass=Metaclass_OperateSuction_Response):
    """Message class 'OperateSuction_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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


class Metaclass_OperateSuction(type):
    """Metaclass of service 'OperateSuction'."""

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
                'franka_pybridge_interfaces.srv.OperateSuction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__operate_suction

            from franka_pybridge_interfaces.srv import _operate_suction
            if _operate_suction.Metaclass_OperateSuction_Request._TYPE_SUPPORT is None:
                _operate_suction.Metaclass_OperateSuction_Request.__import_type_support__()
            if _operate_suction.Metaclass_OperateSuction_Response._TYPE_SUPPORT is None:
                _operate_suction.Metaclass_OperateSuction_Response.__import_type_support__()


class OperateSuction(metaclass=Metaclass_OperateSuction):
    from franka_pybridge_interfaces.srv._operate_suction import OperateSuction_Request as Request
    from franka_pybridge_interfaces.srv._operate_suction import OperateSuction_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
