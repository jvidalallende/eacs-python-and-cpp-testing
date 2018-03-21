#include <pybind11/pybind11.h>
#include <Complex.h>

namespace py = pybind11;

PYBIND11_MODULE(complex_pybind11, module) {
    py::class_<Complex>(module, "Complex")
				.def(py::init<double, double>())
				.def("getRealPart", &Complex::getRealPart)
				.def("getImaginaryPart", &Complex::getImaginaryPart)
				.def("add", &Complex::add)
				.def("__eq__",[](const Complex& self, const Complex& other)
					{ return self == other; });
}
