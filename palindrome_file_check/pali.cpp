#include "header.h"
#include <string.h>
#include <fstream>
#include <iostream>

namespace palindrome_check{
bool palindrome(std::string str)
{
    unsigned long len{0};
    int flag{0};

    len = str.length();

    for (unsigned int  i{0}; i<len/2; ++i)
    {
        if(str[i] != str[len-i-1])
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
}// namespace palindrome_check

namespace write_to_file
{
void write_to_file(std::string str)
{

    std::ofstream myfile_input("input.txt");
    std::cout << "text : ";
    if(!myfile_input.is_open())
    {
        std::cerr << "openning error" << std::endl;
    }
    else
    {
        while (std::cin >> str)
        {
            if(str == "end")
            {
               read_from_file_check_palindrome::read_from_file_check_palindrome();
                break;
            }
            std::cout << "text : ";
            myfile_input << str << "\n";
        }
    }
    myfile_input.close();
}
}// namespace write_to_file

namespace read_from_file_check_palindrome
{
void read_from_file_check_palindrome()
{
    std::ifstream myfile_input("input.txt");
    std::ofstream myfile_output("output.txt");

    if(!myfile_input.is_open())
    {
        std::cerr << "opening error" << std::endl;
    }
    else
    {
        std::cout << "enter start and end to end : ";
        std::string line;
        while (myfile_input >> line) {
            if(palindrome_check::palindrome(line)){
                myfile_output << "-not palindrome : " + line << "\n";
            }else {
                myfile_output << "-palindrome    : " + line << "\n";
            }
        }
    }
    myfile_output.close();
    myfile_input.close();

}
}

