#include "mylibpow.h"
#include <cmath>
#include <limits>


namespace Mylib{

double ecponentfation(double arg1,int exponent)
{
    double res{1.0};

    if(exponent == 0)
    {
        return res;
    }

   // exponent = (exponent < 0) ? -exponent : exponent;
/*
    if(exponent < 0)
    {
        exponent = -exponent;
    }
*/
    int tmp_exp((exponent > 0) ? exponent : -exponent);

    for(int i{0}; i < tmp_exp; ++i)
    {
        res *= arg1;
    }

    if(exponent < 0)
    {
        res = 1./res;
    }

    return res;
}

double ecponentfation(double, double)
{
    double res{1.0};



    return res;
}



bool fuzzyCompare(double left, double right)
{
    bool res{false};

    double diff{std::fabs(left - right)};

    res =  diff < std::numeric_limits<double>::epsilon();

    return res;
}


}//namespace Mylibpow
