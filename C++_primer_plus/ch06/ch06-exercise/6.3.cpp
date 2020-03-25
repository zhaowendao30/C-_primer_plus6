#include <iostream>
using namespace std;

void showmenu();

int main()
{
    showmenu();
    char choice;

    cin >> choice;

    while(choice != 'f')
    {
        switch(choice)
        {
            case 'c' : cout << "A maple is a carnivore.\n";
                     break;
            case 'p' : cout << "A maple is a pianist.\n";
                     break;
            case 't' : cout << "A maple is a tree.\n";
                     break;
            case 'g' : cout << "A maple is a game.\n";
                     break;
            //default : cout << "That's not a choice.\n";
        }
        cout << "Please enter a c, p, t, or g: ";
        cin >> choice;
    }
    cout << "Bye\n";

    return 0;
}


void showmenu()
{
    cout << "Please enter one of the following choices:\n"
         << "c) carnivore    p) pianist\n"
         << "t) tree    g) game\n"
         << "f) quit\n";
    cout << "Please enter a c, p, t, or g: ";
}