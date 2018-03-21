# include <Complex.h>

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

