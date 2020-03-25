#include <iostream>
#include <cstring>

using namespace std;

const int NUM = 2;

struct chaff
{
    char dross[20];
    int slag;
};

chaff ans[NUM];

int main()
{
    chaff res[NUM] =
    {
        {"dross1", 1},
        {"dross2", 2}
    };

    chaff *temp = new (ans) chaff[NUM];

    strcpy(temp[0].dross, res[0].dross);
    temp[0].slag = res[0].slag;
    strcpy(temp[1].dross, res[1].dross);
    temp[1].slag = res[1].slag;

    for (int i = 0; i < NUM; ++i)
    {
        cout << "#" << i + 1 << " dross: " << temp[i].dross << endl;
        cout << "#" << i + 1 << " slag: " << temp[i].slag << endl;
    }

    return 0;
}