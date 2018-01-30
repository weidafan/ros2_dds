# generated from rosidl_generator_py/resource/_srv.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'GetAvailableTransitions'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lifecycle_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.GetAvailableTransitions')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv_get_available_transitions
            from lifecycle_msgs.srv import _get_available_transitions__request
            if _get_available_transitions__request.Metaclass._TYPE_SUPPORT is None:
                _get_available_transitions__request.Metaclass.__import_type_support__()
            from lifecycle_msgs.srv import _get_available_transitions__response
            if _get_available_transitions__response.Metaclass._TYPE_SUPPORT is None:
                _get_available_transitions__response.Metaclass.__import_type_support__()


class GetAvailableTransitions(metaclass=Metaclass):
    from lifecycle_msgs.srv._get_available_transitions__request import GetAvailableTransitions_Request as Request
    from lifecycle_msgs.srv._get_available_transitions__response import GetAvailableTransitions_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instanciated')
