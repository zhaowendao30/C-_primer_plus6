#include <iostream>
#include <array>


int main()
{
    using namespace std;
    array<double, 3> run_grade;

    cout << "Please enter your first run grade: ";
    cin >> run_grade[0];
    cout << "Please enter your second run grade: ";
    cin >> run_grade[1];
    cout << "Please enter your third run grade: ";
    cin >> run_grade[2];

    double avg;
    avg = (run_grade[0] + run_grade[1] + run_grade[2]) / 3;
    cout << "Your average of run grade is: " << avg << endl;
    
    return 0;
}