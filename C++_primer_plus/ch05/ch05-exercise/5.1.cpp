#include <iostream>

int main()
{
    using namespace std;

    int first, second;

    cout << "Please enter first number: ";
    cin >> first;
    cout << "Please enter second number: ";
    cin >> second;

    int sum_i_j = 0;
    for (int i = first; i <= second; ++i)
        sum_i_j += i;

    cout << "Sum: " << sum_i_j << endl;

    return 0;
}
