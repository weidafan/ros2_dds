# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'NavSatStatus'."""

    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATUS_NO_FIX': -1,
        'STATUS_FIX': 0,
        'STATUS_SBAS_FIX': 1,
        'STATUS_GBAS_FIX': 2,
        'SERVICE_GPS': 1,
        'SERVICE_GLONASS': 2,
        'SERVICE_COMPASS': 4,
        'SERVICE_GALILEO': 8,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sensor_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.NavSatStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_nav_sat_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg_nav_sat_status
            cls._TYPE_SUPPORT = module.type_support_msg_nav_sat_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_nav_sat_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS_NO_FIX': cls.__constants['STATUS_NO_FIX'],
            'STATUS_FIX': cls.__constants['STATUS_FIX'],
            'STATUS_SBAS_FIX': cls.__constants['STATUS_SBAS_FIX'],
            'STATUS_GBAS_FIX': cls.__constants['STATUS_GBAS_FIX'],
            'SERVICE_GPS': cls.__constants['SERVICE_GPS'],
            'SERVICE_GLONASS': cls.__constants['SERVICE_GLONASS'],
            'SERVICE_COMPASS': cls.__constants['SERVICE_COMPASS'],
            'SERVICE_GALILEO': cls.__constants['SERVICE_GALILEO'],
        }

    @property
    def STATUS_NO_FIX(self):
        """Message constant 'STATUS_NO_FIX'."""
        return Metaclass.__constants['STATUS_NO_FIX']

    @property
    def STATUS_FIX(self):
        """Message constant 'STATUS_FIX'."""
        return Metaclass.__constants['STATUS_FIX']

    @property
    def STATUS_SBAS_FIX(self):
        """Message constant 'STATUS_SBAS_FIX'."""
        return Metaclass.__constants['STATUS_SBAS_FIX']

    @property
    def STATUS_GBAS_FIX(self):
        """Message constant 'STATUS_GBAS_FIX'."""
        return Metaclass.__constants['STATUS_GBAS_FIX']

    @property
    def SERVICE_GPS(self):
        """Message constant 'SERVICE_GPS'."""
        return Metaclass.__constants['SERVICE_GPS']

    @property
    def SERVICE_GLONASS(self):
        """Message constant 'SERVICE_GLONASS'."""
        return Metaclass.__constants['SERVICE_GLONASS']

    @property
    def SERVICE_COMPASS(self):
        """Message constant 'SERVICE_COMPASS'."""
        return Metaclass.__constants['SERVICE_COMPASS']

    @property
    def SERVICE_GALILEO(self):
        """Message constant 'SERVICE_GALILEO'."""
        return Metaclass.__constants['SERVICE_GALILEO']


class NavSatStatus(metaclass=Metaclass):
    """
    Message class 'NavSatStatus'.

    Constants:
      STATUS_NO_FIX
      STATUS_FIX
      STATUS_SBAS_FIX
      STATUS_GBAS_FIX
      SERVICE_GPS
      SERVICE_GLONASS
      SERVICE_COMPASS
      SERVICE_GALILEO
    """

    __slots__ = [
        '_status',
        '_service',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.status = kwargs.get('status', int())
        self.service = kwargs.get('service', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        assert \
            isinstance(value, int), \
            "The 'status' field must of type 'int'"
        assert value >= -128 and value < 128, \
            "The 'status' field must be an integer in [-128, 128)"
        self._status = value

    @property
    def service(self):
        """Message field 'service'."""
        return self._service

    @service.setter
    def service(self, value):
        assert \
            isinstance(value, int), \
            "The 'service' field must of type 'int'"
        assert value >= 0 and value < 65536, \
            "The 'service' field must be an unsigned integer in [0, 65536)"
        self._service = value
