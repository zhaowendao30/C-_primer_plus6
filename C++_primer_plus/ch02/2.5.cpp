//2.5
#include <iostream>
using namespace std;
double C_to_F(double);
int main()
{
	cout << "Please enter a Celsius value: ";
	double Celsius;
	cin >> Celsius;
	cout << Celsius << " degrees Celsius is "
		 << C_to_F(Celsius) << " degrees Fahrenheit."
		 << endl;
	return 0;
}

double C_to_F(double Celsius)
{
	return Celsius * 1.8 + 32.0;
}
