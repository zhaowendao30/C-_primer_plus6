// 3.5
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the world's population: ";
	long world_population;    // VC 6.0不支持long long, 真**
	cin >> world_population;
	cout << "Enter the population of the US: ";
	long us_population;
	cin >> us_population;
	double us_per_world = us_population / double(world_population);
	cout << "The population of the US is "
		 << us_per_world * 100 << "% "
		 <<"of the world population." << endl;
	return 0;
}
