//4.8
#include <iostream>
#include <string>

struct pizzar{
    char brand[20];
    double diameter;
    double weight;      
};

int main()
{
    using namespace std;

	pizzar *p = new pizzar;

	cout << "Please enter pizzar's diameter: ";
	cin >> p->diameter;
    cout << "Please enter pizzar's brand: ";
	cin >> p->brand;
	cout << "Please enter pizzar's weight: ";
	cin >> p->weight;

	cout << "Brand: " << p->brand << endl;
	cout << "diameter: " << p->diameter << endl;
	cout << "Weight: " << p->weight << endl;

    return 0;
}