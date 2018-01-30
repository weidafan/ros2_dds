# generated from rosidl_generator_py/resource/_srv.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'LoadNode'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('composition')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.LoadNode')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv_load_node
            from composition.srv import _load_node__request
            if _load_node__request.Metaclass._TYPE_SUPPORT is None:
                _load_node__request.Metaclass.__import_type_support__()
            from composition.srv import _load_node__response
            if _load_node__response.Metaclass._TYPE_SUPPORT is None:
                _load_node__response.Metaclass.__import_type_support__()


class LoadNode(metaclass=Metaclass):
    from composition.srv._load_node__request import LoadNode_Request as Request
    from composition.srv._load_node__response import LoadNode_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instanciated')
