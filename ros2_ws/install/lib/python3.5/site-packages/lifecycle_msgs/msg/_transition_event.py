# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'TransitionEvent'."""

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
            module = import_type_support('lifecycle_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.TransitionEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_transition_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg_transition_event
            cls._TYPE_SUPPORT = module.type_support_msg_transition_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_transition_event
            from lifecycle_msgs.msg import State
            if State.__class__._TYPE_SUPPORT is None:
                State.__class__.__import_type_support__()
            from lifecycle_msgs.msg import Transition
            if Transition.__class__._TYPE_SUPPORT is None:
                Transition.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TransitionEvent(metaclass=Metaclass):
    """Message class 'TransitionEvent'."""

    __slots__ = [
        '_timestamp',
        '_transition',
        '_start_state',
        '_goal_state',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.timestamp = kwargs.get('timestamp', int())
        from lifecycle_msgs.msg import Transition
        self.transition = kwargs.get('transition', Transition())
        from lifecycle_msgs.msg import State
        self.start_state = kwargs.get('start_state', State())
        from lifecycle_msgs.msg import State
        self.goal_state = kwargs.get('goal_state', State())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        assert \
            isinstance(value, int), \
            "The 'timestamp' field must of type 'int'"
        assert value >= 0 and value < 18446744073709551616, \
            "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551616)"
        self._timestamp = value

    @property
    def transition(self):
        """Message field 'transition'."""
        return self._transition

    @transition.setter
    def transition(self, value):
        from lifecycle_msgs.msg import Transition
        assert \
            isinstance(value, Transition), \
            "The 'transition' field must be a sub message of type 'Transition'"
        self._transition = value

    @property
    def start_state(self):
        """Message field 'start_state'."""
        return self._start_state

    @start_state.setter
    def start_state(self, value):
        from lifecycle_msgs.msg import State
        assert \
            isinstance(value, State), \
            "The 'start_state' field must be a sub message of type 'State'"
        self._start_state = value

    @property
    def goal_state(self):
        """Message field 'goal_state'."""
        return self._goal_state

    @goal_state.setter
    def goal_state(self, value):
        from lifecycle_msgs.msg import State
        assert \
            isinstance(value, State), \
            "The 'goal_state' field must be a sub message of type 'State'"
        self._goal_state = value
