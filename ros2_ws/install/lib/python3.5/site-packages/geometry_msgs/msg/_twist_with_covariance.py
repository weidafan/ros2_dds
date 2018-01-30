# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'TwistWithCovariance'."""

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
            module = import_type_support('geometry_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.TwistWithCovariance')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_twist_with_covariance
            cls._CONVERT_TO_PY = module.convert_to_py_msg_twist_with_covariance
            cls._TYPE_SUPPORT = module.type_support_msg_twist_with_covariance
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_twist_with_covariance
            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TwistWithCovariance(metaclass=Metaclass):
    """Message class 'TwistWithCovariance'."""

    __slots__ = [
        '_twist',
        '_covariance',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from geometry_msgs.msg import Twist
        self.twist = kwargs.get('twist', Twist())
        self.covariance = kwargs.get(
            'covariance',
            list([float() for x in range(36)])
        )

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def twist(self):
        """Message field 'twist'."""
        return self._twist

    @twist.setter
    def twist(self, value):
        from geometry_msgs.msg import Twist
        assert \
            isinstance(value, Twist), \
            "The 'twist' field must be a sub message of type 'Twist'"
        self._twist = value

    @property
    def covariance(self):
        """Message field 'covariance'."""
        return self._covariance

    @covariance.setter
    def covariance(self, value):
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
             len(value) == 36 and
             all([isinstance(v, float) for v in value]) and
             True), \
            "The 'covariance' field must be a set or sequence with length 36 and each value of type 'float'"
        self._covariance = value
