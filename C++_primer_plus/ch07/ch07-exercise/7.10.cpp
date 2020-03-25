#include <iostream>

using namespace std;

double calculate(double a, double b, double (*p)(double c, double d));
double add(double x, double y);
double sub(double x, double y);

int main()
{
    double a;
    double b;
    cout << "Please enter two number('q' to quit): ";
    while (cin >> a >> b)
    {
        cout << "add: " << calculate(a, b, add) << endl;
        cout << "sub: " << calculate(a, b, sub) << endl;
        cout << "Please enter two number('q' to quit):";
    }
    return 0;
}

double calculate(double a, double b, double (*p)(double c, double d))
{
    return p(a, b);
}

double add(double x, double y)
{
    return x + y;
}

double sub(double x, double y)
{
    return x - y;
}