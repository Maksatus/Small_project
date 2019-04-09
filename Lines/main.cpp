#include <iostream>
#include "point.h"
#include <cmath>
#include <conio.h>
using namespace std;

int main() {
	point a;
	point b;
	b.write();
	a.write();
	a.status(b);
	a.output();
	b.output();
	a.fi();
	_getch();
	return 0;
}
