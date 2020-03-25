#include <iostream>
#include <array>

const int ArSize = 16;

int main()
{
    using namespace std;

    array<long double, 101> factorials;
    factorials[1] = factorials[0] = 1.0;

    for (int i = 2; i < 101; ++i)
        factorials[i] = (long double)i * factorials[i - 1];
    for (int i = 0; i < ArSize; ++i)
        cout << i << "! = " << factorials[i] << endl;
    cout << 100 << "! = " << factorials[100] << endl;
    return 0;
}