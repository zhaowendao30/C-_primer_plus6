//4.5
#include <iostream>
#include <string>


//ʹ��vc6���б����ʱ�����structrue�ڲ�����string�ȶ���ֱ�ӳ�ʼ��Ҳ���׳��ô���
//����취һ��ʹ��char
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



