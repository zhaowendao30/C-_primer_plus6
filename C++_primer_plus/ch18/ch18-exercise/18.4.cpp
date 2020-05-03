// functor.cpp -- using a functor
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

int main()
{
    using std::list;
    using std::cout;
    using std::endl;
	using std::for_each;
	using std::remove_if;

    int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    list<int> yadayada(vals, vals + 10); // range constructor
    list<int> etcetera(vals, vals + 10);
 
 // C++0x can use the following instead
//  list<int> yadayada = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
//  list<int> etcetera {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};

    cout << "Original lists:\n";
    for_each(yadayada.begin(), yadayada.end(), [](int n) { std::cout << n << " "; });
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), [](int n) { std::cout << n << " "; });
    cout << endl;
    yadayada.remove_if([](int n) { return n > 100; });            // use a named function object
    etcetera.remove_if([](int n) { return n > 300; });            // construct a function object
    cout <<"Trimmed lists:\n";
    for_each(yadayada.begin(), yadayada.end(), [](int n) { std::cout << n << " "; });
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), [](int n) { std::cout << n << " "; });
    cout << endl;
    // std::cin.get();
    return 0;
}
