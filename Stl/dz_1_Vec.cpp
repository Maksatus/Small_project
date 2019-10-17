#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <iterator>

using namespace std;


void print(vector<vector<size_t> > ob)
{
	 for (vector<size_t>& vec_current : ob) {
		 for (size_t& value : vec_current) {
			 cout << value << "  ";
		 }
		 cout << endl;
	 }
 }


vector<vector<size_t> > input( size_t size)
{
	vector<vector<size_t> > ob;
	for (size_t i = 0; i < size; ++i)
	{
		vector<size_t> temp;
		for (size_t j = 0; j < size; ++j)
			temp.push_back(10 + rand() % 66);
		ob.push_back(temp);
	}
	//print(ob);
	return ob; 
 }

int main(int argc, char* argv[])
{
	vector<vector<size_t> > matrix;
	size_t size = 5;
	matrix = input(size);
	print(matrix);
	
	cout <<"\nSize: " <<matrix.size();

	if (matrix.empty()) { cout << "\nempty"; }

	size_t front_num = matrix.front().front();
	size_t back_num = matrix.back().back();
	cout << "\nfront_num:" << front_num;
	cout << "\nback_num:" << back_num;

 

	return 0;
}