#include <iostream>
#include <algorithm>

int reduce(long ar[], int n);
void show(long ar[], int n);

int main()
{
    long ar[10] = {21, 1, 23, 2, 12, 21, 4, 4, 2, 33};
    show(ar, 10);
    int newlen = reduce(ar, 10);
    show(ar, newlen);

    return 0;
}

int reduce(long ar[], int n)
{
    std::sort(ar, ar + n);

    return (std::unique(ar, ar + n) - ar);
}

void show(long ar[], int n)
{
    for (int i = 0; i < n; ++i)
        std::cout << ar[i] << " ";
    std::cout << std::endl;
}

