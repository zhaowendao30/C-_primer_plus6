// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using namespace std;
#include "stonewt.h"
const int N = 6;

int main()
{
    Stonewt p[N] = {12, 2.0, 3.0};

    for (int i = 3; i < 6; ++i)
    {
        cout << "p[" << i + 1 << "] : ";
        double s;
        cin >> s;
        p[i] = s;
    }

    Stonewt max = p[0], min = p[0];
    Stonewt q = 11;

    q.show_lbs();
    int num = 0;

    for (int i = 0; i < 6; ++i)
    {
        if (p[i] < min)
            min = p[i];
        if (p[i] > max)
            max = p[i];
        if (p[i] >= q)
            num++;
    }

    cout << "max: ";
    max.show_lbs();
    cout << "min: ";
    min.show_lbs();
    cout << num << " element > 11 stone.\n";
}

