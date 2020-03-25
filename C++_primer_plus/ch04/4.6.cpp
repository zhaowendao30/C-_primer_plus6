//4.6
#include <iostream>
#include <string>

struct CandyBar{
    char brand[20];
    double weight;
    int calorie;      
};

int main()
{
    using namespace std;
    
    CandyBar snack[3] = 
	{
		{"A", 1.2, 120},
		{"B", 1.3, 130},
		{"C", 1.4, 140}
    };

    for(int i = 0; i < 3; ++i)
	{
		cout << "Brand: " << snack[i].brand << endl;
		cout << "Weight: " << snack[i].weight << endl;
		cout << "Calorie: " << snack[i].calorie << endl;
	}
    
    return 0;
}



