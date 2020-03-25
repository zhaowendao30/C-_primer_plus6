#include <iostream>
#include <array>

const int Size = 10;

int main()
{
    using namespace std;

    array<double, Size> donations;
    double donation;
    double sum = 0.0;

    cout << "Please enter number (stop with non_number): ";

    int i, n;
    for (i = 0; (i < 10) && (cin >> donation); ++i)
    {    
        donations[i] = donation;
        sum += donation;
    }

    n = i + 1;
    double avg = sum / n;
    int count = 0;
    
    for (i = 0; i < n; ++i)
    {
        if (donations[i] > avg)
            count += 1;
    }
    cout << "This number avg: " << avg << endl;
    cout << "Total " << count << " number > avg." << endl;

    return 0;
}