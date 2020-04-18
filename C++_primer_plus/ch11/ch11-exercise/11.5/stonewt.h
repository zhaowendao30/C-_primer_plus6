// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
private:
    enum Mode {POUNDS, STONE};
    enum {Lbs_per_stn = 14};      // pounds per stone
    int stone;                    // whole stones
    double pds_left;              // frasctional pounds
    double pounds;                // entire weight in pounds
    Mode mode;

    void set_pounds();
    void set_stone();

public:
    Stonewt(double lbs, Mode m = POUNDS);          // constructor for double pounds
    Stonewt(int stn, double lbs); // constructor for stone, lbs
    void Stone();
    void Pounds();
    Stonewt();                    // default constructor
    ~Stonewt();
    Stonewt operator+(const Stonewt & s) const;
    Stonewt operator-(const Stonewt & s) const;
    Stonewt operator*(double n) const;
    friend Stonewt operator*(double m, const Stonewt & t)
        { return t * m; }   // inline definition
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & t);
};
#endif
