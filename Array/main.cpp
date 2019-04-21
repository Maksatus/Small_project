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
		obj.equaly();
		obj.spread();
		obj.output();

	system("pause");
	return 0;
}