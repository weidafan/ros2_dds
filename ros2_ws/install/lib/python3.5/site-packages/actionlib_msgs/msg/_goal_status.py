# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'GoalStatus'."""

    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PENDING': 0,
        'ACTIVE': 1,
        'PREEMPTED': 2,
        'SUCCEEDED': 3,
        'ABORTED': 4,
        'REJECTED': 5,
        'PREEMPTING': 6,
        'RECALLING': 7,
        'RECALLED': 8,
        'LOST': 9,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('actionlib_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.GoalStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_goal_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg_goal_status
            cls._TYPE_SUPPORT = module.type_support_msg_goal_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_goal_status
            from actionlib_msgs.msg import GoalID
            if GoalID.__class__._TYPE_SUPPORT is None:
                GoalID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PENDING': cls.__constants['PENDING'],
            'ACTIVE': cls.__constants['ACTIVE'],
            'PREEMPTED': cls.__constants['PREEMPTED'],
            'SUCCEEDED': cls.__constants['SUCCEEDED'],
            'ABORTED': cls.__constants['ABORTED'],
            'REJECTED': cls.__constants['REJECTED'],
            'PREEMPTING': cls.__constants['PREEMPTING'],
            'RECALLING': cls.__constants['RECALLING'],
            'RECALLED': cls.__constants['RECALLED'],
            'LOST': cls.__constants['LOST'],
        }

    @property
    def PENDING(self):
        """Message constant 'PENDING'."""
        return Metaclass.__constants['PENDING']

    @property
    def ACTIVE(self):
        """Message constant 'ACTIVE'."""
        return Metaclass.__constants['ACTIVE']

    @property
    def PREEMPTED(self):
        """Message constant 'PREEMPTED'."""
        return Metaclass.__constants['PREEMPTED']

    @property
    def SUCCEEDED(self):
        """Message constant 'SUCCEEDED'."""
        return Metaclass.__constants['SUCCEEDED']

    @property
    def ABORTED(self):
        """Message constant 'ABORTED'."""
        return Metaclass.__constants['ABORTED']

    @property
    def REJECTED(self):
        """Message constant 'REJECTED'."""
        return Metaclass.__constants['REJECTED']

    @property
    def PREEMPTING(self):
        """Message constant 'PREEMPTING'."""
        return Metaclass.__constants['PREEMPTING']

    @property
    def RECALLING(self):
        """Message constant 'RECALLING'."""
        return Metaclass.__constants['RECALLING']

    @property
    def RECALLED(self):
        """Message constant 'RECALLED'."""
        return Metaclass.__constants['RECALLED']

    @property
    def LOST(self):
        """Message constant 'LOST'."""
        return Metaclass.__constants['LOST']


class GoalStatus(metaclass=Metaclass):
    """
    Message class 'GoalStatus'.

    Constants:
      PENDING
      ACTIVE
      PREEMPTED
      SUCCEEDED
      ABORTED
      REJECTED
      PREEMPTING
      RECALLING
      RECALLED
      LOST
    """

    __slots__ = [
        '_goal_id',
        '_status',
        '_text',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from actionlib_msgs.msg import GoalID
        self.goal_id = kwargs.get('goal_id', GoalID())
        self.status = kwargs.get('status', int())
        self.text = kwargs.get('text', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        from actionlib_msgs.msg import GoalID
        assert \
            isinstance(value, GoalID), \
            "The 'goal_id' field must be a sub message of type 'GoalID'"
        self._goal_id = value

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        assert \
            isinstance(value, int), \
            "The 'status' field must of type 'int'"
        assert value >= 0 and value < 256, \
            "The 'status' field must be an unsigned integer in [0, 256)"
        self._status = value

    @property
    def text(self):
        """Message field 'text'."""
        return self._text

    @text.setter
    def text(self, value):
        assert \
            isinstance(value, str), \
            "The 'text' field must of type 'str'"
        self._text = value
