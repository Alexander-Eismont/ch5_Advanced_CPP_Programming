#include "Smart_Array.h"

Smart_Array::Smart_Array(int capacity)
    : m_size{0}, m_capacity{capacity}
{
    if (capacity <= 0)
        throw std::invalid_argument("Capacity must be positive");

    m_arr = new int[capacity];
}

Smart_Array::~Smart_Array() { delete[] m_arr; }

void Smart_Array::add_element(int element)
{
    if (m_size >= m_capacity)
    {
        int new_capacity = m_capacity * 2;
        int *new_arr = new int[new_capacity];

        for (int i = 0; i < m_size; i++)
            new_arr[i] = m_arr[i];

        delete[] m_arr;

        m_arr = new_arr;
        m_capacity = new_capacity;
    }

    m_arr[m_size++] = element;
}

int Smart_Array::get_element(int index)
{
    if (index < 0 || index >= m_size)
        throw std::out_of_range("Index out of range");

    return m_arr[index];
}