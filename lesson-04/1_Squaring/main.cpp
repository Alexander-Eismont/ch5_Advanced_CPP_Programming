#include <iostream>
#include <vector>

template<typename T>
T square(T num);

template<typename T>
void square(T &data, unsigned int size);

int main()
{
    int num = 4;
    std::vector<int> nums = {-1, 4, 8};

    std::cout << square(num) << "\n";

    square(nums, nums.size());
    for (auto item: nums)
        std::cout << item << " ";

    std::cout << "\n";

    return 0;
}

template<typename T>
T square(T num) { return num * num; }

template<typename T>
void square(T &data, unsigned int size)
{
    for (int i = 0; i < size; i++)
        data[i] *= data[i];
}