#include <iostream>
#include <string>

int modify(int * array, int i, int val) {
    if (i > 0) {
        *(array + (i-1)) = val;
        return i;
    }
    return -1;
}

int main()
{
    int nums[4] = {2,4,6,8};
    modify(nums, 0, 5);
    modify(nums, 1, 9);
    std::cout << nums[0] << "," << nums[1] << std::endl;
    return 0;
}