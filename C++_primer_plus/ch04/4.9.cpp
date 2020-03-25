#include <iostream>
#include <string>

struct CandyBar{
    std::string brand;
    double weight;
    int calorie;      
};

int main(void)
{
    using namespace std;
    int i;
    
    CandyBar *snacks = new CandyBar [3];

    snacks[0] = {"A", 1, 1};
    snacks[1] = {"B", 2, 2};
    snacks[2] = {"C", 3, 3};

    for(i = 0; i < 3; ++i)
    {
        cout << "Brand: " << snacks[i].brand << endl;
        cout << "Weight: " << snacks[i].weight << endl;
        cout << "Calorie: " << snacks[i].calorie << endl;   
    }
    
    delete [] snacks;
    
    return 0;

}
