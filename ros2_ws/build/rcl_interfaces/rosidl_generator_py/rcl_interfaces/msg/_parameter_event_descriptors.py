# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'ParameterEventDescriptors'."""

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
            module = import_type_support('rcl_interfaces')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.ParameterEventDescriptors')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_parameter_event_descriptors
            cls._CONVERT_TO_PY = module.convert_to_py_msg_parameter_event_descriptors
            cls._TYPE_SUPPORT = module.type_support_msg_parameter_event_descriptors
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_parameter_event_descriptors
            from rcl_interfaces.msg import ParameterDescriptor
            if ParameterDescriptor.__class__._TYPE_SUPPORT is None:
                ParameterDescriptor.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ParameterEventDescriptors(metaclass=Metaclass):
    """Message class 'ParameterEventDescriptors'."""

    __slots__ = [
        '_new_parameters',
        '_changed_parameters',
        '_deleted_parameters',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.new_parameters = kwargs.get('new_parameters', list())
        self.changed_parameters = kwargs.get('changed_parameters', list())
        self.deleted_parameters = kwargs.get('deleted_parameters', list())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def new_parameters(self):
        """Message field 'new_parameters'."""
        return self._new_parameters

    @new_parameters.setter
    def new_parameters(self, value):
        from rcl_interfaces.msg import ParameterDescriptor
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
             all([isinstance(v, ParameterDescriptor) for v in value]) and
             True), \
            "The 'new_parameters' field must be a set or sequence and each value of type 'ParameterDescriptor'"
        self._new_parameters = value

    @property
    def changed_parameters(self):
        """Message field 'changed_parameters'."""
        return self._changed_parameters

    @changed_parameters.setter
    def changed_parameters(self, value):
        from rcl_interfaces.msg import ParameterDescriptor
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
             all([isinstance(v, ParameterDescriptor) for v in value]) and
             True), \
            "The 'changed_parameters' field must be a set or sequence and each value of type 'ParameterDescriptor'"
        self._changed_parameters = value

    @property
    def deleted_parameters(self):
        """Message field 'deleted_parameters'."""
        return self._deleted_parameters

    @deleted_parameters.setter
    def deleted_parameters(self, value):
        from rcl_interfaces.msg import ParameterDescriptor
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
             all([isinstance(v, ParameterDescriptor) for v in value]) and
             True), \
            "The 'deleted_parameters' field must be a set or sequence and each value of type 'ParameterDescriptor'"
        self._deleted_parameters = value
