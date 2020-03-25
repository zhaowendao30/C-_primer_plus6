//3.1
#include <iostream>
using namespace std;
int main()
{
	cout << "Please enter your height(cm):___\b\b\b";
	int height;
	cin >> height;
	const int v = 100;
	int m = height / v;
	int cm = height - m * v;
	cout << "Your height: " << m << " m " << cm << " cm " << endl;
    return 0;
}


