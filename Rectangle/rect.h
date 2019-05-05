#pragma once
#include <iostream>
#include<cmath>
#include <cstdlib>
using namespace std;

typedef struct {
	float x, y;
}point;

class rect
{
	point A; point B;
public:
	rect();
	point set_C();
	point set_D();
	void output();
	float area();//площадь+
	float perimeter();//периметр+
	point  reflection();//отражение
};

