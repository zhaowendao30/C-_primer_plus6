#include <iostream>
using namespace std;

void show_str(const char *p, int n = 0);

int main()
{
    char p[10] = "Hello";

    cout << "call n = 0" << endl;
    show_str(p);
    cout << "call n = 1\n";
    show_str(p, 1);
    cout << "call n = 2\n";
    show_str(p, 2);

    return 0;
}

void show_str(const char *p, int n)
{
    static int count = 1;

    if (n)
    {
        for (int i = 0; i < count; ++i)
            cout << p << endl;
    }
    else
        cout << p << endl;
    ++count;
}