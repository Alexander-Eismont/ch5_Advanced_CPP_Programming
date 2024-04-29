#pragma once

#include <stdexcept>

class Smart_Array
{
public:
    explicit Smart_Array(int capacity);
    Smart_Array(const Smart_Array &other);
    ~Smart_Array();

    void add_element(int element);
    int get_element(int index);

    Smart_Array &operator=(const Smart_Array &other)
    {
        if (this != &other)
        {
            delete[] m_arr;
            m_size = other.m_size;
            m_capacity = other.m_capacity;
            m_arr = new int[m_capacity];

            for (int i = 0; i < m_size; i++)
                m_arr[i] = other.m_arr[i];
        }

        return *this;
    }

private:
    int *m_arr;
    int m_size;
    int m_capacity;
};
