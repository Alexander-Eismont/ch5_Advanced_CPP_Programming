#include <iostream>

// нет необходимости, т.к. в единственном месте, где применяется прописано std::
// no need, because std:: is written in the only place where it is used.
// using namespace std;

struct point
{
	double m_x;
	double m_y;

	point(double x, double y)
	{
		m_x = x;
		m_y = y; // исправлено на m_y / corrected to m_y
	}
}; // добавлена точка с запятой / added semicolon

void print_point(const point &point_object)
{
	std::cout << "x:" << point_object.m_x << ", y: "
		<< point_object.m_y << std::endl;
}

// исправлено на маленькую букву / corrected to small letter
int main()
{
	int i;
	for (i = 0; i < 5; i++) // убрана точка с запятой / semicolon removed
	{
		// добавлено явное преобразование в double
		// added explicit conversion to double
		point my_point(static_cast<double>(i), 2 * static_cast<double>(i));
		print_point(my_point);
	}

	return 0;
}

/* реализация уже есть выше / the implementation is already there above
void print_point(const point &point_object)
{
	std::cout << "x:" << point_object.m_x << ", y: "  
		<< point_object.m_y << std::endl;
}
*/