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

vector<CoordInt> read(vector<CoordInt>& ob,size_t N)
{
	int x = 0, y = 0;
	for (size_t i=0;i<N;i++)
	{
		x = rand() % LIMIT +(-25); // -25>>24
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
	else{ cout << "\nEmpty\n"; }
}

void example_2(vector<CoordInt>& ob,CoordInt val,int rad)
{
	vector<CoordInt> new_matr;

	int s = 0;
	for (auto iter = ob.begin(); iter != ob.end(); ++iter)
	{
	s = (iter->get_y() - val.get_y())*(iter->get_y() - val.get_y()) + (iter->get_x() - val.get_x())*(iter->get_x() - val.get_x());
		
		if (s<= rad*rad)
		{
			new_matr.push_back(*iter);
		}
	}
	print(new_matr);
	
	CoordInt min = new_matr.front();
	for (auto iter = new_matr.begin(); iter != new_matr.end(); ++iter)
	{
		if (min < (*iter))
		{
			min = (*iter);
		}
	}
	cout << "\nMin= " << min<<endl;
}

int main(int argc, char* argv[])
{

	vector<CoordInt> matrix;
	matrix = read(matrix, 15);
	print(matrix);
	example_1(matrix);
	
	cout << "Enter a point\n";
	CoordInt val;
	int radius;
	cin >> val;
	cout << "The radius of the circle\n";
	cin >> radius;
	example_2(matrix,val,radius);
	
	return 0;
}