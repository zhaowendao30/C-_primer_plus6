// tempover.cpp -- template overloading
#include <iostream>

struct debts
{
    char name[50];
    double amount;
};

template <typename T>
T SumArray(T * arr, int n);

template <typename T>
T SumArray(T ** arr, int n);



int main()
{
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
        {
            {"Ima Wolfe", 2400.0},
            {"Ura Foxe", 1300.0},
            {"Iby Stout", 1800.0}
        };
    double *pd[3];

    for (int i = 0; i < 3; ++i)
        pd[i] = &mr_E[i].amount;

    cout << "Total Mr. E's counts of things: " << SumArray(things, 6) << endl;
    cout << "Total Mr. E's debts:" << SumArray(pd, 3) << endl;
    return 0;
}

template <typename T>
T SumArray(T * arr, int n)
{
    T sum_num = 0;
    for (int i = 0; i < n; ++i)
        sum_num += arr[i];
    return sum_num;
}

template <typename T>
T SumArray(T ** arr, int n)
{
    T sum_num = (T)0;
    for (int i = 0; i < n; ++i)
        sum_num += *arr[i];
    return sum_num;
}