//2.7
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the number of hours: ";
	int hour;
	cin >> hour;
	cout << "Enter thr number of minutes: ";
	int minutes;
	cin >> minutes;
	if (minutes > 9)
		cout << "Time: " << hour << " : " << minutes << endl;
	else
		cout << "Time: " << hour << " : 0" << minutes << endl;
	return 0;
}