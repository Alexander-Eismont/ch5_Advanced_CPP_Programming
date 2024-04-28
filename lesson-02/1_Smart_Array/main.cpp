#include <iostream>
#include "Smart_Array.h"

int main()
{
    try
    {
        Smart_Array arr{5};

        arr.add_element(1);
        arr.add_element(2);
        arr.add_element(3);
        arr.add_element(4);
        arr.add_element(5);

        std::cout << arr.get_element(0) << "\n";
    }
    catch (const std::exception &err)
    {
        std::cerr << err.what() << "\n";
    }

    system("pause");

    return 0;
}
