#include <iostream>

double f(double a, double b);

int main()
{
    using namespace std;
    double x, y;
    cout << "Please enter two number (enter 0 quit): ";
    while (cin >> x >> y)
    {
        if (x &&y)
            cout << "调和平均值: " << f(x, y) << endl;
        else
        {   
            cout << "Bye!";
            break;
        }
        cout << "Please enter two number (enter 0 quit): ";
    }
    return 0;
}

double f(double x, double y)
{
    return 2.0 * x * y / (x + y);
}