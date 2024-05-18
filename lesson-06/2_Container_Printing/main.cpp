#include <iostream>
#include <vector>
#include <set>
#include <list>

template<typename Container>
void printContainer(const Container& container)
{
    for (const auto& element: container)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

int main()
{
    std::vector<std::string> test_vector = {"one", "two", "three", "four"};
    std::cout << "Vector: ";
    printContainer(test_vector);

    std::set<std::string> test_set = {"one", "two", "three", "four"};
    std::cout << "Set: ";
    printContainer(test_set);

    std::list<std::string> test_list = {"one", "two", "three", "four"};
    std::cout << "List: ";
    printContainer(test_list);

    return 0;
}