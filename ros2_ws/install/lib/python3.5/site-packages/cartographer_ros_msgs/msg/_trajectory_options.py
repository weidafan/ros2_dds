# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'TrajectoryOptions'."""

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
            module = import_type_support('cartographer_ros_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.TrajectoryOptions')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_trajectory_options
            cls._CONVERT_TO_PY = module.convert_to_py_msg_trajectory_options
            cls._TYPE_SUPPORT = module.type_support_msg_trajectory_options
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_trajectory_options

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryOptions(metaclass=Metaclass):
    """Message class 'TrajectoryOptions'."""

    __slots__ = [
        '_tracking_frame',
        '_published_frame',
        '_odom_frame',
        '_provide_odom_frame',
        '_use_odometry',
        '_use_laser_scan',
        '_use_multi_echo_laser_scan',
        '_num_point_clouds',
        '_trajectory_builder_options_proto',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.tracking_frame = kwargs.get('tracking_frame', str())
        self.published_frame = kwargs.get('published_frame', str())
        self.odom_frame = kwargs.get('odom_frame', str())
        self.provide_odom_frame = kwargs.get('provide_odom_frame', bool())
        self.use_odometry = kwargs.get('use_odometry', bool())
        self.use_laser_scan = kwargs.get('use_laser_scan', bool())
        self.use_multi_echo_laser_scan = kwargs.get('use_multi_echo_laser_scan', bool())
        self.num_point_clouds = kwargs.get('num_point_clouds', int())
        self.trajectory_builder_options_proto = kwargs.get('trajectory_builder_options_proto', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def tracking_frame(self):
        """Message field 'tracking_frame'."""
        return self._tracking_frame

    @tracking_frame.setter
    def tracking_frame(self, value):
        assert \
            isinstance(value, str), \
            "The 'tracking_frame' field must of type 'str'"
        self._tracking_frame = value

    @property
    def published_frame(self):
        """Message field 'published_frame'."""
        return self._published_frame

    @published_frame.setter
    def published_frame(self, value):
        assert \
            isinstance(value, str), \
            "The 'published_frame' field must of type 'str'"
        self._published_frame = value

    @property
    def odom_frame(self):
        """Message field 'odom_frame'."""
        return self._odom_frame

    @odom_frame.setter
    def odom_frame(self, value):
        assert \
            isinstance(value, str), \
            "The 'odom_frame' field must of type 'str'"
        self._odom_frame = value

    @property
    def provide_odom_frame(self):
        """Message field 'provide_odom_frame'."""
        return self._provide_odom_frame

    @provide_odom_frame.setter
    def provide_odom_frame(self, value):
        assert \
            isinstance(value, bool), \
            "The 'provide_odom_frame' field must of type 'bool'"
        self._provide_odom_frame = value

    @property
    def use_odometry(self):
        """Message field 'use_odometry'."""
        return self._use_odometry

    @use_odometry.setter
    def use_odometry(self, value):
        assert \
            isinstance(value, bool), \
            "The 'use_odometry' field must of type 'bool'"
        self._use_odometry = value

    @property
    def use_laser_scan(self):
        """Message field 'use_laser_scan'."""
        return self._use_laser_scan

    @use_laser_scan.setter
    def use_laser_scan(self, value):
        assert \
            isinstance(value, bool), \
            "The 'use_laser_scan' field must of type 'bool'"
        self._use_laser_scan = value

    @property
    def use_multi_echo_laser_scan(self):
        """Message field 'use_multi_echo_laser_scan'."""
        return self._use_multi_echo_laser_scan

    @use_multi_echo_laser_scan.setter
    def use_multi_echo_laser_scan(self, value):
        assert \
            isinstance(value, bool), \
            "The 'use_multi_echo_laser_scan' field must of type 'bool'"
        self._use_multi_echo_laser_scan = value

    @property
    def num_point_clouds(self):
        """Message field 'num_point_clouds'."""
        return self._num_point_clouds

    @num_point_clouds.setter
    def num_point_clouds(self, value):
        assert \
            isinstance(value, int), \
            "The 'num_point_clouds' field must of type 'int'"
        assert value >= -2147483648 and value < 2147483648, \
            "The 'num_point_clouds' field must be an integer in [-2147483648, 2147483648)"
        self._num_point_clouds = value

    @property
    def trajectory_builder_options_proto(self):
        """Message field 'trajectory_builder_options_proto'."""
        return self._trajectory_builder_options_proto

    @trajectory_builder_options_proto.setter
    def trajectory_builder_options_proto(self, value):
        assert \
            isinstance(value, str), \
            "The 'trajectory_builder_options_proto' field must of type 'str'"
        self._trajectory_builder_options_proto = value
