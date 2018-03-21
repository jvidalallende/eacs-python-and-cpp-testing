%module complex_swig
%{
#include <Complex.h>
%}

class Complex {
public:
  Complex(double, double);
  virtual ~Complex();
  double getRealPart();
  double getImaginaryPart();
  Complex add(const Complex &) const;
  %rename(__eq__) Complex::operator==;
  bool operator== (const Complex&) const;
};

