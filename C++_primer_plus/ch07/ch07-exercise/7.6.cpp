#include <iostream>

int Fill_array(double arr[], int n);
void Show_array(double arr[], int n);
void Reverse_array(double arr[], int n);

int main()
{
    using namespace std;
    const int N = 10;
    double arr[N];
    int n = Fill_array(arr, N);
    Show_array(arr, n);
    Reverse_array(arr, n);
    cout << "------两极反转！------" << endl;
    Show_array(arr, n);

    return 0;
}

int Fill_array(double arr[], int n)
{
    using namespace std;
    int temp;
    int i;

    for (i = 0; i < n; ++i)
    {
        cout << "请输入你第 " << i + 1 << " 次成绩: "; 
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
            continue;
            cout << "无效输入!" << endl;
        }
        else if (temp < 0)
            break;
        arr[i] = temp;
    }
    return i;
}

void Show_array(double arr[], int n)
{
    using namespace std;
    cout << "下面是你这 " << n << " 次的成绩:" << endl;
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void Reverse_array(double arr[], int n)
{
    int mid = n / 2;
    double temp;
    for (int i = 0; i < mid; ++i)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}