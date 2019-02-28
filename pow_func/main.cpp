#include "header.h"
#include <iostream>


int main()
{
    int base{0};
    int pow{0};

    std::cout << " -Pow Function- " << std::endl;
    std::cout << " -Enter base and pow- " << std::endl;

    std::cout << " -base- = ";
    std::cin >> base;
    std::cout << " -pow- = ";
    std::cin >> pow;
    std::cout << "result : " << pow_func::pow(base,pow) << std::endl;


}
