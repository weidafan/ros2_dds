# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'OccupancyGrid'."""

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
            module = import_type_support('nav_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.OccupancyGrid')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_occupancy_grid
            cls._CONVERT_TO_PY = module.convert_to_py_msg_occupancy_grid
            cls._TYPE_SUPPORT = module.type_support_msg_occupancy_grid
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_occupancy_grid
            from nav_msgs.msg import MapMetaData
            if MapMetaData.__class__._TYPE_SUPPORT is None:
                MapMetaData.__class__.__import_type_support__()
            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OccupancyGrid(metaclass=Metaclass):
    """Message class 'OccupancyGrid'."""

    __slots__ = [
        '_header',
        '_info',
        '_data',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from nav_msgs.msg import MapMetaData
        self.info = kwargs.get('info', MapMetaData())
        self.data = kwargs.get('data', list())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        from std_msgs.msg import Header
        assert \
            isinstance(value, Header), \
            "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        from nav_msgs.msg import MapMetaData
        assert \
            isinstance(value, MapMetaData), \
            "The 'info' field must be a sub message of type 'MapMetaData'"
        self._info = value

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
             all([val >= -128 and val < 128 for val in value])), \
            "The 'data' field must be a set or sequence and each value of type 'int' and each integer in [-128, 128)"
        self._data = value
