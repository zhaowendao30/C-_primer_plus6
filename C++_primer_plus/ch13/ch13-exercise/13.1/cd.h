#ifndef CD_H_
#define CD_H_

class Cd
{
    private:
        char performers[50];
        char label[20];
        int selections;
        double playtime;
    
    public:
        Cd(char * s1 = "", char * s2 = "", int n = 0, double x = 0.0);
        virtual ~Cd();
        virtual void Report() const;
};

class Classic: public Cd
{
    private:
        enum {N = 64};
        char anh[N];
    
    public:
        Classic(char * s0 = "", char * s1 = "", char * s2 = "", int n = 0, double x = 0.0);
        virtual ~Classic();
        virtual void Report() const;
};

#endif
