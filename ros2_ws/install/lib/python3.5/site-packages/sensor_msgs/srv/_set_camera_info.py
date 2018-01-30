# generated from rosidl_generator_py/resource/_srv.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'SetCameraInfo'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sensor_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.SetCameraInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv_set_camera_info
            from sensor_msgs.srv import _set_camera_info__request
            if _set_camera_info__request.Metaclass._TYPE_SUPPORT is None:
                _set_camera_info__request.Metaclass.__import_type_support__()
            from sensor_msgs.srv import _set_camera_info__response
            if _set_camera_info__response.Metaclass._TYPE_SUPPORT is None:
                _set_camera_info__response.Metaclass.__import_type_support__()


class SetCameraInfo(metaclass=Metaclass):
    from sensor_msgs.srv._set_camera_info__request import SetCameraInfo_Request as Request
    from sensor_msgs.srv._set_camera_info__response import SetCameraInfo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instanciated')
