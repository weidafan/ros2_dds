# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'SetParametersResult'."""

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
            logger = logging.getLogger('rosidl_generator_py.SetParametersResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_set_parameters_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg_set_parameters_result
            cls._TYPE_SUPPORT = module.type_support_msg_set_parameters_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_set_parameters_result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetParametersResult(metaclass=Metaclass):
    """Message class 'SetParametersResult'."""

    __slots__ = [
        '_successful',
        '_reason',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.successful = kwargs.get('successful', bool())
        self.reason = kwargs.get('reason', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def successful(self):
        """Message field 'successful'."""
        return self._successful

    @successful.setter
    def successful(self, value):
        assert \
            isinstance(value, bool), \
            "The 'successful' field must of type 'bool'"
        self._successful = value

    @property
    def reason(self):
        """Message field 'reason'."""
        return self._reason

    @reason.setter
    def reason(self, value):
        assert \
            isinstance(value, str), \
            "The 'reason' field must of type 'str'"
        self._reason = value
