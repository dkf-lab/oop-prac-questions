#include <iostream>
#include <string>

int modify (double& number) {
    return number+1.0;
}

int main()
{
    double x = 5.25;
    int y = modify(x);
    std::cout << x << std::endl;
    return 0;
}