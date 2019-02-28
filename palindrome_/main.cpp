#include <iostream>
#include "header.h"

int main()
{
    char str[256];

    std::cout << "Enter some string" << std::endl;

    while(std::cin >> str)
    {
        if(palindrome_check::palindrome(str))
        {
            std::cout << str << " - not palindrome" << std::endl;
        }
        else
        {
            std::cout << str << " - palindrome" << std::endl;
        }
    }
    return 0;
}
