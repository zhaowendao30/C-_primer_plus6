#ifndef PLORG_H_
#define PLORG_H_
//#include <string>

class Plorg
{
    private:
        static const int L = 19;
        char name[19];
        int CI;
    
    public:
        Plorg(char const *n, int a = 50);
        Plorg();
        void reset_ci(int a);
        void show();
};

#endif