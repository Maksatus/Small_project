#include <iostream>
#include <string>



class Group
{
	int count;
	struct student
	{
		std::string name;
		int num;
		std::string date;
	}*st;
public:
		Group() :count(0) 
		{
			st->num = 0;
			st->date = " ";
			st->name = " ";
		};
		Group(int n) :count(n) 
		{
			st = new student[count];
			for (int i = 0; i < count; i++)
			{
				std::cin >> st[i].name;
				std::cin >> st[i].num;
				std::cin >> st[i].date;
			}
		};

		student operator[](int i)
		{
			if (i >= 0 && i < count)
			{
				return st[i];
			}
			else {
				struct student stm;
				stm.date = "null";
				stm.name = "null";
				stm.num = -1;
				return stm;
			}
		}
};

int main()
{
	Group a(3);
	for (int i = 0; i < 3; i++) {
		std::cout << a[i].name << std::endl;
		std::cout << a[i].num << std::endl;
		std::cout << a[i].date << std::endl;
	}
}