// arrobj.cpp -- functions with array objects
#include <iostream>
#include <string>

using namespace std;

const int Seasons = 4;
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
struct expense
{
    double arr[Seasons];
};

//填充数组
void fill(double arr[]);
//显示数组数据
void show(double arr[]);

int main()
{
    expense p;
    fill(p.arr);
    show(p.arr);
    return 0;
}

void fill(double arr[])
{
    using namespace std;

    for (int i = 0; i < Seasons; ++i)
    {
        cout << "Enter " << *(Snames + i) << " expenses: ";
        cin >> arr[i];
    }
} 

void show(double arr[])
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; ++i)
    {
        cout << *(Snames + i) << ": $" << arr[i] << endl;
        total += arr[i];
    }
    cout << "Total Expenses: $" << total << endl;
}