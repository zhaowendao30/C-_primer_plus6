#include <iostream>

using namespace std;
const int strsize = 20;

struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

void showmenu();
void display_by_name();

bop list_bop[5] =
    {
        {"Wimp Macho", "BOSS", "WM", 0},
        {"Raki Rhodes", "Manager", "Junior Programmer", 2},
        {"Celia Laiter", "MIPS", "CL", 1},
        {"Hoppy Hipman", "Analyst Trainee", "AT", 1},
        {"Pat Hand", "Student", "LOOPY", 2}
    };

int main()
{
    showmenu();
    char ch;
    cin >> ch;

    while (ch != 'q')
    {
        switch (ch)
        {
        case 'a' : display_by_name();
			break;
        case 'b' :
            for (int i = 0; i < 5; ++i)
                cout << list_bop[i].title << endl;
            break;
        case 'c' :
           for (int i = 0; i < 5; ++i)
                cout << list_bop[i].bopname << endl;
            break;
        case 'd' :
           for (int i = 0; i < 5; ++i)
                if (list_bop[i].preference == 0)
                    cout << list_bop[i].fullname << endl;
                else if (list_bop[i].preference == 1)
                    cout << list_bop[i].title << endl;
                else
                    cout << list_bop[i].bopname << endl;
        default:
            cout << "That's not a choice, please enter your choice.\n";
            break;
        }
        cout << "Next choice: ";
        cin >> ch;
    }
    cout << "Bye!\n";

    return 0;
}


void showmenu()
{
    cout << "Benevolent Order of Programmers Report:\n"
         << "a. display by name      b. display by title\n"
         << "c. display by bopname   d. display bu preference\n"
         << "q. quit\n";
    cout << "Enter your choice: ";
}

void display_by_name()
{  
	for(int i = 0 ; i < 5; ++ i)  
		cout << list_bop[i].fullname << endl;  
} 

