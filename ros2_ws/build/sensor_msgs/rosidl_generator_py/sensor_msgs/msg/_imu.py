# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'Imu'."""

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
            logger = logging.getLogger('rosidl_generator_py.Imu')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_imu
            cls._CONVERT_TO_PY = module.convert_to_py_msg_imu
            cls._TYPE_SUPPORT = module.type_support_msg_imu
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_imu
            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()
            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()
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


class Imu(metaclass=Metaclass):
    """Message class 'Imu'."""

    __slots__ = [
        '_header',
        '_orientation',
        '_orientation_covariance',
        '_angular_velocity',
        '_angular_velocity_covariance',
        '_linear_acceleration',
        '_linear_acceleration_covariance',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Quaternion
        self.orientation = kwargs.get('orientation', Quaternion())
        self.orientation_covariance = kwargs.get(
            'orientation_covariance',
            list([float() for x in range(9)])
        )
        from geometry_msgs.msg import Vector3
        self.angular_velocity = kwargs.get('angular_velocity', Vector3())
        self.angular_velocity_covariance = kwargs.get(
            'angular_velocity_covariance',
            list([float() for x in range(9)])
        )
        from geometry_msgs.msg import Vector3
        self.linear_acceleration = kwargs.get('linear_acceleration', Vector3())
        self.linear_acceleration_covariance = kwargs.get(
            'linear_acceleration_covariance',
            list([float() for x in range(9)])
        )

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
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        from geometry_msgs.msg import Quaternion
        assert \
            isinstance(value, Quaternion), \
            "The 'orientation' field must be a sub message of type 'Quaternion'"
        self._orientation = value

    @property
    def orientation_covariance(self):
        """Message field 'orientation_covariance'."""
        return self._orientation_covariance

    @orientation_covariance.setter
    def orientation_covariance(self, value):
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
            "The 'orientation_covariance' field must be a set or sequence with length 9 and each value of type 'float'"
        self._orientation_covariance = value

    @property
    def angular_velocity(self):
        """Message field 'angular_velocity'."""
        return self._angular_velocity

    @angular_velocity.setter
    def angular_velocity(self, value):
        from geometry_msgs.msg import Vector3
        assert \
            isinstance(value, Vector3), \
            "The 'angular_velocity' field must be a sub message of type 'Vector3'"
        self._angular_velocity = value

    @property
    def angular_velocity_covariance(self):
        """Message field 'angular_velocity_covariance'."""
        return self._angular_velocity_covariance

    @angular_velocity_covariance.setter
    def angular_velocity_covariance(self, value):
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
            "The 'angular_velocity_covariance' field must be a set or sequence with length 9 and each value of type 'float'"
        self._angular_velocity_covariance = value

    @property
    def linear_acceleration(self):
        """Message field 'linear_acceleration'."""
        return self._linear_acceleration

    @linear_acceleration.setter
    def linear_acceleration(self, value):
        from geometry_msgs.msg import Vector3
        assert \
            isinstance(value, Vector3), \
            "The 'linear_acceleration' field must be a sub message of type 'Vector3'"
        self._linear_acceleration = value

    @property
    def linear_acceleration_covariance(self):
        """Message field 'linear_acceleration_covariance'."""
        return self._linear_acceleration_covariance

    @linear_acceleration_covariance.setter
    def linear_acceleration_covariance(self, value):
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
            "The 'linear_acceleration_covariance' field must be a set or sequence with length 9 and each value of type 'float'"
        self._linear_acceleration_covariance = value
