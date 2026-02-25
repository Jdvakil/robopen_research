from setuptools import find_packages
from setuptools import setup

setup(
    name='franka_pybridge_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('franka_pybridge_interfaces', 'franka_pybridge_interfaces.*')),
)
