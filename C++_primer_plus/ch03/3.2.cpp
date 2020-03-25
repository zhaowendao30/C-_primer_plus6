// 3.2
#include <iostream>
using namespace std;
int main()
{
	const double ecm_m = 0.0254;
	const double kg_p = 2.2;
	const int em_ecm = 12;
	cout << "Please enter your height(em):_\b";
	int em;
	cin >> em;
	cout << " and height(ecm):__\b\b";
	int ecm;
	cin >> ecm;
	cout << "Please enter your weight(pound):___\b\b\b";
	int pound;
	cin >> pound;
	double kg = pound / kg_p;
	double m = (em * em_ecm + ecm) * ecm_m;
	cout << "Now, your BMI is: "
		  << kg / (m * m) << endl;
	return 0;
}
