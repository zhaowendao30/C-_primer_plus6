#include "golf.h"
#include <iostream>
#include <cstring>

Golf::Golf()
{
    strcpy(fullname, "NoName");
    handicap = 0;
}

Golf::Golf(const char * name, int hc)
{
    strcpy(fullname, name);
    handicap = hc;
}

const Golf & Golf::setgolf(const Golf & g)
{
    strcpy(fullname, g.fullname);
    handicap = g.handicap;
    return *this;
}

void Golf::hand(int hc)
{
    handicap = hc;
}

void Golf::show()
{
    std::cout << "fullname: " << fullname << std::endl;
    std::cout << "handicap: " << handicap << std::endl;
}