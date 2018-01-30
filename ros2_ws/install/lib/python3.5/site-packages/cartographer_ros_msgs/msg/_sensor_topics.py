# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'SensorTopics'."""

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
            logger = logging.getLogger('rosidl_generator_py.SensorTopics')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_sensor_topics
            cls._CONVERT_TO_PY = module.convert_to_py_msg_sensor_topics
            cls._TYPE_SUPPORT = module.type_support_msg_sensor_topics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_sensor_topics

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorTopics(metaclass=Metaclass):
    """Message class 'SensorTopics'."""

    __slots__ = [
        '_laser_scan_topic',
        '_multi_echo_laser_scan_topic',
        '_point_cloud2_topic',
        '_imu_topic',
        '_odometry_topic',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.laser_scan_topic = kwargs.get('laser_scan_topic', str())
        self.multi_echo_laser_scan_topic = kwargs.get('multi_echo_laser_scan_topic', str())
        self.point_cloud2_topic = kwargs.get('point_cloud2_topic', str())
        self.imu_topic = kwargs.get('imu_topic', str())
        self.odometry_topic = kwargs.get('odometry_topic', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def laser_scan_topic(self):
        """Message field 'laser_scan_topic'."""
        return self._laser_scan_topic

    @laser_scan_topic.setter
    def laser_scan_topic(self, value):
        assert \
            isinstance(value, str), \
            "The 'laser_scan_topic' field must of type 'str'"
        self._laser_scan_topic = value

    @property
    def multi_echo_laser_scan_topic(self):
        """Message field 'multi_echo_laser_scan_topic'."""
        return self._multi_echo_laser_scan_topic

    @multi_echo_laser_scan_topic.setter
    def multi_echo_laser_scan_topic(self, value):
        assert \
            isinstance(value, str), \
            "The 'multi_echo_laser_scan_topic' field must of type 'str'"
        self._multi_echo_laser_scan_topic = value

    @property
    def point_cloud2_topic(self):
        """Message field 'point_cloud2_topic'."""
        return self._point_cloud2_topic

    @point_cloud2_topic.setter
    def point_cloud2_topic(self, value):
        assert \
            isinstance(value, str), \
            "The 'point_cloud2_topic' field must of type 'str'"
        self._point_cloud2_topic = value

    @property
    def imu_topic(self):
        """Message field 'imu_topic'."""
        return self._imu_topic

    @imu_topic.setter
    def imu_topic(self, value):
        assert \
            isinstance(value, str), \
            "The 'imu_topic' field must of type 'str'"
        self._imu_topic = value

    @property
    def odometry_topic(self):
        """Message field 'odometry_topic'."""
        return self._odometry_topic

    @odometry_topic.setter
    def odometry_topic(self, value):
        assert \
            isinstance(value, str), \
            "The 'odometry_topic' field must of type 'str'"
        self._odometry_topic = value
