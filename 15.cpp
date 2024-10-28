#include <iostream>

class Data
{
protected:
    float value = 0.25;

public:
    float setValue(float value)
    {
        float temp = this->value;
        this->value = value;
        return temp;
    };
};

int main()
{
    Data d;
    float value = d.setValue(5.3);
    std::cout << d.value << std::endl;
    return 0;
}