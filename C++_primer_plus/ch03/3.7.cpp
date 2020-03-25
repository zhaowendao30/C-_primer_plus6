// 3.7
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter your 100km / L fule: ";
	double km_L;
	cin >> km_L;
	const km_em = 62.14, mpg_L = 3.875;
	cout << "So, you mpg / em is: "
		 << (1 / km_L) / mpg_L / 62.14 << " mpg/em" << endl;
	return 0;
}
