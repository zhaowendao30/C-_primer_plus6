#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>

using std::istream;
using std::ostream;

class Complex
{
    private:
        double a;
        double b;

    public:
        Complex(double p, double q);
        Complex();
        ~Complex();
        Complex operator+(const Complex &t) const;
        Complex operator-(const Complex &t) const;
        Complex operator*(const Complex &t) const;
        Complex operator*(double c) const;
        friend Complex operator*(double c, Complex &t) { return t * c;};
        Complex operator~() const;
        friend istream &operator>>(istream &is, Complex &t);
        friend ostream &operator<<(ostream &os, const Complex &t);
};

#endif