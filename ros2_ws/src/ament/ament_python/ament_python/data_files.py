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

import inspect
import os


def get_data_files(package_name, *, marker_file=None):
    """Return a dictionary containing the data_files of the package."""
    data_files = []

    # install package manifest
    data_files.append(('share/' + package_name, ['package.xml']))

    # install marker file for ament index registering the package name
    if marker_file is None:
        prefix = os.path.dirname(inspect.stack()[1].filename)
        marker_file = os.path.join(prefix, 'resource', package_name)
    else:
        assert os.path.basename(marker_file) == package_name, \
            'The basename of the marker file must be the package name'
    if not os.path.isfile(marker_file):
        raise RuntimeError(
            'Marker file for ament index not found: ' + marker_file)
    data_files.append(
        ('share/ament_index/resource_index/packages', [marker_file]))

    return data_files
