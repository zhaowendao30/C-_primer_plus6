#include <iostream>
using namespace std;
#include <cstring>

struct stringy
{
    char *str;
    int ct;
};

void show(const char *, int n = 1);
void show(const stringy, int n = 1);
void set(stringy &, char *);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;

}

void show(const char *p, int n)
{
    for (int i = 0; i < n; ++i)
        cout << p << endl;
}

void set(stringy &beany, char * p)
{
    beany.str = p;
    beany.ct = strlen(p);
}

void show(const stringy p, int n)
{
    while (n-->0)
        cout << p.str << endl;
}