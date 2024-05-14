#include <iostream>
#include "Table.h"

int main()
{
    auto test = Table<int>(2, 3);

    test[0][0] = 4;
    std::cout <<"test[0][0] = "<< test[0][0] << "\n";

    std::cout << "Size = "<<test.size() << "\n";

    {
        Table<int> t1(2, 3);
        Table<int> t2(2, 3);
        t1 = t2;
    }

    {
        Table<double> t4(2, 3);
        Table<double> t5(t4);
    }

    return 0;
}
