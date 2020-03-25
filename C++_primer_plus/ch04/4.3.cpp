//4.2
#include <iostream>
#include <cstring>


int main()
{
	using namespace std;

	const int size = 20;
	char first_name[size], last_name[size], full_name[2 * size];
	
	cout << "Enter your first name: ";
	cin.get(first_name, size);
	cin.get();
	cout << "Enter your last name: ";
	cin.get(last_name, size);

	strcpy(full_name, last_name);
	strcat(full_name, ", ");
	strcat(full_name, first_name);

	cout << "Here's the information in a single string: ";
	cout << full_name << endl;
	
	return 0;
}
