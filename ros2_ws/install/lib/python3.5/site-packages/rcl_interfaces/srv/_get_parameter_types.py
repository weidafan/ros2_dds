# generated from rosidl_generator_py/resource/_srv.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'GetParameterTypes'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rcl_interfaces')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.GetParameterTypes')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv_get_parameter_types
            from rcl_interfaces.srv import _get_parameter_types__request
            if _get_parameter_types__request.Metaclass._TYPE_SUPPORT is None:
                _get_parameter_types__request.Metaclass.__import_type_support__()
            from rcl_interfaces.srv import _get_parameter_types__response
            if _get_parameter_types__response.Metaclass._TYPE_SUPPORT is None:
                _get_parameter_types__response.Metaclass.__import_type_support__()


class GetParameterTypes(metaclass=Metaclass):
    from rcl_interfaces.srv._get_parameter_types__request import GetParameterTypes_Request as Request
    from rcl_interfaces.srv._get_parameter_types__response import GetParameterTypes_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instanciated')
