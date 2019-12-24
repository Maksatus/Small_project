#include "CoordInt.h"
#include <math.h>
#define LIMIT 50
using namespace std;

void print(vector<CoordInt>& ob)
{
	for (auto iter = ob.begin(); iter != ob.end(); ++iter)
	{
		std::cout << *iter;
	}
}

vector<CoordInt> read(vector<CoordInt>& ob, size_t N)
{
	int x = 0, y = 0;
	for (size_t i = 0; i < N; i++)
	{
		x = rand() % LIMIT + (-25); // -25>>24
		y = rand() % LIMIT + (-25);
		ob.push_back({ x,y });
	}

	return ob;
}

void example_1(vector<CoordInt>& matrix)
{
	cout << "\nSize: " << matrix.size();

	if (!matrix.empty())
	{
		cout << "\nNot empty\n";

		CoordInt front_num = matrix.front();
		CoordInt back_num = matrix.back();
		cout << "\nfront_num:" << front_num;
		cout << "\nback_num:" << back_num;
		matrix.pop_back();
		cout << "delete last value\n";
		print(matrix);
		//matrix.clear();
	}
	else { cout << "\nEmpty\n"; }
}

void example_2(vector<CoordInt>& new_matr, CoordInt val)
{
	double r = 0;
	double min = 32999;
	CoordInt val2;

	for (auto iter = new_matr.begin(); iter != new_matr.end(); ++iter)
	{
		r = sqrt(iter->get_x() - val.get_x()) * (iter->get_x() - val.get_x()) + (iter->get_y() - val.get_y()) * (iter->get_y() - val.get_y());
		if (r<min)
		{
			min =r;
			val2 = (*iter);
		}
	}
	cout << "\nMin= " << val2 << endl;
}

void example_3(vector<CoordInt>& ob)
{
	sort(ob.begin(), ob.end());
	cout << "\nWork out sort\n";
	print(ob);
}


int main(int argc, char* argv[])
{
	int N = 15;
	vector<CoordInt> matrix;
	matrix = read(matrix, N);
	print(matrix);
	example_1(matrix);
	
	cout << "Enter a point\n";
	CoordInt val;
	int radius;
	cin >> val;
	example_2(matrix,val);

	example_3(matrix);
	return 0;
}
