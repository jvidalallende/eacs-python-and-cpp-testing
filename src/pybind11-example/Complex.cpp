#include <pybind11/pybind11.h>
#include "Complex.h"

namespace py = pybind11;

Complex Complex::add(const Complex& other) const
{
	const double newRealPart = realPart_ + other.realPart_;
	const double newImaginaryPart = imaginaryPart_ + other.imaginaryPart_;
	return Complex(newRealPart, newImaginaryPart);
}

bool Complex::operator==(const Complex& other) const
{
	return (realPart_ == other.realPart_)
         && (imaginaryPart_ == other.imaginaryPart_);
}

PYBIND11_MODULE(complex, module) {
    py::class_<Complex>(module, "Complex")
				.def(py::init<double, double>())
				.def("getRealPart", &Complex::getRealPart)
				.def("getImaginaryPart", &Complex::getImaginaryPart)
				.def("add", &Complex::add)
				.def("__eq__",[](const Complex& self, const Complex& other)
					{ return self == other; });
}
