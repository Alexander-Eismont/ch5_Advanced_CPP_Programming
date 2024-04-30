#pragma once

#include <stdexcept>

class Smart_Array
{
public:
    explicit Smart_Array(int capacity);
    ~Smart_Array();

    void add_element(int element);
    int get_element(int index);

    Smart_Array(const Smart_Array&) = delete;
    Smart_Array &operator=(const Smart_Array &array) = delete;

private:
    int *m_arr;
    int m_size;
    int m_capacity;
};
