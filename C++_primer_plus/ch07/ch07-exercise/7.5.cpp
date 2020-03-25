#include <iostream>

long double f(long long n);

int main()
{
    using namespace std;
    cout << "请输入一个数字(输入q终止程序): ";
    long long n;
    while (cin>>n)
    {
        cout << "他的阶乘为: " << f(n) << endl;
        cout << "请输入一个数字: ";
    }
    return 0;
}

long double f(long long n)
{
    if (n==1)
        return 1;
    return n*f(n - 1);
}