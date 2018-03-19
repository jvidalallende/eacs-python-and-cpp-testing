#include "Complex.h"
#include <boost/python.hpp>

using namespace boost::python;

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

BOOST_PYTHON_MODULE(complex)
{
    class_<Complex>("Complex", init<double, double>())
				.def("getRealPart", &Complex::getRealPart)
				.def("getImaginaryPart", &Complex::getImaginaryPart)
				.def("add", &Complex::add)
				.def(self == self);
}
