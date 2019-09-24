#include "Parallelepiped.h"
parallelepiped::parallelepiped()
{
	a = 0;
	c = 0;
	b = 0;
}
parallelepiped::parallelepiped(int a, int c, int b) :rectangle(a, c)
{
	this->a = a;
	this->c = c;
	this->b = b;
}

int parallelepiped::get_b() const
{
	return   b;
}
int parallelepiped::surfaces()const
{
	return 2 * (a * b + b * c + a * c);
}

int parallelepiped::volume()const
{
	return a * b * c;
}
int parallelepiped::sur()const
{
	return  2 * a * c + 2 * a * b;
}