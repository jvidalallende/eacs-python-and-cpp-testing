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
