// exc_mean.h  -- exception classes for hmean(), gmean()
#ifndef EXC_MEAN_H_
#define EXC_MEAN_H_

#include <stdexcept>

class HmeanExcp : public std::logic_error
{
    public:
        HmeanExcp() : std::logic_error("hmean() invalid arguments: a = -b\n")
        {

        }
};

class GmeanExcp : public std::logic_error
{
    public:
        GmeanExcp() : std::logic_error("gmean() arguments should be >= 0\n")
        {

        }
};

#endif