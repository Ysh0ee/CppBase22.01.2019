#include "header.h"
#include <string.h>

namespace palindrome_check{
bool palindrome(char str[])
{
    size_t len{0};
    int flag{0};

    len = strlen(str);

    for (size_t i{0}; i<len; ++i)
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
