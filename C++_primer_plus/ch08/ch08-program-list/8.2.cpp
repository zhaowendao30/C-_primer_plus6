// firstref.cpp -- defining and using a reference
#include <iostream>

int main()
{
    using namespace std;
    int rats = 101;
    int &rodents = rats; //rodents是指向int类型的引用y

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    rodents++;

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;

    return 0;
}