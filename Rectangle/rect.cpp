#include "rect.h"

    rect::rect() 
    {

		    cout << "Enter the coordinates: " << endl;
			cout << "x1,y1: ";
			cin >> A.x >> A.y;
			cout << "x2,y2: ";
			cin >> B.x >> B.y;
			if (A.x < 0 || A.y < 0 || B.x < 0 || B.y < 0)
			{
				cout << "error" << endl;
				exit(1);
			}
    }
    
	point rect::set_C()
	{
		point C;
		if (A.x<B.x && A.y>B.y) {
			C.x = B.x;
			C.y = A.y;
			return C;
		}
		else if (A.x > B.x &&A.y < B.y) {
			C.x = A.x;
			C.y = B.y;
			return C;
		}
		else
		{
			cout << "error";
			exit(1);
		}
	}
	point rect::set_D()
	{
		point D;
		if (A.x<B.x && A.y>B.y) {
			D.x = A.x;
			D.y = B.y;
			return D;
		}
		else if (A.x > B.x &&A.y < B.y) {
			D.x = B.x;
			D.y = A.y;
			return D;
		}
		else
		{
			cout << "error";
			exit(1);
		}
	}
	float rect::area()
   {
	   return (abs((A.x-B.x)*(A.y-B.y)));
   }
   float rect::perimeter()
   {
	   return (abs(2*(A.x - B.x))+abs((A.y - B.y)*2));
   }
  void rect:: output() 
   {
	  cout << "A.x: " << A.x << " A.y: "<< A.y << endl;
	  cout << "B.x: " << B.x << " B.y: " << B.y << endl;
	  cout << "C.x: " << set_C().x << " C.y: "<< set_C().y << endl;
	  cout << "D.x: " << set_D().x << " D.y: " << set_D().y << endl << endl;
	  cout << "Area: " << area()<<endl;
	  cout << "Perimetr: " << perimeter() << endl << endl;
   }