#pragma once

#include <stdexcept>

class Smart_Array
{
public:
    explicit Smart_Array(int capacity);
    ~Smart_Array();

    void add_element(int element);
    int get_element(int index);

private:
    int *m_arr;
    int m_size;
    int m_capacity;
};
