# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'LaserScan'."""

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
            module = import_type_support('sensor_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.LaserScan')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_laser_scan
            cls._CONVERT_TO_PY = module.convert_to_py_msg_laser_scan
            cls._TYPE_SUPPORT = module.type_support_msg_laser_scan
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_laser_scan
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


class LaserScan(metaclass=Metaclass):
    """Message class 'LaserScan'."""

    __slots__ = [
        '_header',
        '_angle_min',
        '_angle_max',
        '_angle_increment',
        '_time_increment',
        '_scan_time',
        '_range_min',
        '_range_max',
        '_ranges',
        '_intensities',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.angle_min = kwargs.get('angle_min', float())
        self.angle_max = kwargs.get('angle_max', float())
        self.angle_increment = kwargs.get('angle_increment', float())
        self.time_increment = kwargs.get('time_increment', float())
        self.scan_time = kwargs.get('scan_time', float())
        self.range_min = kwargs.get('range_min', float())
        self.range_max = kwargs.get('range_max', float())
        self.ranges = kwargs.get('ranges', list())
        self.intensities = kwargs.get('intensities', list())

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
    def angle_min(self):
        """Message field 'angle_min'."""
        return self._angle_min

    @angle_min.setter
    def angle_min(self, value):
        assert \
            isinstance(value, float), \
            "The 'angle_min' field must of type 'float'"
        self._angle_min = value

    @property
    def angle_max(self):
        """Message field 'angle_max'."""
        return self._angle_max

    @angle_max.setter
    def angle_max(self, value):
        assert \
            isinstance(value, float), \
            "The 'angle_max' field must of type 'float'"
        self._angle_max = value

    @property
    def angle_increment(self):
        """Message field 'angle_increment'."""
        return self._angle_increment

    @angle_increment.setter
    def angle_increment(self, value):
        assert \
            isinstance(value, float), \
            "The 'angle_increment' field must of type 'float'"
        self._angle_increment = value

    @property
    def time_increment(self):
        """Message field 'time_increment'."""
        return self._time_increment

    @time_increment.setter
    def time_increment(self, value):
        assert \
            isinstance(value, float), \
            "The 'time_increment' field must of type 'float'"
        self._time_increment = value

    @property
    def scan_time(self):
        """Message field 'scan_time'."""
        return self._scan_time

    @scan_time.setter
    def scan_time(self, value):
        assert \
            isinstance(value, float), \
            "The 'scan_time' field must of type 'float'"
        self._scan_time = value

    @property
    def range_min(self):
        """Message field 'range_min'."""
        return self._range_min

    @range_min.setter
    def range_min(self, value):
        assert \
            isinstance(value, float), \
            "The 'range_min' field must of type 'float'"
        self._range_min = value

    @property
    def range_max(self):
        """Message field 'range_max'."""
        return self._range_max

    @range_max.setter
    def range_max(self, value):
        assert \
            isinstance(value, float), \
            "The 'range_max' field must of type 'float'"
        self._range_max = value

    @property
    def ranges(self):
        """Message field 'ranges'."""
        return self._ranges

    @ranges.setter
    def ranges(self, value):
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
             all([isinstance(v, float) for v in value]) and
             True), \
            "The 'ranges' field must be a set or sequence and each value of type 'float'"
        self._ranges = value

    @property
    def intensities(self):
        """Message field 'intensities'."""
        return self._intensities

    @intensities.setter
    def intensities(self, value):
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
             all([isinstance(v, float) for v in value]) and
             True), \
            "The 'intensities' field must be a set or sequence and each value of type 'float'"
        self._intensities = value
