#include <iostream>

int main()
{
    using namespace std;
    double income;
    double tax;

    cout << "Please enter your income: ";

    while (cin >> income && income >= 0)
    {
        if (income <= 5000.0)
            cout << "Your tax: " << 0.00 << endl;
        else if (income >= 5001 && income <= 15000)
            cout << "Your tax:" << 5000 * 0.00 + (insume - 5000) * 0.1 << endl;
        else if (income >= 15001 && income <= 35000)
        {
            tax = (income - 15000) * 0.15 + 10000 * 0.1;
            cout << "Your tax: " << tax << endl;
        }
        else if (income >= 35000)
        {
            tax = (income - 35000) * 0.2 + 20000 * 0.15 + 10000 * 0.1;
            cout << "Your tax: " << tax << endl;
        }
        cout << "Please enter your income: ";
    }
    cout << "Are your kidding me ? That's your income ?\n";

    return 0;
}