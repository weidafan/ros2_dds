# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'StartTrajectory_Request'."""

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
            logger = logging.getLogger('rosidl_generator_py.StartTrajectory_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_start_trajectory__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg_start_trajectory__request
            cls._TYPE_SUPPORT = module.type_support_msg_start_trajectory__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_start_trajectory__request
            from cartographer_ros_msgs.msg import SensorTopics
            if SensorTopics.__class__._TYPE_SUPPORT is None:
                SensorTopics.__class__.__import_type_support__()
            from cartographer_ros_msgs.msg import TrajectoryOptions
            if TrajectoryOptions.__class__._TYPE_SUPPORT is None:
                TrajectoryOptions.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StartTrajectory_Request(metaclass=Metaclass):
    """Message class 'StartTrajectory_Request'."""

    __slots__ = [
        '_options',
        '_topics',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from cartographer_ros_msgs.msg import TrajectoryOptions
        self.options = kwargs.get('options', TrajectoryOptions())
        from cartographer_ros_msgs.msg import SensorTopics
        self.topics = kwargs.get('topics', SensorTopics())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def options(self):
        """Message field 'options'."""
        return self._options

    @options.setter
    def options(self, value):
        from cartographer_ros_msgs.msg import TrajectoryOptions
        assert \
            isinstance(value, TrajectoryOptions), \
            "The 'options' field must be a sub message of type 'TrajectoryOptions'"
        self._options = value

    @property
    def topics(self):
        """Message field 'topics'."""
        return self._topics

    @topics.setter
    def topics(self, value):
        from cartographer_ros_msgs.msg import SensorTopics
        assert \
            isinstance(value, SensorTopics), \
            "The 'topics' field must be a sub message of type 'SensorTopics'"
        self._topics = value
