// 3.3
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	int degrees;
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	int minutes;
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	int seconds;
	cin >> seconds;
	const double d_to_m = 60;
	const double d_to_s = 3600;
	cout << degrees << " degrees," << minutes << " minutes,"
		 << seconds << " seconds = "
		 << degrees + minutes / d_to_m + seconds / d_to_s
		 << " degrees" << endl;
	return 0;
}