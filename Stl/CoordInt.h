#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

class CoordInt
{
	int x;
	int y;
public:
	CoordInt();
	CoordInt(int x, int y);
	int get_x();
	int get_y();

	struct compare {
		bool operator()(CoordInt const& lhs, CoordInt const& rhs)
		{
			return ((lhs.x * lhs.x) + (lhs.y * lhs.y)) > ((rhs.x * rhs.x) + (rhs.y * rhs.y));
		}
	};

	CoordInt& operator=(const CoordInt& ob);
	friend bool operator < (const CoordInt& v1, const CoordInt& v2);
	friend bool operator > (const CoordInt& v1, const CoordInt& v2);
	friend std::ostream& operator<<(std::ostream& os, const CoordInt& ob);
	friend std::istream& operator>>(std::istream& in, CoordInt& ob);
	const CoordInt operator+(const CoordInt& ob);
	const CoordInt operator-(const CoordInt& ob);
	friend const CoordInt& operator++(CoordInt& ob);
	friend const CoordInt operator++(CoordInt& ob, int);
	friend const CoordInt& operator--(CoordInt& ob);
	friend const CoordInt operator--(CoordInt& ob, int);
	friend CoordInt& operator+=(CoordInt& left, const CoordInt& right);
	friend bool operator==(const CoordInt& left, const CoordInt& right);
};

