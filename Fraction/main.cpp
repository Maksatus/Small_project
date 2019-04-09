#include<iostream>
#include"fraction.h"


int main() {
	setlocale(LC_ALL, "Russian");
	fraction a(4, 5);
	fraction b(8, 6);	
	a.derive(a.multi(b));
	a.derive(a.add(b));
	a.derive(a.dir(b));
	
	system("PAUSE");
	return 0;
}