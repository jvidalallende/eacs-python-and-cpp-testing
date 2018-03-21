#include "Complex.h"
#include <boost/python.hpp>

using namespace boost::python;

BOOST_PYTHON_MODULE(complex_boost)
{
    class_<Complex>("Complex", init<double, double>())
				.def("getRealPart", &Complex::getRealPart)
				.def("getImaginaryPart", &Complex::getImaginaryPart)
				.def("add", &Complex::add)
				.def(self == self);
}
