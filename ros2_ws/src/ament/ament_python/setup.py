from setuptools import find_packages
from setuptools import setup

setup(
    name='ament_python',
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    install_requires=['setuptools'],
    author='Dirk Thomas',
    author_email='dthomas@osrfoundation.org',
    maintainer='Dirk Thomas',
    maintainer_email='dthomas@osrfoundation.org',
    url='https://github.com/ament/ament_python',
    download_url='https://github.com/ament/ament_python/releases',
    keywords=['ROS'],
    classifiers=[
        'Intended Audience :: Developers',
        'License :: OSI Approved :: Apache Software License',
        'Programming Language :: Python',
        'Topic :: Software Development',
    ],
    description='Python API for ament Python packages.',
    long_description='Python API for ament Python packages.',
    license='Apache License, Version 2.0',
    test_suite='test',
)
