""" Python object-oriented implementation of the Complex C-Wrapper """

import ctypes

lib = ctypes.cdll.LoadLibrary("./libComplex.so")

def setup_ctypes():
    """
    For every C function defined in the Complex wrapper section,
    tell ctypes how to handle its inputs and outputs
    """
    lib.createComplex.argtypes = [ctypes.c_double, ctypes.c_double]
    lib.createComplex.restype = ctypes.c_void_p

    lib.deleteComplex.argypes = [ctypes.c_void_p]
    lib.deleteComplex.restype = None

    lib.getRealPart.argypes = [ctypes.c_void_p]
    lib.getRealPart.restype = ctypes.c_double

    lib.getImaginaryPart.argypes = [ctypes.c_void_p]
    lib.getImaginaryPart.restype = ctypes.c_double

    lib.add.argypes = [ctypes.c_void_p, ctypes.c_void_p]
    lib.add.restype = ctypes.c_void_p

    lib.equals.argtypes = [ctypes.c_void_p, ctypes.c_void_p]
    lib.equals.restype = ctypes.c_bool


class Complex(object):

    def __init__(self, real_part, imaginary_part):
        setup_ctypes()
        self.obj = lib.createComplex(real_part, imaginary_part)

    def __del__(self):
        lib.deleteComplex(ctypes.c_void_p(self.obj))

    def getRealPart(self):
        return lib.getRealPart(ctypes.c_void_p(self.obj))

    def getImaginaryPart(self):
        return lib.getImaginaryPart(ctypes.c_void_p(self.obj))

    def add(self, other):
        c_complex = lib.add(ctypes.c_void_p(self.obj), ctypes.c_void_p(other.obj))
        real = lib.getRealPart(ctypes.c_void_p(c_complex))
        imaginary = lib.getImaginaryPart(ctypes.c_void_p(c_complex))
        result = Complex(real, imaginary)
        lib.deleteComplex(ctypes.c_void_p(c_complex))
        return result

    def equals(self, other):
        return lib.equals(ctypes.c_void_p(self.obj), ctypes.c_void_p(other.obj))

    def __str__(self):
        return "{}+{}i".format(
            lib.getRealPart(ctypes.c_void_p(self.obj)),
            lib.getImaginaryPart(ctypes.c_void_p(self.obj)))
