#pragma once

#include <stdexcept>

template<class T>
class My_Vector
{
public:
    My_Vector() : m_size(0), m_capacity(0), m_vector(nullptr) {}

    My_Vector(const My_Vector& other) : m_size(other.m_size), m_capacity(other.m_capacity)
    {
        m_vector = new T [m_capacity];

        for (int i = 0; i < m_size; i++)
            m_vector[i] = other.m_vector[i];
    }

    ~My_Vector() { delete[] m_vector; }

    My_Vector& operator=(const My_Vector& other)
    {
        if (this != &other)
        {
            delete[] m_vector;
            m_size = other.m_size;
            m_capacity = other.m_capacity;
            m_vector = new T* [other.m_capacity];

            for (int i = 0; i < m_size; i++)
                m_vector[i] = other.m_vector[i];
        }

        return *this;
    }

    T& at(int index)
    {
        if (index < 0 || index >= m_size)
            throw std::out_of_range("Index out of  range");

        return m_vector[index];
    }

    void push_back(const T& element)
    {
        if (m_size >= m_capacity)
            increase_capacity();

        m_vector[m_size++] = element;
    }

    int size() const { return m_size; }

    int capacity() const { return m_capacity; }

private:
    int m_size;
    int m_capacity;
    T* m_vector;

    void increase_capacity()
    {
        int new_capacity = (m_capacity == 0) ? 1 : m_capacity * 2;
        T* new_vector = new T[new_capacity];

        for (int i = 0; i < m_size; ++i)
            new_vector[i] = m_vector[i];

        delete[] m_vector;
        m_vector = new_vector;
        m_capacity = new_capacity;
    }
};