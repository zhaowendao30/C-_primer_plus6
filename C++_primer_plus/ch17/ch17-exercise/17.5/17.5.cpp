#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

inline void show(string s) { cout << s << " "; }

int main()
{
    ifstream fmat;
    fmat.open("mat.dat");
    if (!fmat)
    {
        cerr << "Can't open the file. Please try again!\n";
        exit(EXIT_FAILURE);
    }

    string name;
    vector<string> mat;

    while (fmat >> name)
        mat.push_back(name);
    for_each(mat.begin(), mat.end(), show);
    cout << endl;

    ifstream fpat;
    fpat.open("pat.dat");
    if (!fpat)
    {
        cerr << "Can't open the file. Please try again!\n";
        exit(EXIT_FAILURE);
    }

    vector<string> pat;
    while (fpat >> name)
        pat.push_back(name);
    for_each(pat.begin(), pat.end(), show);
    cout << endl;

    vector<string> matnpat;

    matnpat.reserve(mat.size() + pat.size());
    matnpat.insert(matnpat.end(), mat.begin(), mat.end());
    matnpat.insert(matnpat.end(), pat.begin(), pat.end());
    sort(matnpat.begin(), matnpat.end());
    auto new_end = unique(matnpat.begin(), matnpat.end());

    ofstream fmp;
    fmp.open("matnpat.dat");
    if (!fmp)
    {
        cerr << "Can't open the file. Please try again!\n";
        exit(EXIT_FAILURE);
    }

    for (auto p = matnpat.begin(); p != new_end; ++p)
        fmp << *p << " ";
    
    fmat.close();
    fpat.close();
    fmp.close();

    return 0;
}