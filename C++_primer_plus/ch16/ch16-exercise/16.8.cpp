#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

inline void show(string & s) { cout << s << " "; }
void set_ar(vector<string> & ar);

int main()
{
    cout << "Hello, Mat! Please enter your friend's name('q' to quit): ";
    vector<string> Mat_ar;
    set_ar(Mat_ar);
    sort(Mat_ar.begin(), Mat_ar.end());
    cout << "Mat's friends list:\n";
    for_each(Mat_ar.begin(), Mat_ar.end(), show);
    cout << endl;

    cout << "Hello, Pat! Please enter your friend's name('q' to quit): ";
    vector<string> Pat_ar;
    set_ar(Pat_ar);
    sort(Pat_ar.begin(), Pat_ar.end());
    cout << "Pat's friends list:\n";
    for_each(Pat_ar.begin(), Pat_ar.end(), show);
    cout << endl;

    vector<string> all_friends;
    all_friends.reserve(Mat_ar.size() + Pat_ar.size());
    all_friends.insert(all_friends.end(), Mat_ar.begin(), Mat_ar.end());
    all_friends.insert(all_friends.end(), Pat_ar.begin(), Pat_ar.end());

    sort(all_friends.begin(), all_friends.end());
    auto new_end = unique(all_friends.begin(), all_friends.end());

    cout << "Here are finally list:\n";
    for_each(all_friends.begin(), new_end, show);
    cout << endl;

    return 0;
}

void set_ar(vector<string> & ar)
{
    string name;
    while (getline(cin, name) && name != "q")
    {
        ar.push_back(name); 
        cout << "Next name: ";   
    }
}

