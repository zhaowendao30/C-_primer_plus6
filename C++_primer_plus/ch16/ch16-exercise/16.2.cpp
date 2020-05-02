#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;


string transf(const string &s);
bool judge(string &s);

int main()
{
    cout << "Please enter a word(q to quit): ";
    string s;
    
    while (getline(cin, s) && s != "q")
    {
        string p = transf(s);
        if (judge(p))
            cout << s << " is palindrome!\n";
        else
            cout << s << " is not palindrome!\n";
        cout << "Please enter a word again: ";
    }

    cout << "Bye!\n";

    return 0;
}

string transf(const string & s)
{
    string t;
    for (auto temp = s.begin(); temp != s.end(); ++temp)
    {
        char ch = *temp;
        if (isalpha(ch))
            t.push_back(isupper(ch) ? tolower(ch) : ch);
    }
    return t;
}

bool judge(string & s)
{
    string rev(s.rbegin(), s.rend());

    return (rev == s);
}