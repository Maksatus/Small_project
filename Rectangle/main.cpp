#include "rect.h"
#include "overlap.h"

int main()
{
	unsigned short int n = 1;//кол-во фигур
	rect *a;
	a = new rect[n];
	overlap S;
	cout<<"Area overlap:: "<<S.Sum_area(a,n);
	
	delete[]a;
	system("PAUSE");
	return 0;
}