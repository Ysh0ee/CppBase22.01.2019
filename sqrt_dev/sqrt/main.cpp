#include <iostream>
#include "header.h"

int main()
{
    double a{0};
    double b{0};
    double c{0};
    int restart{0};

    std::cout << "Введите циферки" << std::endl;

    std::cout << " a = ";
    std::cin >> a ;

    std::cout << " b = ";
    std::cin >> b;

    std::cout << " c = ";
    std::cin >> c;

    sqrt_equation::sqrt_equ(a,b,c);
    return 0;
}
