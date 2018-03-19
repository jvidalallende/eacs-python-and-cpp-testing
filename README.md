# Introduction

This repository hosts the investigation assignment for EACS Software Tests.
It is focused on how to use [Python] to test [C++] programs.

[is it acceptable practice to unit test a program in another language]

# Possible alternatives
* Wrapping C++ with a framework (python c++ binding). For the binding can be used next tools:
  * Programming mainly with python:
    * [ctypes]
    * [cffi] C Foreign Function Interface for Python. Interact with almost any C code from Python, based on C-like declarations that you can often copy-paste from header files or documentation. (See vide from [Alexander Steffen])
  * Programmin mainly with C++ (see video from [Diego Rodriguez])
    * [boost.python]
    * [pybind11] Seamless operability between C++11 and Python (see vide from [Ivan Smirnov])
  * Using an IDL
    * [SWIG]
    
  * [cython]
 
* Generate C++ test code with python
  * [C,C++,Python unit/integ test generator]
  
* Code coverage
  * [code coverage] Why just stop running unit test, why don't get some more information.

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
[jramed]: https://github.com/jramed
[jvidalallende]: https://github.com/jvidalallende
[Grip]: https://github.com/joeyespo/grip
[GitHub MarkDown]: https://help.github.com/articles/about-writing-and-formatting-on-github/
[boost.python]: http://www.boost.org/doc/libs/1_66_0/libs/python/doc/html/index.html
[pybind11]: https://github.com/pybind/pybind11
[cython]: http://cython.org/
[ctypes]: https://docs.python.org/3/library/ctypes.html
[cffi]: https://cffi.readthedocs.io/en/latest/
[C,C++,Python unit/integ test generator]: https://sourceforge.net/projects/testgen/
[code coverage]: https://stackoverflow.com/questions/29762191/c-code-coverage-using-python-based-unit-testing
[is it acceptable practice to unit test a program in another language]: https://stackoverflow.com/questions/23622923/is-it-acceptable-practice-to-unit-test-a-program-in-a-different-language
[Diego Rodriguez]: https://www.youtube.com/watch?v=bJq1n4gQFfw&t=275s
[Alexander Steffen]: https://www.youtube.com/watch?v=zW_HyDTPjO0
[Ivan Smirnov]: https://www.youtube.com/watch?v=jQedHfF1Jfw&t=75s


