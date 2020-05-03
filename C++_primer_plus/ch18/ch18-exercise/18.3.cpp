#include <iostream>

inline long double sum_value() { return 0; }

template <class T, class...Args>
long double sum_value(T t, Args...args)
{
    return t + sum_value(args...);
}

int main()
{
    using namespace std;
	cout << sum_value(12, 23, 65, 33)<<endl;
	cout << sum_value('a', 'b', 23, 45, 'c')<<endl;
	cout << sum_value(15.2, 35.3, 45.6, 'A')<<endl;

    return 0;
}