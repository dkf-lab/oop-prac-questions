#include <iostream>

class Data
{
protected:
    float value = 0.25;

public:
    Data() { value = 0.3; }
    float getValue() { return value; }
};

class SecureData : public Data
{
public:
    SecureData() { value = 0.5; };
};

class FixedData : public SecureData
{
public:
    FixedData() {}
};

int main()
{
    FixedData *d = new FixedData();
    std::cout << d->getValue() << std::endl;
    delete d;
    return 0;
}