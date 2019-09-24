#pragma once
class rectangle
{
protected:
	int a;
	int c;

public:
	rectangle();
	int area()const;
	rectangle(int a, int c);
	friend bool operator == (const rectangle &r1, const rectangle& r2);
	friend bool operator > (const rectangle& r1, const rectangle& r2);
};

