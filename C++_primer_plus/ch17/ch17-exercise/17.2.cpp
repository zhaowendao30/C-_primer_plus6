#include <iostream>
#include <fstream>


using namespace std;

int main(int argc, char * argv[])
{
    if (argc != 2)
    {
        cerr << "argument error !\n";
        exit(EXIT_FAILURE);
    }
    ofstream fout(argv[1]);
    char ch[10];
    cin.getline(ch, 10);
    fout << ch << endl;

    return 0;
}