#include <iostream>
#include <string>
#include <cctype>
#include "list.h"
//主程序
void func(Item & item);//函数声明

int main()
{
    using namespace std;
    List st;
    string str;
    cout << "At first: " << endl;
    if(st.isempty() == 1)
        str = "Yes!";
    if(st.isempty() == 0)
        str = "No!";
    cout << "isEmpty? " << str << endl;
    if(st.isfull() == 1)
        str = "Yes!";
    if(st.isfull() == 0)
        str = "No!";
    cout << "isFull? " << str << endl;
    st.add(1);
    st.add(2);
    st.add(3);
    st.add(4);
    cout << "\nNow: " << endl;
    if(st.isempty() == 1)
        str = "Yes!";
    if(st.isempty() == 0)
        str = "No!";
    cout << "isEmpty? " << str << endl;
    if(st.isfull() == 1)
        str = "Yes!";
    if(st.isfull() == 0)
        str = "No!";
    cout << "isFull? " << str << endl;
    //理解了visit函数，整个程序就很简单了
    void(*pf)(Item & item);//这是个指针函数（姑且这么称呼），并没有确定的函数名字，即可以指向同类型的所有函数
    pf = func;//指向func函数
    st.visit(pf);
    system("PAUSE"); //显示暂停
    return 0;
}   

void func(Item & item)
{
    std::cout << item << std::endl;
}

