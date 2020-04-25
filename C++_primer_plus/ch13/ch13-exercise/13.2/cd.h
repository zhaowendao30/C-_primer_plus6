#ifndef CD_H_
#define CD_H_

class Cd
{
    private:
        char * performers;
        char * label;
        int selections;
        double playtime;
    
    public:
        Cd(char * s1 = "", char * s2 = "", int n = 0, double x = 0.0);
        Cd(const Cd & s);
        virtual ~Cd();
        virtual void Report() const;
        virtual Cd & operator=(const Cd & s);
};

class Classic: public Cd
{
    private:
        char * anh;
    
    public:
        Classic(char * s0 = "", char * s1 = "", char * s2 = "", int n = 0, double x = 0.0);
        Classic(const Classic & s);
        virtual ~Classic();
        virtual void Report() const;
        virtual Classic & operator=(const Classic & s);
};

#endif
