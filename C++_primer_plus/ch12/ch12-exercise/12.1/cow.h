#ifndef COW_H_
#define COW_H_

class Cow
{
    private:
        char name[20];
        char *hobby;
        double weight;
    public:
        explicit Cow(const char * nm = "", const char * ho = "", double wt = 0);
        Cow(const Cow &c);
        ~Cow();
        Cow &operator=(const Cow &c);
        void ShowCow() const;
};

#endif