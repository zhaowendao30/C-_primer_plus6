#include <iostream>


int main()
{
    using namespace std;

    int num;

    cout << "Enter number of rows: ";
    cin >> num;

    for (int i = 0; i < num; ++i)
    {
        for (int j = num - i - 1; j > 0; --j)
            cout << " . ";
        for (int l = i; l > 0; --l)
            cout << " * ";
        cout << " * " << endl;
    }

    return 0;
}