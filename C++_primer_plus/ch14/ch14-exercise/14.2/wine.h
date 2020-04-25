#ifndef WINE_H_
#define WINE_H_

#include <iostream>
#include <valarray>
#include <string>
#include "pair.h"

using namespace std;

class Wine : private string, private Pair<valarray<int>, valarray<int>>
{
private:
    typedef valarray<int> ArrayInt;
    typedef Pair<ArrayInt, ArrayInt> PairArray;
    int years;  // number of years

public:
    Wine();
    Wine(const char * l, int y, const int yr[], const int bot[])
        : string(l), years(y), PairArray(ArrayInt(yr, y), ArrayInt(bot, y)){}
    Wine(const char * l, int y) : string(l), years(y), PairArray(ArrayInt(y), ArrayInt(y)) {}
    void GetBottles();
    const std::string & Label() const { return (const string &)(*this); }
    int sum() const {return PairArray::second().sum();}
    void Show() const;
};

#endif
