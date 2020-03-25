#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct donation
{
    string name;
    double money;
};

int main()
{
    
    ifstream infile;
    infile.open("patrons.txt");

    if(!infile.is_open())
    {
        cout << "Could not open file." << endl;
        cout << "program terminating." << endl;
        exit(EXIT_FAILURE);
    }

    int number;
    infile >> number;
    infile.get();

    donation *donations = new donation [number];

    for (int i = 0; i < number && infile.good(); ++i)
    {
        getline(infile, donations[i].name);
        infile >> donations[i].money;
        infile.get();
    }

    if (infile.eof())
        cout << "End of file reached.\n";
    else if (infile.fail())
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated by unknown reason.\n";
    infile.close();

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
