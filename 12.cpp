#include <iostream>

class Data {
    protected:
    public:
        float value = 0.25;
        float setValue() { this->value = value; return value;};
};

int main() {
    Data d;
    float result = d.setValue(5.3);
    std::cout << result << std::endl;
    return 0;
}