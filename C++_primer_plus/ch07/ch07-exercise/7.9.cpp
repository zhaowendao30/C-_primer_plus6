#include <iostream>

using namespace std;

const int SLEN = 30;

struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};


int getinfo(student pa[], int n);           // 创建一个student结构的数组，填写学生的信息，返回学生数目
void display1(student st);                  // 接受一个student类型，显示该学生的信息
void display2(const student *ps);           // 接受一个student类型指针， 显示该学生的信息
void display3(const student pa[], int n);   // 显示结构数组所有学生的信息

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    
    while (cin.get() != '\n')
        continue;

    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);

    for (int i = 0; i < entered; ++i)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }

    display3(ptr_stu, entered);
    delete[] ptr_stu;

    cout << "Done\n";
    
    return 0;
}

int getinfo(student pa[], int n)
{
    int i;

    for (i = 0; i < n; ++i)
    {
        cout << "Enter #" << i + 1 << " student's name:";
        cin.getline(pa[i].fullname, SLEN);
        if (!pa[i].fullname)
            break;
        cout << "Enter #" << i + 1 << " student's hobby:";
        cin.getline(pa[i].hobby, SLEN);
        cout << "Enter #" << i + 1 << " student's opplevel:";
        cin >> pa[i].ooplevel;
        cin.get();
    }
    return i;
}

void display1(student st)
{
    cout << "name: " << st.fullname << endl;
    cout << "hobby: " << st.hobby << endl;
    cout << "ooplevel: " << st.ooplevel << endl;
}

void display2(const student *ps)
{
    cout << "name: " << ps->fullname << endl;
    cout << "hobby: " << ps->hobby << endl;
    cout << "ooplevel: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << "name: " << pa[i].fullname << endl;
        cout << "hobby: " << pa[i].hobby << endl;
        cout << "ooplevel: " << pa[i].ooplevel << endl;
    }
}