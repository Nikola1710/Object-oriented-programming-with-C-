#include <iostream>

using namespace std;

#include "Complex.h"

Complex::Complex()
{
    real = 0;
    imag = 0;
}//Complex

Complex::Complex(double real, double imag)
{
    this->real = real;
    this->imag = imag;
}//Complex

Complex Complex::operator +(const Complex &z) const
{
    Complex result;

    result.real = real + z.real;
    result.imag = imag + z.imag;

    return result;
}//operator +

Complex Complex::operator -(const Complex &z) const
{
    Complex result;

    result.real = real - z.real;
    result.imag = imag - z.imag;

    return result;
}//operator -

Complex Complex::operator *(const Complex &z) const
{
    Complex result;

    result.real = real * z.real - imag * z.imag;
    result.imag = real * z.imag + imag * z.real;

    return result;
}//operator *

Complex Complex::operator /(const Complex &z) const
{
    Complex result;

    double div = z.real * z.real + z.imag * z.imag;
    result.real = (real * z.real + imag * z.imag) / div;
    result.imag = (imag * z.real - real * z.imag) / div;

    return result;
}//operator /

void Complex::print() const
{
    cout << "(";
    cout << real;
    cout << ", ";
    cout << imag;
    cout << ")";
}//print

istream &operator >>(istream &in, Complex &z)
{
    in >> z.real >> z.imag;

    return in;
}//operator >>

ostream &operator <<(ostream &out, const Complex &z)
{
    cout << z.real << " + i" << z.imag;

    return out;
}//operator <<
