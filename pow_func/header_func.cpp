#include "header.h"
#include <iostream>


namespace pow_func {
double pow(double base, double pow)
{
    double result{1};

    if(pow == 0.0)
    {
        result = 0;
    }

    if(pow == 1.0)
    {
        result = base;
    }

    if(pow > 1)
    {
        for(int i{0}; i < pow; ++i)
        {
            result *= base;
        }
    }

    if(pow < 0)
    {
        for(int i{0}; i < pow; ++i)
        {
            result *= base;
        }
        result = 1/result;
    }
    return result;
}
}// namespace pow_func
