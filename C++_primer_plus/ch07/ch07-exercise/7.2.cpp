#include <iostream>

using namespace std;
const int SIZE = 10;

int input_arr(double ar[],int n);
void show_arr(double ar[], int n);
double avg_grade(double ar[], int n);

int main()
{
    double ar[SIZE];
    int n;
    n = input_arr(ar, SIZE);
    cout << "你的高尔夫成绩如下：" << endl;
    show_arr(ar, n);
    cout << "平均成绩：" << avg_grade(ar, n);

    return 0;
}

int input_arr(double ar[], int n)
{
    using namespace std;
    
    int i;
    double temp;

    for (i = 0; i < n; ++i)
    {
        cout << "请输入第 " << i + 1 << " 次成绩(输入q停止输入): ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "非有效输入，输入停止.\n";
            break;
        }
        else if (temp < 0)
            break;
        else
            ar[i] = temp;
    }
    return i;
}

void show_arr(double ar[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << ar[i] << " ";
    cout << endl;
}

double avg_grade(double ar[], int n)
{
    double total = 0.0;
    for (int i = 0; i < n; ++i)
        total += ar[i];
    return total / n;
}