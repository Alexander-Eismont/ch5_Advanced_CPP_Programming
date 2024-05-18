#include "Remove_Duplicate_sort.h"

void remove_duplicates_sort(std::vector<int>& vec)
{
    // First we sort the vector
    std::sort(vec.begin(), vec.end());

    // Then use std::unique to remove consecutive duplicates
    auto last = std::unique(vec.begin(), vec.end());

    // Crop the vector to a new size
    vec.erase(last, vec.end());

}