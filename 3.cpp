#include <iostream>
#include <string>

int main()
{
    char name[] = "mike";
    char *nameCopy;
    nameCopy = name[0];
    nameCopy[3] = 'y';
    return 0;
}