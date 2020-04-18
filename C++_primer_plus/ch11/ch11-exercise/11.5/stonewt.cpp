// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs, Mode m)
{
    if (m = STONE)
    {
        stone = int (lbs) / Lbs_per_stn;    // integer division
        pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
        set_pounds();
    }
    else if (m = POUNDS)
    {
        pounds = lbs;
        set_stone();
    }
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    set_pounds();
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()         // destructor
{
}

void Stonewt::Stone()
{
    mode = STONE;
}

void Stonewt::Pounds()
{
    mode = POUNDS;
}

void Stonewt::set_pounds()
{
    pounds = stone * Lbs_per_stn + pds_left;
}

void Stonewt::set_stone()
{
    stone = int (pounds) / Lbs_per_stn;
}

Stonewt Stonewt::operator+(const Stonewt & s) const
{
    return Stonewt(pounds + s.pounds);
}

Stonewt Stonewt::operator-(const Stonewt & s) const
{
    return Stonewt(pounds - s.pounds);
}

Stonewt Stonewt::operator*(double n) const
{
    return Stonewt(n * pounds);
}

std::ostream & operator<<(std::ostream & os, const Stonewt & t)
{
    if (t.mode == Stonewt::STONE)
    {
        os << t.stone << " stone, " << t.pds_left << " pounds\n";
    }
    else if (t.mode == Stonewt::POUNDS)
    {
        os << t.pounds << " pounds\n";
    }
    return os;
}