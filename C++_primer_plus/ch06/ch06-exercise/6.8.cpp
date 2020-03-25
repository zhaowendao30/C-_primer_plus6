#include <iostream>
#include <fstream>

int main()
{
    using namespace std;

    ifstream infile;
    infile.open("patrons.txt");

    char ch;
    int count = 0;

    while (infile >> ch)
        ++count;

    infile.close();

    cout << "There are " << count << " characters.\n";
    return 0;
}