# Introduction

This repository hosts the investigation assignment for EACS Software Tests.
It is focused on how to use [Python] to test [C++] programs.

Python can be integrated with other languages, one of them is C++, see  [Python and C++]. This is a two way road, we can use C/C++ from python, by mean of integrating built-in modules in python, or run python code from C++.

In this assigment we are focus in how to integrate  C/C++ code with Python. Furthermore we are interested if it is possible to run unit tests writing in Python to test C++ code.

The First question we should ask to ourself, [is it acceptable practice to unit test a program in another language]? As always different opinions. But why not? maybe it is easier implement the tests with Python. The main difficult is to do the wrapper of the C++ code.
To do that wrapper are different alternatives, ones seem easier that others. Some others seem to provide more better wrapping, that is wrap more C++ funcitonality. As always, it can it a trade-off between needs and personal taste for one approach or another.

# Possible alternatives
* Wrapping C++ with a framework (python c++ binding). For the binding can be used next tools:
  * Programming mainly with python:
    * [ctypes] is a foreign function library for Python. It provides C compatible data types, and allows calling functions in DLLs or shared libraries. It can be used to wrap these libraries in pure Python.
    * [cffi] C Foreign Function Interface for Python. Interact with almost any C code from Python, based on C-like declarations that you can often copy-paste from header files or documentation. (See vide from [Alexander Steffen])
  * Programmin mainly with C++ (see video from [Diego Rodriguez])
    * [boost.python] a C++ library which enables seamless interoperability between C++ and the Python programming language
    * [pybind11] seamless operability between C++11 and Python (see vide from [Ivan Smirnov])
    * [cython] is an optimising static compiler for both the Python programming language and the extended Cython programming language (based on Pyrex) Use Cython to give Pythonic interfaces to C and C++ libraries [cython book]. Remember that Cython is a implementation of the Python language, so the way it integrate C/C++ could can not be reused and even there is differencies in the API between python 2.7 and 3.5. The documentation from python recomend to use other methods if that integration must be portable, that is usable by other python implementation different that Cython.
  * Using an IDL
    * [SWIG] is an interface compiler that connects programs written in C and C++ with scripting languages such as Perl, Python, Ruby, and Tcl
    * [SIP] is a tool that makes it very easy to create Python bindings for C and C++ libraries. SIP comprises a code generator and a Python module. The code generator processes a set of specification files and generates C or C++ code which is then compiled to create the bindings extension module. The sip Python module provides support functions to the automatically generated code.
    
# More about python and C/C++ testing  
 
* Generate C++ test code with python
  * [C,C++,Python unit/integ test generator]
  
* Code coverage
  * [code coverage] Why just stop running unit test, why don't get some more information.

# Environment to run the examples
* For ctypes
  * gcc with c++ support 
    * tested with gcc 6.4.0 in cygwin
  * cmake 3.0 or higher 
    * tested with cmake 3.6.2 in cygwin
  * make 
    * tested with make 4.2.1 in cygwin
  * python 2.7 
    * tested with python 2.7.14 in cygwin

# Run with docker
TBD

# Authors

This assignment is done by:
* Juan Ramón Medina Muñoz ([jramed])
* Juan Vidal Allende ([jvidalallende])

# Helpful stuff

* [Grip] is useful to preview [GitHub Markdown] pages locally.

Links to look at.


[//]: # (Place links down here)

[Python]: https://www.python.org/
[C++]: https://isocpp.org/
[Python and C++]: https://wiki.python.org/moin/IntegratingPythonWithOtherLanguages#C.2FC.2B-.2B-
[jramed]: https://github.com/jramed
[jvidalallende]: https://github.com/jvidalallende
[Grip]: https://github.com/joeyespo/grip
[GitHub MarkDown]: https://help.github.com/articles/about-writing-and-formatting-on-github/
[boost.python]: http://www.boost.org/doc/libs/1_66_0/libs/python/doc/html/index.html
[pybind11]: https://github.com/pybind/pybind11
[cython]: http://cython.org/
[cython book]: http://shop.oreilly.com/product/0636920033431.do
[ctypes]: https://docs.python.org/3/library/ctypes.html
[cffi]: https://cffi.readthedocs.io/en/latest/
[SWIG]: http://www.swig.org/exec.html
[SIP]: https://www.riverbankcomputing.com/software/sip/intro
[C,C++,Python unit/integ test generator]: https://sourceforge.net/projects/testgen/
[code coverage]: https://stackoverflow.com/questions/29762191/c-code-coverage-using-python-based-unit-testing
[is it acceptable practice to unit test a program in another language]: https://stackoverflow.com/questions/23622923/is-it-acceptable-practice-to-unit-test-a-program-in-a-different-language
[Diego Rodriguez]: https://www.youtube.com/watch?v=bJq1n4gQFfw&t=275s
[Alexander Steffen]: https://www.youtube.com/watch?v=zW_HyDTPjO0
[Ivan Smirnov]: https://www.youtube.com/watch?v=jQedHfF1Jfw&t=75s


