#include <iostream>
#include <string>
#include "header.h"

int main()
{
    std::string str{};
    std::cin >> str;
    write_to_file::write_to_file(str);
    read_from_file_check_palindrome::read_from_file_check_palindrome();
    return 0;
}
