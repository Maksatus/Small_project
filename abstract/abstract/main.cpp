#include <iostream>
#include <cmath>


class Figure
{
public:
	virtual double getArea() = 0;
	virtual double getPerim() = 0;
	virtual void info() = 0;
};

//

double m_pow(double x, double n)
{
	return  exp(n * log(x));
} 
//

class Circle:public Figure
{
private:
	double radius;
public:
	Circle(double r) : radius(r)
	{
	}
	double getArea() override
	{
		return radius * radius * 3.14;
	}
	double getPerim() override
	{
		return 2 * 3.14 * radius;
	}
	void info()
	{
		std::cout << "area: "<<getArea()<< std::endl;
		std::cout << "Perimeter: " << getPerim() << std::endl;
		std::cout << "radius: " <<radius<< std::endl;	
	}
};
class Rectangle : public Figure
{
private:
	double width;
	double height;
public:
	Rectangle(double w, double h) : width(w), height(h)
	{
	}
	double getArea() override
	{
		return width * height;
	}
	double getPerim() override
	{
		return width * 2 + height * 2;
	}
	void info()
	{
		std::cout << "area: " << getArea() << std::endl;
		std::cout << "Perimeter: " << getPerim() << std::endl;
		std::cout << "width and height" << width<<' '<<height << std::endl;
	}
};

//только для прямоугольных треугольников
class  Triangle :public Figure
{
private:
	double height;
	double basis;
public:
	Triangle(double h, double b) :height(h), basis(b)
	{
	}
	double getArea() override
	{
		return  (height * basis)/2;
	}
	double getPerim() override
	{
		return m_pow(((basis * basis) + (height * height)), 0.5) + (basis + height);
	}
	void info()
	{
		std::cout << "area: " << getArea() << std::endl;
		std::cout << "Perimeter: " << getPerim() << std::endl;
		std::cout << "height and basis: " << height << ' ' << basis << std::endl;
	}
	
};

int main(int argc, char* argv[])
{
	 
	Triangle a(8, 6);
	Circle b(8);
	Rectangle c(8, 6);
	std::cout << "  TRIANGLE  "<<std::endl;
	a.info();
	std::cout << "  CIRCLE  " << std::endl;
	b.info();
	std::cout << "  RECTANGLE  " << std::endl;
	c.info();

	return 0;
}