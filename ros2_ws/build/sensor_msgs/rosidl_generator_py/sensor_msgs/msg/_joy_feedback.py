# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'JoyFeedback'."""

    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TYPE_LED': 0,
        'TYPE_RUMBLE': 1,
        'TYPE_BUZZER': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sensor_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.JoyFeedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_joy_feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg_joy_feedback
            cls._TYPE_SUPPORT = module.type_support_msg_joy_feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_joy_feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TYPE_LED': cls.__constants['TYPE_LED'],
            'TYPE_RUMBLE': cls.__constants['TYPE_RUMBLE'],
            'TYPE_BUZZER': cls.__constants['TYPE_BUZZER'],
        }

    @property
    def TYPE_LED(self):
        """Message constant 'TYPE_LED'."""
        return Metaclass.__constants['TYPE_LED']

    @property
    def TYPE_RUMBLE(self):
        """Message constant 'TYPE_RUMBLE'."""
        return Metaclass.__constants['TYPE_RUMBLE']

    @property
    def TYPE_BUZZER(self):
        """Message constant 'TYPE_BUZZER'."""
        return Metaclass.__constants['TYPE_BUZZER']


class JoyFeedback(metaclass=Metaclass):
    """
    Message class 'JoyFeedback'.

    Constants:
      TYPE_LED
      TYPE_RUMBLE
      TYPE_BUZZER
    """

    __slots__ = [
        '_type',
        '_id',
        '_intensity',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.type = kwargs.get('type', int())
        self.id = kwargs.get('id', int())
        self.intensity = kwargs.get('intensity', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def type(self):
        """Message field 'type'."""
        return self._type

    @type.setter
    def type(self, value):
        assert \
            isinstance(value, int), \
            "The 'type' field must of type 'int'"
        assert value >= 0 and value < 256, \
            "The 'type' field must be an unsigned integer in [0, 256)"
        self._type = value

    @property
    def id(self):
        """Message field 'id'."""
        return self._id

    @id.setter
    def id(self, value):
        assert \
            isinstance(value, int), \
            "The 'id' field must of type 'int'"
        assert value >= 0 and value < 256, \
            "The 'id' field must be an unsigned integer in [0, 256)"
        self._id = value

    @property
    def intensity(self):
        """Message field 'intensity'."""
        return self._intensity

    @intensity.setter
    def intensity(self, value):
        assert \
            isinstance(value, float), \
            "The 'intensity' field must of type 'float'"
        self._intensity = value