#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex
{
    public:
        Complex();
        Complex(double real, double imag);
        Complex operator +(const Complex &z) const;
        Complex operator -(const Complex &z) const;
        Complex operator *(const Complex &z) const;
        Complex operator /(const Complex &z) const;
        void print() const;

    private:
        double real;
        double imag;

    friend istream &operator >>(istream &in, Complex &z);
    friend ostream &operator <<(ostream &out, const Complex &z);
};

#endif
