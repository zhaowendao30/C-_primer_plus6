// 3.6
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter your km: ";
	double km;
	cin >> km;
	cout << "Enter your fules(L): ";
	double L;
	cin >> L;
	cout << "Every 100km, your use "
		 << L / km * 100 << "L fule" << endl;
	return 0;
}
