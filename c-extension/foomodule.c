#define PY_SSIZE_T_CLEAN
#include <Python.h>

static PyObject *
foo_system(PyObject *self, PyObject *args)
{
	const char *command;
	int sts;

	if (!PyArg_ParseTuple(args, "s", &command))
		return NULL;
	sts = system(command);
	return PyLong_FromLong(sts);
}

static PyMethodDef FooMethods[] = {
	{"system", foo_system, METH_VARARGS, "Execute a shell command."},
	{NULL, NULL, 0, NULL}
};

static struct PyModuleDef foomodule = {
	PyModuleDef_HEAD_INIT,
	"foo",
	NULL,
	-1,
	FooMethods
};

PyMODINIT_FUNC
PyInit_foo(void)
{
	return PyModule_Create(&foomodule);
}
