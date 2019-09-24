#include <iostream>
#include "Parallelepiped.h"

bool operator ==(const rectangle &r1, const rectangle& r2)
{
	return r1.area() == r2.area();
}
bool operator >(const rectangle& r1, const rectangle& r2)
{
	return r1.area() > r2.area();
}


int main()   
{
 
	setlocale(LC_ALL,"RU");
	const parallelepiped a(3, 4, 5);
	const parallelepiped b(3, 4, 5);
	const parallelepiped c(2, 1, 1);
	
	std::cout << "Площадь:" << a.area()
			  << "  Поверхность:" << a.surfaces()
			  << "  Объем:" << a.volume()
			  << " Площадь боковой поверхности " << a.sur();
	if (a == c) {
		std::cout << std::endl<<"+";
	}
	else { std::cout << std::endl << "-"; }
	return 0;
}