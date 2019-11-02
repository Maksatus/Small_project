#include "CoordInt.h"

	CoordInt::CoordInt()
	{
		x = 0;
		y = 0;
	}
	CoordInt::CoordInt(int x, int y) : x(x), y(y) {}

	int CoordInt::get_x()
	{
		return x;
	}

	int CoordInt::get_y()
	{
		return y;
	}

	CoordInt& CoordInt::operator=(const CoordInt& ob)
	{
		if (this == &ob) {
			return *this;
		}
		x = ob.x;
		y = ob.y;
		return *this;
	}

	bool operator<(const CoordInt& v1, const CoordInt& v2)
	{
		if (((v1.x * v1.x) + (v1.y * v1.y))< ((v2.x * v2.x) + (v2.y * v2.y)))
		{
			return true;
		}
		return false;
	}

	std::ostream& operator<<(std::ostream& os, const CoordInt& ob)
	{
		os<< "x: " << ob.x << " y: " << ob.y<<"\n";
		return os;
	}

	std::istream& operator>>(std::istream& in, CoordInt& ob)
	{
		in >> ob.x;
		in >> ob.y;
		return in;
	}
	



	const CoordInt& operator++(CoordInt& ob)
	{
		++ob.x;
		++ob.y;
		return ob;
	}

	const CoordInt operator++(CoordInt& ob, int)
	{
		CoordInt val(ob);
		ob.x++;
		ob.y++;
		return ob;
	}

	const CoordInt& operator--(CoordInt& ob)
	{
		--ob.x;
		--ob.y;
		return ob;
	}

	const CoordInt operator--(CoordInt& ob, int)
	{
		CoordInt val(ob);
		ob.x--;
		ob.y--;
		return ob;
	}

	CoordInt& operator+=(CoordInt& left, const CoordInt& right)
	{
		left.x += right.x;
		left.y += right.y;
		return left;
	}

	bool operator==(const CoordInt& left, const CoordInt& right)
	{
		return ((left.x==right.x)&&(left.y==right.y));
	}


	const CoordInt CoordInt::operator+(const CoordInt& ob)
	{
		CoordInt s;
		s.x = x + ob.x;
		s.y = y + ob.y;
		return s;
	}


	const CoordInt CoordInt::operator-(const CoordInt& ob)
	{
		CoordInt s;
		s.x = x - ob.x;
		s.y = y - ob.y;
		return s;
	}

