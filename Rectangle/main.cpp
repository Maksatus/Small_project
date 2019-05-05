#include "rect.h"
#include "overlap.h"
#include <cstdlib>
int main()
{
	unsigned short int n = 2;//кол-во фигур
	rect *a;
	a = new rect[n];
	overlap S;
	for (int i = 0; i < n; i++) 
	{
		a[i].output();
	}
	cout<<"Area overlap:: "<<S.Sum_area(a,n);
	
	delete[]a;
	system("PAUSE");
	return 0;
}