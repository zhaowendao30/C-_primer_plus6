#include <iostream>
#include "band.h"

using namespace std;

int main()
{
    Account Faiz = {"Faiz", "20151387020", 0.0};
    cout << "Hello, what can I help your? \n";
    cout << "'d': deposit       'w': withdraw\n";
    cout << "'s': show information of your account\n";
    cout << "'q': quit\n";
    cout << "Please enter your choose: ";
    char s;
    cin >> s;
    while (s != 'q')
    {
        if (s == 'd')
        {
            cout << "Please enter the number that you want to deposit: ";
            double cash;
            cin >> cash;
            Faiz.deposit(cash);
        }
        else if (s == 'w')
        {
            cout << "Please enter the number that your want to withdraw: ";
            double cash;
            cin >> cash;
            Faiz.withdraw(cash);
        }
        else if (s == 's')
            Faiz.show();
        else if (s == 'q')
            break;
        else
            cout << "That's not a valid input.\n";
        cout << "Please enter your choose: ";
        cin >> s;
    }
    return 0;
}