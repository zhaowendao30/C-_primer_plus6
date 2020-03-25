#include <iostream>

struct donation
{
    char name[20];
    double money;
};

int main()
{
    using namespace std;
    
    cout << "Please enter the number of donation: ";
    int number;
    cin >> number;
    donation *donations = new donation [number];

    for (int i = 0; i < number; ++i)
    {
        cout << "Please enter " << i + 1 << " name: ";
        cin >> donations[i].name;
        cout << "Please enter " << i + 1 << " money: ";
        cin >> donations[i].money;
    }

    cout << "Here are Grand Patrons\n";
    for (int i = 0; i < number; ++i)
    {
        if (donations[i].money > 10000)
            cout << donations[i].name << " : " << donations[i].money << endl;
    }

    cout << "   Patrons    \n";
    for (int i = 0; i < number; ++i)
    {
        if (donations[i].money <= 10000)
            cout << donations[i].name << " : " << donations[i].money << endl;
    }
    delete[] donations;
    return 0;
}