#include <iostream>
int main()
{
    float a = 2.25;
    float b = 1.25;
    float *c = &a;
    (*c) += 1.0;
    std::cout << a << ',' << b << ',' << *c << std::endl;
    return 0;
}
