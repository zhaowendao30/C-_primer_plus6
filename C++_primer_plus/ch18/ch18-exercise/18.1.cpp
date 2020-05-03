#include <iostream>
#include <initializer_list>

using namespace std;

template <class T>
double average_list(initializer_list<T> li);

int main()
{
    using namespace std;

    auto q = average_list({15.4, 10.7, 9.0});
    cout << q << endl;

    cout << average_list({20, 30, 19, 17, 45, 38}) << endl;
    auto ad = average_list<double>({'A', 70, 65.33});
    cout << ad << endl;

    return 0;
}

template <class T>
double average_list(initializer_list<T> li)
{
    double sum = 0.0;
    int count = 0;
    for (auto p = li.begin(); p != li.end(); ++p)
    {
        sum += *p;
        ++count;
    }
    return sum / double(count);
}