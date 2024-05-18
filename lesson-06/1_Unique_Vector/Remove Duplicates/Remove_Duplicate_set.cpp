#include "Remove_Duplicate_set.h"

void remove_duplicates_set(std::vector<int>& vec)
{
    // Use std::set to automatically remove duplicates
    std::set<int> uniqueElements(vec.begin(), vec.end());

    // Clear the original vector and copy the unique elements back
    vec.assign(uniqueElements.begin(), uniqueElements.end());
}