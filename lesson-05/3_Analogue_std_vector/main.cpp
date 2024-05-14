#include <iostream>
#include "My_Vector.h"

int main()
{
    My_Vector<int> vector1;

    vector1.push_back(1);
    vector1.push_back(2);
    vector1.push_back(3);

    std::cout << "Size: " << vector1.size() << "\n";
    std::cout << "Capacity: " << vector1.capacity() << "\n";

    for (int i = 0; i < vector1.size(); i++)
        std::cout << "Element at index " << i << ": " << vector1.at(i) << std::endl;

    My_Vector<double> vector2;

    vector2.push_back(1.1);
    vector2.push_back(2.2);
    vector2.push_back(3.3);
    vector2.push_back(4);
    vector2.push_back(5);

    std::cout << "Size: " << vector2.size() << "\n";
    std::cout << "Capacity: " << vector2.capacity() << "\n";

    for (int i = 0; i < vector2.size(); i++)
        std::cout << "Element at index " << i << ": " << vector2.at(i) << std::endl;


    return 0;
}
