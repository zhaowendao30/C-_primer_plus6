#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int num = 0;
    cout << "Please enter char: ";
    while (cin.peek() != '$' && cin.get(ch))
        ++num;

    while (cin.get() != '\n')
        continue;

    cout << "Total " << num << " charactor.\n";

    return 0;
}