#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<int> Lotto(int total, int select);

int main()
{
    cout << "Play a game(y/n)? ";
    string s;

    while (cin >> s && s != "n")
    {
        cout << "Please enter the total number of lotto: ";
        int total;
        cin >> total;
        cout << "Please enter the select number of lotto: ";
        int select;
        cin >> select;

        cout << "Now, the lucky numbers are: ";
        auto ar = Lotto(total, select);
        for (auto p = ar.begin(); p != ar.end(); ++p)
            cout << *p << " " << " ";
        cout << endl;

        cout << "again(y/n)? ";
    }

    cout << "Bye!\n";

    return 0;
}

vector<int> Lotto(int total, int select)
{
    vector<int> origin;
    for (int i = 1; i <= total; ++i)
        origin.push_back(i);

    random_shuffle(origin.begin(), origin.end());

    vector<int> ans(origin.begin(), origin.begin() + select);

    return ans;
}