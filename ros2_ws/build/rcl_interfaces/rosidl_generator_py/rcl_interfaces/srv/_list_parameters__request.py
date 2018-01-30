# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'ListParameters_Request'."""

    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DEPTH_RECURSIVE': 0,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rcl_interfaces')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.ListParameters_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_list_parameters__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg_list_parameters__request
            cls._TYPE_SUPPORT = module.type_support_msg_list_parameters__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_list_parameters__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DEPTH_RECURSIVE': cls.__constants['DEPTH_RECURSIVE'],
        }

    @property
    def DEPTH_RECURSIVE(self):
        """Message constant 'DEPTH_RECURSIVE'."""
        return Metaclass.__constants['DEPTH_RECURSIVE']


class ListParameters_Request(metaclass=Metaclass):
    """
    Message class 'ListParameters_Request'.

    Constants:
      DEPTH_RECURSIVE
    """

    __slots__ = [
        '_prefixes',
        '_depth',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.prefixes = kwargs.get('prefixes', list())
        self.depth = kwargs.get('depth', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def prefixes(self):
        """Message field 'prefixes'."""
        return self._prefixes

    @prefixes.setter
    def prefixes(self, value):
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
             all([isinstance(v, str) for v in value]) and
             True), \
            "The 'prefixes' field must be a set or sequence and each value of type 'str'"
        self._prefixes = value

    @property
    def depth(self):
        """Message field 'depth'."""
        return self._depth

    @depth.setter
    def depth(self, value):
        assert \
            isinstance(value, int), \
            "The 'depth' field must of type 'int'"
        assert value >= 0 and value < 18446744073709551616, \
            "The 'depth' field must be an unsigned integer in [0, 18446744073709551616)"
        self._depth = value
