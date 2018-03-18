#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <string>

class Complex
{
public:

	Complex(double realPart, double imaginaryPart)
    : realPart_(realPart),
      imaginaryPart_(imaginaryPart)
  { }

	virtual ~Complex() { }

	double getRealPart() const { return realPart_; }

	double getImaginaryPart() const { return imaginaryPart_; }

	Complex add(const Complex& other) const;

	bool operator== (const Complex& other) const;

protected:
	double realPart_;
	double imaginaryPart_;
};

#endif /* COMPLEX_H_ */
