//2.6
#include <iostream>
using namespace std;
double covert(double);
int main()
{
	cout << "Enter the number of light years: ";
	double light_years;
	cin >> light_years;
	cout << light_years << " light_years = "
		 << covert(light_years) << " astronomical units." << endl;
	return 0;
}

double covert(double light_years)
{
	return 63240 * light_years;
}