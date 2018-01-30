# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'MultiArrayLayout'."""

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
            module = import_type_support('std_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.MultiArrayLayout')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_multi_array_layout
            cls._CONVERT_TO_PY = module.convert_to_py_msg_multi_array_layout
            cls._TYPE_SUPPORT = module.type_support_msg_multi_array_layout
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_multi_array_layout
            from std_msgs.msg import MultiArrayDimension
            if MultiArrayDimension.__class__._TYPE_SUPPORT is None:
                MultiArrayDimension.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MultiArrayLayout(metaclass=Metaclass):
    """Message class 'MultiArrayLayout'."""

    __slots__ = [
        '_dim',
        '_data_offset',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.dim = kwargs.get('dim', list())
        self.data_offset = kwargs.get('data_offset', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def dim(self):
        """Message field 'dim'."""
        return self._dim

    @dim.setter
    def dim(self, value):
        from std_msgs.msg import MultiArrayDimension
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
             all([isinstance(v, MultiArrayDimension) for v in value]) and
             True), \
            "The 'dim' field must be a set or sequence and each value of type 'MultiArrayDimension'"
        self._dim = value

    @property
    def data_offset(self):
        """Message field 'data_offset'."""
        return self._data_offset

    @data_offset.setter
    def data_offset(self, value):
        assert \
            isinstance(value, int), \
            "The 'data_offset' field must of type 'int'"
        assert value >= 0 and value < 4294967296, \
            "The 'data_offset' field must be an unsigned integer in [0, 4294967296)"
        self._data_offset = value
