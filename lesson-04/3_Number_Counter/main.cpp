#include <iostream>
#include <vector>
#include <algorithm>

class Functor
{
public:
    Functor() : m_sum(0), m_count(0), m_denominator(3) {}

    void operator()(int num)
    {
        if (num % m_denominator == 0)
        {
            m_sum += num;
            m_count++;
        }
    }

    int get_sum() const { return m_sum; }
    int get_count() const { return m_count; }

private:
    int m_sum;
    int m_count;
    int m_denominator;
};

int main()
{
    std::vector<int> nums = {4, 1, 3, 6, 25, 54};

    Functor functor = std::for_each(nums.begin(), nums.end(), Functor());

    std::cout << "Sum = " << functor.get_sum() << "\n";
    std::cout << "Count = " << functor.get_count() << "\n";

    return 0;
}
