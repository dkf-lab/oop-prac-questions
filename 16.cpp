#include <iostream>

class Data
{
protected:
    float value = 0.25;

public:
    Data() : value(0.3) {}
    void setValue(float value)
    {
        this->value = value;
    };
};

class SecureData : protected Data
{
public:
    SecureData() { value = 0.2; };
    float getValue() { return value; }
};

int main()
{
    SecureData d;
    std::cout << d.getValue() << std::endl;
    return 0;
}