#include <iostream>
#include <catch2/catch_test_macros.hpp>

struct ListNode
{
public:
    ListNode(int value, ListNode *prev = nullptr, ListNode *next = nullptr)
            : value(value), prev(prev), next(next)
    {
        if (prev != nullptr) prev->next = this;
        if (next != nullptr) next->prev = this;
    }

public:
    int value;
    ListNode *prev;
    ListNode *next;
};

class List
{
public:
    List() : m_head(new ListNode(static_cast<int>(0))), m_size(0),
             m_tail(new ListNode(0, m_head)) {}

    virtual ~List()
    {
        Clear();
        delete m_head;
        delete m_tail;
    }

    bool Empty() { return m_size == 0; }

    unsigned long Size() { return m_size; }

    void PushFront(int value)
    {
        new ListNode(value, m_head, m_head->next);
        ++m_size;
    }

    void PushBack(int value)
    {
        new ListNode(value, m_tail->prev, m_tail);
        ++m_size;
    }

    int PopFront()
    {
        if (Empty()) throw std::runtime_error("list is empty");
        auto node = extractPrev(m_head->next->next);
        int ret = node->value;
        delete node;
        return ret;
    }

    int PopBack()
    {
        if (Empty()) throw std::runtime_error("list is empty");
        auto node = extractPrev(m_tail);
        int ret = node->value;
        delete node;
        return ret;
    }

    void Clear()
    {
        auto current = m_head->next;
        while (current != m_tail)
        {
            current = current->next;
            delete extractPrev(current);
        }
    }

private:
    ListNode *extractPrev(ListNode *node)
    {
        auto target = node->prev;
        target->prev->next = target->next;
        target->next->prev = target->prev;
        --m_size;
        return target;
    }

private:
    ListNode *m_head;
    ListNode *m_tail;
    unsigned long m_size;
};

TEST_CASE("Test PushBack() method", "[PushBack]")
{
    List lst;

    CHECK(lst.Size() == 0);

    lst.PushBack(1);
    lst.PushBack(2);

    CHECK(lst.Size() == 2);
    CHECK(lst.PopBack() == 2);
    CHECK(lst.PopBack() == 1);
    CHECK(lst.Size() == 0);
}

TEST_CASE("Test PushFront() method", "[PushFront]")
{
    List lst;

    CHECK(lst.Size() == 0);

    lst.PushFront(1);
    lst.PushFront(2);

    CHECK(lst.Size() == 2);
    CHECK(lst.PopFront() == 2);
    CHECK(lst.PopFront() == 1);
    CHECK(lst.Size() == 0);
}

TEST_CASE("PopFront")
{
    List lst;

    REQUIRE_THROWS_AS(lst.PopFront(), std::runtime_error);
    lst.PushBack(1);
    lst.PushBack(2);

    CHECK(lst.PopFront() == 1);
    CHECK(lst.Size() == 1);
    CHECK(lst.PopFront() == 2);
}

TEST_CASE("PopBack")
{
    List lst;

    REQUIRE_THROWS_AS(lst.PopBack(), std::runtime_error);

    lst.PushBack(2);

    CHECK(lst.PopBack() == 2);
    CHECK(lst.Size() == 0);
}

TEST_CASE("PushFront and PopBack")
{
    List lst;

    lst.PushFront(1);
    lst.PushFront(2);

    CHECK(lst.Size() == 2);
    CHECK(lst.PopBack() == 1);

    lst.PushFront(3);
    lst.PushFront(4);

    CHECK(lst.PopBack() == 2);
    CHECK(lst.PopBack() == 3);
    CHECK(lst.PopBack() == 4);
    CHECK(lst.Size() == 0);
}