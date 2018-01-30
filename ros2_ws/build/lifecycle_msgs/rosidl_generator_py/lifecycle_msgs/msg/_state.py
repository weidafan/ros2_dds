# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'State'."""

    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PRIMARY_STATE_UNKNOWN': 0,
        'PRIMARY_STATE_UNCONFIGURED': 1,
        'PRIMARY_STATE_INACTIVE': 2,
        'PRIMARY_STATE_ACTIVE': 3,
        'PRIMARY_STATE_FINALIZED': 4,
        'TRANSITION_STATE_CONFIGURING': 10,
        'TRANSITION_STATE_CLEANINGUP': 11,
        'TRANSITION_STATE_SHUTTINGDOWN': 12,
        'TRANSITION_STATE_ACTIVATING': 13,
        'TRANSITION_STATE_DEACTIVATING': 14,
        'TRANSITION_STATE_ERRORPROCESSING': 15,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lifecycle_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.State')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg_state
            cls._TYPE_SUPPORT = module.type_support_msg_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PRIMARY_STATE_UNKNOWN': cls.__constants['PRIMARY_STATE_UNKNOWN'],
            'PRIMARY_STATE_UNCONFIGURED': cls.__constants['PRIMARY_STATE_UNCONFIGURED'],
            'PRIMARY_STATE_INACTIVE': cls.__constants['PRIMARY_STATE_INACTIVE'],
            'PRIMARY_STATE_ACTIVE': cls.__constants['PRIMARY_STATE_ACTIVE'],
            'PRIMARY_STATE_FINALIZED': cls.__constants['PRIMARY_STATE_FINALIZED'],
            'TRANSITION_STATE_CONFIGURING': cls.__constants['TRANSITION_STATE_CONFIGURING'],
            'TRANSITION_STATE_CLEANINGUP': cls.__constants['TRANSITION_STATE_CLEANINGUP'],
            'TRANSITION_STATE_SHUTTINGDOWN': cls.__constants['TRANSITION_STATE_SHUTTINGDOWN'],
            'TRANSITION_STATE_ACTIVATING': cls.__constants['TRANSITION_STATE_ACTIVATING'],
            'TRANSITION_STATE_DEACTIVATING': cls.__constants['TRANSITION_STATE_DEACTIVATING'],
            'TRANSITION_STATE_ERRORPROCESSING': cls.__constants['TRANSITION_STATE_ERRORPROCESSING'],
        }

    @property
    def PRIMARY_STATE_UNKNOWN(self):
        """Message constant 'PRIMARY_STATE_UNKNOWN'."""
        return Metaclass.__constants['PRIMARY_STATE_UNKNOWN']

    @property
    def PRIMARY_STATE_UNCONFIGURED(self):
        """Message constant 'PRIMARY_STATE_UNCONFIGURED'."""
        return Metaclass.__constants['PRIMARY_STATE_UNCONFIGURED']

    @property
    def PRIMARY_STATE_INACTIVE(self):
        """Message constant 'PRIMARY_STATE_INACTIVE'."""
        return Metaclass.__constants['PRIMARY_STATE_INACTIVE']

    @property
    def PRIMARY_STATE_ACTIVE(self):
        """Message constant 'PRIMARY_STATE_ACTIVE'."""
        return Metaclass.__constants['PRIMARY_STATE_ACTIVE']

    @property
    def PRIMARY_STATE_FINALIZED(self):
        """Message constant 'PRIMARY_STATE_FINALIZED'."""
        return Metaclass.__constants['PRIMARY_STATE_FINALIZED']

    @property
    def TRANSITION_STATE_CONFIGURING(self):
        """Message constant 'TRANSITION_STATE_CONFIGURING'."""
        return Metaclass.__constants['TRANSITION_STATE_CONFIGURING']

    @property
    def TRANSITION_STATE_CLEANINGUP(self):
        """Message constant 'TRANSITION_STATE_CLEANINGUP'."""
        return Metaclass.__constants['TRANSITION_STATE_CLEANINGUP']

    @property
    def TRANSITION_STATE_SHUTTINGDOWN(self):
        """Message constant 'TRANSITION_STATE_SHUTTINGDOWN'."""
        return Metaclass.__constants['TRANSITION_STATE_SHUTTINGDOWN']

    @property
    def TRANSITION_STATE_ACTIVATING(self):
        """Message constant 'TRANSITION_STATE_ACTIVATING'."""
        return Metaclass.__constants['TRANSITION_STATE_ACTIVATING']

    @property
    def TRANSITION_STATE_DEACTIVATING(self):
        """Message constant 'TRANSITION_STATE_DEACTIVATING'."""
        return Metaclass.__constants['TRANSITION_STATE_DEACTIVATING']

    @property
    def TRANSITION_STATE_ERRORPROCESSING(self):
        """Message constant 'TRANSITION_STATE_ERRORPROCESSING'."""
        return Metaclass.__constants['TRANSITION_STATE_ERRORPROCESSING']


class State(metaclass=Metaclass):
    """
    Message class 'State'.

    Constants:
      PRIMARY_STATE_UNKNOWN
      PRIMARY_STATE_UNCONFIGURED
      PRIMARY_STATE_INACTIVE
      PRIMARY_STATE_ACTIVE
      PRIMARY_STATE_FINALIZED
      TRANSITION_STATE_CONFIGURING
      TRANSITION_STATE_CLEANINGUP
      TRANSITION_STATE_SHUTTINGDOWN
      TRANSITION_STATE_ACTIVATING
      TRANSITION_STATE_DEACTIVATING
      TRANSITION_STATE_ERRORPROCESSING
    """

    __slots__ = [
        '_id',
        '_label',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.id = kwargs.get('id', int())
        self.label = kwargs.get('label', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

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
    def label(self):
        """Message field 'label'."""
        return self._label

    @label.setter
    def label(self, value):
        assert \
            isinstance(value, str), \
            "The 'label' field must of type 'str'"
        self._label = value
