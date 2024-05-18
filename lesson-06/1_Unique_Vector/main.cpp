#include <iostream>
#include <vector>

#include "Remove Duplicates/Remove_Duplicate_sort.h"
#include "Remove Duplicates/Remove_Duplicate_set.h"

void printContainer(const std::vector<int>& data)
{
    for (int num: data)
    {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

int main()
{
    std::vector<int> data1 = {1, 1, 2, 5, 6, 1, 2, 4};

    std::cout << "Before removing duplicates (sort): ";
    printContainer(data1);

    remove_duplicates_sort(data1);

    std::cout << "After removing duplicates (sort): ";
    printContainer(data1);

    std::vector<int> data2 = {1, 1, 2, 5, 6, 1, 2, 4};

    std::cout << "Before removing duplicates (set): ";
    printContainer(data2);

    remove_duplicates_set(data2);

    std::cout << "After removing duplicates (set): ";
    printContainer(data2);

    return 0;
}