#include <iostream>
#include <cctype>
#include <string>
using namespace std;

const string p = "aeiouAEIOU";

int main()
{
    cout << "Enter words (q to quit):\n";
    string word;
    int vowel = 0, consonant = 0, other = 0;
    cin >> word;
    char ch;

    while (word != "q")
    {
        ch = word[0];
        if (p.find(ch) != string::npos)  //字符串p中是否有字符串ch
            vowel += 1;
        else if (!isalpha(ch))
            other += 1;
        else
            consonant += 1;
        cin >> word;
    }

    cout <<  vowel << " words beginning with vowels" <<endl;
    cout << consonant << " words beginning with consonants" << endl;
    cout <<  other << " others" << endl;

    return 0;
}