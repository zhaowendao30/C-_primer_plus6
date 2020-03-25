// lotto.cpp -- probability of winning
#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main()
{
    using namespace std;

    cout << "请输入可选的区域码数目: ";
    int n;
    cin >> n;

    int start, end;
    long double total = 1.0;
    double picks;
    unsigned number;

    for (int i = 0; i < n; ++i)
    {
        cout << "请输入第 " << i + 1 << " 组区域码的开始数字: ";
        cin >> start;
        cout << "请输入第 " << i + 1 << " 组区域码的结束数字: ";
        cin >> end;
        cout << "请输入第 " << i + 1 << " 组区域码的可选数字的数量: ";
        cin >> picks;
        number = end - start;
        if (picks < number)
        {
            total *= probability(number, picks);
            cout << "现在你有" << total << "分之1的机会赢得特等奖！ 加油！！!";
        }
        else
        {
            cout << "这是非法输入，程序结束！" << endl;
            break;
        }
    }
    cout << "再见！";
    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}