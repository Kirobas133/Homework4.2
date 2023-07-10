#include <iostream>
using namespace std;

struct point {
	double m_x;
	double m_y;
	point(double x, double y) {
		m_x = x;
		m_y = y;
	}
};

void print_point(const point& point_object) {
	std::cout << "x:" << point_object.m_y << ", y: "
		<< point_object.m_x << std::endl;
	/*в операции вывода перепутаны местами выводимые переменные, из-за чего пользователь получает неверные данные*/
}

int main()
{
	for (i = 0; i < 5; i++)/*не инициализирована переменная i*/ (
		point my_point(i, 2 * i);
		print_point(my_point);
		)/*тело цикла for должно быть выделено фигурными скобками, здесь же не верный тип скобок*/
	return 0;
}