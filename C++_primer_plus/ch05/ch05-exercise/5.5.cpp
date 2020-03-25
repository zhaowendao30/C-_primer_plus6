#include <iostream>
#include <string>

int main()
{
    using namespace std;

    int sell_months[12];
    int all_sell = 0;
    string months[12] = {"January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November",
        "December"};

    for (int i = 0; i < 12; ++i)
    {
        cout << "Enter " << months[i] << " sell: ";
        cin >> sell_months[i];
        all_sell += sell_months[i];
    }

    for (int i = 0; i < 12; ++i)
        cout << months[i] << " sell " << sell_months[i] << " books" << endl;
    cout << "This year total sell " << all_sell << " books" << endl;

    return 0;
}