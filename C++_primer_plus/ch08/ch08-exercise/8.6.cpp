#include <iostream>
#include <cstring>
using namespace std;

template <class T>

T maxn(T *, int n);

template <> char *maxn(char **, int n);

int main()
{
    int p[6] = {1, 2, 3, 4, 5, 6};
    double q[4] = {1.0, 2.0, 3.0, 4.2};
    char *arr[5] = 
    {
        "Deeplearning",
        "is so hard",
        "program with tensorflow",
        "and pytorch, C++",
        "python"
    };
    cout << "p max: " << maxn(p, 6) << endl;
    cout << "q max: " << maxn(q, 4) << endl;
    cout << "arr max: " << maxn(arr, 5) << endl;

    return 0;
}

template <class T>
T maxn(T * p, int n)
{
    T max_num = p[0];
    for (int i = 1; i < n; ++i)
        max_num = p[i] > max_num ? p[i] : max_num;
    return max_num;
}

template <> char * maxn(char ** p, int n)
{
    int max_str = strlen(p[0]);
    int r = 0;
    for (int i = 1; i < n; ++i)
    {
        if (strlen(p[i]) > max_str)
        {
            max_str = strlen(p[i]);
            r = i;
        }
    }
    return p[r];
}