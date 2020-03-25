// arrfun3.cpp -- array functions and const
#include <iostream>
const int Max = 5;

double * fill_array(double * start, double * limit);
void show_array(double * start, double * end);
void revalue(double * start, double * end, double r);

int main()
{
    using namespace std;
    double properties[Max];

    double * end = fill_array(properties, properties + Max);
    show_array(properties, end);

    if (properties != end)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >>factor))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(properties, end, factor);
        show_array(properties, end);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();

    return 0;
}

double * fill_array(double * start, double * limit)
{
    using namespace std;
    double temp;
    double * p;
    int i = 0;
    for (p = start;  p != limit; ++p)
    {
        i++;
        cout << "Enter value #" << i << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        *p = temp;
    }
    return p;
}

void show_array(double *start, double * end)
{
    using namespace std;
    double *p;
    int i = 0;
    for (p = start; p != end; ++p)
    {
        i++;
        cout << "Property #" << i << ": $";
        cout << *p << endl;
    }
}

void revalue(double * start, double * end, double r)
{
    double *p;
    for (p = start; p != end; ++p)
        (*p) *= r;
}