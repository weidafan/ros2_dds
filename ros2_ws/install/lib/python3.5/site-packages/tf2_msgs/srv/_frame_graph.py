# generated from rosidl_generator_py/resource/_srv.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'FrameGraph'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tf2_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.FrameGraph')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv_frame_graph
            from tf2_msgs.srv import _frame_graph__request
            if _frame_graph__request.Metaclass._TYPE_SUPPORT is None:
                _frame_graph__request.Metaclass.__import_type_support__()
            from tf2_msgs.srv import _frame_graph__response
            if _frame_graph__response.Metaclass._TYPE_SUPPORT is None:
                _frame_graph__response.Metaclass.__import_type_support__()


class FrameGraph(metaclass=Metaclass):
    from tf2_msgs.srv._frame_graph__request import FrameGraph_Request as Request
    from tf2_msgs.srv._frame_graph__response import FrameGraph_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instanciated')
