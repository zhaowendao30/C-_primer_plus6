//4.5
#include <iostream>
#include <string>


//使用vc6进行编译的时候，如果structrue内部含有string等对象，直接初始化也会抛出该错误
//解决办法一：使用char
struct CandyBar{
    std::string brand;
    double weight;
    int calorie;      
};

int main(void)
{
    using namespace std;
    
    CandyBar snack = {
        "Mocha Munch",
        2.3,
        350
    };
    
    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calorie: " << snack.calorie << endl;
    
    return 0;
}



