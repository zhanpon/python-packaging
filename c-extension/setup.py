from setuptools import setup, Extension


setup(
    name="foo",
    version="0.1.0",
    url="https://github.com/zhanpon/python-packaging",
    author="zhanpon",
    author_email="hello@example.com",
    ext_modules=[
        Extension(
            "foo",
            ["foomodule.c"],
        )
    ],
)
