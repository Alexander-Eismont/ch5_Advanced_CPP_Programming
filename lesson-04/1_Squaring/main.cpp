#include <iostream>
#include <vector>

template<typename T>
T square(T x);

template<typename T>
std::vector<T> square(const std::vector<T>& data);

template<typename T>
void printVec(std::vector<T> vec);

int main()
{
    int num = 4;
    std::cout << "Num = " << num << "\n";

    int squared_num = square(num);
    std::cout << "Squared num = " << squared_num << "\n";

    std::vector<int> nums = {-1, 4, 8};
    std::cout << "Nums = ";
    printVec(nums);

    std::vector<int> squared_nums = square(nums);
    std::cout << "Squared nums = ";
    printVec(squared_nums);

    std::cout << "\n";

    return 0;
}

template<typename T>
T square(T x) { return x * x; }

template<typename T>
std::vector<T> square(const std::vector<T>& data)
{
    std::vector<T> result;
    result.reserve(data.size());

    for (const auto& elem: data)
        result.push_back(elem * elem);

    return result;
}

template<typename T>
void printVec(std::vector<T> vec)
{
    for (const auto& elem: vec)
        std::cout << elem << " ";

    std::cout << "\n";
}