from setuptools import find_packages, setup


setup(
    name="robopen_research",
    version="0.1.0",
    description="Utilities for RoboPen integration and testing",
    packages=find_packages(include=["scripts", "scripts.*", "scripts.utils", "scripts.test"]),
    install_requires=[],
    include_package_data=True,
    zip_safe=False,
)