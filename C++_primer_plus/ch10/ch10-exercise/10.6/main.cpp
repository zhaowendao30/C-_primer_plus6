#include "move.h"

int main()
{
    Move p;
    Move q = {1.0, 2.0};
    p.showmove();
    Move c = p.add(q);
    c.showmove();
    p.showmove();
    p.reset(10.0, 10.0);

    return 0;
}