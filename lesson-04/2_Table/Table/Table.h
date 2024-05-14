#pragma once

template<class T>
class Table
{
public:
    Table(int rows, int columns);
    Table(const Table& other);
    ~Table();

    Table& operator=(const Table& other);
    T* operator[](int index);
    const T* operator[](int index) const;

    int size() const;

private:
    int m_rows;
    int m_columns;
    T** m_table;
};
