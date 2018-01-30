# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'Twist'."""

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
            logger = logging.getLogger('rosidl_generator_py.Twist')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_twist
            cls._CONVERT_TO_PY = module.convert_to_py_msg_twist
            cls._TYPE_SUPPORT = module.type_support_msg_twist
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_twist
            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Twist(metaclass=Metaclass):
    """Message class 'Twist'."""

    __slots__ = [
        '_linear',
        '_angular',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from geometry_msgs.msg import Vector3
        self.linear = kwargs.get('linear', Vector3())
        from geometry_msgs.msg import Vector3
        self.angular = kwargs.get('angular', Vector3())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def linear(self):
        """Message field 'linear'."""
        return self._linear

    @linear.setter
    def linear(self, value):
        from geometry_msgs.msg import Vector3
        assert \
            isinstance(value, Vector3), \
            "The 'linear' field must be a sub message of type 'Vector3'"
        self._linear = value

    @property
    def angular(self):
        """Message field 'angular'."""
        return self._angular

    @angular.setter
    def angular(self, value):
        from geometry_msgs.msg import Vector3
        assert \
            isinstance(value, Vector3), \
            "The 'angular' field must be a sub message of type 'Vector3'"
        self._angular = value
