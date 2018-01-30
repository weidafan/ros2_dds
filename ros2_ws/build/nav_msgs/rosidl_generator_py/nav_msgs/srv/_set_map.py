# generated from rosidl_generator_py/resource/_srv.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'SetMap'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.SetMap')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv_set_map
            from nav_msgs.srv import _set_map__request
            if _set_map__request.Metaclass._TYPE_SUPPORT is None:
                _set_map__request.Metaclass.__import_type_support__()
            from nav_msgs.srv import _set_map__response
            if _set_map__response.Metaclass._TYPE_SUPPORT is None:
                _set_map__response.Metaclass.__import_type_support__()


class SetMap(metaclass=Metaclass):
    from nav_msgs.srv._set_map__request import SetMap_Request as Request
    from nav_msgs.srv._set_map__response import SetMap_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instanciated')
