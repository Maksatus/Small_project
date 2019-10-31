#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <iterator>

using namespace std;

class SuperTupe
{
	char* value;
	SuperTupe()
	{
		value = 0;
	}
	SuperTupe(const int size) {
		value = new char[size];
	}
	
	
	
	
	
	~SuperTupe()
	{
		delete[]value;
	}
	SuperTupe& operator=(const SuperTupe& ob) {

	}
	ostream& operator <<(ostream& os) {

		return os;
	}
};

void print(vector<vector<SuperTupe> > ob)
{
	for (vector<SuperTupe>& vec_current : ob) {
		for (SuperTupe& value : vec_current) {
			cout << value << "  ";
		}
		cout << endl;
	}
}


vector<vector<SuperTupe> > input(size_t size)
{
	vector<vector<SuperTupe> > ob;
	vector<SuperTupe> temp;

	for (vector<SuperTupe>& vec_current : ob) {
		for (SuperTupe& value : vec_current) {
			char ch = rand();
			temp.push_back(ch);
			ob.push_back(temp);
		}
	}
	return ob;
}

int main(int argc, char* argv[])
{
	vector<vector<SuperTupe> > matrix;
	size_t size = 5;
	matrix = input(size);
	print(matrix);

	cout << "\nSize: " << matrix.size();

	if (matrix.empty()) { cout << "\nempty"; }
	
	SuperTupe front_num = matrix.front().front();
	SuperTupe back_num = matrix.back().back();
	cout << "\nfront_num:" << front_num;
	cout << "\nback_num:" << back_num;



	return 0;
}
