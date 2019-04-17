#include<iostream>
#include "A.h"
#include<locale.h>

int main() 
{
	setlocale(LC_ALL, "Russian");
	int n;
	std::cin >> n;
	A obj(n);
	obj.redrand();
	obj.output();
	obj.spread();
	obj.output();
	obj.equaly();
	system("pause");
	return 0;
}