# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'GetPlan_Response'."""

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
            module = import_type_support('nav_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.GetPlan_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_get_plan__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg_get_plan__response
            cls._TYPE_SUPPORT = module.type_support_msg_get_plan__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_get_plan__response
            from nav_msgs.msg import Path
            if Path.__class__._TYPE_SUPPORT is None:
                Path.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPlan_Response(metaclass=Metaclass):
    """Message class 'GetPlan_Response'."""

    __slots__ = [
        '_plan',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from nav_msgs.msg import Path
        self.plan = kwargs.get('plan', Path())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def plan(self):
        """Message field 'plan'."""
        return self._plan

    @plan.setter
    def plan(self, value):
        from nav_msgs.msg import Path
        assert \
            isinstance(value, Path), \
            "The 'plan' field must be a sub message of type 'Path'"
        self._plan = value
