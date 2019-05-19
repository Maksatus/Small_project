#pragma once
#include<iostream>
#include<vector>
using namespace std;
class pol
{
	vector<float>x;
public:
	pol();
	pol(int n);
	void operator+(const pol &a);
	void operator*(const pol &a);
	void operator-(const pol &a);
	void output(const pol &a);
};

