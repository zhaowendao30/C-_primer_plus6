#include "plorg.h"
#include <iostream>

using namespace std;

int main()
{
    Plorg p0;
    Plorg p1 = {"Zao Faiz", 20};
    cout << "p0\n";
    p0.show();
    cout << "p1\n";
    p1.show();
    p0.reset_ci(20);
    cout << "p0\n";
    p0.show();

    return 0;
}