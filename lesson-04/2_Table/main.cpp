#include <iostream>
#include "Table/Table.h"

int main()
{
    auto test = Table<int>(2, 3);

    test[0][0] = 4;
    std::cout << test[0][0] << "\n";

    std::cout << test.size() << "\n";

    return 0;
}
