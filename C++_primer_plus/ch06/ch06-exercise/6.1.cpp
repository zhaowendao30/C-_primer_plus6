#include <iostream>
#include <cctype>

using namespace std;
//const int SIZE = 20;

int main()
{
    char ch;

    cout << "Please enter characters (enter \'@\' quit): ";
    cin.get(ch);

    while (ch != '@')
    {
        if(isupper(ch))
            ch = tolower(ch);
        else if(islower(ch))
            ch = toupper(ch);

        if(!isdigit(ch))
            cout << ch;
        //cout << "Enter: ";
        cin.get(ch);
    }
    return 0;
}