# generated from rosidl_generator_py/resource/_srv.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'DescribeParameters'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rcl_interfaces')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.DescribeParameters')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv_describe_parameters
            from rcl_interfaces.srv import _describe_parameters__request
            if _describe_parameters__request.Metaclass._TYPE_SUPPORT is None:
                _describe_parameters__request.Metaclass.__import_type_support__()
            from rcl_interfaces.srv import _describe_parameters__response
            if _describe_parameters__response.Metaclass._TYPE_SUPPORT is None:
                _describe_parameters__response.Metaclass.__import_type_support__()


class DescribeParameters(metaclass=Metaclass):
    from rcl_interfaces.srv._describe_parameters__request import DescribeParameters_Request as Request
    from rcl_interfaces.srv._describe_parameters__response import DescribeParameters_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instanciated')
