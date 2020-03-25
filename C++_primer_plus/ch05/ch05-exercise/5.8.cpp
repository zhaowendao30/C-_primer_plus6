#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    const int chsize = 20;

    char word[chsize];
    int count = 0;

    cout << "Enter words (to stop, type the word done) :" << endl;
    cin >> word;

    while (strcmp(word, "done"))
    {
        ++count;
        cin >> word;
    }

    cout << "You entered a total of " << count << " words.";

    return 0;
}

