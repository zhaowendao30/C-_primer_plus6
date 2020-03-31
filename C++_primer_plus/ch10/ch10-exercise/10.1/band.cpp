#include "band.h"
#include <iostream>
#include <string>
using namespace std;

Account::Account()
{
    name = "";
    acctnum = "";
    balance = 0.0;
}

Account::Account(const string client, const string num, double bal)
{
    name = client;
    acctnum = num;
    balance = bal;
}

Account::~Account()
{
    cout << "Bye\n";
}

void Account::show(void) const
{
    cout << "Name: " << name << endl;
    cout << "Accout: " << acctnum << endl;
    cout << "Balance: " << balance << endl;
}

void Account::deposit(double cash)
{
    if (cash > 0)
        balance += cash;
    else
        cout << "That's not a normal number of cash.\n";
}

void Account::withdraw(double cash)
{
    if (cash <= balance)
        balance -= cash;
    else
        cout << "You haven't enought money in your account.\n";
}
