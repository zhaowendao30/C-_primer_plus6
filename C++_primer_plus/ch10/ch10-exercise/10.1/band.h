#ifndef BAND_H_
#define BAND_H_
#include <string>
#include <iostream>
using namespace std;

class Account
{
    private:
        string name;
        string acctnum;
        double balance;
    public:
        Account(const string client, const string num, double bal);
        Account();
        ~Account();
        void show(void) const;
        void deposit(double cash);
        void withdraw(double cash);
};

#endif
