# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'NavSatFix'."""

    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'COVARIANCE_TYPE_UNKNOWN': 0,
        'COVARIANCE_TYPE_APPROXIMATED': 1,
        'COVARIANCE_TYPE_DIAGONAL_KNOWN': 2,
        'COVARIANCE_TYPE_KNOWN': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sensor_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.NavSatFix')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_nav_sat_fix
            cls._CONVERT_TO_PY = module.convert_to_py_msg_nav_sat_fix
            cls._TYPE_SUPPORT = module.type_support_msg_nav_sat_fix
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_nav_sat_fix
            from sensor_msgs.msg import NavSatStatus
            if NavSatStatus.__class__._TYPE_SUPPORT is None:
                NavSatStatus.__class__.__import_type_support__()
            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'COVARIANCE_TYPE_UNKNOWN': cls.__constants['COVARIANCE_TYPE_UNKNOWN'],
            'COVARIANCE_TYPE_APPROXIMATED': cls.__constants['COVARIANCE_TYPE_APPROXIMATED'],
            'COVARIANCE_TYPE_DIAGONAL_KNOWN': cls.__constants['COVARIANCE_TYPE_DIAGONAL_KNOWN'],
            'COVARIANCE_TYPE_KNOWN': cls.__constants['COVARIANCE_TYPE_KNOWN'],
        }

    @property
    def COVARIANCE_TYPE_UNKNOWN(self):
        """Message constant 'COVARIANCE_TYPE_UNKNOWN'."""
        return Metaclass.__constants['COVARIANCE_TYPE_UNKNOWN']

    @property
    def COVARIANCE_TYPE_APPROXIMATED(self):
        """Message constant 'COVARIANCE_TYPE_APPROXIMATED'."""
        return Metaclass.__constants['COVARIANCE_TYPE_APPROXIMATED']

    @property
    def COVARIANCE_TYPE_DIAGONAL_KNOWN(self):
        """Message constant 'COVARIANCE_TYPE_DIAGONAL_KNOWN'."""
        return Metaclass.__constants['COVARIANCE_TYPE_DIAGONAL_KNOWN']

    @property
    def COVARIANCE_TYPE_KNOWN(self):
        """Message constant 'COVARIANCE_TYPE_KNOWN'."""
        return Metaclass.__constants['COVARIANCE_TYPE_KNOWN']


class NavSatFix(metaclass=Metaclass):
    """
    Message class 'NavSatFix'.

    Constants:
      COVARIANCE_TYPE_UNKNOWN
      COVARIANCE_TYPE_APPROXIMATED
      COVARIANCE_TYPE_DIAGONAL_KNOWN
      COVARIANCE_TYPE_KNOWN
    """

    __slots__ = [
        '_header',
        '_status',
        '_latitude',
        '_longitude',
        '_altitude',
        '_position_covariance',
        '_position_covariance_type',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from sensor_msgs.msg import NavSatStatus
        self.status = kwargs.get('status', NavSatStatus())
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.altitude = kwargs.get('altitude', float())
        self.position_covariance = kwargs.get(
            'position_covariance',
            list([float() for x in range(9)])
        )
        self.position_covariance_type = kwargs.get('position_covariance_type', int())

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
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        from sensor_msgs.msg import NavSatStatus
        assert \
            isinstance(value, NavSatStatus), \
            "The 'status' field must be a sub message of type 'NavSatStatus'"
        self._status = value

    @property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        assert \
            isinstance(value, float), \
            "The 'latitude' field must of type 'float'"
        self._latitude = value

    @property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        assert \
            isinstance(value, float), \
            "The 'longitude' field must of type 'float'"
        self._longitude = value

    @property
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        assert \
            isinstance(value, float), \
            "The 'altitude' field must of type 'float'"
        self._altitude = value

    @property
    def position_covariance(self):
        """Message field 'position_covariance'."""
        return self._position_covariance

    @position_covariance.setter
    def position_covariance(self, value):
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
             len(value) == 9 and
             all([isinstance(v, float) for v in value]) and
             True), \
            "The 'position_covariance' field must be a set or sequence with length 9 and each value of type 'float'"
        self._position_covariance = value

    @property
    def position_covariance_type(self):
        """Message field 'position_covariance_type'."""
        return self._position_covariance_type

    @position_covariance_type.setter
    def position_covariance_type(self, value):
        assert \
            isinstance(value, int), \
            "The 'position_covariance_type' field must of type 'int'"
        assert value >= 0 and value < 256, \
            "The 'position_covariance_type' field must be an unsigned integer in [0, 256)"
        self._position_covariance_type = value
