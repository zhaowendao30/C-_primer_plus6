#ifndef WORKER_H_
#define WORKER_H_

#include <iostream>
#include <string>

using namespace std;

class Worker
{
    private:
        string fullname;
        long id;
    
    public:
        Worker() : fullname("None"), id(0L) {}
        Worker(const string & s, long i) : fullname(s), id(i) {}
        void Set();
        void Show();
};


void Worker::Set()
{
    cout << "Please enter the fullname: ";
    string name;
    getline(cin, name);
    fullname = name;
    cout << "Please enter the id: ";
    long i;
    cin >> i;
    id = i;
    while (cin.get() == '\n')
        continue;
}

void Worker::Show()
{
    cout << "fullname: " << fullname << endl;
    cout << "id: " << id << endl;
}


#endif