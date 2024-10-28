#include <iostream>

class Data
{
protected:
    float value = 0.25;

public:
    Data() : value(1.3) {}
    void setValue(float value)
    {
        this->value = value;
    }
    float getValue()
    {
        return value;
    }
};

class SecureData : public Data
{
public:
    SecureData() {};
    int getValue() { return Data::getValue(); };
};

int main()
{
    Data* d = new SecureData();
    std::cout << d->getValue() << std::endl;
    delete d;
    return 0;
}