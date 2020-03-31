#ifndef LIST_H
#define LIST_H
//头文件，注意格式
typedef int Item;

class List
{
private:
    static const int MAX = 100;
    Item items[MAX];
    int top;
public:
    List(){ top = 0; }  
    bool add(const Item item);  
    bool isempty() const;
    bool isfull() const;
    void visit(void(*pf)(Item & item));
};

#endif
