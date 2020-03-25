#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void cvt(string &);

int main()
{
    cout << "Enter a string (q to quit): ";
    string temp;
    getline(cin, temp);

    while(temp != "q")
    {
        cvt(temp);

        cout << "Next string (q to quit): ";
        getline(cin, temp);
    }
    return 0;
}

void cvt(string & p)
{
    for (int i = 0; i < p.size(); ++i)
    {
        if (isalpha(p[i]))
            p[i] = toupper(p[i]);
    }
    cout << p << endl;
}