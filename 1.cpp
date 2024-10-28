#include <iostream>
int main()
{
    float a = 2.25;
    float b = 1.25;
    float *c = &a;
    std::cout << a << ',' << b << ',' << *c << std::endl;
    return 0;
}
