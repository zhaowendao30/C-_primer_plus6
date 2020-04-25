#include "cd.h"
#include <iostream>
#include <cstring>
using namespace std;


Cd::Cd(char * s1, char *s2, int n, double x):selections(n),playtime(x)
{
    strncpy(performers, s1, 49);
    strncpy(label, s2, 19);
}

Cd::~Cd()
{
    cout << "Bye" << performers << endl;
}

void Cd::Report() const
{
    cout << "performers: " << performers << endl;
    cout << "label: " << label << endl;
    cout << "selections: " << selections << endl;
    cout << "playtime: " << playtime << endl;
}

Classic::Classic(char * s0, char * s1, char * s2, int n, double x):Cd(s1, s2, n, x)
{
    strncpy(anh, s0, N);
}


Classic::~Classic()
{
    cout << "Bye " << anh << endl;
}

void Classic::Report() const
{
    Cd::Report();
    cout << "anh: " << anh << endl;
}


