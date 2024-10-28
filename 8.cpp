#include <iostream>
#include <string>

char* getArray() {
    char* newArray = new char[3];
    newArray[0] = 'b';
    newArray[1] = 'e';
    newArray[2] = 'n';
    newArray[3] = 'y';
    return newArray;
}

int main()
{
    char* newArray = getArray();
    newArray[3] = 'y';
    std::cout << std::string(newArray, 4) << std::endl;
    delete newArray;
    return 0;
}