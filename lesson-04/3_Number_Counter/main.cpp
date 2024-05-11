#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {4, 1, 3, 6, 25, 54};
    int sum = 0;
    int counter = 0;
    int denominator = 3;

    auto func = [&]()
    {
        if (denominator == 0)
            throw std::runtime_error("Division by zero!");

        for (const auto& num: nums)
            if (num % denominator == 0)
            {
                counter++;
                sum += num;
            }

        std::cout << "Sum = " << sum << "\n";
        std::cout << "Count = " << counter << "\n";
    };

    try
    {
        func();
    }
    catch (std::runtime_error& err)
    {
        std::cerr << "Error! " << err.what() << "\n";
    }

    return 0;
}
