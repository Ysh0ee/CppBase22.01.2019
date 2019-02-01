#include <iostream>
#include <iomanip>
#include "mylibpow.h"
int main()
{
    std::cout << Mylib::ecponentfation(10,2) << std::endl;
    std::cout << Mylib::ecponentfation(100,-1) << std::endl;
    std::cout << Mylib::ecponentfation(100.0,'A') << std::endl;

    std::cout << std::fixed << std::setprecision(10) << 1./4 << std::endl;

    std::cout << std::boolalpha << Mylib::fuzzyCompare(4.5,4.50000000000000000000001) << std::endl;

    return 0;
}
