# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'Int16MultiArray'."""

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
            logger = logging.getLogger('rosidl_generator_py.Int16MultiArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_int16_multi_array
            cls._CONVERT_TO_PY = module.convert_to_py_msg_int16_multi_array
            cls._TYPE_SUPPORT = module.type_support_msg_int16_multi_array
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_int16_multi_array
            from std_msgs.msg import MultiArrayLayout
            if MultiArrayLayout.__class__._TYPE_SUPPORT is None:
                MultiArrayLayout.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Int16MultiArray(metaclass=Metaclass):
    """Message class 'Int16MultiArray'."""

    __slots__ = [
        '_layout',
        '_data',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from std_msgs.msg import MultiArrayLayout
        self.layout = kwargs.get('layout', MultiArrayLayout())
        self.data = kwargs.get('data', list())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def layout(self):
        """Message field 'layout'."""
        return self._layout

    @layout.setter
    def layout(self, value):
        from std_msgs.msg import MultiArrayLayout
        assert \
            isinstance(value, MultiArrayLayout), \
            "The 'layout' field must be a sub message of type 'MultiArrayLayout'"
        self._layout = value

    @property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
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
             all([isinstance(v, int) for v in value]) and
             all([val >= -32768 and val < 32768 for val in value])), \
            "The 'data' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32768)"
        self._data = value