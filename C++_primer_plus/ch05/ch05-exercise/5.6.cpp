#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string years[3] = {"first year ", "second year ", "third year "};
    string months[12] = {"January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November",
        "December"};
    int sales[3][12];
    int total_sales = 0;

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 12; ++j)
        {
            cout << "Please enter " << years[i] << months[j] << " sales for books: ";
            cin >> sales[i][j];
            total_sales += sales[i][j];
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 12; ++j)
        {
            cout << years[i] << months[j] << " sales " << sales[i][j] << " books" << endl;
        }
    }
    cout << "Three years we total sale " << total_sales << " books" << endl;

    return 0;
}