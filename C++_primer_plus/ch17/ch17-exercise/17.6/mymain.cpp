// count.cpp -- counting characters in a list of files
#include <iostream>
#include <fstream>
#include "emp.h"

using namespace std;

void line(int n);
void showmenu();
inline void killspace() { while (cin.get() != '\n') continue; }

int main(int argc, char * argv[])
{
    if (argc == 1)          // quit if no arguments
    {
        cerr << "Usage: " << argv[0] << " filename[s]\n";
        exit(EXIT_FAILURE);
    }

    const int MAX = 10;
    string fname, lname, job, reportsto;
    int inchargeof;

    abstr_emp *pc[MAX];

    ifstream fin;
    //fin.open(argv[1], ios_base::in);
    fin.open(argv[1]);
    if (!fin)
    {
        cerr << "Can't open the file! Please try again!\n";
        exit(EXIT_FAILURE);
    }
    int kind;
    int ct = 0;
    while (fin >> kind)
    {
        switch (kind)
        {
            case Employee:
                fin >> fname;
                fin >> lname;
                fin >> job;
                pc[ct] = new employee(fname, lname, job);
                break;
            
            case Manager:
                fin >> fname;
                fin >> lname;
                fin >> job;
                fin >> inchargeof;
                pc[ct] = new manager(fname, lname, job, inchargeof);
                break;
            
            case Fink:
                fin >> fname;
                fin >> lname;
                fin >> job;
                fin >> reportsto;
                pc[ct] = new fink(fname, lname, job, reportsto);
                break;
            
            case HighFink:
                fin >> fname;
                fin >> lname;
                fin >> job;
                fin >> reportsto;
                fin >> inchargeof;
                pc[ct] = new highfink(fname, lname, job, reportsto, inchargeof);
                break;
        }
        ++ct;
    }

    cout << "content in info.txt" << endl;
    for (int i = 0; i < ct; ++i)
        pc[i]->ShowAll();

    showmenu();
    char choice;
    abstr_emp *p;
    while (cin >> choice && choice != 'q' && ct < MAX)
    {
        killspace();
        switch (choice)
        {
            case 'a':
                p = new employee;
                p->SetAll();
                pc[ct] = p;
                break;
            
            case 'b':
                p = new manager;
                p->SetAll();
                pc[ct] = p;
                break;
            
            case 'c':
                p = new fink;
                p->SetAll();
                pc[ct] = p;
                break;
            
            case 'd':
                p = new highfink;
                p->SetAll();
                pc[ct] = p;
                break;
        }
        ++ct;
        showmenu();
    }

    for (int i = 0; i < ct; ++i)
        pc[i]->ShowAll();

    ofstream fout(argv[1], ios_base::out);

    for (int i = 0; i < ct; ++i)
    {
        pc[i]->WriteAll(fout);
        fout << endl;
    }
    fout.close();

    cout << "content in array are written to out.txt" << endl;

    for (int i = 0; i < ct; ++i)
        delete pc[i];

    return 0;
}

void line(int n)
{
    cout.fill('-');
    cout.width(n);
    cout << "-" << endl;
    cout.fill(' ');
}

void showmenu()
{
    ios_base::fmtflags old = cout.setf(ios_base::left, ios_base::adjustfield);

    line(35);
    cout.width(20);
    cout << "a. employee";
    cout << "b. manager" << endl;
    cout.width(20);
    cout << "c. fink";
    cout << "d. highfink" << endl;
    cout << "q. quit" << endl;
    line(35);
    cout << "Select a type: ";

    cout.setf(old);
}
