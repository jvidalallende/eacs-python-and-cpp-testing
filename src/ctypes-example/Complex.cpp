#include "Complex.h"

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

// C Wrapper for C++ code
extern "C"
{
  Complex* createComplex(double realPart, double imaginaryPart)
  {
    return new Complex(realPart, imaginaryPart);
  }

  void deleteComplex(Complex * complex) { delete complex; }

  double getRealPart(Complex * complex)
  {
    return complex->getRealPart();
  }

  double getImaginaryPart(Complex * complex) { return complex->getImaginaryPart(); }

  Complex * add(Complex * complex, Complex * other)
  {
    return new Complex(complex->add(*other));
  }

  bool equals(Complex * complex, Complex * other) { return (*complex == *other); }
}
