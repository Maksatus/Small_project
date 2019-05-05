#include "overlap.h"


float overlap::Sum_area(rect *a,int n)
{
	float D_x=-1, D_y=-1, C_x= a[0].set_C().x, C_y= a[0].set_C().x;
	float s=0;
	for (int i = 0; i <= n; i++)
	{
		if (a[i].set_D().x>D_x) 
		{
			D_x = a[i].set_D().x;
		}
		if (a[i].set_D().y > D_y) 
		{
			D_y = a[i].set_D().y;
		}
		if (a[i].set_C().x < C_x)
		{
			C_x = a[i].set_D().x;;
		}
		if (a[i].set_C().y < C_y)
		{
			C_y = a[i].set_C().y;
		}
	}
	
	if ((D_x < C_x) && (D_y < C_y)) 
	{
		s = (C_x-D_x)*(C_y-D_y);
		return s;
	}
	else {
		return 0;
	}
}
