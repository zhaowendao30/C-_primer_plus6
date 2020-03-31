#include <iostream>
#include "list.h"//实现文件
//前三个函数可参考书中例子10-11
bool List::isempty() const
{
    return top == 0;
}

bool List::isfull() const
{
    return top == MAX;
}

bool List::add(const Item item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}
//比较难理解的函数，我的理解是它把函数指针作为一个参数
//而指针指向的具体函数是可以改变的，这里就是简单的显示每个item
void List::visit(void(*pf)(Item & item))
{
    std::cout << "\nDisplay the item: \n";  
    for (int i = 0; i < top; ++i)
        (*pf)(items[i]);
}
