// 3.4
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the number of seconds: ";
	int seconds;
	cin >> seconds;
	const m_s = 60, h_m = 60, d_h = 24;
	int r_seconds = seconds % m_s;
	int minutes = seconds / m_s;
	int r_minutes = minutes % h_m;
	int hours = minutes / h_m;
	int r_hours = hours % d_h;
	int days = hours / d_h;
	cout << seconds << " seocnds = "
		 << days << " days, "
		 << r_hours << " hours, "
		 << r_minutes << " minutes, "
		 << r_seconds << " seconds" << endl;
	return 0;
}