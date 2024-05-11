#include "Table.h"

template<class T>
Table<T>::Table(int rows, int columns) : m_rows(rows), m_columns(columns)
{
    m_table = new T* [rows];
    for (int i = 0; i < rows; i++)
        m_table[i] = new T[columns];
}

template<class T>
Table<T>::~Table()
{
    for (int i = 0; i < m_rows; i++)
        delete[] m_table[i];

    delete[] m_table;
}

template<class T>
T* Table<T>::operator[](int index) { return m_table[index]; }

template<class T>
const T* Table<T>::operator[](int index) const { return m_table[index]; }

template<class T>
int Table<T>::size() const { return m_rows * m_columns; }

// Explicit instantiation for all types used
template
class Table<int>;