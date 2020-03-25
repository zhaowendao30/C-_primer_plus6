#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string word;
    int count = 0;

    cout << "Enter words (to stop, type the word done) :" << endl;
    cin >> word;

    while (word != "done")
    {
        ++count;
        cin >> word;
    }

    cout << "You entered a total of " << count << " words.";

    return 0;
}

