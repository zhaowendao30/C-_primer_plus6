#include "cow.h"
#include <iostream>

using namespace std;

int main (void) 
{     
	Cow	cow1("cow1", "eat", 405.5);
	cout << "cow1: ";
	cow1.ShowCow();
	cout << endl;

	Cow cow2;
	cout << "cow2: ";
	cow2.ShowCow();
	cout << endl;

	Cow cow3(cow1);
	cout << "cow3: ";
	cow3.ShowCow();
	cout << endl;

	Cow cow4;
	cow4 = cow1;
	cout << "cow4: ";
	cow4.ShowCow();
	cout << endl;


	cout << endl;
	return (0);
} 