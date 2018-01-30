# -*- coding: utf-8 -*-
# generated from rclpy/__init__.py.in
# keep symbol table as clean as possible by deleting all unnecessary symbols

from os import path as os_path
from pkgutil import extend_path
from sys import path as sys_path

source_path = '/home/aust/ros2_ws/src/ros2/rclpy/rclpy'
sys_path.insert(0, source_path)
del sys_path

__path__ = extend_path(__path__, __name__)
del extend_path

__execfiles = []
src_init_file = os_path.join(source_path, __name__ + '.py')
if os_path.isfile(src_init_file):
    __execfiles.append(src_init_file)
else:
    src_init_file = os_path.join(source_path, __name__, '__init__.py')
    if os_path.isfile(src_init_file):
        __execfiles.append(src_init_file)
del os_path
del src_init_file
del source_path

for __execfile in __execfiles:
    with open(__execfile, 'r') as __fh:
        __code_object = compile(__fh.read(), __execfile, 'exec')
        exec(__code_object)
        del __code_object
    del __fh
    del __execfile
del __execfiles
