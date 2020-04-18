#include "complex0.h"
#include <iostream>
#include <limits>
using std::cout;
using std::ostream;
using std::numeric_limits;
using std::streamsize;

Complex::Complex(double p, double q)
{
    a = p;
    b = q;
}

Complex::Complex()
{
    a = 0.0;
    b = 0.0;
}

Complex::~Complex()
{

}

Complex Complex::operator+(const Complex &t) const
{
    return Complex(a + t.a, b + t.b);
}

Complex Complex::operator-(const Complex &t) const
{
    return Complex(a - t.a, b - t.b);
}

Complex Complex::operator*(const Complex &t) const
{
    return Complex(a * t.a - b * t.b, a * t.b + b * t.a);
}

Complex Complex::operator*(double c) const
{
    return Complex(c * a, c * b);
}

Complex Complex::operator~() const
{
    return Complex(a, -b);
}

ostream&operator<< (ostream& os, const Complex& t)
{
	os << '(' << t.a << ", " << t.b << "i)";
	return (os);
}

istream&operator>> (istream& is, Complex& t)
{
	cout << "real: ";
	is >> t.a;
	if (!is) {
		is.ignore(numeric_limits<streamsize>::max(), '\n');	// 清空输入缓冲区内容
		return (is);
	}

	cout << "imaginary: ";
	is >> t.b;
	is.ignore(numeric_limits<streamsize>::max(), '\n');	// 清空输入缓冲区内容
	return (is);
}