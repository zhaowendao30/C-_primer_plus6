#include "sales.h"
#include <iostream>

using namespace std;
using namespace SALES;

Sales::Sales(const double ar[], int n)
{
    for(int i = 0; i < QUARTERS; ++i)
    {
        if(i < n)
            sales[i] = ar[i];
        else
            sales[i] = 0.0;
    }

    double sum = 0.0;
    max = sales[0];
    min = sales[0];
    for(int i = 0; i < QUARTERS; ++i)
    {
        double cur = sales[i];
        if(cur > max)
            max = cur;
        if(cur < min)
            min = cur;
        sum += cur;
    }
    average = sum/(float)QUARTERS;
}

Sales::Sales()
{
    for(int i = 0; i < QUARTERS; ++i)
        sales[i] = 0.0;
    min = 0.0;
    max = 0.0;
    average = 0.0;
}

void Sales::setSales()
{
    cout << "Enter sales:" << endl;
    for(int i = 0; i < QUARTERS; ++i)
    {
        cout << "sales[" << i << "]: ";
        cin >> sales[i];
    }
    double sum = 0.0;
    max = sales[0];
    min = sales[0];
    for(int i = 0; i < QUARTERS; ++i)
    {
        double cur = sales[i];
        if(cur > max)
            max = cur;
        if(cur < min)
            min = cur;
        sum += cur;
    }
}

void Sales::show()
{
    cout << "sales: ";
    for(int i = 0; i < QUARTERS; ++i)
        cout << sales[i] << " ";        
    cout << endl;

        // show average
    cout << "average: " << average << endl;

        // show max and min
    cout << "max: " << max << endl;
    cout << "min: " << min << endl;
}