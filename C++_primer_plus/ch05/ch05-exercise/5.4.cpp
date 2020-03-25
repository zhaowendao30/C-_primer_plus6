#include <iostream>

int main()
{
    using namespace std;

    double daphne = 100.0;
    double cleo = 100.0;
    int years = 0;

    while (cleo <= daphne)
    {
        cleo *= 1.05;
        daphne += 10;
        ++years;
    }

    cout << years << " later" << endl;
    cout << "Cleo's $: " << cleo << endl;
    cout << "Daphne's $: " << daphne << endl;

    return 0;
}