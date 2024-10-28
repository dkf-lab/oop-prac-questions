#include <iostream>
#include <string>

int main()
{
    char name[] = "mike";
    char *nameCopy = name;
    nameCopy[3] = 'y';
    std::cout<< std::string(nameCopy) << std::endl;
    return 0;
}