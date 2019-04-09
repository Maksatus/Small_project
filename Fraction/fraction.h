#pragma once
#include<iostream>
//Определения 
class fraction
{
	int x, y;
public:
	fraction();
	fraction(int a, int b);
	fraction add(fraction b);
	void derive(fraction A);
	int nod(int a, int b);
	fraction multi(fraction c);
	fraction dir(fraction d);
};

