#include <iostream>

using namespace std;

template <class T>

T max5(T * p);

int main()
{
    int p[5] = {1, 2, 3, 4, 5};
    double q[5] = {1.0, 2.0, 3.0, 4.0, 5.3};
    cout << "p[5] max num: " << max5(p) << endl;
    cout << "q[5] max num: " << max5(q) << endl;

    return 0;
}

template <class T>

T max5(T * p)
{
    T maxnum = p[0];
    for (int i = 1; i < 5; ++i)
    {
        if (p[i] > maxnum)
            maxnum = p[i];
    }
    return maxnum;
}