from setuptools import find_packages
from setuptools import setup

setup(
    name='vizanti_msgs',
    version='0.1.0',
    packages=find_packages(
        include=('vizanti_msgs', 'vizanti_msgs.*')),
)
