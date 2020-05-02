#include <iostream>
#include <string>

using namespace std;

bool judge(string &s);

int main()
{
    cout << "Please enter a word(q to quit): ";
    string s;
    
    while (getline(cin, s) && s != "q")
    {
        if (judge(s))
            cout << s << " is palindrome!\n";
        else
            cout << s << " is not palindrome!\n";
        cout << "Please enter a word again: ";
    }

    cout << "Bye!\n";

    return 0;
}

bool judge(string & s)
{
    string rev(s.rbegin(), s.rend());

    return (rev == s);
}