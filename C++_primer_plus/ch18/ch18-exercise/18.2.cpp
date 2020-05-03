#include <iostream>
#include <string>

using namespace std;

class Cpmv
{
    public:
        struct Info
        {
            string qcode;
            string zcode;
        };
    
    private:
        Info *p;
    
    public:
        Cpmv() { p = nullptr; }
        Cpmv(string q, string z);
        Cpmv(const Cpmv &cp);
        Cpmv(Cpmv &&mv);
        ~Cpmv();
        Cpmv &operator=(const Cpmv &cp);
        Cpmv &operator=(Cpmv &&mv);
        Cpmv operator+(const Cpmv &obj) const;
        void Display() const;
};

Cpmv::Cpmv(string q, string z)
{
    cout << "Initlization!\n";
    p = new Info;
    p->qcode = q;
    p->zcode = z;
}

Cpmv::Cpmv(const Cpmv &cp)
{
    cout << "Copy!\n";
    /* if (&cp == this)
        return *this;
    delete p; */
    p = new Info;
    p->qcode = cp.p->qcode;
    p->zcode = cp.p->zcode;
}

Cpmv::Cpmv(Cpmv && mv)
{
    cout << "Move!\n";
    p = mv.p;
    mv.p = nullptr;
}

Cpmv::~Cpmv()
{
    delete p;
}

Cpmv &Cpmv::operator=(const Cpmv &cp)
{
    cout << "operator=\n";
    if (&cp == this)
        return *this;
    delete p;
    p = new Info;
    p->qcode = cp.p->qcode;
    p->zcode = cp.p->zcode;
    return *this;
}

Cpmv &Cpmv::operator=(Cpmv &&mv)
{
    cout << "operator=(Cpmv&&mv)\n";
	if (this == &mv)
		return *this;
	delete p;
	p = mv.p;
	mv.p = nullptr;
	return *this;
}

Cpmv Cpmv::operator+(const Cpmv &obj) const
{
    cout << "operator+\n";
    Cpmv temp;
    temp.p = new Info;
    temp.p->qcode = p->qcode + obj.p->qcode;
    temp.p->zcode = p->zcode + obj.p->zcode;
    return temp;
}

void Cpmv::Display() const
{
    cout << "Display!\n";
    if (p == nullptr)
        cout << "That's nullptr!\n";
    else
    {
        cout << "address: " << p << " ";
        cout << "qcode: " << p->qcode << " zcode: " << p->zcode << endl;
    }
}

int main()
{
	using namespace std;
	Cpmv cp1;
	Cpmv cp2("c++", "programming language");
	Cpmv cp3 = cp2;//左值引用的复制构造函数
	cout << "cp1 ";
	cp1.Display();
	cout << "cp2 ";
	cp2.Display();
	cout << "cp3 ";
	cp3.Display();
	cp1 = cp2;//左值引用的赋值运算符
	cout << "cp1 ";
	cp1.Display();
	cout << "cp2 ";
	cp2.Display();
	cp1=cp2 + cp3;//重载+，移动赋值运算符
	cout << "cp1 ";
	cp1.Display();
	cout << "cp2 ";
	cp2.Display();
	cout << "cp3 ";
	cp3.Display();
	Cpmv cp4(cp1 + cp2);//重载+，移动构造函数
	cout << "cp4 ";
	cp4.Display();
	cout << "cp1 ";
	cp1.Display();
	cout << "cp2 ";
	cp2.Display();
   return 0;
}