// Licensed under the MIT License.

#include "add/add.h"
#include "sub/sub.h"
#include <iostream>

int main()
{
    std::cout << add::add(1, 1) << std::endl;    
    std::cout << sub::sub(1, 1) << std::endl;    
    return 0;
}