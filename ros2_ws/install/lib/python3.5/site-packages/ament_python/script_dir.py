# Copyright 2017 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

"""Override the setup.py command line argument --script_dir."""

import os
import sys


def install_scripts_to_libexec(package_name):
    """Override sys.argv to install scripts into lib/<pkgname>."""
    command_args = {'develop': '--script-dir', 'install': '--install-scripts'}
    libexec_path = os.path.join('$base', 'lib', package_name)
    for command, arg in command_args.items():
        if arg in sys.argv:
            # update existing argument
            arg_index = sys.argv.index(arg)
            sys.argv[arg_index + 1] = libexec_path
        else:
            # insert additional arguments after the command
            try:
                command_index = sys.argv.index(command)
            except ValueError:
                continue
            sys.argv[command_index + 1:command_index + 1] = \
                [arg, libexec_path]
