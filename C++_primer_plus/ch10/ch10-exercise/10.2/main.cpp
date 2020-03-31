#include "person.h"

using namespace std;

int main()
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    two.Show();
    cout << endl;
    three.FormalShow();
}