# generated from rosidl_generator_py/resource/_srv.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'GetState'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lifecycle_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.GetState')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv_get_state
            from lifecycle_msgs.srv import _get_state__request
            if _get_state__request.Metaclass._TYPE_SUPPORT is None:
                _get_state__request.Metaclass.__import_type_support__()
            from lifecycle_msgs.srv import _get_state__response
            if _get_state__response.Metaclass._TYPE_SUPPORT is None:
                _get_state__response.Metaclass.__import_type_support__()


class GetState(metaclass=Metaclass):
    from lifecycle_msgs.srv._get_state__request import GetState_Request as Request
    from lifecycle_msgs.srv._get_state__response import GetState_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instanciated')
