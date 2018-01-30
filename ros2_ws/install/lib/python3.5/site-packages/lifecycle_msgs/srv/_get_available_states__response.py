# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'GetAvailableStates_Response'."""

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
            logger = logging.getLogger('rosidl_generator_py.GetAvailableStates_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_get_available_states__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg_get_available_states__response
            cls._TYPE_SUPPORT = module.type_support_msg_get_available_states__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_get_available_states__response
            from lifecycle_msgs.msg import State
            if State.__class__._TYPE_SUPPORT is None:
                State.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetAvailableStates_Response(metaclass=Metaclass):
    """Message class 'GetAvailableStates_Response'."""

    __slots__ = [
        '_available_states',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.available_states = kwargs.get('available_states', list())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def available_states(self):
        """Message field 'available_states'."""
        return self._available_states

    @available_states.setter
    def available_states(self, value):
        from lifecycle_msgs.msg import State
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
             all([isinstance(v, State) for v in value]) and
             True), \
            "The 'available_states' field must be a set or sequence and each value of type 'State'"
        self._available_states = value
