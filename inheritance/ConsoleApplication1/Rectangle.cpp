#include "Rectangle.h"

rectangle:: rectangle() 
{
	 a = 0;
	 c = 0;
}

rectangle:: rectangle(const int a, const int c)
{
	this->a = a;
	this->c = c;
}

int rectangle::area() const
{
	return a * c;
}

