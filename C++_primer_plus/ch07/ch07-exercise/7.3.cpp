#include <iostream>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

using namespace std;

void show_box(box boxer);
void compute_volume(box * p);

int main()
{
    box boxer = {"VSCode-2020-3-16", 4, 5, 6, 0.0};
    
    box * p = &boxer;
    compute_volume(p);
    show_box(boxer);

    return 0;
}

void show_box(box boxer)
{
    using namespace std;
    cout << "maker: " << boxer.maker << endl;
    cout << "height: " << boxer.height << endl;
    cout << "width: " << boxer.width << endl;
    cout << "length: " << boxer.length << endl;
    cout << "volume: " << boxer.volume << endl;
}

void compute_volume(box * p)
{
    p->volume = p->height * p->width * p->length;
}