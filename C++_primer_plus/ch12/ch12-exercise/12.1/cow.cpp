#include "cow.h"
#include <cstring>
#include <iostream>

using namespace std;

/*
Cow::Cow()
{
    name[0] = '\0';
    hobby = nullptr;
    weight = 0.0;
}
*/

Cow::Cow(const char *nm, const char *ho, double wt) : weight(wt)
{
    //检查字符串是否超过规定的长度
    unsigned str_len = strlen(nm) < 19 ? strlen(nm) : 19;
    strncpy(name, nm, str_len);
    name[str_len] = '\0';
    //对于私有成员为指针的变量，要先给他分配内存
    hobby = new char [strlen(ho)+1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::~Cow()
{
    delete[] hobby;
}

Cow::Cow(const Cow & c) : weight(c.weight)
{
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
}

Cow & Cow::operator=(const Cow & c)
{
    if (&c == this)
    {
        return *this;
    }
    strcpy(name, c.name);
    delete[] hobby;
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const
{
    cout << name << "\t" << hobby << "\t" << weight << endl;
}

