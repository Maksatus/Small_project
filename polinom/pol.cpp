#include "pol.h"
pol::pol()
{

}
pol::pol(int n)
{
	float m_x;
	for (int i = 0; i < n; i++) 
	{
		cout << i << ": ";
		cin >> m_x;
		x.push_back(m_x);
	}
}

void pol::operator+(const pol &a)
{
	pol s;
	s.x.resize(x.size());
	for (int i = 0; i < x.size(); i++)
	{
		s.x.at(i) = x.at(i) + a.x.at(i);
	}
	cout << "add:"<<endl;
	output(s);
}

void pol::operator*(const pol &a)
{
	pol s;
	s.x.resize(x.size());
	for (int i = 0; i < x.size(); i++)
	{
		s.x.at(i) = x.at(i) * a.x.at(i);
	}
	cout << "mul:" << endl;
	output(s);
}
void pol::operator-(const pol &a)
{
	pol s;
	s.x.resize(x.size());
	for (int i = 0; i < x.size(); i++)
	{
		s.x.at(i) = x.at(i) - a.x.at(i);
	}
	cout << "sub:" << endl;
	output(s);
}

void pol::output(const pol &a)
{
	for (int i = 0; i < a.x.size(); i++)
	{
		cout << a.x.at(i)<<"x^"<<i<<"  ";
	}
	cout << endl;
}

