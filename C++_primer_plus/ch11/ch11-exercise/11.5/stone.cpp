// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using namespace std;
#include "stonewt.h"
int main()
{
    Stonewt incognito = 275; // uses constructor to initialize
    Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7;
    Stonewt taft(21, 8);

    Stonewt temp;
    temp = wolfe + taft;
    cout << "temp: " << temp << endl;
    temp = wolfe - taft;
    cout << "temp: " << temp << endl;
    temp = 2 * taft;
    cout << "temp: " << temp << endl;
    temp.Stone();
    cout << "Stone temp: " << temp << endl;
    temp.Pounds();
    cout << "Pounds temp: " << temp << endl;

    return 0;
}
