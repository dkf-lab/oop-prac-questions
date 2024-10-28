#include <iostream>

class Data
{
protected:
    float value = 0.25;

public:
    Data() { value = 0.3; }
    virtual float getValue() { return value; }
    ~Data() { std::cout << value << ' '; }
};

class SecureData : public Data
{
public:
    SecureData() { value = 0.5; };
    ~SecureData() { std::cout << 'S' << ' '; }
};

class FixedData : public SecureData
{
public:
    FixedData() {};
    float getValue() { return value + 1; }
    ~FixedData() { std::cout << 1 << ' '; }
};

int main()
{
    Data *d = new FixedData();
    delete d;
    std::cout << std::endl;
    return 0;
}