# generated from rosidl_generator_py/resource/_srv.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'GetPlan'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.GetPlan')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv_get_plan
            from nav_msgs.srv import _get_plan__request
            if _get_plan__request.Metaclass._TYPE_SUPPORT is None:
                _get_plan__request.Metaclass.__import_type_support__()
            from nav_msgs.srv import _get_plan__response
            if _get_plan__response.Metaclass._TYPE_SUPPORT is None:
                _get_plan__response.Metaclass.__import_type_support__()


class GetPlan(metaclass=Metaclass):
    from nav_msgs.srv._get_plan__request import GetPlan_Request as Request
    from nav_msgs.srv._get_plan__response import GetPlan_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instanciated')
