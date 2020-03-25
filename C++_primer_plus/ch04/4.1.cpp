//4.1
#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "What is your first name? ";
	string first_name;
	cin >> first_name;
	cout << "What is your last name? ";
	string last_name;
	cin >> last_name;
	cout << "What letter grade do you deserve? ";
	char grade;
	cin >> grade;
	cout << "What is your age? ";
	int age;
	cin >> age;
	grade = grade + 1;
	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;
	return 0;
}