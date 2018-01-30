# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'SelfTest_Response'."""

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
            module = import_type_support('diagnostic_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.SelfTest_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_self_test__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg_self_test__response
            cls._TYPE_SUPPORT = module.type_support_msg_self_test__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_self_test__response
            from diagnostic_msgs.msg import DiagnosticStatus
            if DiagnosticStatus.__class__._TYPE_SUPPORT is None:
                DiagnosticStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SelfTest_Response(metaclass=Metaclass):
    """Message class 'SelfTest_Response'."""

    __slots__ = [
        '_id',
        '_passed',
        '_status',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.id = kwargs.get('id', str())
        self.passed = kwargs.get('passed', bytes([0]))
        self.status = kwargs.get('status', list())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def id(self):
        """Message field 'id'."""
        return self._id

    @id.setter
    def id(self, value):
        assert \
            isinstance(value, str), \
            "The 'id' field must of type 'str'"
        self._id = value

    @property
    def passed(self):
        """Message field 'passed'."""
        return self._passed

    @passed.setter
    def passed(self, value):
        from collections import ByteString
        assert \
            ((isinstance(value, bytes) or isinstance(value, ByteString)) and
             len(value) == 1), \
            "The 'passed' field must of type 'bytes' or 'ByteString' with a length 1"
        self._passed = value

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        from diagnostic_msgs.msg import DiagnosticStatus
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
             all([isinstance(v, DiagnosticStatus) for v in value]) and
             True), \
            "The 'status' field must be a set or sequence and each value of type 'DiagnosticStatus'"
        self._status = value
