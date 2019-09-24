#pragma once
#include "Rectangle.h"

class parallelepiped : public rectangle
{
	int b;
public:
	parallelepiped();
	parallelepiped(int a, int c, int b);
	int get_b()const;
	int volume()const;     //объем
	int surfaces()const;   //Площадь полной поверхности	
	int sur()const;        //Площадь б.повер. 

};

