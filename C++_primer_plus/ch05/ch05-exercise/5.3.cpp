#include <iostream>

int main()
{
    using namespace std;

    cout << "Enter 0 to stop." << endl;
    cout << "Enter a integer: ";

    int num;
    int sum_all = 0;
    cin >> num;

    while (num)
    {
        sum_all += num;
        cout << "Now all number sum is: " << sum_all << endl;
        cout << "Enter a integer: ";
        cin >> num;
    }

    cout << "Game Over!" << endl;

    return 0;
}