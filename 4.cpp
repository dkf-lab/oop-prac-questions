#include <iostream>
#include <string>

void power(int& number) {
    return number*number;
}

int main()
{
    int x = 5;
    power(x);
    std::cout << x << std::endl;
    return 0;
}