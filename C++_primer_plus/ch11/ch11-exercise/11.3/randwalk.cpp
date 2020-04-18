// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "vect.h"
#include <limits>
int main()
{
    
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    unsigned long maxstep = 0;
    unsigned long minstep = numeric_limits<unsigned>::max();
    double avgstep = 0.0;
    double target;
    double dstep;
    unsigned int N;
    cout << "Enter the number of test: ";
    cin >> N;
    cout << "Enter target distance (q to quit): ";
    for (int i = 0; i < N && cin >> target; ++i)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        if (steps > maxstep)
            maxstep = steps;
        if (steps < minstep)
            minstep = steps;
        avgstep += double(steps) / N;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "max step: " << maxstep << endl;
    cout << "min step: " << minstep << endl;
    cout << "average step: " << avgstep << endl;
    cout << "Bye!\n";

    return 0; 
}
