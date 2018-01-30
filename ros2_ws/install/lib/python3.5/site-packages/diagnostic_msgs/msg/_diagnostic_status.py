# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'DiagnosticStatus'."""

    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OK': b'\x00',
        'WARN': b'\x01',
        'ERROR': b'\x02',
        'STALE': b'\x03',
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('diagnostic_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.DiagnosticStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_diagnostic_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg_diagnostic_status
            cls._TYPE_SUPPORT = module.type_support_msg_diagnostic_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_diagnostic_status
            from diagnostic_msgs.msg import KeyValue
            if KeyValue.__class__._TYPE_SUPPORT is None:
                KeyValue.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OK': cls.__constants['OK'],
            'WARN': cls.__constants['WARN'],
            'ERROR': cls.__constants['ERROR'],
            'STALE': cls.__constants['STALE'],
        }

    @property
    def OK(self):
        """Message constant 'OK'."""
        return Metaclass.__constants['OK']

    @property
    def WARN(self):
        """Message constant 'WARN'."""
        return Metaclass.__constants['WARN']

    @property
    def ERROR(self):
        """Message constant 'ERROR'."""
        return Metaclass.__constants['ERROR']

    @property
    def STALE(self):
        """Message constant 'STALE'."""
        return Metaclass.__constants['STALE']


class DiagnosticStatus(metaclass=Metaclass):
    """
    Message class 'DiagnosticStatus'.

    Constants:
      OK
      WARN
      ERROR
      STALE
    """

    __slots__ = [
        '_level',
        '_name',
        '_message',
        '_hardware_id',
        '_values',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.level = kwargs.get('level', bytes([0]))
        self.name = kwargs.get('name', str())
        self.message = kwargs.get('message', str())
        self.hardware_id = kwargs.get('hardware_id', str())
        self.values = kwargs.get('values', list())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def level(self):
        """Message field 'level'."""
        return self._level

    @level.setter
    def level(self, value):
        from collections import ByteString
        assert \
            ((isinstance(value, bytes) or isinstance(value, ByteString)) and
             len(value) == 1), \
            "The 'level' field must of type 'bytes' or 'ByteString' with a length 1"
        self._level = value

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        assert \
            isinstance(value, str), \
            "The 'name' field must of type 'str'"
        self._name = value

    @property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        assert \
            isinstance(value, str), \
            "The 'message' field must of type 'str'"
        self._message = value

    @property
    def hardware_id(self):
        """Message field 'hardware_id'."""
        return self._hardware_id

    @hardware_id.setter
    def hardware_id(self, value):
        assert \
            isinstance(value, str), \
            "The 'hardware_id' field must of type 'str'"
        self._hardware_id = value

    @property
    def values(self):
        """Message field 'values'."""
        return self._values

    @values.setter
    def values(self, value):
        from diagnostic_msgs.msg import KeyValue
        from collections import Sequence
        from collections import Set
        from collections import UserList
        from collections import UserString
        assert \
            ((isinstance(value, Sequence) or
              isinstance(value, Set) or
              isinstance(value, UserList)) and
             not isinstance(value, str) and
             not isinstance(value, UserString) and
             all([isinstance(v, KeyValue) for v in value]) and
             True), \
            "The 'values' field must be a set or sequence and each value of type 'KeyValue'"
        self._values = value
