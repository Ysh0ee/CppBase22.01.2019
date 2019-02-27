#include "header.h"
#include <cmath>
#include <iostream>
#include <stdlib.h>


namespace sqrt_equation {


void clear()
{
    system("@cls||clear");
}


void sqrt_equ(double a, double b, double c)
{
    int restart{1};
    while(restart != 0)
    {
    double x1{0};
    double x2{0};
    double D{0};

    D = (b*b)-(4*a*c);

    if(D < 0)
    {
        std::cout << " Дискриминант меньше нуля : " << " D = " << D << std::endl;
    }
    else if (D == 0){
            x1 = -b/(2*a);
            std::cout << " -Квадратное уравненине имеет только один корень- " << x1;
        }
        else
        {
            x1=-b/(2*a)-(sqrt(D))/(2*a);
            x2=-b/(2*a)+(sqrt(D))/(2*a);
            std::cout << " -Квадратное уравнение имеет два корня- " << std::endl;
            std::cout << "X1 = " << x1 << std::endl;
            std::cout << "X2 = " << x2 << std::endl;

        }
    }
}

}

