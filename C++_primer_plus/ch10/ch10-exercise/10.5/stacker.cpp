#include <iostream>
#include <cctype>
#include "stack.h"

int main()
{
    using namespace std;
    Stack st;
    char ch;
    customer a = {"Zao", 15.0};
    customer b = {"Faiz", 20.0};
    st.push(a);
    st.push(b);
    st.pop(a);
    st.pop(b);

    cout << "Bye\n";
    return 0;
}