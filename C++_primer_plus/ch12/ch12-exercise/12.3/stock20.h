#ifndef STOCK00_H_
#define STOCK00_H_
#include <string>
#include<iostream>
using namespace std;

class Stock
{
private:
    char * company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock();
    Stock(const char * co, long n=0, double pr=0.0);
    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    friend ostream &operator<<(ostream & os,const Stock &s);
    const Stock &topval(const Stock &s) const;
};

#endif
