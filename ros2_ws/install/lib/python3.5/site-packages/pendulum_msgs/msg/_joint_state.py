# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'JointState'."""

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
            module = import_type_support('pendulum_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.JointState')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_joint_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg_joint_state
            cls._TYPE_SUPPORT = module.type_support_msg_joint_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_joint_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointState(metaclass=Metaclass):
    """Message class 'JointState'."""

    __slots__ = [
        '_position',
        '_velocity',
        '_effort',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.position = kwargs.get('position', float())
        self.velocity = kwargs.get('velocity', float())
        self.effort = kwargs.get('effort', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        assert \
            isinstance(value, float), \
            "The 'position' field must of type 'float'"
        self._position = value

    @property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        assert \
            isinstance(value, float), \
            "The 'velocity' field must of type 'float'"
        self._velocity = value

    @property
    def effort(self):
        """Message field 'effort'."""
        return self._effort

    @effort.setter
    def effort(self, value):
        assert \
            isinstance(value, float), \
            "The 'effort' field must of type 'float'"
        self._effort = value
