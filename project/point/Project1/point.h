#pragma once
class point
{
	float x, y;
public:
	point() 
	{
		x = 0;
		y = 0;
	}
	~point();

	void write() 
	{
		std::cin >> x;
		std::cin >> y;
    }
	void output() 
	{
		std::cout << "x= " << x << "  y= " << y << std::endl;
	}
    
	void fi() 
	{
		float f, r;
		f = cos(y/x);
		r = sqrt(x*x+y*y);
		std::cout << "fi= " << f << " radius= " << r << std::endl;
	}
	float get_x() { return x; }
	float get_y() { return y; }

	float distance()
	{
		return sqrt(x*x + y * y);
	}
	
	float lenght(point b)
	{
		return sqrt((x - b.get_x())*(x - b.get_x())+(y-b.get_y())*(y - b.get_y()));
	}
	void status(point b) {
		if (x == b.get_x() && y == b.get_y())
			 std::cout<<"equal"<<std::endl;
		else
		std::cout << "not equal"<<std::endl;
	}
};

point::~point()
{
}
