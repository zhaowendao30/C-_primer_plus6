#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <list>
#include <ctime>

using namespace std;

int main()
{
    const long n = 100000;

    vector<int> vi0;
    for (int i = 0; i < n; ++i)
        vi0.push_back(rand());

    vector<int> vi1(vi0);
    list<int> li(vi0.cbegin(), vi0.cend());
    
    int start = clock();
    sort(vi1.begin(), vi1.end());
    int end = clock();
    cout << "vi1: " << double(end - start) / CLOCKS_PER_SEC << endl;

    start = clock();
    li.sort();
    end = clock();
    cout << "li: " << double(end - start) / CLOCKS_PER_SEC << endl;

    copy(vi0.begin(), vi0.end(), li.begin());
    start = clock();
    copy(li.begin(), li.end(), vi1.begin());
    sort(vi1.begin(), vi1.end());
    copy(vi1.begin(), vi1.end(), li.begin());
    end = clock();
    cout << "li->vi1->li: " << double(end - start) / CLOCKS_PER_SEC << endl;

    return 0;
}