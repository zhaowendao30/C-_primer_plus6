#include <iostream>
#include <cstring>

struct CandyBar
{
    char brand[30];
    double weight;
    int hot;
};

void fill(CandyBar &, const char * brand="Millennium Munch", double weight=2.85, int heat=350);
void show_struct(const CandyBar &);

int main()
{
    using namespace std;
    CandyBar candy;
    char brand[] = "Munch";
    double weight = 3.85;
    int hot = 250;

    cout << "Original: \n";
    fill(candy);
    show_struct(candy);
    cout << "Change: \n";
    fill(candy, brand, weight, hot);
    show_struct(candy);

    return 0;
}

void fill(CandyBar &candy, const char *brand, double weight, int hot)
{
    //candy.brand = brand; 不能将指针赋给数组
    strcpy(candy.brand, brand);
    candy.weight = weight;
    candy.hot = hot;
}

void show_struct(const CandyBar &candy)
{
    using namespace std;
    cout << "brand: " << candy.brand << endl;
    cout << "weight: " << candy.weight << endl;
    cout << "hot: " << candy.hot << endl;
}
