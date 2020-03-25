#include <iostream>
#include <string>

int main()
{
    using namespace std;

    struct car{
        string brand;
        int year;
    };

    cout << "How many cars do you wish to catalog?";
    int num;
    cin >> num;
    cin.get();
    //(cin >> num).get();

    car * cars = new car [num];

    for (int i = 0; i < num; ++i)
    {
        cout << "Car #" << i + 1 << ":" << endl;
        cout << "Please enter the make: ";
        getline(cin, cars[i].brand);
        cout << "Please enter the year made: ";
        cin >> cars[i].year;
        cin.get();
    }

    cout << "Hear is your collection:" << endl;
    for (int i = 0; i < num; ++i)
        cout << cars[i].year << " " << cars[i].brand << endl;

    delete [] cars;

    return 0;
}