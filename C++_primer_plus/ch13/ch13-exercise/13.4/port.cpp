#include "port.h"
#include <cstring>
using namespace std;

Port::Port(const char * br, const char * st, int b):bottles(b)
{
    brand = new char[strlen(br) + 1];
    strcpy(brand, br);
    strcpy(style, st);
}

Port::Port(const Port & p):bottles(p.bottles)
{
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
}

Port & Port::operator=(const Port & p)
{
    if (this == & p)
        return *this;
    delete [] brand;
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
}

Port & Port::operator+=(int b)
{
    bottles = bottles + b;
}

Port & Port::operator-=(int b)
{
    bottles -= b;
}

void Port::Show() const
{
    cout << "Brand: " << brand << endl;
    cout << "Kind: " << style << endl;
    cout << "Bottles: " << bottles << endl;
}

ostream & operator<<(ostream & os, const Port & p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles << endl;
    return os;
}

VintagePort::VintagePort():Port()
{
    nickname = new char[1];
    nickname[0] = '\0';
    year = 0;
}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y):Port(br, "none", b)
{
    nickname = new char[strlen(nn) + 1];
    strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort & vp)
{
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
    if (this == & vp)
        return *this;
    delete [] nickname;
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}

void VintagePort::Show() const
{
    Port::Show();
    cout << "nickname: " << nickname << endl;
    cout << "year: " << year << endl;
}

ostream & operator<<(ostream & os, const VintagePort & vp)
{
    os << "nickname: " << vp.nickname << endl;
    os << "year: " << vp.year << endl;
    return os;
}
