#include <iostream>
#include <cmath>
# include <locale.h>
using namespace std;


double func(const double &x)
{
	return (cos(x));
}

double integr_lefttriangle(const int &n, const double &a, const double &b)
{
	double sum = 0;
	double step = (b - a) / n;
	for (double i = a; i < b; i = i + step)
		sum += func(i);
	return sum * step;
}
double integr_righttriangle(const int &n, const double &a, const double &b)
{
	
	double sum = 0;
	double step = (b - a) / n;
	for (double i = 1; i <= n - 1; i++)
		sum += func(a + i * step);
	return step * sum;
}
double integr_middle(const int &n, const double &a, const double &b)
{
	double sum = (func(a) + func(b)) / 2;
	double step = (b - a) / n;
	for (int i = 1; i <= n - 1; i++)
	{
		sum += func(a + i * step);
	}
	return step * sum;
}

double I(double a, double b, int n, double y) { return ((b - a) / (2 * n)*y); }
double trapeze(const int &n, const double &a, const double &b)
{
	
	    double step, sum, x;
		sum = 0;
		step = (b - a) / n;
		sum += func(a);
		for (int i = 1; i < n; i++)
		{
			x = a + i * step;
			sum += 2 * func(x);
		}
		x = a + n * step;
		sum += func(x);
		return(0.5*step*sum);
}
double simpson(const int &n, const double &a, const double &b)
{
	double step = (b - a) / n;
	double sum = 0;

	double x0 = a;
	double x1 = a + step;

	for (unsigned i = 0; i <= n - 1; i++) {
		sum += func(x0) + 4 * func(x0 + step / 2) + func(x1);

		x0 += step;
		x1 += step;
	}

	return (step / 6)*sum;

}

int main()
{
	setlocale(LC_ALL, "rus");
	double a, b;
	int n = 50;
	cout << "������� ������ ������ ��������������" << endl;
	cin >> a;
	cout << "������� ������� ������ ��������������" << endl;
	cin >> b;

	cout << "����� ����: " << integr_lefttriangle(n, a, b) << endl;
	cout << "������ ����: " << integr_righttriangle(n,a,b) << endl;
	cout << "������� ����: " << integr_middle(n,a,b) << endl;
	cout << "��������: " << trapeze(n, a, b) << endl;
	cout << "�������: " << simpson(n, a, b) << endl;
	system("pause");
	return 0;
}