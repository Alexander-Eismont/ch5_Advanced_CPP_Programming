#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main()
{
    int count;
    std::cin >> count;

    std::vector<int> numbers(count);
    for (int i = 0; i < count; i++)
        std::cin >> numbers[i];

    std::set<int> unique_numbers(numbers.begin(), numbers.end());
    std::vector<int> unique_sorted(unique_numbers.begin(), unique_numbers.end());
    std::sort(unique_sorted.rbegin(), unique_sorted.rend());

    for (const auto& num: unique_sorted)
        std::cout << num << "\n";

    return 0;
}
