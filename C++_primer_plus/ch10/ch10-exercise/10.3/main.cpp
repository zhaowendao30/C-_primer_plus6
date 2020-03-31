#include "golf.h"
#include <iostream>

const int N = 5;

int main(void)
{
    using namespace std;

    Golf g0 = {"Zao Faiz", 10};
    g0.show();
    Golf g1;
    g1.setgolf(g0);
    g0.hand(9);
    g0.show();
    return 0;
}