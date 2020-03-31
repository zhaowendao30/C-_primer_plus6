#include "plorg.h"
#include <iostream>
#include <cstring>
//#include <string>
using namespace std;

Plorg::Plorg(char const *s, int a)
{
    strcpy(name, s);
    CI = a;
}

Plorg::Plorg()
{
    strcpy(name, "Plorga");
    CI = 50;
}

void Plorg::reset_ci(int a)
{
    CI = a;
}

void Plorg::show()
{
    cout << "Name: " << name << endl;
    cout << "CI: " << CI << endl;
}