#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

template <class T>
int reduce(T ar[], int n);
template <class T>
void show(T ar[], int n);

int main()
{
    long arl[10] = {21, 1, 23, 2, 12, 21, 4, 4, 2, 33};
    string ars[5] = {"C++", "is too", "diffcult!", "C++"};
    cout << "Long []:\n";
    show(arl, 10);
    int newlen = reduce(arl, 10);
    show(arl, newlen);

    cout << "String []:\n";
    show(ars, 5);
    newlen = reduce(ars, 5);
    show(ars, newlen);

    return 0;
}

template <class T>
int reduce(T ar[], int n)
{
    sort(ar, ar + n);

    return (unique(ar, ar + n) - ar);
}

template <class T>
void show(T ar[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << ar[i] << " ";
    cout << endl;
}
