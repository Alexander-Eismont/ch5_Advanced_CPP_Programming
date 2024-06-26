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
        std::cout<<arr.get_element(0)<<"\n";

        Smart_Array new_arr{2};

        new_arr.add_element(11);
        new_arr.add_element(22);
        std::cout<<new_arr.get_element(0)<<"\n";

        arr = new_arr;
    }
    catch (const std::exception &err)
    {
        std::cerr << err.what() << "\n";
    }

    system("pause");

    return 0;
}
