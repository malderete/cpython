/*[clinic input]
preserve
[clinic start generated code]*/

PyDoc_STRVAR(SHA1Type_copy__doc__,
"copy($self, /)\n"
"--\n"
"\n"
"Return a copy of the hash object.");

#define SHA1TYPE_COPY_METHODDEF    \
    {"copy", (PyCFunction)SHA1Type_copy, METH_NOARGS, SHA1Type_copy__doc__},

static PyObject *
SHA1Type_copy_impl(SHA1object *self);

static PyObject *
SHA1Type_copy(SHA1object *self, PyObject *Py_UNUSED(ignored))
{
    return SHA1Type_copy_impl(self);
}

PyDoc_STRVAR(SHA1Type_digest__doc__,
"digest($self, /)\n"
"--\n"
"\n"
"Return the digest value as a string of binary data.");

#define SHA1TYPE_DIGEST_METHODDEF    \
    {"digest", (PyCFunction)SHA1Type_digest, METH_NOARGS, SHA1Type_digest__doc__},

static PyObject *
SHA1Type_digest_impl(SHA1object *self);

static PyObject *
SHA1Type_digest(SHA1object *self, PyObject *Py_UNUSED(ignored))
{
    return SHA1Type_digest_impl(self);
}

PyDoc_STRVAR(SHA1Type_hexdigest__doc__,
"hexdigest($self, /)\n"
"--\n"
"\n"
"Return the digest value as a string of hexadecimal digits.");

#define SHA1TYPE_HEXDIGEST_METHODDEF    \
    {"hexdigest", (PyCFunction)SHA1Type_hexdigest, METH_NOARGS, SHA1Type_hexdigest__doc__},

static PyObject *
SHA1Type_hexdigest_impl(SHA1object *self);

static PyObject *
SHA1Type_hexdigest(SHA1object *self, PyObject *Py_UNUSED(ignored))
{
    return SHA1Type_hexdigest_impl(self);
}

PyDoc_STRVAR(SHA1Type_update__doc__,
"update($self, obj, /)\n"
"--\n"
"\n"
"Update this hash object\'s state with the provided string.");

#define SHA1TYPE_UPDATE_METHODDEF    \
    {"update", (PyCFunction)SHA1Type_update, METH_O, SHA1Type_update__doc__},

PyDoc_STRVAR(_sha1_sha1__doc__,
"sha1($module, /, string=b\'\')\n"
"--\n"
"\n"
"Return a new SHA1 hash object; optionally initialized with a string.");

#define _SHA1_SHA1_METHODDEF    \
    {"sha1", (PyCFunction)_sha1_sha1, METH_VARARGS|METH_KEYWORDS, _sha1_sha1__doc__},

static PyObject *
_sha1_sha1_impl(PyModuleDef *module, PyObject *string);

static PyObject *
_sha1_sha1(PyModuleDef *module, PyObject *args, PyObject *kwargs)
{
    PyObject *return_value = NULL;
    static char *_keywords[] = {"string", NULL};
    PyObject *string = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "|O:sha1", _keywords,
        &string)) {
        goto exit;
    }
    return_value = _sha1_sha1_impl(module, string);

exit:
    return return_value;
}
/*[clinic end generated code: output=40df3f8955919e72 input=a9049054013a1b77]*/
