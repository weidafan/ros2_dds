# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'Transition'."""

    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TRANSITION_CREATE': 0,
        'TRANSITION_CONFIGURE': 1,
        'TRANSITION_CLEANUP': 2,
        'TRANSITION_ACTIVATE': 3,
        'TRANSITION_DEACTIVATE': 4,
        'TRANSITION_SHUTDOWN': 5,
        'TRANSITION_DESTROY': 6,
        'TRANSITION_ON_CONFIGURE_SUCCESS': 10,
        'TRANSITION_ON_CONFIGURE_FAILURE': 11,
        'TRANSITION_ON_CONFIGURE_ERROR': 12,
        'TRANSITION_ON_CLEANUP_SUCCESS': 20,
        'TRANSITION_ON_CLEANUP_FAILURE': 21,
        'TRANSITION_ON_CLEANUP_ERROR': 22,
        'TRANSITION_ON_ACTIVATE_SUCCESS': 30,
        'TRANSITION_ON_ACTIVATE_FAILURE': 31,
        'TRANSITION_ON_ACTIVATE_ERROR': 32,
        'TRANSITION_ON_DEACTIVATE_SUCCESS': 40,
        'TRANSITION_ON_DEACTIVATE_FAILURE': 41,
        'TRANSITION_ON_DEACTIVATE_ERROR': 42,
        'TRANSITION_UNCONFIGURED_SHUTDOWN': 50,
        'TRANSITION_INACTIVE_SHUTDOWN': 51,
        'TRANSITION_ACTIVE_SHUTDOWN': 52,
        'TRANSITION_ON_SHUTDOWN_SUCCESS': 53,
        'TRANSITION_ON_SHUTDOWN_FAILURE': 54,
        'TRANSITION_ON_SHUTDOWN_ERROR': 55,
        'TRANSITION_ON_ERROR_SUCCESS': 60,
        'TRANSITION_ON_ERROR_FAILURE': 61,
        'TRANSITION_ON_ERROR_ERROR': 62,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lifecycle_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.Transition')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_transition
            cls._CONVERT_TO_PY = module.convert_to_py_msg_transition
            cls._TYPE_SUPPORT = module.type_support_msg_transition
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_transition

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TRANSITION_CREATE': cls.__constants['TRANSITION_CREATE'],
            'TRANSITION_CONFIGURE': cls.__constants['TRANSITION_CONFIGURE'],
            'TRANSITION_CLEANUP': cls.__constants['TRANSITION_CLEANUP'],
            'TRANSITION_ACTIVATE': cls.__constants['TRANSITION_ACTIVATE'],
            'TRANSITION_DEACTIVATE': cls.__constants['TRANSITION_DEACTIVATE'],
            'TRANSITION_SHUTDOWN': cls.__constants['TRANSITION_SHUTDOWN'],
            'TRANSITION_DESTROY': cls.__constants['TRANSITION_DESTROY'],
            'TRANSITION_ON_CONFIGURE_SUCCESS': cls.__constants['TRANSITION_ON_CONFIGURE_SUCCESS'],
            'TRANSITION_ON_CONFIGURE_FAILURE': cls.__constants['TRANSITION_ON_CONFIGURE_FAILURE'],
            'TRANSITION_ON_CONFIGURE_ERROR': cls.__constants['TRANSITION_ON_CONFIGURE_ERROR'],
            'TRANSITION_ON_CLEANUP_SUCCESS': cls.__constants['TRANSITION_ON_CLEANUP_SUCCESS'],
            'TRANSITION_ON_CLEANUP_FAILURE': cls.__constants['TRANSITION_ON_CLEANUP_FAILURE'],
            'TRANSITION_ON_CLEANUP_ERROR': cls.__constants['TRANSITION_ON_CLEANUP_ERROR'],
            'TRANSITION_ON_ACTIVATE_SUCCESS': cls.__constants['TRANSITION_ON_ACTIVATE_SUCCESS'],
            'TRANSITION_ON_ACTIVATE_FAILURE': cls.__constants['TRANSITION_ON_ACTIVATE_FAILURE'],
            'TRANSITION_ON_ACTIVATE_ERROR': cls.__constants['TRANSITION_ON_ACTIVATE_ERROR'],
            'TRANSITION_ON_DEACTIVATE_SUCCESS': cls.__constants['TRANSITION_ON_DEACTIVATE_SUCCESS'],
            'TRANSITION_ON_DEACTIVATE_FAILURE': cls.__constants['TRANSITION_ON_DEACTIVATE_FAILURE'],
            'TRANSITION_ON_DEACTIVATE_ERROR': cls.__constants['TRANSITION_ON_DEACTIVATE_ERROR'],
            'TRANSITION_UNCONFIGURED_SHUTDOWN': cls.__constants['TRANSITION_UNCONFIGURED_SHUTDOWN'],
            'TRANSITION_INACTIVE_SHUTDOWN': cls.__constants['TRANSITION_INACTIVE_SHUTDOWN'],
            'TRANSITION_ACTIVE_SHUTDOWN': cls.__constants['TRANSITION_ACTIVE_SHUTDOWN'],
            'TRANSITION_ON_SHUTDOWN_SUCCESS': cls.__constants['TRANSITION_ON_SHUTDOWN_SUCCESS'],
            'TRANSITION_ON_SHUTDOWN_FAILURE': cls.__constants['TRANSITION_ON_SHUTDOWN_FAILURE'],
            'TRANSITION_ON_SHUTDOWN_ERROR': cls.__constants['TRANSITION_ON_SHUTDOWN_ERROR'],
            'TRANSITION_ON_ERROR_SUCCESS': cls.__constants['TRANSITION_ON_ERROR_SUCCESS'],
            'TRANSITION_ON_ERROR_FAILURE': cls.__constants['TRANSITION_ON_ERROR_FAILURE'],
            'TRANSITION_ON_ERROR_ERROR': cls.__constants['TRANSITION_ON_ERROR_ERROR'],
        }

    @property
    def TRANSITION_CREATE(self):
        """Message constant 'TRANSITION_CREATE'."""
        return Metaclass.__constants['TRANSITION_CREATE']

    @property
    def TRANSITION_CONFIGURE(self):
        """Message constant 'TRANSITION_CONFIGURE'."""
        return Metaclass.__constants['TRANSITION_CONFIGURE']

    @property
    def TRANSITION_CLEANUP(self):
        """Message constant 'TRANSITION_CLEANUP'."""
        return Metaclass.__constants['TRANSITION_CLEANUP']

    @property
    def TRANSITION_ACTIVATE(self):
        """Message constant 'TRANSITION_ACTIVATE'."""
        return Metaclass.__constants['TRANSITION_ACTIVATE']

    @property
    def TRANSITION_DEACTIVATE(self):
        """Message constant 'TRANSITION_DEACTIVATE'."""
        return Metaclass.__constants['TRANSITION_DEACTIVATE']

    @property
    def TRANSITION_SHUTDOWN(self):
        """Message constant 'TRANSITION_SHUTDOWN'."""
        return Metaclass.__constants['TRANSITION_SHUTDOWN']

    @property
    def TRANSITION_DESTROY(self):
        """Message constant 'TRANSITION_DESTROY'."""
        return Metaclass.__constants['TRANSITION_DESTROY']

    @property
    def TRANSITION_ON_CONFIGURE_SUCCESS(self):
        """Message constant 'TRANSITION_ON_CONFIGURE_SUCCESS'."""
        return Metaclass.__constants['TRANSITION_ON_CONFIGURE_SUCCESS']

    @property
    def TRANSITION_ON_CONFIGURE_FAILURE(self):
        """Message constant 'TRANSITION_ON_CONFIGURE_FAILURE'."""
        return Metaclass.__constants['TRANSITION_ON_CONFIGURE_FAILURE']

    @property
    def TRANSITION_ON_CONFIGURE_ERROR(self):
        """Message constant 'TRANSITION_ON_CONFIGURE_ERROR'."""
        return Metaclass.__constants['TRANSITION_ON_CONFIGURE_ERROR']

    @property
    def TRANSITION_ON_CLEANUP_SUCCESS(self):
        """Message constant 'TRANSITION_ON_CLEANUP_SUCCESS'."""
        return Metaclass.__constants['TRANSITION_ON_CLEANUP_SUCCESS']

    @property
    def TRANSITION_ON_CLEANUP_FAILURE(self):
        """Message constant 'TRANSITION_ON_CLEANUP_FAILURE'."""
        return Metaclass.__constants['TRANSITION_ON_CLEANUP_FAILURE']

    @property
    def TRANSITION_ON_CLEANUP_ERROR(self):
        """Message constant 'TRANSITION_ON_CLEANUP_ERROR'."""
        return Metaclass.__constants['TRANSITION_ON_CLEANUP_ERROR']

    @property
    def TRANSITION_ON_ACTIVATE_SUCCESS(self):
        """Message constant 'TRANSITION_ON_ACTIVATE_SUCCESS'."""
        return Metaclass.__constants['TRANSITION_ON_ACTIVATE_SUCCESS']

    @property
    def TRANSITION_ON_ACTIVATE_FAILURE(self):
        """Message constant 'TRANSITION_ON_ACTIVATE_FAILURE'."""
        return Metaclass.__constants['TRANSITION_ON_ACTIVATE_FAILURE']

    @property
    def TRANSITION_ON_ACTIVATE_ERROR(self):
        """Message constant 'TRANSITION_ON_ACTIVATE_ERROR'."""
        return Metaclass.__constants['TRANSITION_ON_ACTIVATE_ERROR']

    @property
    def TRANSITION_ON_DEACTIVATE_SUCCESS(self):
        """Message constant 'TRANSITION_ON_DEACTIVATE_SUCCESS'."""
        return Metaclass.__constants['TRANSITION_ON_DEACTIVATE_SUCCESS']

    @property
    def TRANSITION_ON_DEACTIVATE_FAILURE(self):
        """Message constant 'TRANSITION_ON_DEACTIVATE_FAILURE'."""
        return Metaclass.__constants['TRANSITION_ON_DEACTIVATE_FAILURE']

    @property
    def TRANSITION_ON_DEACTIVATE_ERROR(self):
        """Message constant 'TRANSITION_ON_DEACTIVATE_ERROR'."""
        return Metaclass.__constants['TRANSITION_ON_DEACTIVATE_ERROR']

    @property
    def TRANSITION_UNCONFIGURED_SHUTDOWN(self):
        """Message constant 'TRANSITION_UNCONFIGURED_SHUTDOWN'."""
        return Metaclass.__constants['TRANSITION_UNCONFIGURED_SHUTDOWN']

    @property
    def TRANSITION_INACTIVE_SHUTDOWN(self):
        """Message constant 'TRANSITION_INACTIVE_SHUTDOWN'."""
        return Metaclass.__constants['TRANSITION_INACTIVE_SHUTDOWN']

    @property
    def TRANSITION_ACTIVE_SHUTDOWN(self):
        """Message constant 'TRANSITION_ACTIVE_SHUTDOWN'."""
        return Metaclass.__constants['TRANSITION_ACTIVE_SHUTDOWN']

    @property
    def TRANSITION_ON_SHUTDOWN_SUCCESS(self):
        """Message constant 'TRANSITION_ON_SHUTDOWN_SUCCESS'."""
        return Metaclass.__constants['TRANSITION_ON_SHUTDOWN_SUCCESS']

    @property
    def TRANSITION_ON_SHUTDOWN_FAILURE(self):
        """Message constant 'TRANSITION_ON_SHUTDOWN_FAILURE'."""
        return Metaclass.__constants['TRANSITION_ON_SHUTDOWN_FAILURE']

    @property
    def TRANSITION_ON_SHUTDOWN_ERROR(self):
        """Message constant 'TRANSITION_ON_SHUTDOWN_ERROR'."""
        return Metaclass.__constants['TRANSITION_ON_SHUTDOWN_ERROR']

    @property
    def TRANSITION_ON_ERROR_SUCCESS(self):
        """Message constant 'TRANSITION_ON_ERROR_SUCCESS'."""
        return Metaclass.__constants['TRANSITION_ON_ERROR_SUCCESS']

    @property
    def TRANSITION_ON_ERROR_FAILURE(self):
        """Message constant 'TRANSITION_ON_ERROR_FAILURE'."""
        return Metaclass.__constants['TRANSITION_ON_ERROR_FAILURE']

    @property
    def TRANSITION_ON_ERROR_ERROR(self):
        """Message constant 'TRANSITION_ON_ERROR_ERROR'."""
        return Metaclass.__constants['TRANSITION_ON_ERROR_ERROR']


class Transition(metaclass=Metaclass):
    """
    Message class 'Transition'.

    Constants:
      TRANSITION_CREATE
      TRANSITION_CONFIGURE
      TRANSITION_CLEANUP
      TRANSITION_ACTIVATE
      TRANSITION_DEACTIVATE
      TRANSITION_SHUTDOWN
      TRANSITION_DESTROY
      TRANSITION_ON_CONFIGURE_SUCCESS
      TRANSITION_ON_CONFIGURE_FAILURE
      TRANSITION_ON_CONFIGURE_ERROR
      TRANSITION_ON_CLEANUP_SUCCESS
      TRANSITION_ON_CLEANUP_FAILURE
      TRANSITION_ON_CLEANUP_ERROR
      TRANSITION_ON_ACTIVATE_SUCCESS
      TRANSITION_ON_ACTIVATE_FAILURE
      TRANSITION_ON_ACTIVATE_ERROR
      TRANSITION_ON_DEACTIVATE_SUCCESS
      TRANSITION_ON_DEACTIVATE_FAILURE
      TRANSITION_ON_DEACTIVATE_ERROR
      TRANSITION_UNCONFIGURED_SHUTDOWN
      TRANSITION_INACTIVE_SHUTDOWN
      TRANSITION_ACTIVE_SHUTDOWN
      TRANSITION_ON_SHUTDOWN_SUCCESS
      TRANSITION_ON_SHUTDOWN_FAILURE
      TRANSITION_ON_SHUTDOWN_ERROR
      TRANSITION_ON_ERROR_SUCCESS
      TRANSITION_ON_ERROR_FAILURE
      TRANSITION_ON_ERROR_ERROR
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
