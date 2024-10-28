#include <iostream>

class Data
{
protected:
public:
    float value = 0.25;
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
    std::cout << value << std::endl;
    return 0;
}