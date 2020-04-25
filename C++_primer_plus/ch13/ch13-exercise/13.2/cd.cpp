#include "cd.h"
#include <iostream>
#include <cstring>
using namespace std;


Cd::Cd(char * s1, char *s2, int n, double x):selections(n),playtime(x)
{
    performers = new char[strlen(s1) + 1];
    strcpy(performers, s1);
    label = new char[strlen(s2) + 1];
    strcpy(label, s2);
}

Cd::Cd(const Cd & s):selections(s.selections),playtime(s.playtime)
{
    performers = new char[strlen(s.performers) + 1];
    strcpy(performers, s.performers);
    label = new char[strlen(s.label) + 1];
    strcpy(label, s.label);
}

Cd::~Cd()
{
   delete [] performers;
   delete [] label;
}

void Cd::Report() const
{
    cout << "performers: " << performers << endl;
    cout << "label: " << label << endl;
    cout << "selections: " << selections << endl;
    cout << "playtime: " << playtime << endl;
}

Cd & Cd::operator=(const Cd & s)
{
    if (this == &s)
        return *this;
    delete [] performers;
    performers = new char[strlen(s.performers) + 1];
    strcpy(performers, s.performers);

    delete [] label;
    label = new char[strlen(s.label) + 1];
    strcpy(label, s.label);

    selections = s.selections;
    playtime = s.playtime;

}

Classic::Classic(char * s0, char * s1, char * s2, int n, double x):Cd(s1, s2, n, x)
{
    anh = new char[strlen(s0) + 1];
    strcpy(anh, s0);
}


Classic::~Classic()
{
    delete [] anh;
}

void Classic::Report() const
{
    Cd::Report();
    cout << "anh: " << anh << endl;
}

Classic & Classic::operator=(const Classic & s)
{
    if (this == &s)
        return *this;
    Cd::operator=(s);

    delete [] anh;
    anh = new char[strlen(s.anh) + 1];
    strcpy(anh, s.anh);
}

