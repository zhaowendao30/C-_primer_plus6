#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char * argv[])
{
    using namespace std;
    if (argc < 3)
    {
        cerr << "argument error! Please try again!\n";
        exit(EXIT_FAILURE);
    }

    ifstream fin(argv[1]);
    if (!fin)
    {
        cerr << "Can't open " << argv[1] << ". Please try again!\n";
        exit(EXIT_FAILURE);
    }

    ofstream fout(argv[2]);
    if(!fout)
    {
        cerr << "Can't open " << argv[2] << ". Please try again!\n";
        exit(EXIT_FAILURE);
    }

    string line;
    while (getline(fin,line))
        fout << line << endl;
    fout.close();
    fin.close();
    return 0;
}